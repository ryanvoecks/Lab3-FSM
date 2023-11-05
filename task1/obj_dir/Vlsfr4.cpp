// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vlsfr4.h"
#include "Vlsfr4__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vlsfr4::Vlsfr4(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vlsfr4__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , en{vlSymsp->TOP.en}
    , data_out{vlSymsp->TOP.data_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vlsfr4::Vlsfr4(const char* _vcname__)
    : Vlsfr4(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vlsfr4::~Vlsfr4() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vlsfr4___024root___eval_initial(Vlsfr4___024root* vlSelf);
void Vlsfr4___024root___eval_settle(Vlsfr4___024root* vlSelf);
void Vlsfr4___024root___eval(Vlsfr4___024root* vlSelf);
#ifdef VL_DEBUG
void Vlsfr4___024root___eval_debug_assertions(Vlsfr4___024root* vlSelf);
#endif  // VL_DEBUG
void Vlsfr4___024root___final(Vlsfr4___024root* vlSelf);

static void _eval_initial_loop(Vlsfr4__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vlsfr4___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vlsfr4___024root___eval_settle(&(vlSymsp->TOP));
        Vlsfr4___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vlsfr4::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vlsfr4::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vlsfr4___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vlsfr4___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vlsfr4::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vlsfr4::final() {
    Vlsfr4___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vlsfr4::hierName() const { return vlSymsp->name(); }
const char* Vlsfr4::modelName() const { return "Vlsfr4"; }
unsigned Vlsfr4::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vlsfr4::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vlsfr4___024root__trace_init_top(Vlsfr4___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vlsfr4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlsfr4___024root*>(voidSelf);
    Vlsfr4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vlsfr4___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vlsfr4___024root__trace_register(Vlsfr4___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vlsfr4::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vlsfr4___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
