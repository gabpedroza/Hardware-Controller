// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_int_echo.h for the primary calling header

#include "Vtb_int_echo__pch.h"
#include "Vtb_int_echo___024root.h"

VL_ATTR_COLD void Vtb_int_echo___024root___eval_static(Vtb_int_echo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_int_echo___024root___eval_static\n"); );
    Vtb_int_echo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_int_echo___024root___eval_final(Vtb_int_echo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_int_echo___024root___eval_final\n"); );
    Vtb_int_echo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_int_echo___024root___eval_settle(Vtb_int_echo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_int_echo___024root___eval_settle\n"); );
    Vtb_int_echo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_int_echo___024root___dump_triggers__act(Vtb_int_echo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_int_echo___024root___dump_triggers__act\n"); );
    Vtb_int_echo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_int_echo.avail)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @( tb_int_echo.echo.int_s.state)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @( tb_int_echo.echo.int_s.data_to_send)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @( tb_int_echo.echo.int_s.ready)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge tb_int_echo.clock)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(negedge 1'h1)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_int_echo___024root___dump_triggers__nba(Vtb_int_echo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_int_echo___024root___dump_triggers__nba\n"); );
    Vtb_int_echo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_int_echo.avail)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @( tb_int_echo.echo.int_s.state)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @( tb_int_echo.echo.int_s.data_to_send)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @( tb_int_echo.echo.int_s.ready)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge tb_int_echo.clock)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(negedge 1'h1)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_int_echo___024root___ctor_var_reset(Vtb_int_echo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_int_echo___024root___ctor_var_reset\n"); );
    Vtb_int_echo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_int_echo__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->tb_int_echo__DOT__rx = VL_RAND_RESET_I(1);
    vlSelf->tb_int_echo__DOT__period_clock = VL_RAND_RESET_I(1);
    vlSelf->tb_int_echo__DOT__avail = VL_RAND_RESET_I(1);
    vlSelf->tb_int_echo__DOT__data_out = VL_RAND_RESET_I(8);
    vlSelf->tb_int_echo__DOT__echo__DOT__data_in = VL_RAND_RESET_I(32);
    vlSelf->tb_int_echo__DOT__echo__DOT__int_avail = VL_RAND_RESET_I(1);
    vlSelf->tb_int_echo__DOT__echo__DOT__int_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_int_echo__DOT__echo__DOT__int_send = VL_RAND_RESET_I(1);
    vlSelf->tb_int_echo__DOT__echo__DOT__data_out = VL_RAND_RESET_I(32);
    vlSelf->tb_int_echo__DOT__echo__DOT__prev_int_avail = VL_RAND_RESET_I(1);
    vlSelf->tb_int_echo__DOT__echo__DOT__int_r__DOT__bytes = VL_RAND_RESET_I(2);
    vlSelf->tb_int_echo__DOT__echo__DOT__int_r__DOT__data = VL_RAND_RESET_I(8);
    vlSelf->tb_int_echo__DOT__echo__DOT__int_r__DOT__avail = VL_RAND_RESET_I(1);
    vlSelf->tb_int_echo__DOT__echo__DOT__int_r__DOT__prev_avail = VL_RAND_RESET_I(1);
    vlSelf->tb_int_echo__DOT__echo__DOT__int_r__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb_int_echo__DOT__echo__DOT__int_r__DOT__rxm__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_int_echo__DOT__echo__DOT__int_r__DOT__rxm__DOT__count = VL_RAND_RESET_I(9);
    vlSelf->tb_int_echo__DOT__echo__DOT__int_r__DOT__rxm__DOT__bits = VL_RAND_RESET_I(3);
    vlSelf->tb_int_echo__DOT__echo__DOT__int_s__DOT__bytes = VL_RAND_RESET_I(2);
    vlSelf->tb_int_echo__DOT__echo__DOT__int_s__DOT__data_latch = VL_RAND_RESET_I(32);
    vlSelf->tb_int_echo__DOT__echo__DOT__int_s__DOT__prev_send = VL_RAND_RESET_I(1);
    vlSelf->tb_int_echo__DOT__echo__DOT__int_s__DOT__byte_send = VL_RAND_RESET_I(1);
    vlSelf->tb_int_echo__DOT__echo__DOT__int_s__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb_int_echo__DOT__echo__DOT__int_s__DOT__data_to_send = VL_RAND_RESET_I(8);
    vlSelf->tb_int_echo__DOT__echo__DOT__int_s__DOT__wait_a_bit = VL_RAND_RESET_I(1);
    vlSelf->tb_int_echo__DOT__echo__DOT__int_s__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->tb_int_echo__DOT__echo__DOT__int_s__DOT__txm__DOT__copy_data = VL_RAND_RESET_I(8);
    vlSelf->tb_int_echo__DOT__echo__DOT__int_s__DOT__txm__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_int_echo__DOT__echo__DOT__int_s__DOT__txm__DOT__count = VL_RAND_RESET_I(9);
    vlSelf->tb_int_echo__DOT__echo__DOT__int_s__DOT__txm__DOT__bits = VL_RAND_RESET_I(3);
    vlSelf->tb_int_echo__DOT__echo__DOT__int_s__DOT__txm__DOT__int_tx = VL_RAND_RESET_I(1);
    vlSelf->tb_int_echo__DOT__rxm__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_int_echo__DOT__rxm__DOT__count = VL_RAND_RESET_I(9);
    vlSelf->tb_int_echo__DOT__rxm__DOT__bits = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__tb_int_echo__DOT__echo__DOT__int_send = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_int_echo__DOT__echo__DOT__int_s__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__tb_int_echo__DOT__echo__DOT__int_s__DOT__bytes = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__tb_int_echo__DOT__echo__DOT__int_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_int_echo__DOT__echo__DOT__int_s__DOT__wait_a_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_int_echo__DOT__echo__DOT__int_s__DOT__txm__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__tb_int_echo__DOT__echo__DOT__int_s__DOT__txm__DOT__count = VL_RAND_RESET_I(9);
    vlSelf->__Vdly__tb_int_echo__DOT__echo__DOT__int_s__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_int_echo__DOT__echo__DOT__int_s__DOT__txm__DOT__bits = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__tb_int_echo__DOT__echo__DOT__int_s__DOT__txm__DOT__copy_data = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__tb_int_echo__DOT__rxm__DOT__count = VL_RAND_RESET_I(9);
    vlSelf->__Vdly__tb_int_echo__DOT__rxm__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__tb_int_echo__DOT__rxm__DOT__bits = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_int_echo__DOT__avail__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_int_echo__DOT__echo__DOT__int_s__DOT__state__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_int_echo__DOT__echo__DOT__int_s__DOT__data_to_send__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_int_echo__DOT__echo__DOT__int_s__DOT__ready__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_int_echo__DOT__clock__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
