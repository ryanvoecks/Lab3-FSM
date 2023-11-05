// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vformula1_basic__Syms.h"


VL_ATTR_COLD void Vformula1_basic___024root__trace_init_sub__TOP__0(Vformula1_basic___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vformula1_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vformula1_basic___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"en", false,-1);
    tracep->declBus(c+3,"data_out", false,-1, 7,0);
    tracep->pushNamePrefix("formula1_basic ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"en", false,-1);
    tracep->declBus(c+3,"data_out", false,-1, 7,0);
    tracep->declBus(c+4,"current_state", false,-1, 31,0);
    tracep->declBus(c+5,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vformula1_basic___024root__trace_init_top(Vformula1_basic___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vformula1_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vformula1_basic___024root__trace_init_top\n"); );
    // Body
    Vformula1_basic___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vformula1_basic___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vformula1_basic___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vformula1_basic___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vformula1_basic___024root__trace_register(Vformula1_basic___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vformula1_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vformula1_basic___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vformula1_basic___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vformula1_basic___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vformula1_basic___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vformula1_basic___024root__trace_full_sub_0(Vformula1_basic___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vformula1_basic___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vformula1_basic___024root__trace_full_top_0\n"); );
    // Init
    Vformula1_basic___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vformula1_basic___024root*>(voidSelf);
    Vformula1_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vformula1_basic___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vformula1_basic___024root__trace_full_sub_0(Vformula1_basic___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vformula1_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vformula1_basic___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->en));
    bufp->fullCData(oldp+3,(vlSelf->data_out),8);
    bufp->fullIData(oldp+4,(vlSelf->formula1_basic__DOT__current_state),32);
    bufp->fullIData(oldp+5,((((((((((0U == vlSelf->formula1_basic__DOT__current_state) 
                                    | (1U == vlSelf->formula1_basic__DOT__current_state)) 
                                   | (2U == vlSelf->formula1_basic__DOT__current_state)) 
                                  | (3U == vlSelf->formula1_basic__DOT__current_state)) 
                                 | (4U == vlSelf->formula1_basic__DOT__current_state)) 
                                | (5U == vlSelf->formula1_basic__DOT__current_state)) 
                               | (6U == vlSelf->formula1_basic__DOT__current_state)) 
                              | (7U == vlSelf->formula1_basic__DOT__current_state))
                              ? ((0U == vlSelf->formula1_basic__DOT__current_state)
                                  ? 1U : ((1U == vlSelf->formula1_basic__DOT__current_state)
                                           ? 2U : (
                                                   (2U 
                                                    == vlSelf->formula1_basic__DOT__current_state)
                                                    ? 3U
                                                    : 
                                                   ((3U 
                                                     == vlSelf->formula1_basic__DOT__current_state)
                                                     ? 4U
                                                     : 
                                                    ((4U 
                                                      == vlSelf->formula1_basic__DOT__current_state)
                                                      ? 5U
                                                      : 
                                                     ((5U 
                                                       == vlSelf->formula1_basic__DOT__current_state)
                                                       ? 6U
                                                       : 
                                                      ((6U 
                                                        == vlSelf->formula1_basic__DOT__current_state)
                                                        ? 7U
                                                        : 8U)))))))
                              : 0U)),32);
}
