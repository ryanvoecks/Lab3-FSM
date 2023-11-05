// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_full.h for the primary calling header

#include "verilated.h"

#include "Vf1_full___024root.h"

VL_ATTR_COLD void Vf1_full___024root___initial__TOP__0(Vf1_full___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_full___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->f1_full__DOT__delay_countdown__DOT__count = 0U;
}

VL_ATTR_COLD void Vf1_full___024root___settle__TOP__0(Vf1_full___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_full___024root___settle__TOP__0\n"); );
    // Body
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
    vlSelf->f1_full__DOT__lights_en = ((8U != vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)
                                        ? (IData)(vlSelf->f1_full__DOT__clktick_tick)
                                        : ((0U != vlSelf->f1_full__DOT__delay_countdown__DOT__current_state) 
                                           & ((1U != vlSelf->f1_full__DOT__delay_countdown__DOT__current_state) 
                                              & (2U 
                                                 == vlSelf->f1_full__DOT__delay_countdown__DOT__current_state))));
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
    vlSelf->f1_full__DOT__lights_fsm__DOT__trigger_flag_next 
        = ((0U == vlSelf->f1_full__DOT__lights_fsm__DOT__trigger_flag)
            ? ((IData)(vlSelf->f1_full__DOT__lights_en)
                ? 1U : 0U) : ((1U == vlSelf->f1_full__DOT__lights_fsm__DOT__trigger_flag)
                               ? ((IData)(vlSelf->trigger)
                                   ? 0U : 1U) : 1U));
}

VL_ATTR_COLD void Vf1_full___024root___eval_initial(Vf1_full___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_full___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
    Vf1_full___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vf1_full___024root___eval_settle(Vf1_full___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_full___024root___eval_settle\n"); );
    // Body
    Vf1_full___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vf1_full___024root___final(Vf1_full___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_full___024root___final\n"); );
}

VL_ATTR_COLD void Vf1_full___024root___ctor_var_reset(Vf1_full___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_full___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->trigger = VL_RAND_RESET_I(1);
    vlSelf->N = VL_RAND_RESET_I(5);
    vlSelf->data_out = VL_RAND_RESET_I(8);
    vlSelf->f1_full__DOT__clktick_tick = VL_RAND_RESET_I(1);
    vlSelf->f1_full__DOT__lights_en = VL_RAND_RESET_I(1);
    vlSelf->f1_full__DOT__wait_one_second__DOT__count = VL_RAND_RESET_I(5);
    vlSelf->f1_full__DOT__delay_randomizer__DOT__sreg = VL_RAND_RESET_I(7);
    vlSelf->f1_full__DOT__delay_countdown__DOT__count = VL_RAND_RESET_I(7);
    vlSelf->f1_full__DOT__delay_countdown__DOT__current_state = 0;
    vlSelf->f1_full__DOT__delay_countdown__DOT__next_state = 0;
    vlSelf->f1_full__DOT__lights_fsm__DOT__current_state = 0;
    vlSelf->f1_full__DOT__lights_fsm__DOT__next_state = 0;
    vlSelf->f1_full__DOT__lights_fsm__DOT__trigger_flag = 0;
    vlSelf->f1_full__DOT__lights_fsm__DOT__trigger_flag_next = 0;
    vlSelf->__Vdly__f1_full__DOT__delay_randomizer__DOT__sreg = VL_RAND_RESET_I(7);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
