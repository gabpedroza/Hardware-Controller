// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_flight_controller__Syms.h"


void Vtb_flight_controller___024root__trace_chg_0_sub_0(Vtb_flight_controller___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_flight_controller___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root__trace_chg_0\n"); );
    // Init
    Vtb_flight_controller___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_flight_controller___024root*>(voidSelf);
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_flight_controller___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_flight_controller___024root__trace_chg_0_sub_0(Vtb_flight_controller___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root__trace_chg_0_sub_0\n"); );
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb_flight_controller__DOT__data_out[0]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tb_flight_controller__DOT__data_out[1]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.tb_flight_controller__DOT__data_out[2]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tb_flight_controller__DOT__data_out[3]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tb_flight_controller__DOT__data_out[4]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.tb_flight_controller__DOT__data_out[5]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.tb_flight_controller__DOT__data_out[6]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tb_flight_controller__DOT__data_out[7]),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgCData(oldp+8,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__data),8);
        bufp->chgBit(oldp+9,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__avail));
        bufp->chgCData(oldp+10,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__state),3);
        bufp->chgSData(oldp+11,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__count),9);
        bufp->chgCData(oldp+12,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__bits),3);
        bufp->chgCData(oldp+13,(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__data),8);
        bufp->chgBit(oldp+14,(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__avail));
        bufp->chgCData(oldp+15,(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__rxm__DOT__state),3);
        bufp->chgSData(oldp+16,(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__rxm__DOT__count),9);
        bufp->chgCData(oldp+17,(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__rxm__DOT__bits),3);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+18,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__int_tx));
        bufp->chgBit(oldp+19,(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__int_tx));
        bufp->chgBit(oldp+20,(vlSelfRef.tb_flight_controller__DOT__avail));
        bufp->chgIData(oldp+21,(vlSelfRef.tb_flight_controller__DOT__data_back),32);
        bufp->chgCData(oldp+22,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__state),3);
        bufp->chgCData(oldp+23,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__ints),2);
        bufp->chgCData(oldp+24,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__count),8);
        bufp->chgIData(oldp+25,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions[0]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions[1]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions[2]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities[0]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities[1]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities[2]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__result),32);
        bufp->chgIData(oldp+32,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__data_latch),32);
        bufp->chgBit(oldp+33,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__prev_avail));
        bufp->chgIData(oldp+34,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__received_int),32);
        bufp->chgBit(oldp+35,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_avail));
        bufp->chgBit(oldp+36,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_send));
        bufp->chgBit(oldp+37,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_ready));
        bufp->chgIData(oldp+38,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__j),32);
        bufp->chgCData(oldp+39,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__bytes),2);
        bufp->chgCData(oldp+40,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__data_latch),8);
        bufp->chgBit(oldp+41,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__prev_avail));
        bufp->chgCData(oldp+42,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__state),2);
        bufp->chgCData(oldp+43,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__bytes),2);
        bufp->chgIData(oldp+44,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__data_latch),32);
        bufp->chgBit(oldp+45,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__byte_send));
        bufp->chgCData(oldp+46,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__state),2);
        bufp->chgCData(oldp+47,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__data_to_send),8);
        bufp->chgBit(oldp+48,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__wait_a_bit));
        bufp->chgBit(oldp+49,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__ready));
        bufp->chgCData(oldp+50,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__copy_data),8);
        bufp->chgCData(oldp+51,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__state),3);
        bufp->chgSData(oldp+52,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__count),9);
        bufp->chgCData(oldp+53,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__bits),3);
        bufp->chgCData(oldp+54,(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__bytes),2);
        bufp->chgCData(oldp+55,(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__data_latch),8);
        bufp->chgBit(oldp+56,(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__prev_avail));
        bufp->chgCData(oldp+57,(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__state),2);
        bufp->chgCData(oldp+58,(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__bytes),2);
        bufp->chgIData(oldp+59,(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__data_latch),32);
        bufp->chgBit(oldp+60,(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__byte_send));
        bufp->chgCData(oldp+61,(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__state),2);
        bufp->chgCData(oldp+62,(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__data_to_send),8);
        bufp->chgBit(oldp+63,(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__wait_a_bit));
        bufp->chgBit(oldp+64,(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__ready));
        bufp->chgCData(oldp+65,(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__copy_data),8);
        bufp->chgCData(oldp+66,(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__state),3);
        bufp->chgSData(oldp+67,(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__count),9);
        bufp->chgCData(oldp+68,(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__bits),3);
    }
    bufp->chgBit(oldp+69,(vlSelfRef.tb_flight_controller__DOT__clock));
    bufp->chgIData(oldp+70,(vlSelfRef.tb_flight_controller__DOT__data),32);
    bufp->chgCData(oldp+71,(vlSelfRef.tb_flight_controller__DOT__cnt),3);
    bufp->chgIData(oldp+72,(vlSelfRef.tb_flight_controller__DOT__counter),32);
    bufp->chgBit(oldp+73,(vlSelfRef.tb_flight_controller__DOT__ready));
    bufp->chgBit(oldp+74,(vlSelfRef.tb_flight_controller__DOT__send));
    bufp->chgBit(oldp+75,(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__prev_send));
    bufp->chgBit(oldp+76,(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__prev_send));
}

void Vtb_flight_controller___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root__trace_cleanup\n"); );
    // Init
    Vtb_flight_controller___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_flight_controller___024root*>(voidSelf);
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
