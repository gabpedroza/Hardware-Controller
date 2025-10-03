// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_tx.h for the primary calling header

#include "Vtb_tx__pch.h"
#include "Vtb_tx___024root.h"

VL_ATTR_COLD void Vtb_tx___024root___eval_static(Vtb_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tx___024root___eval_static\n"); );
    Vtb_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_tx___024root___eval_final(Vtb_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tx___024root___eval_final\n"); );
    Vtb_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_tx___024root___eval_settle(Vtb_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tx___024root___eval_settle\n"); );
    Vtb_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_tx___024root___dump_triggers__act(Vtb_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tx___024root___dump_triggers__act\n"); );
    Vtb_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_tx.clock)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_tx.rst)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_tx___024root___dump_triggers__nba(Vtb_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tx___024root___dump_triggers__nba\n"); );
    Vtb_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_tx.clock)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_tx.rst)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_tx___024root___ctor_var_reset(Vtb_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tx___024root___ctor_var_reset\n"); );
    Vtb_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_tx__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->tb_tx__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->tb_tx__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->tb_tx__DOT__send = VL_RAND_RESET_I(1);
    vlSelf->tb_tx__DOT__data = VL_RAND_RESET_I(8);
    vlSelf->tb_tx__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tb_tx__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->tb_tx__DOT__txm__DOT__copy_data = VL_RAND_RESET_I(8);
    vlSelf->tb_tx__DOT__txm__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_tx__DOT__txm__DOT__count = VL_RAND_RESET_I(9);
    vlSelf->tb_tx__DOT__txm__DOT__bits = VL_RAND_RESET_I(3);
    vlSelf->tb_tx__DOT__txm__DOT__int_tx = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_tx__DOT__clock__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_tx__DOT__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
