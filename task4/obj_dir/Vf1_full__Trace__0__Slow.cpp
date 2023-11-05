// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vf1_full__Syms.h"


VL_ATTR_COLD void Vf1_full___024root__trace_init_sub__TOP__0(Vf1_full___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_full___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+13,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBit(c+15,"trigger", false,-1);
    tracep->declBus(c+16,"N", false,-1, 4,0);
    tracep->declBus(c+17,"data_out", false,-1, 7,0);
    tracep->pushNamePrefix("f1_full ");
    tracep->declBus(c+20,"N_WIDTH", false,-1, 31,0);
    tracep->declBus(c+21,"DELAY_WIDTH", false,-1, 31,0);
    tracep->declBus(c+22,"LIGHTS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+13,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBit(c+15,"trigger", false,-1);
    tracep->declBus(c+16,"N", false,-1, 4,0);
    tracep->declBus(c+17,"data_out", false,-1, 7,0);
    tracep->declBit(c+1,"cmd_seq", false,-1);
    tracep->declBit(c+2,"cmd_delay", false,-1);
    tracep->declBit(c+3,"clktick_tick", false,-1);
    tracep->declBus(c+18,"pseudo_random_delay", false,-1, 6,0);
    tracep->declBit(c+4,"delay_timeout", false,-1);
    tracep->declBit(c+5,"lights_en", false,-1);
    tracep->pushNamePrefix("delay_countdown ");
    tracep->declBus(c+21,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+13,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBit(c+2,"trigger", false,-1);
    tracep->declBus(c+18,"n", false,-1, 6,0);
    tracep->declBit(c+4,"time_out", false,-1);
    tracep->declBus(c+6,"count", false,-1, 6,0);
    tracep->declBus(c+7,"current_state", false,-1, 31,0);
    tracep->declBus(c+8,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delay_randomizer ");
    tracep->declBus(c+21,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+13,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBit(c+23,"en", false,-1);
    tracep->declBus(c+18,"data_out", false,-1, 6,0);
    tracep->declBus(c+18,"sreg", false,-1, 7,1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lights_fsm ");
    tracep->declBus(c+22,"LIGHTS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+13,"clk", false,-1);
    tracep->declBit(c+5,"en", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBit(c+15,"trigger", false,-1);
    tracep->declBus(c+17,"data_out", false,-1, 7,0);
    tracep->declBit(c+1,"cmd_seq", false,-1);
    tracep->declBit(c+2,"cmd_delay", false,-1);
    tracep->declBus(c+9,"current_state", false,-1, 31,0);
    tracep->declBus(c+10,"next_state", false,-1, 31,0);
    tracep->declBus(c+11,"trigger_flag", false,-1, 31,0);
    tracep->declBus(c+19,"trigger_flag_next", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wait_one_second ");
    tracep->declBus(c+20,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+13,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBit(c+1,"en", false,-1);
    tracep->declBus(c+16,"N", false,-1, 4,0);
    tracep->declBit(c+3,"tick", false,-1);
    tracep->declBus(c+12,"count", false,-1, 4,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vf1_full___024root__trace_init_top(Vf1_full___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_full___024root__trace_init_top\n"); );
    // Body
    Vf1_full___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vf1_full___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1_full___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1_full___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vf1_full___024root__trace_register(Vf1_full___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_full___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vf1_full___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vf1_full___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vf1_full___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vf1_full___024root__trace_full_sub_0(Vf1_full___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vf1_full___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_full___024root__trace_full_top_0\n"); );
    // Init
    Vf1_full___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1_full___024root*>(voidSelf);
    Vf1_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vf1_full___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vf1_full___024root__trace_full_sub_0(Vf1_full___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_full___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,((8U != vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)));
    bufp->fullBit(oldp+2,((8U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)));
    bufp->fullBit(oldp+3,(vlSelf->f1_full__DOT__clktick_tick));
    bufp->fullBit(oldp+4,(((0U != vlSelf->f1_full__DOT__delay_countdown__DOT__current_state) 
                           & ((1U != vlSelf->f1_full__DOT__delay_countdown__DOT__current_state) 
                              & (2U == vlSelf->f1_full__DOT__delay_countdown__DOT__current_state)))));
    bufp->fullBit(oldp+5,(vlSelf->f1_full__DOT__lights_en));
    bufp->fullCData(oldp+6,(vlSelf->f1_full__DOT__delay_countdown__DOT__count),7);
    bufp->fullIData(oldp+7,(vlSelf->f1_full__DOT__delay_countdown__DOT__current_state),32);
    bufp->fullIData(oldp+8,(((0U == vlSelf->f1_full__DOT__delay_countdown__DOT__current_state)
                              ? ((8U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)
                                  ? 1U : vlSelf->f1_full__DOT__delay_countdown__DOT__current_state)
                              : ((1U == vlSelf->f1_full__DOT__delay_countdown__DOT__current_state)
                                  ? ((0U == (IData)(vlSelf->f1_full__DOT__delay_countdown__DOT__count))
                                      ? 2U : vlSelf->f1_full__DOT__delay_countdown__DOT__current_state)
                                  : ((2U == vlSelf->f1_full__DOT__delay_countdown__DOT__current_state)
                                      ? ((8U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)
                                          ? 3U : 0U)
                                      : ((3U == vlSelf->f1_full__DOT__delay_countdown__DOT__current_state)
                                          ? ((8U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)
                                              ? vlSelf->f1_full__DOT__delay_countdown__DOT__current_state
                                              : 0U)
                                          : 0U))))),32);
    bufp->fullIData(oldp+9,(vlSelf->f1_full__DOT__lights_fsm__DOT__current_state),32);
    bufp->fullIData(oldp+10,((((((((((0U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state) 
                                     | (1U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)) 
                                    | (2U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)) 
                                   | (3U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)) 
                                  | (4U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)) 
                                 | (5U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)) 
                                | (6U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)) 
                               | (7U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state))
                               ? ((0U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)
                                   ? ((0U == vlSelf->f1_full__DOT__lights_fsm__DOT__trigger_flag)
                                       ? 1U : 0U) : 
                                  ((1U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)
                                    ? 2U : ((2U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)
                                             ? 3U : 
                                            ((3U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)
                                              ? 4U : 
                                             ((4U == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)
                                               ? 5U
                                               : ((5U 
                                                   == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)
                                                   ? 6U
                                                   : 
                                                  ((6U 
                                                    == vlSelf->f1_full__DOT__lights_fsm__DOT__current_state)
                                                    ? 7U
                                                    : 8U)))))))
                               : 0U)),32);
    bufp->fullIData(oldp+11,(vlSelf->f1_full__DOT__lights_fsm__DOT__trigger_flag),32);
    bufp->fullCData(oldp+12,(vlSelf->f1_full__DOT__wait_one_second__DOT__count),5);
    bufp->fullBit(oldp+13,(vlSelf->clk));
    bufp->fullBit(oldp+14,(vlSelf->rst));
    bufp->fullBit(oldp+15,(vlSelf->trigger));
    bufp->fullCData(oldp+16,(vlSelf->N),5);
    bufp->fullCData(oldp+17,(vlSelf->data_out),8);
    bufp->fullCData(oldp+18,(vlSelf->f1_full__DOT__delay_randomizer__DOT__sreg),7);
    bufp->fullIData(oldp+19,(((0U == vlSelf->f1_full__DOT__lights_fsm__DOT__trigger_flag)
                               ? ((IData)(vlSelf->f1_full__DOT__lights_en)
                                   ? 1U : 0U) : ((1U 
                                                  == vlSelf->f1_full__DOT__lights_fsm__DOT__trigger_flag)
                                                  ? 
                                                 ((IData)(vlSelf->trigger)
                                                   ? 0U
                                                   : 1U)
                                                  : 1U))),32);
    bufp->fullIData(oldp+20,(5U),32);
    bufp->fullIData(oldp+21,(7U),32);
    bufp->fullIData(oldp+22,(8U),32);
    bufp->fullBit(oldp+23,(1U));
}
