// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_full.h for the primary calling header

#include "verilated.h"

#include "Vf1_full___024root.h"

VL_INLINE_OPT void Vf1_full___024root___sequent__TOP__0(Vf1_full___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_full___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__f1_full__DOT__delay_randomizer__DOT__sreg 
        = vlSelf->f1_full__DOT__delay_randomizer__DOT__sreg;
    vlSelf->__Vdly__f1_full__DOT__delay_randomizer__DOT__sreg 
        = ((IData)(vlSelf->rst) ? 0x7fU : ((0x7eU & 
                                            ((IData)(vlSelf->f1_full__DOT__delay_randomizer__DOT__sreg) 
                                             << 1U)) 
                                           | (1U & 
                                              VL_REDXOR_8(
                                                          (0x44U 
                                                           & (IData)(vlSelf->f1_full__DOT__delay_randomizer__DOT__sreg))))));
}

VL_INLINE_OPT void Vf1_full___024root___sequent__TOP__1(Vf1_full___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_full___024root___sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdly__f1_full__DOT__wait_one_second__DOT__count;
    // Body
    __Vdly__f1_full__DOT__wait_one_second__DOT__count 
        = vlSelf->f1_full__DOT__wait_one_second__DOT__count;
    vlSelf->f1_full__DOT__lights_fsm__DOT__trigger_flag 
        = vlSelf->f1_full__DOT__lights_fsm__DOT__trigger_flag_next;
    vlSelf->f1_full__DOT__delay_countdown__DOT__count 
        = (0x7fU & ((((IData)(vlSelf->rst) | (8U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)) 
                     | (0U == (IData)(vlSelf->f1_full__DOT__delay_countdown__DOT__count)))
                     ? ((IData)(vlSelf->f1_full__DOT__delay_randomizer__DOT__sreg) 
                        - (IData)(1U)) : ((IData)(vlSelf->f1_full__DOT__delay_countdown__DOT__count) 
                                          - (IData)(1U))));
    if (vlSelf->rst) {
        vlSelf->f1_full__DOT__delay_countdown__DOT__current_state = 0U;
        vlSelf->f1_full__DOT__clktick_tick = 0U;
        __Vdly__f1_full__DOT__wait_one_second__DOT__count 
            = vlSelf->N;
        vlSelf->f1_full__DOT__lights_fsm__DOT__current_state = 0U;
    } else {
        vlSelf->f1_full__DOT__delay_countdown__DOT__current_state 
            = vlSelf->f1_full__DOT__delay_countdown__DOT__next_state;
        if ((8U != vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)) {
            if ((0U == (IData)(vlSelf->f1_full__DOT__wait_one_second__DOT__count))) {
                vlSelf->f1_full__DOT__clktick_tick = 1U;
                __Vdly__f1_full__DOT__wait_one_second__DOT__count 
                    = vlSelf->N;
            } else {
                __Vdly__f1_full__DOT__wait_one_second__DOT__count 
                    = (0x1fU & ((IData)(vlSelf->f1_full__DOT__wait_one_second__DOT__count) 
                                - (IData)(1U)));
                vlSelf->f1_full__DOT__clktick_tick = 0U;
            }
        }
        if (vlSelf->f1_full__DOT__lights_en) {
            vlSelf->f1_full__DOT__lights_fsm__DOT__current_state 
                = vlSelf->f1_full__DOT__lights_fsm__DOT__next_state;
        }
    }
    vlSelf->f1_full__DOT__wait_one_second__DOT__count 
        = __Vdly__f1_full__DOT__wait_one_second__DOT__count;
    if (((((((((0U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state) 
               | (1U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)) 
              | (2U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)) 
             | (3U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)) 
            | (4U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)) 
           | (5U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)) 
          | (6U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)) 
         | (7U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state))) {
        if ((0U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)) {
            vlSelf->data_out = 0U;
            vlSelf->f1_full__DOT__lights_fsm__DOT__next_state 
                = ((0U == vlSelf->f1_full__DOT__lights_fsm__DOT__trigger_flag)
                    ? 1U : 0U);
        } else if ((1U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)) {
            vlSelf->data_out = 1U;
            vlSelf->f1_full__DOT__lights_fsm__DOT__next_state = 2U;
        } else if ((2U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)) {
            vlSelf->data_out = 3U;
            vlSelf->f1_full__DOT__lights_fsm__DOT__next_state = 3U;
        } else if ((3U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)) {
            vlSelf->data_out = 7U;
            vlSelf->f1_full__DOT__lights_fsm__DOT__next_state = 4U;
        } else if ((4U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)) {
            vlSelf->data_out = 0xfU;
            vlSelf->f1_full__DOT__lights_fsm__DOT__next_state = 5U;
        } else if ((5U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)) {
            vlSelf->data_out = 0x1fU;
            vlSelf->f1_full__DOT__lights_fsm__DOT__next_state = 6U;
        } else if ((6U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)) {
            vlSelf->data_out = 0x3fU;
            vlSelf->f1_full__DOT__lights_fsm__DOT__next_state = 7U;
        } else {
            vlSelf->data_out = 0x7fU;
            vlSelf->f1_full__DOT__lights_fsm__DOT__next_state = 8U;
        }
    } else {
        vlSelf->data_out = ((8U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)
                             ? 0xffU : 0U);
        vlSelf->f1_full__DOT__lights_fsm__DOT__next_state = 0U;
    }
    vlSelf->f1_full__DOT__delay_countdown__DOT__next_state 
        = ((0U == vlSelf->f1_full__DOT__delay_countdown__DOT__current_state)
            ? ((8U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)
                ? 1U : vlSelf->f1_full__DOT__delay_countdown__DOT__current_state)
            : ((1U == vlSelf->f1_full__DOT__delay_countdown__DOT__current_state)
                ? ((0U == (IData)(vlSelf->f1_full__DOT__delay_countdown__DOT__count))
                    ? 2U : vlSelf->f1_full__DOT__delay_countdown__DOT__current_state)
                : ((2U == vlSelf->f1_full__DOT__delay_countdown__DOT__current_state)
                    ? ((8U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)
                        ? 3U : 0U) : ((3U == vlSelf->f1_full__DOT__delay_countdown__DOT__current_state)
                                       ? ((8U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)
                                           ? vlSelf->f1_full__DOT__delay_countdown__DOT__current_state
                                           : 0U) : 0U))));
    vlSelf->f1_full__DOT__lights_en = ((8U != vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)
                                        ? (IData)(vlSelf->f1_full__DOT__clktick_tick)
                                        : ((0U != vlSelf->f1_full__DOT__delay_countdown__DOT__current_state) 
                                           & ((1U != vlSelf->f1_full__DOT__delay_countdown__DOT__current_state) 
                                              & (2U 
                                                 == vlSelf->f1_full__DOT__delay_countdown__DOT__current_state))));
}

