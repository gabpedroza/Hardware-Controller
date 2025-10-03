// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vflooder_test__Syms.h"


void Vflooder_test___024root__trace_chg_0_sub_0(Vflooder_test___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vflooder_test___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflooder_test___024root__trace_chg_0\n"); );
    // Init
    Vflooder_test___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vflooder_test___024root*>(voidSelf);
    Vflooder_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vflooder_test___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vflooder_test___024root__trace_chg_0_sub_0(Vflooder_test___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflooder_test___024root__trace_chg_0_sub_0\n"); );
    Vflooder_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.flooder_test__DOT__flod__DOT__avail));
        bufp->chgCData(oldp+1,(vlSelfRef.flooder_test__DOT__flod__DOT__data_in),8);
        bufp->chgCData(oldp+2,(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__state),3);
        bufp->chgSData(oldp+3,(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__count),9);
        bufp->chgCData(oldp+4,(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__bits),3);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+5,(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__int_tx));
        bufp->chgBit(oldp+6,(vlSelfRef.flooder_test__DOT__avail));
        bufp->chgCData(oldp+7,(vlSelfRef.flooder_test__DOT__data_out),8);
        bufp->chgBit(oldp+8,(vlSelfRef.flooder_test__DOT__flod__DOT__ready));
        bufp->chgCData(oldp+9,(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__copy_data),8);
        bufp->chgCData(oldp+10,(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__state),3);
        bufp->chgSData(oldp+11,(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__count),9);
        bufp->chgCData(oldp+12,(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__bits),3);
        bufp->chgCData(oldp+13,(vlSelfRef.flooder_test__DOT__rxm__DOT__state),3);
        bufp->chgSData(oldp+14,(vlSelfRef.flooder_test__DOT__rxm__DOT__count),9);
        bufp->chgCData(oldp+15,(vlSelfRef.flooder_test__DOT__rxm__DOT__bits),3);
    }
    bufp->chgBit(oldp+16,(vlSelfRef.flooder_test__DOT__clock));
    bufp->chgBit(oldp+17,(vlSelfRef.flooder_test__DOT__period_clock));
    bufp->chgBit(oldp+18,(vlSelfRef.flooder_test__DOT__flod__DOT__half_clock));
}

void Vflooder_test___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflooder_test___024root__trace_cleanup\n"); );
    // Init
    Vflooder_test___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vflooder_test___024root*>(voidSelf);
    Vflooder_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
