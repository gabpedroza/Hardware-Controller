// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_flight_controller.h for the primary calling header

#include "Vtb_flight_controller__pch.h"
#include "Vtb_flight_controller__Syms.h"
#include "Vtb_flight_controller___024root.h"

VL_ATTR_COLD void Vtb_flight_controller___024root___eval_initial__TOP(Vtb_flight_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root___eval_initial__TOP\n"); );
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    vlSelfRef.tb_flight_controller__DOT__data_out[0U] = 0xaaaaaaaaU;
    vlSelfRef.tb_flight_controller__DOT__data_out[1U] = 0x33e69300U;
    vlSelfRef.tb_flight_controller__DOT__data_out[2U] = 0U;
    vlSelfRef.tb_flight_controller__DOT__data_out[3U] = 0U;
    vlSelfRef.tb_flight_controller__DOT__data_out[4U] = 0xfffdb500U;
    vlSelfRef.tb_flight_controller__DOT__data_out[5U] = 0U;
    vlSelfRef.tb_flight_controller__DOT__data_out[6U] = 0U;
    vlSelfRef.tb_flight_controller__DOT__data_out[7U] = 0U;
    vlSelfRef.tb_flight_controller__DOT__cnt = 0U;
    vlSelfRef.tb_flight_controller__DOT__send = 0U;
    vlSelfRef.tb_flight_controller__DOT__counter = 0U;
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x6c6c6572U;
    __Vtemp_1[2U] = 0x6e74726fU;
    __Vtemp_1[3U] = 0x745f636fU;
    __Vtemp_1[4U] = 0x6c696768U;
    __Vtemp_1[5U] = 0x74625f66U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(6, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__avail = 0U;
    vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__data = 0U;
    vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__count = 0U;
    vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__bits = 0U;
    vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__state = 0U;
    vlSelfRef.tb_flight_controller__DOT__int_r__DOT__avail = 0U;
    vlSelfRef.tb_flight_controller__DOT__int_r__DOT__data = 0U;
    vlSelfRef.tb_flight_controller__DOT__int_r__DOT__rxm__DOT__count = 0U;
    vlSelfRef.tb_flight_controller__DOT__int_r__DOT__rxm__DOT__bits = 0U;
    vlSelfRef.tb_flight_controller__DOT__int_r__DOT__rxm__DOT__state = 0U;
}
