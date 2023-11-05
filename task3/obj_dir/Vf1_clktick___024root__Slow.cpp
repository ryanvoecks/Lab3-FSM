// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_clktick.h for the primary calling header

#include "verilated.h"

#include "Vf1_clktick__Syms.h"
#include "Vf1_clktick___024root.h"

void Vf1_clktick___024root___ctor_var_reset(Vf1_clktick___024root* vlSelf);

Vf1_clktick___024root::Vf1_clktick___024root(Vf1_clktick__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vf1_clktick___024root___ctor_var_reset(this);
}

void Vf1_clktick___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vf1_clktick___024root::~Vf1_clktick___024root() {
}
