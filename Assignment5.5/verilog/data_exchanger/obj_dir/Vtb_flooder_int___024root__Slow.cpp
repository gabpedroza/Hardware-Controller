// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_flooder_int.h for the primary calling header

#include "Vtb_flooder_int__pch.h"
#include "Vtb_flooder_int__Syms.h"
#include "Vtb_flooder_int___024root.h"

void Vtb_flooder_int___024root___ctor_var_reset(Vtb_flooder_int___024root* vlSelf);

Vtb_flooder_int___024root::Vtb_flooder_int___024root(Vtb_flooder_int__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_flooder_int___024root___ctor_var_reset(this);
}

void Vtb_flooder_int___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_flooder_int___024root::~Vtb_flooder_int___024root() {
}
