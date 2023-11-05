// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vformula1_basic.h for the primary calling header

#ifndef VERILATED_VFORMULA1_BASIC___024ROOT_H_
#define VERILATED_VFORMULA1_BASIC___024ROOT_H_  // guard

#include "verilated.h"

class Vformula1_basic__Syms;

class Vformula1_basic___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(en,0,0);
    VL_OUT8(data_out,7,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    IData/*31:0*/ formula1_basic__DOT__current_state;
    IData/*31:0*/ formula1_basic__DOT__next_state;

    // INTERNAL VARIABLES
    Vformula1_basic__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vformula1_basic___024root(Vformula1_basic__Syms* symsp, const char* name);
    ~Vformula1_basic___024root();
    VL_UNCOPYABLE(Vformula1_basic___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
