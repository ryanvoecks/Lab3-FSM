// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vformula1_basic.h for the primary calling header

#include "verilated.h"

#include "Vformula1_basic___024root.h"

VL_INLINE_OPT void Vformula1_basic___024root___sequent__TOP__0(Vformula1_basic___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vformula1_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vformula1_basic___024root___sequent__TOP__0\n"); );
    // Body
    if (vlSelf->en) {
        vlSelf->formula1_basic__DOT__current_state 
            = vlSelf->formula1_basic__DOT__next_state;
    }
    if (((((((((0U == vlSelf->formula1_basic__DOT__current_state) 
               | (1U == vlSelf->formula1_basic__DOT__current_state)) 
              | (2U == vlSelf->formula1_basic__DOT__current_state)) 
             | (3U == vlSelf->formula1_basic__DOT__current_state)) 
            | (4U == vlSelf->formula1_basic__DOT__current_state)) 
           | (5U == vlSelf->formula1_basic__DOT__current_state)) 
          | (6U == vlSelf->formula1_basic__DOT__current_state)) 
         | (7U == vlSelf->formula1_basic__DOT__current_state))) {
        if ((0U == vlSelf->formula1_basic__DOT__current_state)) {
            vlSelf->formula1_basic__DOT__next_state = 1U;
            vlSelf->data_out = 0U;
        } else if ((1U == vlSelf->formula1_basic__DOT__current_state)) {
            vlSelf->formula1_basic__DOT__next_state = 2U;
            vlSelf->data_out = 1U;
        } else if ((2U == vlSelf->formula1_basic__DOT__current_state)) {
            vlSelf->formula1_basic__DOT__next_state = 3U;
            vlSelf->data_out = 3U;
        } else if ((3U == vlSelf->formula1_basic__DOT__current_state)) {
            vlSelf->formula1_basic__DOT__next_state = 4U;
            vlSelf->data_out = 7U;
        } else if ((4U == vlSelf->formula1_basic__DOT__current_state)) {
            vlSelf->formula1_basic__DOT__next_state = 5U;
            vlSelf->data_out = 0xfU;
        } else if ((5U == vlSelf->formula1_basic__DOT__current_state)) {
            vlSelf->formula1_basic__DOT__next_state = 6U;
            vlSelf->data_out = 0x1fU;
        } else if ((6U == vlSelf->formula1_basic__DOT__current_state)) {
            vlSelf->formula1_basic__DOT__next_state = 7U;
            vlSelf->data_out = 0x3fU;
        } else {
            vlSelf->formula1_basic__DOT__next_state = 8U;
            vlSelf->data_out = 0x7fU;
        }
    } else {
        vlSelf->formula1_basic__DOT__next_state = 0U;
        if ((8U == vlSelf->formula1_basic__DOT__current_state)) {
            vlSelf->data_out = 0xffU;
        }
    }
}

void Vformula1_basic___024root___eval(Vformula1_basic___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vformula1_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vformula1_basic___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vformula1_basic___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vformula1_basic___024root___eval_debug_assertions(Vformula1_basic___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vformula1_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vformula1_basic___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
