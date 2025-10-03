// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_RX__SYMS_H_
#define VERILATED_VTB_RX__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_rx.h"

// INCLUDE MODULE CLASSES
#include "Vtb_rx___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_rx__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_rx* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_rx___024root               TOP;

    // CONSTRUCTORS
    Vtb_rx__Syms(VerilatedContext* contextp, const char* namep, Vtb_rx* modelp);
    ~Vtb_rx__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
