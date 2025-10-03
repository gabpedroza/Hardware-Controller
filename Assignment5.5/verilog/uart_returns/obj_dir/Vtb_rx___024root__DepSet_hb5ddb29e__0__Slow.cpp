// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rx.h for the primary calling header

#include "Vtb_rx__pch.h"
#include "Vtb_rx___024root.h"

VL_ATTR_COLD void Vtb_rx___024root___eval_static(Vtb_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rx___024root___eval_static\n"); );
    Vtb_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rx___024root___eval_final(Vtb_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rx___024root___eval_final\n"); );
    Vtb_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rx___024root___eval_settle(Vtb_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rx___024root___eval_settle\n"); );
    Vtb_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_rx___024root___dump_triggers__act(Vtb_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rx___024root___dump_triggers__act\n"); );
    Vtb_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_rx.clock)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_rx.rst)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_rx___024root___dump_triggers__nba(Vtb_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rx___024root___dump_triggers__nba\n"); );
    Vtb_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_rx.clock)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_rx.rst)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_rx___024root___ctor_var_reset(Vtb_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rx___024root___ctor_var_reset\n"); );
    Vtb_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_rx__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->tb_rx__DOT__rx = VL_RAND_RESET_I(1);
    vlSelf->tb_rx__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->tb_rx__DOT__avail = VL_RAND_RESET_I(1);
    vlSelf->tb_rx__DOT__data = VL_RAND_RESET_I(8);
    vlSelf->tb_rx__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tb_rx__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->tb_rx__DOT__unnamedblk1__DOT__to_send = VL_RAND_RESET_I(8);
    vlSelf->tb_rx__DOT__rxm__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_rx__DOT__rxm__DOT__count = VL_RAND_RESET_I(9);
    vlSelf->tb_rx__DOT__rxm__DOT__bits = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_rx__DOT__clock__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_rx__DOT__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
