// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_int_echo.h for the primary calling header

#include "Vtb_int_echo__pch.h"
#include "Vtb_int_echo__Syms.h"
#include "Vtb_int_echo___024root.h"

void Vtb_int_echo___024root___ctor_var_reset(Vtb_int_echo___024root* vlSelf);

Vtb_int_echo___024root::Vtb_int_echo___024root(Vtb_int_echo__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_int_echo___024root___ctor_var_reset(this);
}

void Vtb_int_echo___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_int_echo___024root::~Vtb_int_echo___024root() {
}
