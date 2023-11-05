// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VFORMULA1_BASIC__SYMS_H_
#define VERILATED_VFORMULA1_BASIC__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vformula1_basic.h"

// INCLUDE MODULE CLASSES
#include "Vformula1_basic___024root.h"

// SYMS CLASS (contains all model state)
class Vformula1_basic__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vformula1_basic* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vformula1_basic___024root      TOP;

    // CONSTRUCTORS
    Vformula1_basic__Syms(VerilatedContext* contextp, const char* namep, Vformula1_basic* modelp);
    ~Vformula1_basic__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
