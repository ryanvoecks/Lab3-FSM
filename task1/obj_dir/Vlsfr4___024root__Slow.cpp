// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlsfr4.h for the primary calling header

#include "verilated.h"

#include "Vlsfr4__Syms.h"
#include "Vlsfr4___024root.h"

void Vlsfr4___024root___ctor_var_reset(Vlsfr4___024root* vlSelf);

Vlsfr4___024root::Vlsfr4___024root(Vlsfr4__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vlsfr4___024root___ctor_var_reset(this);
}

void Vlsfr4___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vlsfr4___024root::~Vlsfr4___024root() {
}
