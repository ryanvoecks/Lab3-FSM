// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlsfr4.h for the primary calling header

#include "verilated.h"

#include "Vlsfr4___024root.h"

VL_ATTR_COLD void Vlsfr4___024root___settle__TOP__0(Vlsfr4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsfr4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr4___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->data_out = vlSelf->lsfr4__DOT__sreg;
}

VL_ATTR_COLD void Vlsfr4___024root___eval_initial(Vlsfr4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsfr4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr4___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vlsfr4___024root___eval_settle(Vlsfr4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsfr4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr4___024root___eval_settle\n"); );
    // Body
    Vlsfr4___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vlsfr4___024root___final(Vlsfr4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsfr4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr4___024root___final\n"); );
}

VL_ATTR_COLD void Vlsfr4___024root___ctor_var_reset(Vlsfr4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsfr4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr4___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->data_out = VL_RAND_RESET_I(7);
    vlSelf->lsfr4__DOT__sreg = VL_RAND_RESET_I(7);
}