VL_INLINE_OPT void Vf1_full___024root___sequent__TOP__2(Vf1_full___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_full___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->f1_full__DOT__delay_randomizer__DOT__sreg 
        = vlSelf->__Vdly__f1_full__DOT__delay_randomizer__DOT__sreg;
}

VL_INLINE_OPT void Vf1_full___024root___combo__TOP__0(Vf1_full___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_full___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->f1_full__DOT__lights_fsm__DOT__trigger_flag_next 
        = ((0U == vlSelf->f1_full__DOT__lights_fsm__DOT__trigger_flag)
            ? ((IData)(vlSelf->f1_full__DOT__lights_en)
                ? 1U : 0U) : ((1U == vlSelf->f1_full__DOT__lights_fsm__DOT__trigger_flag)
                               ? ((IData)(vlSelf->trigger)
                                   ? 0U : 1U) : 1U));
}

void Vf1_full___024root___eval(Vf1_full___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_full___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vf1_full___024root___sequent__TOP__0(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vf1_full___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vf1_full___024root___sequent__TOP__2(vlSelf);
    }
    Vf1_full___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vf1_full___024root___eval_debug_assertions(Vf1_full___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_full___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->trigger & 0xfeU))) {
        Verilated::overWidthError("trigger");}
    if (VL_UNLIKELY((vlSelf->N & 0xe0U))) {
        Verilated::overWidthError("N");}
}
#endif  // VL_DEBUG
