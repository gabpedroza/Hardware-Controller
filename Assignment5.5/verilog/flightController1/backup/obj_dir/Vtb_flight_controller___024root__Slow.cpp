// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_flight_controller.h for the primary calling header

#include "Vtb_flight_controller__pch.h"
#include "Vtb_flight_controller__Syms.h"
#include "Vtb_flight_controller___024root.h"

void Vtb_flight_controller___024root___ctor_var_reset(Vtb_flight_controller___024root* vlSelf);

Vtb_flight_controller___024root::Vtb_flight_controller___024root(Vtb_flight_controller__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_flight_controller___024root___ctor_var_reset(this);
}

void Vtb_flight_controller___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_flight_controller___024root::~Vtb_flight_controller___024root() {
}
