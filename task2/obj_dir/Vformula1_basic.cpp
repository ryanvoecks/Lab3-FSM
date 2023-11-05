// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vformula1_basic.h"
#include "Vformula1_basic__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vformula1_basic::Vformula1_basic(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vformula1_basic__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , en{vlSymsp->TOP.en}
    , data_out{vlSymsp->TOP.data_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vformula1_basic::Vformula1_basic(const char* _vcname__)
    : Vformula1_basic(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vformula1_basic::~Vformula1_basic() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vformula1_basic___024root___eval_initial(Vformula1_basic___024root* vlSelf);
void Vformula1_basic___024root___eval_settle(Vformula1_basic___024root* vlSelf);
void Vformula1_basic___024root___eval(Vformula1_basic___024root* vlSelf);
#ifdef VL_DEBUG
void Vformula1_basic___024root___eval_debug_assertions(Vformula1_basic___024root* vlSelf);
#endif  // VL_DEBUG
void Vformula1_basic___024root___final(Vformula1_basic___024root* vlSelf);

static void _eval_initial_loop(Vformula1_basic__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vformula1_basic___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vformula1_basic___024root___eval_settle(&(vlSymsp->TOP));
        Vformula1_basic___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vformula1_basic::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vformula1_basic::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vformula1_basic___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vformula1_basic___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vformula1_basic::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vformula1_basic::final() {
    Vformula1_basic___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vformula1_basic::hierName() const { return vlSymsp->name(); }
const char* Vformula1_basic::modelName() const { return "Vformula1_basic"; }
unsigned Vformula1_basic::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vformula1_basic::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vformula1_basic___024root__trace_init_top(Vformula1_basic___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vformula1_basic___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vformula1_basic___024root*>(voidSelf);
    Vformula1_basic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vformula1_basic___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vformula1_basic___024root__trace_register(Vformula1_basic___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vformula1_basic::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vformula1_basic___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
