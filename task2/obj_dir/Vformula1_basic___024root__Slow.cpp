// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vformula1_basic.h for the primary calling header

#include "verilated.h"

#include "Vformula1_basic__Syms.h"
#include "Vformula1_basic___024root.h"

void Vformula1_basic___024root___ctor_var_reset(Vformula1_basic___024root* vlSelf);

Vformula1_basic___024root::Vformula1_basic___024root(Vformula1_basic__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vformula1_basic___024root___ctor_var_reset(this);
}

void Vformula1_basic___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vformula1_basic___024root::~Vformula1_basic___024root() {
}
