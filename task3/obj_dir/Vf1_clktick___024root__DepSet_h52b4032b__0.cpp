// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_clktick.h for the primary calling header

#include "verilated.h"

#include "Vf1_clktick___024root.h"

VL_INLINE_OPT void Vf1_clktick___024root___sequent__TOP__0(Vf1_clktick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_clktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_clktick___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__f1_clktick__DOT__clktick__DOT__count 
        = vlSelf->f1_clktick__DOT__clktick__DOT__count;
}

VL_INLINE_OPT void Vf1_clktick___024root___sequent__TOP__1(Vf1_clktick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_clktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_clktick___024root___sequent__TOP__1\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->f1_clktick__DOT__f1_fsm__DOT__current_state = 0U;
    } else if (vlSelf->f1_clktick__DOT__f1_light_tick) {
        vlSelf->f1_clktick__DOT__f1_fsm__DOT__current_state 
            = vlSelf->f1_clktick__DOT__f1_fsm__DOT__next_state;
    }
    if (((((((((0U == vlSelf->f1_clktick__DOT__f1_fsm__DOT__current_state) 
               | (1U == vlSelf->f1_clktick__DOT__f1_fsm__DOT__current_state)) 
              | (2U == vlSelf->f1_clktick__DOT__f1_fsm__DOT__current_state)) 
             | (3U == vlSelf->f1_clktick__DOT__f1_fsm__DOT__current_state)) 
            | (4U == vlSelf->f1_clktick__DOT__f1_fsm__DOT__current_state)) 
           | (5U == vlSelf->f1_clktick__DOT__f1_fsm__DOT__current_state)) 
          | (6U == vlSelf->f1_clktick__DOT__f1_fsm__DOT__current_state)) 
         | (7U == vlSelf->f1_clktick__DOT__f1_fsm__DOT__current_state))) {
        if ((0U == vlSelf->f1_clktick__DOT__f1_fsm__DOT__current_state)) {
            vlSelf->f1_clktick__DOT__f1_fsm__DOT__next_state = 1U;
            vlSelf->data_out = 0U;
        } else if ((1U == vlSelf->f1_clktick__DOT__f1_fsm__DOT__current_state)) {
            vlSelf->f1_clktick__DOT__f1_fsm__DOT__next_state = 2U;
            vlSelf->data_out = 1U;
        } else if ((2U == vlSelf->f1_clktick__DOT__f1_fsm__DOT__current_state)) {
            vlSelf->f1_clktick__DOT__f1_fsm__DOT__next_state = 3U;
            vlSelf->data_out = 3U;
        } else if ((3U == vlSelf->f1_clktick__DOT__f1_fsm__DOT__current_state)) {
            vlSelf->f1_clktick__DOT__f1_fsm__DOT__next_state = 4U;
            vlSelf->data_out = 7U;
        } else if ((4U == vlSelf->f1_clktick__DOT__f1_fsm__DOT__current_state)) {
            vlSelf->f1_clktick__DOT__f1_fsm__DOT__next_state = 5U;
            vlSelf->data_out = 0xfU;
        } else if ((5U == vlSelf->f1_clktick__DOT__f1_fsm__DOT__current_state)) {
            vlSelf->f1_clktick__DOT__f1_fsm__DOT__next_state = 6U;
            vlSelf->data_out = 0x1fU;
        } else if ((6U == vlSelf->f1_clktick__DOT__f1_fsm__DOT__current_state)) {
            vlSelf->f1_clktick__DOT__f1_fsm__DOT__next_state = 7U;
            vlSelf->data_out = 0x3fU;
        } else {
            vlSelf->f1_clktick__DOT__f1_fsm__DOT__next_state = 8U;
            vlSelf->data_out = 0x7fU;
        }
    } else {
        vlSelf->f1_clktick__DOT__f1_fsm__DOT__next_state = 0U;
        if ((8U == vlSelf->f1_clktick__DOT__f1_fsm__DOT__current_state)) {
            vlSelf->data_out = 0xffU;
        }
    }
}

VL_INLINE_OPT void Vf1_clktick___024root___sequent__TOP__2(Vf1_clktick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_clktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_clktick___024root___sequent__TOP__2\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->f1_clktick__DOT__f1_light_tick = 0U;
        vlSelf->__Vdly__f1_clktick__DOT__clktick__DOT__count 
            = vlSelf->N;
    } else if (vlSelf->en) {
        if ((0U == (IData)(vlSelf->f1_clktick__DOT__clktick__DOT__count))) {
            vlSelf->f1_clktick__DOT__f1_light_tick = 1U;
            vlSelf->__Vdly__f1_clktick__DOT__clktick__DOT__count 
                = vlSelf->N;
        } else {
            vlSelf->__Vdly__f1_clktick__DOT__clktick__DOT__count 
                = (0xffffU & ((IData)(vlSelf->f1_clktick__DOT__clktick__DOT__count) 
                              - (IData)(1U)));
            vlSelf->f1_clktick__DOT__f1_light_tick = 0U;
        }
    }
    vlSelf->f1_clktick__DOT__clktick__DOT__count = vlSelf->__Vdly__f1_clktick__DOT__clktick__DOT__count;
}

void Vf1_clktick___024root___eval(Vf1_clktick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_clktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_clktick___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vf1_clktick___024root___sequent__TOP__0(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vf1_clktick___024root___sequent__TOP__1(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vf1_clktick___024root___sequent__TOP__2(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vf1_clktick___024root___eval_debug_assertions(Vf1_clktick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_clktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_clktick___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
