// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlsfr4.h for the primary calling header

#include "verilated.h"

#include "Vlsfr4___024root.h"

VL_INLINE_OPT void Vlsfr4___024root___sequent__TOP__0(Vlsfr4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsfr4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr4___024root___sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vdly__lsfr4__DOT__sreg;
    // Body
    __Vdly__lsfr4__DOT__sreg = vlSelf->lsfr4__DOT__sreg;
    if (vlSelf->rst) {
        __Vdly__lsfr4__DOT__sreg = 1U;
    } else if (vlSelf->en) {
        __Vdly__lsfr4__DOT__sreg = ((0x7eU & ((IData)(vlSelf->lsfr4__DOT__sreg) 
                                              << 1U)) 
                                    | (1U & VL_REDXOR_8(
                                                        (0x44U 
                                                         & (IData)(vlSelf->lsfr4__DOT__sreg)))));
    }
    vlSelf->lsfr4__DOT__sreg = __Vdly__lsfr4__DOT__sreg;
    vlSelf->data_out = vlSelf->lsfr4__DOT__sreg;
}

void Vlsfr4___024root___eval(Vlsfr4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsfr4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr4___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vlsfr4___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vlsfr4___024root___eval_debug_assertions(Vlsfr4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsfr4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr4___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
