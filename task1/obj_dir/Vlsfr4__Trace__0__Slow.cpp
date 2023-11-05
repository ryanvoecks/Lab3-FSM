// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vlsfr4__Syms.h"


VL_ATTR_COLD void Vlsfr4___024root__trace_init_sub__TOP__0(Vlsfr4___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsfr4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr4___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+4,"data_out", false,-1, 6,0);
    tracep->pushNamePrefix("lsfr4 ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+4,"data_out", false,-1, 6,0);
    tracep->declBus(c+5,"sreg", false,-1, 7,1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vlsfr4___024root__trace_init_top(Vlsfr4___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsfr4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr4___024root__trace_init_top\n"); );
    // Body
    Vlsfr4___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vlsfr4___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vlsfr4___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vlsfr4___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vlsfr4___024root__trace_register(Vlsfr4___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsfr4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr4___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vlsfr4___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vlsfr4___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vlsfr4___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vlsfr4___024root__trace_full_sub_0(Vlsfr4___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vlsfr4___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr4___024root__trace_full_top_0\n"); );
    // Init
    Vlsfr4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlsfr4___024root*>(voidSelf);
    Vlsfr4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vlsfr4___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vlsfr4___024root__trace_full_sub_0(Vlsfr4___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsfr4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr4___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst));
    bufp->fullBit(oldp+3,(vlSelf->en));
    bufp->fullCData(oldp+4,(vlSelf->data_out),7);
    bufp->fullCData(oldp+5,(vlSelf->lsfr4__DOT__sreg),7);
}
