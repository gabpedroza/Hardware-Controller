// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_int_echo__pch.h"
#include "Vtb_int_echo.h"
#include "Vtb_int_echo___024root.h"

// FUNCTIONS
Vtb_int_echo__Syms::~Vtb_int_echo__Syms()
{
}

Vtb_int_echo__Syms::Vtb_int_echo__Syms(VerilatedContext* contextp, const char* namep, Vtb_int_echo* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(23);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
