// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_rx__pch.h"
#include "Vtb_rx.h"
#include "Vtb_rx___024root.h"

// FUNCTIONS
Vtb_rx__Syms::~Vtb_rx__Syms()
{
}

Vtb_rx__Syms::Vtb_rx__Syms(VerilatedContext* contextp, const char* namep, Vtb_rx* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(19);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
