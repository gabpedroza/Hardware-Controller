// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_flooder_int__Syms.h"


void Vtb_flooder_int___024root__trace_chg_0_sub_0(Vtb_flooder_int___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_flooder_int___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flooder_int___024root__trace_chg_0\n"); );
    // Init
    Vtb_flooder_int___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_flooder_int___024root*>(voidSelf);
    Vtb_flooder_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_flooder_int___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_flooder_int___024root__trace_chg_0_sub_0(Vtb_flooder_int___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flooder_int___024root__trace_chg_0_sub_0\n"); );
    Vtb_flooder_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__int_tx));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_flooder_int__DOT__avail));
        bufp->chgCData(oldp+2,(vlSelfRef.tb_flooder_int__DOT__data_out),8);
        bufp->chgBit(oldp+3,(vlSelfRef.tb_flooder_int__DOT__flod__DOT__ready));
        bufp->chgCData(oldp+4,(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__bytes),2);
        bufp->chgIData(oldp+5,(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__data_latch),32);
        bufp->chgBit(oldp+6,(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__byte_send));
        bufp->chgCData(oldp+7,(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__state),2);
        bufp->chgCData(oldp+8,(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__data_to_send),8);
        bufp->chgBit(oldp+9,(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__wait_a_bit));
        bufp->chgBit(oldp+10,(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__ready));
        bufp->chgCData(oldp+11,(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__copy_data),8);
        bufp->chgCData(oldp+12,(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__state),3);
        bufp->chgSData(oldp+13,(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__count),9);
        bufp->chgCData(oldp+14,(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__bits),3);
        bufp->chgCData(oldp+15,(vlSelfRef.tb_flooder_int__DOT__rxm__DOT__state),3);
        bufp->chgSData(oldp+16,(vlSelfRef.tb_flooder_int__DOT__rxm__DOT__count),9);
        bufp->chgCData(oldp+17,(vlSelfRef.tb_flooder_int__DOT__rxm__DOT__bits),3);
    }
    bufp->chgBit(oldp+18,(vlSelfRef.tb_flooder_int__DOT__clock));
    bufp->chgBit(oldp+19,(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__prev_send));
}

void Vtb_flooder_int___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flooder_int___024root__trace_cleanup\n"); );
    // Init
    Vtb_flooder_int___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_flooder_int___024root*>(voidSelf);
    Vtb_flooder_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
