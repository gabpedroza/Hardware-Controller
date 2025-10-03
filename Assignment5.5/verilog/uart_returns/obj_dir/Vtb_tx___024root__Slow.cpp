// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_tx.h for the primary calling header

#include "Vtb_tx__pch.h"
#include "Vtb_tx__Syms.h"
#include "Vtb_tx___024root.h"

void Vtb_tx___024root___ctor_var_reset(Vtb_tx___024root* vlSelf);

Vtb_tx___024root::Vtb_tx___024root(Vtb_tx__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_tx___024root___ctor_var_reset(this);
}

void Vtb_tx___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_tx___024root::~Vtb_tx___024root() {
}
