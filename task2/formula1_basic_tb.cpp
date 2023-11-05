#include "Vformula1_basic.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env) {
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);
    // init top verilog instance
    Vformula1_basic *top = new Vformula1_basic;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("formula1_basic.vcd");

    // init Vbuddy
    if (!vbdOpen()) return (-1);
    vbdHeader("Lab 3: F1 basic");
    vbdSetMode(1);

    // initialize simulation inputs
    top->clk = 1;
    top->en = 0;

    // run simulation for many clock cycles
    for (i = 0; i < 1000000; i++) {
        top->en  = vbdFlag();

        // dump variables into VCD file and toggle clock
        for (clk = 0; clk < 2; clk++) {
            tfp->dump(2 * i + clk);
            top->clk = !top->clk;
            top->eval();
        }

        vbdBar(top->data_out & 0xff);

        if (Verilated::gotFinish() || (vbdGetkey() == 'q'))
            exit(0);
    }
    vbdClose();
    tfp->close();
    exit(0);
}
