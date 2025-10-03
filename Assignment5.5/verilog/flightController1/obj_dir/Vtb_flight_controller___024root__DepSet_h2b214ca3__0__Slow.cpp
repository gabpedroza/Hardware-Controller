// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_flight_controller.h for the primary calling header

#include "Vtb_flight_controller__pch.h"
#include "Vtb_flight_controller___024root.h"

VL_ATTR_COLD void Vtb_flight_controller___024root___eval_static(Vtb_flight_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root___eval_static\n"); );
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_flight_controller___024root___eval_final(Vtb_flight_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root___eval_final\n"); );
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_flight_controller___024root___eval_settle(Vtb_flight_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root___eval_settle\n"); );
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_flight_controller___024root___dump_triggers__act(Vtb_flight_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root___dump_triggers__act\n"); );
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(edge tb_flight_controller.ready)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_flight_controller.avail)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge tb_flight_controller.clock)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge 1'h1)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @( tb_flight_controller.fc.int_avail)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @( tb_flight_controller.fc.int_r.bytes)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @( tb_flight_controller.fc.received_int)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @( tb_flight_controller.fc.int_r.data)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(posedge tb_flight_controller.fc.int_r.avail)\n");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @(posedge tb_flight_controller.fc.int_s.byte_send)\n");
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @( tb_flight_controller.fc.int_s.data_latch)\n");
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @(posedge tb_flight_controller.int_s.byte_send)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @( tb_flight_controller.int_s.data_latch)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @( tb_flight_controller.avail)\n");
    }
    if ((0x4000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @( tb_flight_controller.data_back)\n");
    }
    if ((0x8000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 15 is active: @( tb_flight_controller.int_r.bytes)\n");
    }
    if ((0x10000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 16 is active: @( tb_flight_controller.int_r.data)\n");
    }
    if ((0x20000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 17 is active: @(posedge tb_flight_controller.int_r.avail)\n");
    }
    if ((0x40000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 18 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_flight_controller___024root___dump_triggers__nba(Vtb_flight_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root___dump_triggers__nba\n"); );
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(edge tb_flight_controller.ready)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_flight_controller.avail)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge tb_flight_controller.clock)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge 1'h1)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @( tb_flight_controller.fc.int_avail)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @( tb_flight_controller.fc.int_r.bytes)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @( tb_flight_controller.fc.received_int)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @( tb_flight_controller.fc.int_r.data)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(posedge tb_flight_controller.fc.int_r.avail)\n");
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @(posedge tb_flight_controller.fc.int_s.byte_send)\n");
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @( tb_flight_controller.fc.int_s.data_latch)\n");
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @(posedge tb_flight_controller.int_s.byte_send)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @( tb_flight_controller.int_s.data_latch)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @( tb_flight_controller.avail)\n");
    }
    if ((0x4000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @( tb_flight_controller.data_back)\n");
    }
    if ((0x8000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 15 is active: @( tb_flight_controller.int_r.bytes)\n");
    }
    if ((0x10000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 16 is active: @( tb_flight_controller.int_r.data)\n");
    }
    if ((0x20000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 17 is active: @(posedge tb_flight_controller.int_r.avail)\n");
    }
    if ((0x40000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 18 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_flight_controller___024root___ctor_var_reset(Vtb_flight_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root___ctor_var_reset\n"); );
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_flight_controller__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->tb_flight_controller__DOT__period_clock = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_flight_controller__DOT__data_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_flight_controller__DOT__data = VL_RAND_RESET_I(32);
    vlSelf->tb_flight_controller__DOT__cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_flight_controller__DOT__counter = VL_RAND_RESET_I(32);
    vlSelf->tb_flight_controller__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->tb_flight_controller__DOT__send = VL_RAND_RESET_I(1);
    vlSelf->tb_flight_controller__DOT__avail = VL_RAND_RESET_I(1);
    vlSelf->tb_flight_controller__DOT__data_back = VL_RAND_RESET_I(32);
    vlSelf->tb_flight_controller__DOT__fc__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_flight_controller__DOT__fc__DOT__ints = VL_RAND_RESET_I(2);
    vlSelf->tb_flight_controller__DOT__fc__DOT__count = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_flight_controller__DOT__fc__DOT__positions[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_flight_controller__DOT__fc__DOT__velocities[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_flight_controller__DOT__fc__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->tb_flight_controller__DOT__fc__DOT__data_latch = VL_RAND_RESET_I(32);
    vlSelf->tb_flight_controller__DOT__fc__DOT__prev_avail = VL_RAND_RESET_I(1);
    vlSelf->tb_flight_controller__DOT__fc__DOT__received_int = VL_RAND_RESET_I(32);
    vlSelf->tb_flight_controller__DOT__fc__DOT__int_avail = VL_RAND_RESET_I(1);
    vlSelf->tb_flight_controller__DOT__fc__DOT__int_send = VL_RAND_RESET_I(1);
    vlSelf->tb_flight_controller__DOT__fc__DOT__int_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_flight_controller__DOT__fc__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->tb_flight_controller__DOT__fc__DOT__int_r__DOT__bytes = VL_RAND_RESET_I(2);
    vlSelf->tb_flight_controller__DOT__fc__DOT__int_r__DOT__data = VL_RAND_RESET_I(8);
    vlSelf->tb_flight_controller__DOT__fc__DOT__int_r__DOT__data_latch = VL_RAND_RESET_I(8);
    vlSelf->tb_flight_controller__DOT__fc__DOT__int_r__DOT__avail = VL_RAND_RESET_I(1);
    vlSelf->tb_flight_controller__DOT__fc__DOT__int_r__DOT__prev_avail = VL_RAND_RESET_I(1);
    vlSelf->tb_flight_controller__DOT__fc__DOT__int_r__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__count = VL_RAND_RESET_I(9);
    vlSelf->tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__bits = VL_RAND_RESET_I(3);
    vlSelf->tb_flight_controller__DOT__fc__DOT__int_s__DOT__bytes = VL_RAND_RESET_I(2);
    vlSelf->tb_flight_controller__DOT__fc__DOT__int_s__DOT__data_latch = VL_RAND_RESET_I(32);
    vlSelf->tb_flight_controller__DOT__fc__DOT__int_s__DOT__prev_send = VL_RAND_RESET_I(1);
    vlSelf->tb_flight_controller__DOT__fc__DOT__int_s__DOT__byte_send = VL_RAND_RESET_I(1);
    vlSelf->tb_flight_controller__DOT__fc__DOT__int_s__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb_flight_controller__DOT__fc__DOT__int_s__DOT__data_to_send = VL_RAND_RESET_I(8);
    vlSelf->tb_flight_controller__DOT__fc__DOT__int_s__DOT__wait_a_bit = VL_RAND_RESET_I(1);
    vlSelf->tb_flight_controller__DOT__fc__DOT__int_s__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__copy_data = VL_RAND_RESET_I(8);
    vlSelf->tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__count = VL_RAND_RESET_I(9);
    vlSelf->tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__bits = VL_RAND_RESET_I(3);
    vlSelf->tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__int_tx = VL_RAND_RESET_I(1);
    vlSelf->tb_flight_controller__DOT__int_s__DOT__bytes = VL_RAND_RESET_I(2);
    vlSelf->tb_flight_controller__DOT__int_s__DOT__data_latch = VL_RAND_RESET_I(32);
    vlSelf->tb_flight_controller__DOT__int_s__DOT__prev_send = VL_RAND_RESET_I(1);
    vlSelf->tb_flight_controller__DOT__int_s__DOT__byte_send = VL_RAND_RESET_I(1);
    vlSelf->tb_flight_controller__DOT__int_s__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb_flight_controller__DOT__int_s__DOT__data_to_send = VL_RAND_RESET_I(8);
    vlSelf->tb_flight_controller__DOT__int_s__DOT__wait_a_bit = VL_RAND_RESET_I(1);
    vlSelf->tb_flight_controller__DOT__int_s__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->tb_flight_controller__DOT__int_s__DOT__txm__DOT__copy_data = VL_RAND_RESET_I(8);
    vlSelf->tb_flight_controller__DOT__int_s__DOT__txm__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_flight_controller__DOT__int_s__DOT__txm__DOT__count = VL_RAND_RESET_I(9);
    vlSelf->tb_flight_controller__DOT__int_s__DOT__txm__DOT__bits = VL_RAND_RESET_I(3);
    vlSelf->tb_flight_controller__DOT__int_s__DOT__txm__DOT__int_tx = VL_RAND_RESET_I(1);
    vlSelf->tb_flight_controller__DOT__int_r__DOT__bytes = VL_RAND_RESET_I(2);
    vlSelf->tb_flight_controller__DOT__int_r__DOT__data = VL_RAND_RESET_I(8);
    vlSelf->tb_flight_controller__DOT__int_r__DOT__data_latch = VL_RAND_RESET_I(8);
    vlSelf->tb_flight_controller__DOT__int_r__DOT__avail = VL_RAND_RESET_I(1);
    vlSelf->tb_flight_controller__DOT__int_r__DOT__prev_avail = VL_RAND_RESET_I(1);
    vlSelf->tb_flight_controller__DOT__int_r__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb_flight_controller__DOT__int_r__DOT__rxm__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_flight_controller__DOT__int_r__DOT__rxm__DOT__count = VL_RAND_RESET_I(9);
    vlSelf->tb_flight_controller__DOT__int_r__DOT__rxm__DOT__bits = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__tb_flight_controller__DOT__fc__DOT__count = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__tb_flight_controller__DOT__fc__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__tb_flight_controller__DOT__fc__DOT__ints = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__tb_flight_controller__DOT__fc__DOT__data_latch = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__tb_flight_controller__DOT__fc__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__data_latch = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__bytes = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__count = VL_RAND_RESET_I(9);
    vlSelf->__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__avail = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__bits = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__bytes = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__wait_a_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__count = VL_RAND_RESET_I(9);
    vlSelf->__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__bits = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__copy_data = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__tb_flight_controller__DOT__int_s__DOT__bytes = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__tb_flight_controller__DOT__int_s__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__tb_flight_controller__DOT__int_s__DOT__wait_a_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_flight_controller__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__count = VL_RAND_RESET_I(9);
    vlSelf->__Vdly__tb_flight_controller__DOT__int_s__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__bits = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__copy_data = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__tb_flight_controller__DOT__int_r__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__tb_flight_controller__DOT__int_r__DOT__data_latch = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__tb_flight_controller__DOT__int_r__DOT__bytes = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__count = VL_RAND_RESET_I(9);
    vlSelf->__Vdly__tb_flight_controller__DOT__int_r__DOT__avail = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__bits = VL_RAND_RESET_I(3);
    vlSelf->__VdlyVal__tb_flight_controller__DOT__counter__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__tb_flight_controller__DOT__counter__v0 = 0;
    vlSelf->__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v0 = 0;
    vlSelf->__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v3 = 0;
    vlSelf->__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v4 = 0;
    vlSelf->__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v6 = 0;
    vlSelf->__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v7 = 0;
    vlSelf->__VdlySet__tb_flight_controller__DOT__fc__DOT__velocities__v9 = 0;
    vlSelf->__VdlySet__tb_flight_controller__DOT__fc__DOT__velocities__v10 = 0;
    vlSelf->__VdlySet__tb_flight_controller__DOT__fc__DOT__velocities__v11 = 0;
    vlSelf->__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v9 = 0;
    vlSelf->__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v10 = 0;
    vlSelf->__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v12 = 0;
    vlSelf->__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v13 = 0;
    vlSelf->__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v15 = 0;
    vlSelf->__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v16 = 0;
    vlSelf->__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v17 = 0;
    vlSelf->__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v18 = 0;
    vlSelf->__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v19 = 0;
    vlSelf->__VdlySet__tb_flight_controller__DOT__fc__DOT__velocities__v21 = 0;
    vlSelf->__VdlySet__tb_flight_controller__DOT__fc__DOT__velocities__v24 = 0;
    vlSelf->__VdlySet__tb_flight_controller__DOT__fc__DOT__velocities__v25 = 0;
    vlSelf->__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v21 = 0;
    vlSelf->__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v22 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_flight_controller__DOT__ready__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_flight_controller__DOT__avail__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_flight_controller__DOT__clock__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_flight_controller__DOT__fc__DOT__int_avail__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_flight_controller__DOT__fc__DOT__int_r__DOT__bytes__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_flight_controller__DOT__fc__DOT__received_int__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tb_flight_controller__DOT__fc__DOT__int_r__DOT__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_flight_controller__DOT__fc__DOT__int_r__DOT__avail__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_flight_controller__DOT__fc__DOT__int_s__DOT__byte_send__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_flight_controller__DOT__fc__DOT__int_s__DOT__data_latch__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tb_flight_controller__DOT__int_s__DOT__byte_send__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_flight_controller__DOT__int_s__DOT__data_latch__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tb_flight_controller__DOT__data_back__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tb_flight_controller__DOT__int_r__DOT__bytes__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_flight_controller__DOT__int_r__DOT__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_flight_controller__DOT__int_r__DOT__avail__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
