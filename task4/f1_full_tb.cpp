#include <cmath>
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vf1_full.h"

#include "vbuddy.cpp"     // include vbuddy code
#define MAX_SIM_CYC 100000

enum class timer_state {
  NOT_COUNTING,
  READY,
  COUNTING
};

int bin_to_bcd(int binary_value) {
  int bcd_value = 0;
  for (int i = 3; i >= 0; i--) {
    bcd_value = bcd_value << 4;
    int tmp = binary_value / int(std::pow(10, i));
    bcd_value += tmp % 10;
  }
  return bcd_value;
}

int main(int argc, char **argv, char **env) {
  int simcyc;     // simulation clock count
  int tick;       // each clk cycle has two ticks for two edges
  int lights = 0; // state to toggle LED lights

  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  Vf1_full * top = new Vf1_full;
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("f1_full.vcd");
 
  // init Vbuddy
  if (vbdOpen()!=1) return(-1);
  vbdHeader("L3T4: F1 Full");
  vbdSetMode(1);        // Flag mode set to one-shot

  // goes high when all 8 lights are on - used in reaction timing
  timer_state lights_timer = timer_state::NOT_COUNTING;
  int reaction_time = 0;

  // initialize simulation inputs
  top->clk = 1;
  top->rst = 0;
  top->trigger = 0;
  top->N = vbdValue();
  
  // run simulation for MAX_SIM_CYC clock cycles
  for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
    // dump variables into VCD file and toggle clock
    for (tick=0; tick<2; tick++) {
      tfp->dump (2*simcyc+tick);
      top->clk = !top->clk;
      top->eval ();
    }

    char lights = top->data_out & 0xFF;
    // Display toggle neopixel
    vbdBar(lights);

    // measure reaction speed after lights go off
    if (lights == char(0xFF)) {
      lights_timer = timer_state::READY;
    }
    if (lights_timer == timer_state::READY && !lights) {
      vbdInitWatch();
      lights_timer = timer_state::COUNTING;
    }
    if (top->trigger && lights_timer == timer_state::COUNTING) {
      reaction_time = bin_to_bcd(vbdElapsed());
      lights_timer = timer_state::NOT_COUNTING;
    }

    // print reaction time
    vbdHex(4, (int(reaction_time) >> 12) & 0xF);
    vbdHex(3, (int(reaction_time) >> 8) & 0xF);
    vbdHex(2, (int(reaction_time) >> 4) & 0xF);
    vbdHex(1, int(reaction_time) & 0xF);

    // set up input signals of testbench
    top->rst = (simcyc < 2);    // assert reset for 1st cycle
    top->trigger = vbdFlag(); // ignore vbdFlag() for first cycle
    top->N = vbdValue();  // vbdValue() = 17 gives around 1 second clktick on this laptop
    vbdCycle(simcyc);

    if (Verilated::gotFinish())  exit(0);
  }

  vbdClose();     // ++++
  tfp->close(); 
  exit(0);
}
