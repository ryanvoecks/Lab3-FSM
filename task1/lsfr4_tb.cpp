#include "Vlsfr4.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env) {
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);
    // init top verilog instance
    Vlsfr4 *top = new Vlsfr4;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("lsfr4.vcd");

    // init Vbuddy
    if (!vbdOpen()) return (-1);
    vbdHeader("Lab 3: lsfr4");
    vbdSetMode(1);

    // initialize simulation inputs
    top->clk = 1;
    top->rst = 0;
    top->en = 0;

    // run simulation for many clock cycles
    for (i = 0; i < 1000000; i++) {
        top->rst = i < 2;
        top->en  = vbdFlag();

        // dump variables into VCD file and toggle clock
        for (clk = 0; clk < 2; clk++) {
            tfp->dump(2 * i + clk);
            top->clk = !top->clk;
            top->eval();
        }

        vbdHex(2, int(top->data_out >> 4) & 0xf);
        vbdHex(1, int(top->data_out) & 0xf);
        vbdBar(top->data_out & 0xff);

        if (Verilated::gotFinish() || (vbdGetkey() == 'q'))
            exit(0);
    }
    vbdClose();
    tfp->close();
    exit(0);
}
