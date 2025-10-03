// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vflooder_test.h for the primary calling header

#include "Vflooder_test__pch.h"
#include "Vflooder_test__Syms.h"
#include "Vflooder_test___024root.h"

void Vflooder_test___024root___ctor_var_reset(Vflooder_test___024root* vlSelf);

Vflooder_test___024root::Vflooder_test___024root(Vflooder_test__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vflooder_test___024root___ctor_var_reset(this);
}

void Vflooder_test___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vflooder_test___024root::~Vflooder_test___024root() {
}
