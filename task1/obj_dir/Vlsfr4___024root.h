// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vlsfr4.h for the primary calling header

#ifndef VERILATED_VLSFR4___024ROOT_H_
#define VERILATED_VLSFR4___024ROOT_H_  // guard

#include "verilated.h"

class Vlsfr4__Syms;

class Vlsfr4___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_OUT8(data_out,6,0);
    CData/*6:0*/ lsfr4__DOT__sreg;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;

    // INTERNAL VARIABLES
    Vlsfr4__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vlsfr4___024root(Vlsfr4__Syms* symsp, const char* name);
    ~Vlsfr4___024root();
    VL_UNCOPYABLE(Vlsfr4___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
