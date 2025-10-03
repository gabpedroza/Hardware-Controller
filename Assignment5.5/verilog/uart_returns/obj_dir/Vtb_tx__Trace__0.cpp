// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_tx__Syms.h"


void Vtb_tx___024root__trace_chg_0_sub_0(Vtb_tx___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_tx___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tx___024root__trace_chg_0\n"); );
    // Init
    Vtb_tx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_tx___024root*>(voidSelf);
    Vtb_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_tx___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_tx___024root__trace_chg_0_sub_0(Vtb_tx___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tx___024root__trace_chg_0_sub_0\n"); );
    Vtb_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_tx__DOT__rst));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_tx__DOT__send));
        bufp->chgCData(oldp+2,(vlSelfRef.tb_tx__DOT__data),8);
        bufp->chgIData(oldp+3,(vlSelfRef.tb_tx__DOT__i),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tb_tx__DOT__j),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+5,(vlSelfRef.tb_tx__DOT__txm__DOT__int_tx));
        bufp->chgBit(oldp+6,(vlSelfRef.tb_tx__DOT__ready));
        bufp->chgCData(oldp+7,(vlSelfRef.tb_tx__DOT__txm__DOT__copy_data),8);
        bufp->chgCData(oldp+8,(vlSelfRef.tb_tx__DOT__txm__DOT__state),3);
        bufp->chgSData(oldp+9,(vlSelfRef.tb_tx__DOT__txm__DOT__count),9);
        bufp->chgCData(oldp+10,(vlSelfRef.tb_tx__DOT__txm__DOT__bits),3);
    }
    bufp->chgBit(oldp+11,(vlSelfRef.tb_tx__DOT__clock));
}

void Vtb_tx___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tx___024root__trace_cleanup\n"); );
    // Init
    Vtb_tx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_tx___024root*>(voidSelf);
    Vtb_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
