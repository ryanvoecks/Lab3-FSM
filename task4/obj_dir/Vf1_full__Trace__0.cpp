// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vf1_full__Syms.h"


void Vf1_full___024root__trace_chg_sub_0(Vf1_full___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vf1_full___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_full___024root__trace_chg_top_0\n"); );
    // Init
    Vf1_full___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1_full___024root*>(voidSelf);
    Vf1_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vf1_full___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vf1_full___024root__trace_chg_sub_0(Vf1_full___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_full___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,((8U != vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)));
        bufp->chgBit(oldp+1,((8U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)));
        bufp->chgBit(oldp+2,(vlSelf->f1_full__DOT__clktick_tick));
        bufp->chgBit(oldp+3,(((0U != vlSelf->f1_full__DOT__delay_countdown__DOT__current_state) 
                              & ((1U != vlSelf->f1_full__DOT__delay_countdown__DOT__current_state) 
                                 & (2U == vlSelf->f1_full__DOT__delay_countdown__DOT__current_state)))));
        bufp->chgBit(oldp+4,(vlSelf->f1_full__DOT__lights_en));
        bufp->chgCData(oldp+5,(vlSelf->f1_full__DOT__delay_countdown__DOT__count),7);
        bufp->chgIData(oldp+6,(vlSelf->f1_full__DOT__delay_countdown__DOT__current_state),32);
        bufp->chgIData(oldp+7,(((0U == vlSelf->f1_full__DOT__delay_countdown__DOT__current_state)
                                 ? ((8U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)
                                     ? 1U : vlSelf->f1_full__DOT__delay_countdown__DOT__current_state)
                                 : ((1U == vlSelf->f1_full__DOT__delay_countdown__DOT__current_state)
                                     ? ((0U == (IData)(vlSelf->f1_full__DOT__delay_countdown__DOT__count))
                                         ? 2U : vlSelf->f1_full__DOT__delay_countdown__DOT__current_state)
                                     : ((2U == vlSelf->f1_full__DOT__delay_countdown__DOT__current_state)
                                         ? ((8U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)
                                             ? 3U : 0U)
                                         : ((3U == vlSelf->f1_full__DOT__delay_countdown__DOT__current_state)
                                             ? ((8U 
                                                 == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)
                                                 ? vlSelf->f1_full__DOT__delay_countdown__DOT__current_state
                                                 : 0U)
                                             : 0U))))),32);
        bufp->chgIData(oldp+8,(vlSelf->f1_full__DOT__lights_fsm__DOT__current_state),32);
        bufp->chgIData(oldp+9,((((((((((0U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state) 
                                       | (1U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)) 
                                      | (2U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)) 
                                     | (3U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)) 
                                    | (4U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)) 
                                   | (5U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)) 
                                  | (6U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)) 
                                 | (7U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state))
                                 ? ((0U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)
                                     ? ((0U == vlSelf->f1_full__DOT__lights_fsm__DOT__trigger_flag)
                                         ? 1U : 0U)
                                     : ((1U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)
                                         ? 2U : ((2U 
                                                  == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)
                                                  ? 3U
                                                  : 
                                                 ((3U 
                                                   == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)
                                                   ? 4U
                                                   : 
                                                  ((4U 
                                                    == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)
                                                    ? 5U
                                                    : 
                                                   ((5U 
                                                     == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)
                                                     ? 6U
                                                     : 
                                                    ((6U 
                                                      == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)
                                                      ? 7U
                                                      : 8U)))))))
                                 : 0U)),32);
        bufp->chgIData(oldp+10,(vlSelf->f1_full__DOT__lights_fsm__DOT__trigger_flag),32);
        bufp->chgCData(oldp+11,(vlSelf->f1_full__DOT__wait_one_second__DOT__count),5);
    }
    bufp->chgBit(oldp+12,(vlSelf->clk));
    bufp->chgBit(oldp+13,(vlSelf->rst));
    bufp->chgBit(oldp+14,(vlSelf->trigger));
    bufp->chgCData(oldp+15,(vlSelf->N),5);
    bufp->chgCData(oldp+16,(vlSelf->data_out),8);
    bufp->chgCData(oldp+17,(vlSelf->f1_full__DOT__delay_randomizer__DOT__sreg),7);
    bufp->chgIData(oldp+18,(((0U == vlSelf->f1_full__DOT__lights_fsm__DOT__trigger_flag)
                              ? ((IData)(vlSelf->f1_full__DOT__lights_en)
                                  ? 1U : 0U) : ((1U 
                                                 == vlSelf->f1_full__DOT__lights_fsm__DOT__trigger_flag)
                                                 ? 
                                                ((IData)(vlSelf->trigger)
                                                  ? 0U
                                                  : 1U)
                                                 : 1U))),32);
}

void Vf1_full___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_full___024root__trace_cleanup\n"); );
    // Init
    Vf1_full___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1_full___024root*>(voidSelf);
    Vf1_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
