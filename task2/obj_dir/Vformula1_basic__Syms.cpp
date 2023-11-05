// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vformula1_basic__Syms.h"
#include "Vformula1_basic.h"
#include "Vformula1_basic___024root.h"

// FUNCTIONS
Vformula1_basic__Syms::~Vformula1_basic__Syms()
{
}

Vformula1_basic__Syms::Vformula1_basic__Syms(VerilatedContext* contextp, const char* namep, Vformula1_basic* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
