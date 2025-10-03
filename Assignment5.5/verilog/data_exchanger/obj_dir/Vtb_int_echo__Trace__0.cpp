// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_int_echo__Syms.h"


void Vtb_int_echo___024root__trace_chg_0_sub_0(Vtb_int_echo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_int_echo___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_int_echo___024root__trace_chg_0\n"); );
    // Init
    Vtb_int_echo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_int_echo___024root*>(voidSelf);
    Vtb_int_echo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_int_echo___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_int_echo___024root__trace_chg_0_sub_0(Vtb_int_echo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_int_echo___024root__trace_chg_0_sub_0\n"); );
    Vtb_int_echo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb_int_echo__DOT__echo__DOT__data_in),32);
        bufp->chgBit(oldp+1,(vlSelfRef.tb_int_echo__DOT__echo__DOT__int_avail));
        bufp->chgBit(oldp+2,(vlSelfRef.tb_int_echo__DOT__echo__DOT__prev_int_avail));
        bufp->chgCData(oldp+3,(vlSelfRef.tb_int_echo__DOT__echo__DOT__int_r__DOT__bytes),2);
        bufp->chgCData(oldp+4,(vlSelfRef.tb_int_echo__DOT__echo__DOT__int_r__DOT__data),8);
        bufp->chgBit(oldp+5,(vlSelfRef.tb_int_echo__DOT__echo__DOT__int_r__DOT__avail));
        bufp->chgBit(oldp+6,(vlSelfRef.tb_int_echo__DOT__echo__DOT__int_r__DOT__prev_avail));
        bufp->chgCData(oldp+7,(vlSelfRef.tb_int_echo__DOT__echo__DOT__int_r__DOT__state),2);
        bufp->chgCData(oldp+8,(vlSelfRef.tb_int_echo__DOT__echo__DOT__int_r__DOT__rxm__DOT__state),3);
        bufp->chgSData(oldp+9,(vlSelfRef.tb_int_echo__DOT__echo__DOT__int_r__DOT__rxm__DOT__count),9);
        bufp->chgCData(oldp+10,(vlSelfRef.tb_int_echo__DOT__echo__DOT__int_r__DOT__rxm__DOT__bits),3);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+11,(vlSelfRef.tb_int_echo__DOT__echo__DOT__int_s__DOT__txm__DOT__int_tx));
        bufp->chgBit(oldp+12,(vlSelfRef.tb_int_echo__DOT__avail));
        bufp->chgCData(oldp+13,(vlSelfRef.tb_int_echo__DOT__data_out),8);
        bufp->chgBit(oldp+14,(vlSelfRef.tb_int_echo__DOT__echo__DOT__int_ready));
        bufp->chgBit(oldp+15,(vlSelfRef.tb_int_echo__DOT__echo__DOT__int_send));
        bufp->chgIData(oldp+16,(vlSelfRef.tb_int_echo__DOT__echo__DOT__data_out),32);
        bufp->chgCData(oldp+17,(vlSelfRef.tb_int_echo__DOT__echo__DOT__int_s__DOT__bytes),2);
        bufp->chgIData(oldp+18,(vlSelfRef.tb_int_echo__DOT__echo__DOT__int_s__DOT__data_latch),32);
        bufp->chgBit(oldp+19,(vlSelfRef.tb_int_echo__DOT__echo__DOT__int_s__DOT__prev_send));
        bufp->chgBit(oldp+20,(vlSelfRef.tb_int_echo__DOT__echo__DOT__int_s__DOT__byte_send));
        bufp->chgCData(oldp+21,(vlSelfRef.tb_int_echo__DOT__echo__DOT__int_s__DOT__state),2);
        bufp->chgCData(oldp+22,(vlSelfRef.tb_int_echo__DOT__echo__DOT__int_s__DOT__data_to_send),8);
        bufp->chgBit(oldp+23,(vlSelfRef.tb_int_echo__DOT__echo__DOT__int_s__DOT__wait_a_bit));
        bufp->chgBit(oldp+24,(vlSelfRef.tb_int_echo__DOT__echo__DOT__int_s__DOT__ready));
        bufp->chgCData(oldp+25,(vlSelfRef.tb_int_echo__DOT__echo__DOT__int_s__DOT__txm__DOT__copy_data),8);
        bufp->chgCData(oldp+26,(vlSelfRef.tb_int_echo__DOT__echo__DOT__int_s__DOT__txm__DOT__state),3);
        bufp->chgSData(oldp+27,(vlSelfRef.tb_int_echo__DOT__echo__DOT__int_s__DOT__txm__DOT__count),9);
        bufp->chgCData(oldp+28,(vlSelfRef.tb_int_echo__DOT__echo__DOT__int_s__DOT__txm__DOT__bits),3);
        bufp->chgCData(oldp+29,(vlSelfRef.tb_int_echo__DOT__rxm__DOT__state),3);
        bufp->chgSData(oldp+30,(vlSelfRef.tb_int_echo__DOT__rxm__DOT__count),9);
        bufp->chgCData(oldp+31,(vlSelfRef.tb_int_echo__DOT__rxm__DOT__bits),3);
    }
    bufp->chgBit(oldp+32,(vlSelfRef.tb_int_echo__DOT__clock));
}

void Vtb_int_echo___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_int_echo___024root__trace_cleanup\n"); );
    // Init
    Vtb_int_echo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_int_echo___024root*>(voidSelf);
    Vtb_int_echo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
