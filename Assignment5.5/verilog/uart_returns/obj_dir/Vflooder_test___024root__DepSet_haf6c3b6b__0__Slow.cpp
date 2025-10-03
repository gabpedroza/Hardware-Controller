// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vflooder_test.h for the primary calling header

#include "Vflooder_test__pch.h"
#include "Vflooder_test___024root.h"

VL_ATTR_COLD void Vflooder_test___024root___eval_static__TOP(Vflooder_test___024root* vlSelf);

VL_ATTR_COLD void Vflooder_test___024root___eval_static(Vflooder_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflooder_test___024root___eval_static\n"); );
    Vflooder_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vflooder_test___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vflooder_test___024root___eval_static__TOP(Vflooder_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflooder_test___024root___eval_static__TOP\n"); );
    Vflooder_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.flooder_test__DOT__flod__DOT__half_clock = 0U;
}

VL_ATTR_COLD void Vflooder_test___024root___eval_final(Vflooder_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflooder_test___024root___eval_final\n"); );
    Vflooder_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vflooder_test___024root___eval_settle(Vflooder_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflooder_test___024root___eval_settle\n"); );
    Vflooder_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vflooder_test___024root___dump_triggers__act(Vflooder_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflooder_test___024root___dump_triggers__act\n"); );
    Vflooder_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge flooder_test.avail)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge flooder_test.clock)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge 1'h1)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vflooder_test___024root___dump_triggers__nba(Vflooder_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflooder_test___024root___dump_triggers__nba\n"); );
    Vflooder_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge flooder_test.avail)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge flooder_test.clock)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge 1'h1)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vflooder_test___024root___ctor_var_reset(Vflooder_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflooder_test___024root___ctor_var_reset\n"); );
    Vflooder_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->flooder_test__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->flooder_test__DOT__rx = VL_RAND_RESET_I(1);
    vlSelf->flooder_test__DOT__period_clock = VL_RAND_RESET_I(1);
    vlSelf->flooder_test__DOT__avail = VL_RAND_RESET_I(1);
    vlSelf->flooder_test__DOT__data_out = VL_RAND_RESET_I(8);
    vlSelf->flooder_test__DOT__flod__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->flooder_test__DOT__flod__DOT__avail = VL_RAND_RESET_I(1);
    vlSelf->flooder_test__DOT__flod__DOT__data_in = VL_RAND_RESET_I(8);
    vlSelf->flooder_test__DOT__flod__DOT__half_clock = VL_RAND_RESET_I(1);
    vlSelf->flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__count = VL_RAND_RESET_I(9);
    vlSelf->flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__bits = VL_RAND_RESET_I(3);
    vlSelf->flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__copy_data = VL_RAND_RESET_I(8);
    vlSelf->flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__count = VL_RAND_RESET_I(9);
    vlSelf->flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__bits = VL_RAND_RESET_I(3);
    vlSelf->flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__int_tx = VL_RAND_RESET_I(1);
    vlSelf->flooder_test__DOT__rxm__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->flooder_test__DOT__rxm__DOT__count = VL_RAND_RESET_I(9);
    vlSelf->flooder_test__DOT__rxm__DOT__bits = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__count = VL_RAND_RESET_I(9);
    vlSelf->__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__bits = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__copy_data = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__flooder_test__DOT__rxm__DOT__count = VL_RAND_RESET_I(9);
    vlSelf->__Vdly__flooder_test__DOT__rxm__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__flooder_test__DOT__rxm__DOT__bits = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__flooder_test__DOT__avail__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__flooder_test__DOT__clock__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
