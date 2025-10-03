// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_INT_ECHO__SYMS_H_
#define VERILATED_VTB_INT_ECHO__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_int_echo.h"

// INCLUDE MODULE CLASSES
#include "Vtb_int_echo___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_int_echo__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_int_echo* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_int_echo___024root         TOP;

    // CONSTRUCTORS
    Vtb_int_echo__Syms(VerilatedContext* contextp, const char* namep, Vtb_int_echo* modelp);
    ~Vtb_int_echo__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
