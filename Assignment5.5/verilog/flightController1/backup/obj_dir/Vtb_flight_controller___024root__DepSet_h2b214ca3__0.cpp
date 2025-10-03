// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_flight_controller.h for the primary calling header

#include "Vtb_flight_controller__pch.h"
#include "Vtb_flight_controller___024root.h"

VL_ATTR_COLD void Vtb_flight_controller___024root___eval_initial__TOP(Vtb_flight_controller___024root* vlSelf);
VlCoroutine Vtb_flight_controller___024root___eval_initial__TOP__Vtiming__0(Vtb_flight_controller___024root* vlSelf);

void Vtb_flight_controller___024root___eval_initial(Vtb_flight_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root___eval_initial\n"); );
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_flight_controller___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_flight_controller___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__ready__0 
        = vlSelfRef.tb_flight_controller__DOT__ready;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__avail__0 
        = vlSelfRef.tb_flight_controller__DOT__avail;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__clock__0 
        = vlSelfRef.tb_flight_controller__DOT__clock;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__fc__DOT__int_avail__0 
        = vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_avail;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__fc__DOT__int_r__DOT__bytes__0 
        = vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__bytes;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__fc__DOT__received_int__0 
        = vlSelfRef.tb_flight_controller__DOT__fc__DOT__received_int;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__fc__DOT__int_r__DOT__data__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__fc__DOT__int_r__DOT__avail__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__fc__DOT__int_s__DOT__byte_send__0 
        = vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__byte_send;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__fc__DOT__int_s__DOT__data_latch__0 
        = vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__data_latch;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__int_s__DOT__byte_send__0 
        = vlSelfRef.tb_flight_controller__DOT__int_s__DOT__byte_send;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__int_s__DOT__data_latch__0 
        = vlSelfRef.tb_flight_controller__DOT__int_s__DOT__data_latch;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__data_back__0 
        = vlSelfRef.tb_flight_controller__DOT__data_back;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__int_r__DOT__bytes__0 
        = vlSelfRef.tb_flight_controller__DOT__int_r__DOT__bytes;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__int_r__DOT__data__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__int_r__DOT__avail__0 = 0U;
}

VL_INLINE_OPT VlCoroutine Vtb_flight_controller___024root___eval_initial__TOP__Vtiming__0(Vtb_flight_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x4650ULL, 
                                             nullptr, 
                                             "tb_flight_controller.v", 
                                             15);
        vlSelfRef.tb_flight_controller__DOT__clock 
            = (1U & (~ (IData)(vlSelfRef.tb_flight_controller__DOT__clock)));
        vlSelfRef.__VdlyVal__tb_flight_controller__DOT__counter__v0 
            = ((IData)(1U) + vlSelfRef.tb_flight_controller__DOT__counter);
        vlSelfRef.__VdlySet__tb_flight_controller__DOT__counter__v0 = 1U;
        if (VL_UNLIKELY(((0x7a120U < vlSelfRef.tb_flight_controller__DOT__counter)))) {
            VL_FINISH_MT("tb_flight_controller.v", 19, "");
        }
    }
}

void Vtb_flight_controller___024root___eval_act(Vtb_flight_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root___eval_act\n"); );
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_flight_controller___024root___nba_sequent__TOP__0(Vtb_flight_controller___024root* vlSelf);
void Vtb_flight_controller___024root___nba_sequent__TOP__1(Vtb_flight_controller___024root* vlSelf);
void Vtb_flight_controller___024root___nba_sequent__TOP__2(Vtb_flight_controller___024root* vlSelf);
void Vtb_flight_controller___024root___nba_sequent__TOP__3(Vtb_flight_controller___024root* vlSelf);
void Vtb_flight_controller___024root___nba_sequent__TOP__4(Vtb_flight_controller___024root* vlSelf);
void Vtb_flight_controller___024root___nba_sequent__TOP__5(Vtb_flight_controller___024root* vlSelf);
void Vtb_flight_controller___024root___nba_sequent__TOP__6(Vtb_flight_controller___024root* vlSelf);
void Vtb_flight_controller___024root___nba_sequent__TOP__7(Vtb_flight_controller___024root* vlSelf);
void Vtb_flight_controller___024root___nba_sequent__TOP__8(Vtb_flight_controller___024root* vlSelf);
void Vtb_flight_controller___024root___nba_sequent__TOP__9(Vtb_flight_controller___024root* vlSelf);
void Vtb_flight_controller___024root___nba_sequent__TOP__10(Vtb_flight_controller___024root* vlSelf);
void Vtb_flight_controller___024root___nba_sequent__TOP__11(Vtb_flight_controller___024root* vlSelf);
void Vtb_flight_controller___024root___nba_sequent__TOP__12(Vtb_flight_controller___024root* vlSelf);
void Vtb_flight_controller___024root___nba_sequent__TOP__13(Vtb_flight_controller___024root* vlSelf);
void Vtb_flight_controller___024root___nba_sequent__TOP__14(Vtb_flight_controller___024root* vlSelf);
void Vtb_flight_controller___024root___nba_sequent__TOP__15(Vtb_flight_controller___024root* vlSelf);
void Vtb_flight_controller___024root___nba_sequent__TOP__16(Vtb_flight_controller___024root* vlSelf);

void Vtb_flight_controller___024root___eval_nba(Vtb_flight_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root___eval_nba\n"); );
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_flight_controller___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_flight_controller___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_flight_controller___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_flight_controller___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_flight_controller___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_flight_controller___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_flight_controller___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x70ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_flight_controller___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_flight_controller___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x10000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_flight_controller___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((0x20000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_flight_controller___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_flight_controller___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((0xe000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_flight_controller___024root___nba_sequent__TOP__12(vlSelf);
    }
    if ((0x40000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_flight_controller___024root___nba_sequent__TOP__13(vlSelf);
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_flight_controller___024root___nba_sequent__TOP__14(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_flight_controller___024root___nba_sequent__TOP__15(vlSelf);
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_flight_controller___024root___nba_sequent__TOP__16(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_flight_controller___024root___nba_sequent__TOP__0(Vtb_flight_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root___nba_sequent__TOP__0\n"); );
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("sender to send int %10#\n",0,32,vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__data_latch);
}

VL_INLINE_OPT void Vtb_flight_controller___024root___nba_sequent__TOP__1(Vtb_flight_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root___nba_sequent__TOP__1\n"); );
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("sender to send int %10#\n",0,32,vlSelfRef.tb_flight_controller__DOT__int_s__DOT__data_latch);
}

VL_INLINE_OPT void Vtb_flight_controller___024root___nba_sequent__TOP__2(Vtb_flight_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root___nba_sequent__TOP__2\n"); );
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_flight_controller__DOT__ready) {
        vlSelfRef.tb_flight_controller__DOT__data = 
            vlSelfRef.tb_flight_controller__DOT__data_out
            [vlSelfRef.tb_flight_controller__DOT__cnt];
        vlSelfRef.tb_flight_controller__DOT__cnt = 
            (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_flight_controller__DOT__cnt)));
    }
}

VL_INLINE_OPT void Vtb_flight_controller___024root___nba_sequent__TOP__3(Vtb_flight_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root___nba_sequent__TOP__3\n"); );
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__bytes 
        = vlSelfRef.tb_flight_controller__DOT__int_s__DOT__bytes;
    vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__state 
        = vlSelfRef.tb_flight_controller__DOT__int_s__DOT__state;
    vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__wait_a_bit 
        = vlSelfRef.tb_flight_controller__DOT__int_s__DOT__wait_a_bit;
    vlSelfRef.__Vdly__tb_flight_controller__DOT__ready 
        = vlSelfRef.tb_flight_controller__DOT__ready;
    vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__state 
        = vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__state;
    vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__count 
        = vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__count;
    vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__ready 
        = vlSelfRef.tb_flight_controller__DOT__int_s__DOT__ready;
    vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__bits 
        = vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__bits;
    vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__copy_data 
        = vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__copy_data;
    vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__state 
        = vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__state;
    vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__count 
        = vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__count;
    vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__avail 
        = vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__avail;
    vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__bits 
        = vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__bits;
    vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__state 
        = vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__state;
    vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__data_latch 
        = vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__data_latch;
    vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__bytes 
        = vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__bytes;
    vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__count 
        = vlSelfRef.tb_flight_controller__DOT__fc__DOT__count;
    vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__state 
        = vlSelfRef.tb_flight_controller__DOT__fc__DOT__state;
    vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__ints 
        = vlSelfRef.tb_flight_controller__DOT__fc__DOT__ints;
    vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__data_latch 
        = vlSelfRef.tb_flight_controller__DOT__fc__DOT__data_latch;
    vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__result 
        = vlSelfRef.tb_flight_controller__DOT__fc__DOT__result;
    vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__velocities__v9 = 0U;
    vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__velocities__v10 = 0U;
    vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__velocities__v11 = 0U;
    vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__velocities__v21 = 0U;
    vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__velocities__v24 = 0U;
    vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__velocities__v25 = 0U;
    vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v0 = 0U;
    vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v3 = 0U;
    vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v4 = 0U;
    vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v6 = 0U;
    vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v7 = 0U;
    vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v9 = 0U;
    vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v10 = 0U;
    vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v12 = 0U;
    vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v13 = 0U;
    vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v15 = 0U;
    vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v16 = 0U;
    vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v17 = 0U;
    vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v18 = 0U;
    vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v19 = 0U;
    vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v21 = 0U;
    vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v22 = 0U;
    vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__bytes 
        = vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__bytes;
    vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__state 
        = vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__state;
    vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__wait_a_bit 
        = vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__wait_a_bit;
    vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__state 
        = vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__state;
    vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__count 
        = vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__count;
    vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__ready 
        = vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__ready;
    vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__bits 
        = vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__bits;
    vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__copy_data 
        = vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__copy_data;
    vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__state 
        = vlSelfRef.tb_flight_controller__DOT__int_r__DOT__rxm__DOT__state;
    vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__count 
        = vlSelfRef.tb_flight_controller__DOT__int_r__DOT__rxm__DOT__count;
    vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__avail 
        = vlSelfRef.tb_flight_controller__DOT__int_r__DOT__avail;
    vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__bits 
        = vlSelfRef.tb_flight_controller__DOT__int_r__DOT__rxm__DOT__bits;
    vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__state 
        = vlSelfRef.tb_flight_controller__DOT__int_r__DOT__state;
    vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__data_latch 
        = vlSelfRef.tb_flight_controller__DOT__int_r__DOT__data_latch;
    vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__bytes 
        = vlSelfRef.tb_flight_controller__DOT__int_r__DOT__bytes;
    vlSelfRef.tb_flight_controller__DOT__int_s__DOT__prev_send 
        = vlSelfRef.tb_flight_controller__DOT__send;
    vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__prev_send 
        = vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_send;
}

VL_INLINE_OPT void Vtb_flight_controller___024root___nba_sequent__TOP__4(Vtb_flight_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root___nba_sequent__TOP__4\n"); );
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("sender is sending %3#\n",0,8,vlSelfRef.tb_flight_controller__DOT__int_s__DOT__data_to_send);
}

VL_INLINE_OPT void Vtb_flight_controller___024root___nba_sequent__TOP__5(Vtb_flight_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root___nba_sequent__TOP__5\n"); );
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("data = %3#\n",0,8,vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__data);
}

VL_INLINE_OPT void Vtb_flight_controller___024root___nba_sequent__TOP__6(Vtb_flight_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root___nba_sequent__TOP__6\n"); );
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("sending %3#\n",0,8,vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__data);
}

VL_INLINE_OPT void Vtb_flight_controller___024root___nba_sequent__TOP__7(Vtb_flight_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root___nba_sequent__TOP__7\n"); );
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("int receiver on state %1#, int_avail = %1#, data = %3#, oint= %11d, bytes = %1#\n",0,
                 2,vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__state,
                 1,(IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_avail),
                 8,vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__data,
                 32,vlSelfRef.tb_flight_controller__DOT__fc__DOT__received_int,
                 2,(IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__bytes));
}

VL_INLINE_OPT void Vtb_flight_controller___024root___nba_sequent__TOP__8(Vtb_flight_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root___nba_sequent__TOP__8\n"); );
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("sender is sending %3#\n",0,8,vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__data_to_send);
}

VL_INLINE_OPT void Vtb_flight_controller___024root___nba_sequent__TOP__9(Vtb_flight_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root___nba_sequent__TOP__9\n"); );
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("data = %3#\n",0,8,vlSelfRef.tb_flight_controller__DOT__int_r__DOT__data);
}

VL_INLINE_OPT void Vtb_flight_controller___024root___nba_sequent__TOP__10(Vtb_flight_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root___nba_sequent__TOP__10\n"); );
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("sending %3#\n",0,8,vlSelfRef.tb_flight_controller__DOT__int_r__DOT__data);
}

VL_INLINE_OPT void Vtb_flight_controller___024root___nba_sequent__TOP__11(Vtb_flight_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root___nba_sequent__TOP__11\n"); );
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("data received = %11d\n",0,32,vlSelfRef.tb_flight_controller__DOT__data_back);
}

VL_INLINE_OPT void Vtb_flight_controller___024root___nba_sequent__TOP__12(Vtb_flight_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root___nba_sequent__TOP__12\n"); );
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("int receiver on state %1#, int_avail = %1#, data = %3#, oint= %11d, bytes = %1#\n",0,
                 2,vlSelfRef.tb_flight_controller__DOT__int_r__DOT__state,
                 1,(IData)(vlSelfRef.tb_flight_controller__DOT__avail),
                 8,vlSelfRef.tb_flight_controller__DOT__int_r__DOT__data,
                 32,vlSelfRef.tb_flight_controller__DOT__data_back,
                 2,(IData)(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__bytes));
}

VL_INLINE_OPT void Vtb_flight_controller___024root___nba_sequent__TOP__13(Vtb_flight_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root___nba_sequent__TOP__13\n"); );
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_flight_controller__DOT__counter__v0) {
        vlSelfRef.__VdlySet__tb_flight_controller__DOT__counter__v0 = 0U;
        vlSelfRef.tb_flight_controller__DOT__counter 
            = vlSelfRef.__VdlyVal__tb_flight_controller__DOT__counter__v0;
    }
}

VL_INLINE_OPT void Vtb_flight_controller___024root___nba_sequent__TOP__14(Vtb_flight_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root___nba_sequent__TOP__14\n"); );
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__tb_flight_controller__DOT__fc__DOT__velocities__v9;
    __VdlyVal__tb_flight_controller__DOT__fc__DOT__velocities__v9 = 0;
    IData/*31:0*/ __VdlyVal__tb_flight_controller__DOT__fc__DOT__velocities__v10;
    __VdlyVal__tb_flight_controller__DOT__fc__DOT__velocities__v10 = 0;
    IData/*31:0*/ __VdlyVal__tb_flight_controller__DOT__fc__DOT__velocities__v11;
    __VdlyVal__tb_flight_controller__DOT__fc__DOT__velocities__v11 = 0;
    IData/*31:0*/ __VdlyVal__tb_flight_controller__DOT__fc__DOT__positions__v15;
    __VdlyVal__tb_flight_controller__DOT__fc__DOT__positions__v15 = 0;
    IData/*31:0*/ __VdlyVal__tb_flight_controller__DOT__fc__DOT__positions__v16;
    __VdlyVal__tb_flight_controller__DOT__fc__DOT__positions__v16 = 0;
    IData/*31:0*/ __VdlyVal__tb_flight_controller__DOT__fc__DOT__positions__v17;
    __VdlyVal__tb_flight_controller__DOT__fc__DOT__positions__v17 = 0;
    // Body
    if ((0U == (IData)(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__state))) {
        if (((~ (IData)(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__prev_avail)) 
             & (IData)(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__avail))) {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__state = 1U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__data_latch 
                = vlSelfRef.tb_flight_controller__DOT__int_r__DOT__data;
            vlSelfRef.tb_flight_controller__DOT__data_back = 0U;
            vlSelfRef.tb_flight_controller__DOT__avail = 0U;
        } else {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__state = 0U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__data_latch = 0U;
        }
        vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__bytes = 0U;
    } else if ((1U == (IData)(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__bytes))) {
            if ((1U & (IData)(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__bytes))) {
                VL_WRITEF_NX("getting 4 %3#\n",0,8,
                             vlSelfRef.tb_flight_controller__DOT__int_r__DOT__data_latch);
                vlSelfRef.tb_flight_controller__DOT__data_back 
                    = ((0xffffffU & vlSelfRef.tb_flight_controller__DOT__data_back) 
                       | ((IData)(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__data_latch) 
                          << 0x18U));
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__state = 0U;
                vlSelfRef.tb_flight_controller__DOT__avail = 1U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__bytes = 0U;
            } else {
                VL_WRITEF_NX("getting 3 %3#\n",0,8,
                             vlSelfRef.tb_flight_controller__DOT__int_r__DOT__data_latch);
                vlSelfRef.tb_flight_controller__DOT__data_back 
                    = ((0xff00ffffU & vlSelfRef.tb_flight_controller__DOT__data_back) 
                       | ((IData)(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__data_latch) 
                          << 0x10U));
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__state = 2U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__bytes = 3U;
                vlSelfRef.tb_flight_controller__DOT__avail = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__bytes))) {
            VL_WRITEF_NX("getting 2 %3#\n",0,8,vlSelfRef.tb_flight_controller__DOT__int_r__DOT__data_latch);
            vlSelfRef.tb_flight_controller__DOT__data_back 
                = ((0xffff00ffU & vlSelfRef.tb_flight_controller__DOT__data_back) 
                   | ((IData)(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__data_latch) 
                      << 8U));
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__state = 2U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__bytes = 2U;
            vlSelfRef.tb_flight_controller__DOT__avail = 0U;
        } else {
            VL_WRITEF_NX("getting 1 %3#\n",0,8,vlSelfRef.tb_flight_controller__DOT__int_r__DOT__data_latch);
            vlSelfRef.tb_flight_controller__DOT__data_back 
                = ((0xffffff00U & vlSelfRef.tb_flight_controller__DOT__data_back) 
                   | (IData)(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__data_latch));
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__state = 2U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__bytes = 1U;
            vlSelfRef.tb_flight_controller__DOT__avail = 0U;
        }
    } else if ((2U == (IData)(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__state))) {
        if (VL_UNLIKELY((((~ (IData)(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__prev_avail)) 
                          & (IData)(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__avail))))) {
            VL_WRITEF_NX("receiver latching %3#\n",0,
                         8,vlSelfRef.tb_flight_controller__DOT__int_r__DOT__data);
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__bytes 
                = vlSelfRef.tb_flight_controller__DOT__int_r__DOT__bytes;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__state = 1U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__data_latch 
                = vlSelfRef.tb_flight_controller__DOT__int_r__DOT__data;
            vlSelfRef.tb_flight_controller__DOT__avail = 0U;
        } else {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__bytes 
                = vlSelfRef.tb_flight_controller__DOT__int_r__DOT__bytes;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__state = 2U;
            vlSelfRef.tb_flight_controller__DOT__avail = 0U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__data_latch = 0U;
        }
    } else {
        vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__bytes = 0U;
        vlSelfRef.tb_flight_controller__DOT__data_back = 0U;
        vlSelfRef.tb_flight_controller__DOT__int_r__DOT__prev_avail = 0U;
        vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__state = 0U;
        vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__data_latch = 0U;
    }
    vlSelfRef.tb_flight_controller__DOT__int_r__DOT__prev_avail 
        = vlSelfRef.tb_flight_controller__DOT__int_r__DOT__avail;
    vlSelfRef.tb_flight_controller__DOT__int_r__DOT__state 
        = vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__state;
    vlSelfRef.tb_flight_controller__DOT__int_r__DOT__data_latch 
        = vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__data_latch;
    vlSelfRef.tb_flight_controller__DOT__int_r__DOT__bytes 
        = vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__bytes;
    if ((4U & (IData)(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__rxm__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__rxm__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__rxm__DOT__state))) {
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__state = 0U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__count = 0U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__avail = 1U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__bits = 0U;
            } else {
                if (vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__int_tx) {
                    vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__state = 7U;
                    vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__avail = 1U;
                } else {
                    vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__state = 0U;
                    vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__avail = 0U;
                }
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__bits = 0U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__count = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__rxm__DOT__state))) {
            vlSelfRef.tb_flight_controller__DOT__int_r__DOT__data 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__rxm__DOT__bits))) 
                    & (IData)(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__data)) 
                   | (0xffU & ((IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__int_tx) 
                               << (IData)(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__rxm__DOT__bits))));
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__count = 0U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__avail = 0U;
            if ((7U == (IData)(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__rxm__DOT__bits))) {
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__state = 4U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__bits = 0U;
            } else {
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__bits 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__rxm__DOT__bits)));
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__state = 3U;
            }
        } else {
            if ((0xeaU > (IData)(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__rxm__DOT__count))) {
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__count 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__rxm__DOT__count)));
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__state = 4U;
            } else {
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__state = 6U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__count = 0U;
            }
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__avail = 0U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__bits = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__rxm__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__rxm__DOT__state))) {
            if ((0xeaU > (IData)(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__rxm__DOT__count))) {
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__count 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__rxm__DOT__count)));
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__state = 3U;
            } else {
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__state = 5U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__count = 0U;
            }
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__avail = 0U;
        } else {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__state 
                = ((IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__int_tx)
                    ? 0U : 3U);
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__bits = 0U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__avail = 0U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__count = 0U;
            vlSelfRef.tb_flight_controller__DOT__int_r__DOT__data = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__rxm__DOT__state))) {
        if ((0x75U > (IData)(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__rxm__DOT__count))) {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__count 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__rxm__DOT__count)));
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__state = 1U;
        } else {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__state = 2U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__count = 0U;
        }
        vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__bits = 0U;
        vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__avail = 0U;
        vlSelfRef.tb_flight_controller__DOT__int_r__DOT__data = 0U;
    } else {
        if (vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__int_tx) {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__avail 
                = vlSelfRef.tb_flight_controller__DOT__int_r__DOT__avail;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__state = 0U;
        } else {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__state = 1U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__avail = 0U;
            vlSelfRef.tb_flight_controller__DOT__int_r__DOT__data = 0U;
        }
        vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__count = 0U;
        vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__bits = 0U;
    }
    vlSelfRef.tb_flight_controller__DOT__int_r__DOT__rxm__DOT__state 
        = vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__state;
    vlSelfRef.tb_flight_controller__DOT__int_r__DOT__rxm__DOT__count 
        = vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__count;
    vlSelfRef.tb_flight_controller__DOT__int_r__DOT__rxm__DOT__bits 
        = vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__bits;
    vlSelfRef.tb_flight_controller__DOT__int_r__DOT__avail 
        = vlSelfRef.__Vdly__tb_flight_controller__DOT__int_r__DOT__avail;
    if ((4U & (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__state))) {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__state = 0U;
        } else if ((1U & (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__state))) {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__state = 0U;
        } else {
            if ((0xeaU > (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__count))) {
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__count 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__count)));
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__state = 4U;
            } else {
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__count = 0U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__state = 0U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__ready = 1U;
            }
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__bits = 0U;
            vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__int_tx = 1U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__copy_data = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__state))) {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__count = 0U;
            if ((7U == (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__bits))) {
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__bits = 0U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__state = 4U;
            } else {
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__bits 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__bits)));
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__state = 2U;
            }
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__ready = 0U;
        } else {
            if ((0xe9U > (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__count))) {
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__count 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__count)));
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__state = 2U;
            } else {
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__count = 0U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__state = 3U;
            }
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__ready = 0U;
            vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__int_tx 
                = (1U & ((IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__copy_data) 
                         >> (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__bits)));
        }
    } else if ((1U & (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__state))) {
        if ((0xeaU > (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__count))) {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__count 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__count)));
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__state = 1U;
        } else {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__count = 0U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__state = 2U;
        }
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__int_tx = 0U;
        vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__ready = 0U;
        vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__bits = 0U;
    } else {
        vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__count = 0U;
        if (vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__byte_send) {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__state = 1U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__copy_data 
                = vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__data_to_send;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__ready = 0U;
        } else {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__state = 0U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__copy_data = 0U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__ready = 1U;
        }
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__int_tx = 1U;
        vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__bits = 0U;
    }
    vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__state 
        = vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__state;
    vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__count 
        = vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__count;
    vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__bits 
        = vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__bits;
    vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__copy_data 
        = vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__copy_data;
    if ((2U & (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__state))) {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__bytes = 0U;
            if ((1U & ((~ (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__ready)) 
                       | (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__wait_a_bit)))) {
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__state = 3U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__wait_a_bit = 0U;
                vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_ready = 0U;
            } else {
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__state = 0U;
                vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_ready = 1U;
            }
            vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__data_to_send = 0U;
            vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__byte_send = 0U;
            vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_ready = 1U;
        } else {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__wait_a_bit = 1U;
            vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__byte_send = 1U;
            if ((2U & (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__bytes))) {
                if ((1U & (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__bytes))) {
                    vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__data_to_send 
                        = (vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__data_latch 
                           >> 0x18U);
                    vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_ready = 0U;
                    vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__state = 3U;
                    vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__bytes = 0U;
                } else {
                    vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__data_to_send 
                        = (0xffU & (vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__data_latch 
                                    >> 0x10U));
                    vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_ready = 0U;
                    vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__state = 1U;
                    vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__bytes = 3U;
                }
            } else if ((1U & (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__bytes))) {
                vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__data_to_send 
                    = (0xffU & (vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__data_latch 
                                >> 8U));
                vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_ready = 0U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__state = 1U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__bytes = 2U;
            } else {
                vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__data_to_send 
                    = (0xffU & vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__data_latch);
                vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_ready = 0U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__state = 1U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__bytes = 1U;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__state))) {
        vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__bytes 
            = vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__bytes;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_ready = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__byte_send = 0U;
        if ((1U & ((~ (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__ready)) 
                   | (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__wait_a_bit)))) {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__wait_a_bit = 0U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__state = 1U;
        } else {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__state = 2U;
        }
    } else {
        vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__wait_a_bit = 0U;
        if (vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_send) {
            vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__data_latch 
                = vlSelfRef.tb_flight_controller__DOT__fc__DOT__result;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__state = 1U;
            vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_ready = 0U;
        } else {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__state = 0U;
            vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__data_latch = 0U;
            vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_ready = 1U;
        }
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__data_to_send = 0U;
        vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__bytes = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__byte_send = 0U;
    }
    vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__ready 
        = vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__ready;
    vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__bytes 
        = vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__bytes;
    vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__state 
        = vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__state;
    vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__wait_a_bit 
        = vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__wait_a_bit;
    if ((4U & (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__state))) {
            if (VL_LIKELY(((1U & (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__state))))) {
                vlSelfRef.tb_flight_controller__DOT__fc__DOT__j = 3U;
                if ((3U > (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__count))) {
                    vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__count 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__count)));
                    vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__state = 7U;
                } else {
                    vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__count = 0U;
                    vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__state = 0U;
                }
                vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_send = 1U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__ints = 0U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__data_latch = 0U;
                vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v0 = 1U;
            } else {
                VL_WRITEF_NX("        -76        180\n",0);
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__count = 0U;
                vlSelfRef.tb_flight_controller__DOT__fc__DOT__j = 3U;
                if (VL_UNLIKELY(((VL_LTS_III(32, 0xffffffb4U, vlSelfRef.tb_flight_controller__DOT__fc__DOT__result) 
                                  & (0xb4U > vlSelfRef.tb_flight_controller__DOT__fc__DOT__result))))) {
                    VL_WRITEF_NX("case 1\n",0);
                    vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__result 
                        = ((IData)(0x4cU) + vlSelfRef.tb_flight_controller__DOT__fc__DOT__result);
                } else if ((VL_LTS_III(32, 0xffffffb4U, vlSelfRef.tb_flight_controller__DOT__fc__DOT__result) 
                            & (0xb4U <= vlSelfRef.tb_flight_controller__DOT__fc__DOT__result))) {
                    VL_WRITEF_NX("case 2\n",0);
                    vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__result = 0x100U;
                } else {
                    VL_WRITEF_NX("case 3\n",0);
                    vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__result = 0U;
                }
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__state = 7U;
                vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_send = 0U;
                vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v3 = 1U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__ints = 0U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__data_latch = 0U;
                vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v4 = 1U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__state))) {
            if (VL_UNLIKELY(((0U == (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__count))))) {
                VL_WRITEF_NX("sum of pos = %10#\n",0,
                             32,((vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions
                                  [0U] + vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions
                                  [1U]) + vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions
                                 [2U]));
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__count 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__count)));
                VL_WRITEF_NX("height = %10#\n",0,32,
                             (((vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions
                                [0U] + vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions
                                [1U]) + vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions
                               [2U]) - (IData)(0x33aa9000U)));
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__state = 5U;
                VL_WRITEF_NX("transformed height 1: %10#\ntransformed height 2: %10#\nsum of velocities = %11d\nresult = %10#\n",0,
                             32,VL_SHIFTR_III(32,32,32, 
                                              (((vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions
                                                 [0U] 
                                                 + 
                                                 vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions
                                                 [1U]) 
                                                + vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions
                                                [2U]) 
                                               - (IData)(0x33aa9000U)), 3U),
                             32,VL_SHIFTR_III(32,32,32, 
                                              ((IData)(0x24U) 
                                               * VL_SHIFTR_III(32,32,32, 
                                                               (((vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions
                                                                  [0U] 
                                                                  + 
                                                                  vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions
                                                                  [1U]) 
                                                                 + 
                                                                 vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions
                                                                 [2U]) 
                                                                - (IData)(0x33aa9000U)), 3U)), 8U),
                             32,((vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities
                                  [0U] + vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities
                                  [1U]) + vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities
                                 [2U]),32,((IData)(0xffffffffU) 
                                           * ((IData)(0x80U) 
                                              + (VL_SHIFTR_III(32,32,32, 
                                                               ((IData)(0x24U) 
                                                                * 
                                                                VL_SHIFTR_III(32,32,32, 
                                                                              (((vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions
                                                                                [0U] 
                                                                                + 
                                                                                vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions
                                                                                [1U]) 
                                                                                + 
                                                                                vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions
                                                                                [2U]) 
                                                                               - (IData)(0x33aa9000U)), 3U)), 8U) 
                                                 + 
                                                 ((vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities
                                                   [0U] 
                                                   + 
                                                   vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities
                                                   [1U]) 
                                                  + 
                                                  vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities
                                                  [2U])))));
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__result 
                    = ((IData)(0xffffffffU) * ((IData)(0x80U) 
                                               + (VL_SHIFTR_III(32,32,32, 
                                                                ((IData)(0x24U) 
                                                                 * 
                                                                 VL_SHIFTR_III(32,32,32, 
                                                                               (((vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions
                                                                                [0U] 
                                                                                + 
                                                                                vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions
                                                                                [1U]) 
                                                                                + 
                                                                                vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions
                                                                                [2U]) 
                                                                                - (IData)(0x33aa9000U)), 3U)), 8U) 
                                                  + 
                                                  ((vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities
                                                    [0U] 
                                                    + 
                                                    vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities
                                                    [1U]) 
                                                   + 
                                                   vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities
                                                   [2U]))));
            } else if ((0x64U == (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__count))) {
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__count = 0U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__state = 6U;
            } else {
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__count 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__count)));
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__state = 5U;
            }
            vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_send = 0U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__ints = 0U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__data_latch = 0U;
        } else if ((0xaaaaaaaaU == vlSelfRef.tb_flight_controller__DOT__fc__DOT__data_latch)) {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__count = 0U;
            vlSelfRef.tb_flight_controller__DOT__fc__DOT__j = 3U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__result = 0U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__state = 1U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__ints = 0U;
            vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v6 = 1U;
            vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_send = 0U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__data_latch = 0U;
            vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v7 = 1U;
        } else {
            if ((0U == (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__ints))) {
                __VdlyVal__tb_flight_controller__DOT__fc__DOT__velocities__v9 
                    = vlSelfRef.tb_flight_controller__DOT__fc__DOT__data_latch;
                vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__velocities__v9 = 1U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__ints = 1U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__state = 3U;
            } else if ((1U == (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__ints))) {
                __VdlyVal__tb_flight_controller__DOT__fc__DOT__velocities__v10 
                    = vlSelfRef.tb_flight_controller__DOT__fc__DOT__data_latch;
                vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__velocities__v10 = 1U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__ints = 2U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__state = 3U;
            } else if ((2U == (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__ints))) {
                __VdlyVal__tb_flight_controller__DOT__fc__DOT__velocities__v11 
                    = vlSelfRef.tb_flight_controller__DOT__fc__DOT__data_latch;
                vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__velocities__v11 = 1U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__ints = 0U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__state = 5U;
            } else {
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__count = 0U;
                vlSelfRef.tb_flight_controller__DOT__fc__DOT__j = 3U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__result = 0U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__state = 0U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__ints = 0U;
                vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v9 = 1U;
                vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_send = 0U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__data_latch = 0U;
                vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v10 = 1U;
            }
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__count = 0U;
            vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_send = 0U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__result = 0U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__data_latch = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__state))) {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__count = 0U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__result = 0U;
            if (((~ (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__prev_avail)) 
                 & (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_avail))) {
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__state = 4U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__data_latch 
                    = vlSelfRef.tb_flight_controller__DOT__fc__DOT__received_int;
            } else {
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__state = 3U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__data_latch = 0U;
            }
            vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_send = 0U;
        } else if ((0xaaaaaaaaU == vlSelfRef.tb_flight_controller__DOT__fc__DOT__data_latch)) {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__count = 0U;
            vlSelfRef.tb_flight_controller__DOT__fc__DOT__j = 3U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__result = 0U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__state = 1U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__ints = 0U;
            vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v12 = 1U;
            vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_send = 0U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__data_latch = 0U;
            vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v13 = 1U;
        } else {
            if ((0U == (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__ints))) {
                __VdlyVal__tb_flight_controller__DOT__fc__DOT__positions__v15 
                    = (VL_GTS_III(32, 0U, vlSelfRef.tb_flight_controller__DOT__fc__DOT__data_latch)
                        ? VL_MULS_III(32, (IData)(0xffffffffU), vlSelfRef.tb_flight_controller__DOT__fc__DOT__data_latch)
                        : vlSelfRef.tb_flight_controller__DOT__fc__DOT__data_latch);
                vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v15 = 1U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__ints = 1U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__state = 1U;
            } else if ((1U == (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__ints))) {
                __VdlyVal__tb_flight_controller__DOT__fc__DOT__positions__v16 
                    = (VL_GTS_III(32, 0U, vlSelfRef.tb_flight_controller__DOT__fc__DOT__data_latch)
                        ? VL_MULS_III(32, (IData)(0xffffffffU), vlSelfRef.tb_flight_controller__DOT__fc__DOT__data_latch)
                        : vlSelfRef.tb_flight_controller__DOT__fc__DOT__data_latch);
                vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v16 = 1U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__ints = 2U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__state = 1U;
            } else if ((2U == (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__ints))) {
                __VdlyVal__tb_flight_controller__DOT__fc__DOT__positions__v17 
                    = (VL_GTS_III(32, 0U, vlSelfRef.tb_flight_controller__DOT__fc__DOT__data_latch)
                        ? VL_MULS_III(32, (IData)(0xffffffffU), vlSelfRef.tb_flight_controller__DOT__fc__DOT__data_latch)
                        : vlSelfRef.tb_flight_controller__DOT__fc__DOT__data_latch);
                vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v17 = 1U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__ints = 0U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__state = 3U;
            } else {
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__count = 0U;
                vlSelfRef.tb_flight_controller__DOT__fc__DOT__j = 3U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__result = 0U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__state = 0U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__ints = 0U;
                vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v18 = 1U;
                vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_send = 0U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__data_latch = 0U;
                vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v19 = 1U;
            }
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__count = 0U;
            vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_send = 0U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__result = 0U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__data_latch = 0U;
            vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__velocities__v21 = 1U;
            vlSelfRef.tb_flight_controller__DOT__fc__DOT__j = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__state))) {
        vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__count = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__j = 3U;
        vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__result = 0U;
        if (((~ (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__prev_avail)) 
             & (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_avail))) {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__state = 2U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__data_latch 
                = vlSelfRef.tb_flight_controller__DOT__fc__DOT__received_int;
        } else {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__state = 1U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__data_latch = 0U;
        }
        vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__velocities__v24 = 1U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_send = 0U;
        vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__velocities__v25 = 1U;
    } else {
        vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__count = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__j = 3U;
        vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__result = 0U;
        vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__state 
            = (((IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_avail) 
                & (0xaaaaaaaaU == vlSelfRef.tb_flight_controller__DOT__fc__DOT__received_int))
                ? 1U : 0U);
        vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__ints = 0U;
        vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v21 = 1U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_send = 0U;
        vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__data_latch = 0U;
        vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v22 = 1U;
    }
    vlSelfRef.tb_flight_controller__DOT__fc__DOT__count 
        = vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__count;
    vlSelfRef.tb_flight_controller__DOT__fc__DOT__state 
        = vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__state;
    vlSelfRef.tb_flight_controller__DOT__fc__DOT__ints 
        = vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__ints;
    vlSelfRef.tb_flight_controller__DOT__fc__DOT__data_latch 
        = vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__data_latch;
    vlSelfRef.tb_flight_controller__DOT__fc__DOT__result 
        = vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__result;
    if (vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__velocities__v9) {
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities[0U] 
            = __VdlyVal__tb_flight_controller__DOT__fc__DOT__velocities__v9;
    }
    if (vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__velocities__v10) {
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities[1U] 
            = __VdlyVal__tb_flight_controller__DOT__fc__DOT__velocities__v10;
    }
    if (vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__velocities__v11) {
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities[2U] 
            = __VdlyVal__tb_flight_controller__DOT__fc__DOT__velocities__v11;
    }
    if (vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__velocities__v21) {
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities[0U] = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities[1U] = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities[2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__velocities__v24) {
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__velocities__v25) {
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities[1U] = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities[2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v0) {
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions[0U] = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities[0U] = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions[1U] = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities[1U] = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions[2U] = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities[2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v3) {
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions[0U] = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v4) {
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions[1U] = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities[1U] = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions[2U] = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities[2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v6) {
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions[0U] = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v7) {
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions[1U] = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities[1U] = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions[2U] = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities[2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v9) {
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions[0U] = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v10) {
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions[1U] = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities[1U] = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions[2U] = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities[2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v12) {
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions[0U] = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v13) {
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions[1U] = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities[1U] = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions[2U] = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities[2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v15) {
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions[0U] 
            = __VdlyVal__tb_flight_controller__DOT__fc__DOT__positions__v15;
    }
    if (vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v16) {
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions[1U] 
            = __VdlyVal__tb_flight_controller__DOT__fc__DOT__positions__v16;
    }
    if (vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v17) {
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions[2U] 
            = __VdlyVal__tb_flight_controller__DOT__fc__DOT__positions__v17;
    }
    if (vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v18) {
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions[0U] = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v19) {
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions[1U] = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities[1U] = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions[2U] = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities[2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v21) {
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions[0U] = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v22) {
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions[1U] = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities[1U] = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__positions[2U] = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__velocities[2U] = 0U;
    }
    vlSelfRef.tb_flight_controller__DOT__fc__DOT__prev_avail 
        = vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_avail;
    if ((0U == (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__state))) {
        if (((~ (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__prev_avail)) 
             & (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__avail))) {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__state = 1U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__data_latch 
                = vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__data;
            vlSelfRef.tb_flight_controller__DOT__fc__DOT__received_int = 0U;
            vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_avail = 0U;
        } else {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__state = 0U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__data_latch = 0U;
        }
        vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__bytes = 0U;
    } else if ((1U == (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__bytes))) {
            if ((1U & (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__bytes))) {
                VL_WRITEF_NX("getting 4 %3#\n",0,8,
                             vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__data_latch);
                vlSelfRef.tb_flight_controller__DOT__fc__DOT__received_int 
                    = ((0xffffffU & vlSelfRef.tb_flight_controller__DOT__fc__DOT__received_int) 
                       | ((IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__data_latch) 
                          << 0x18U));
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__state = 0U;
                vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_avail = 1U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__bytes = 0U;
            } else {
                VL_WRITEF_NX("getting 3 %3#\n",0,8,
                             vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__data_latch);
                vlSelfRef.tb_flight_controller__DOT__fc__DOT__received_int 
                    = ((0xff00ffffU & vlSelfRef.tb_flight_controller__DOT__fc__DOT__received_int) 
                       | ((IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__data_latch) 
                          << 0x10U));
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__state = 2U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__bytes = 3U;
                vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_avail = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__bytes))) {
            VL_WRITEF_NX("getting 2 %3#\n",0,8,vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__data_latch);
            vlSelfRef.tb_flight_controller__DOT__fc__DOT__received_int 
                = ((0xffff00ffU & vlSelfRef.tb_flight_controller__DOT__fc__DOT__received_int) 
                   | ((IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__data_latch) 
                      << 8U));
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__state = 2U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__bytes = 2U;
            vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_avail = 0U;
        } else {
            VL_WRITEF_NX("getting 1 %3#\n",0,8,vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__data_latch);
            vlSelfRef.tb_flight_controller__DOT__fc__DOT__received_int 
                = ((0xffffff00U & vlSelfRef.tb_flight_controller__DOT__fc__DOT__received_int) 
                   | (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__data_latch));
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__state = 2U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__bytes = 1U;
            vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_avail = 0U;
        }
    } else if ((2U == (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__state))) {
        if (VL_UNLIKELY((((~ (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__prev_avail)) 
                          & (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__avail))))) {
            VL_WRITEF_NX("receiver latching %3#\n",0,
                         8,vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__data);
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__bytes 
                = vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__bytes;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__state = 1U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__data_latch 
                = vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__data;
            vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_avail = 0U;
        } else {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__bytes 
                = vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__bytes;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__state = 2U;
            vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_avail = 0U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__data_latch = 0U;
        }
    } else {
        vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__bytes = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__received_int = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__prev_avail = 0U;
        vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__state = 0U;
        vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__data_latch = 0U;
    }
    vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__prev_avail 
        = vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__avail;
    vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__state 
        = vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__state;
    vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__data_latch 
        = vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__data_latch;
    vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__bytes 
        = vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__bytes;
    if ((4U & (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__state))) {
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__state = 0U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__count = 0U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__avail = 1U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__bits = 0U;
            } else {
                if (vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__int_tx) {
                    vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__state = 7U;
                    vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__avail = 1U;
                } else {
                    vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__state = 0U;
                    vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__avail = 0U;
                }
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__bits = 0U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__count = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__state))) {
            vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__data 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__bits))) 
                    & (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__data)) 
                   | (0xffU & ((IData)(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__int_tx) 
                               << (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__bits))));
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__count = 0U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__avail = 0U;
            if ((7U == (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__bits))) {
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__state = 4U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__bits = 0U;
            } else {
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__bits 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__bits)));
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__state = 3U;
            }
        } else {
            if ((0xeaU > (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__count))) {
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__count 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__count)));
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__state = 4U;
            } else {
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__state = 6U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__count = 0U;
            }
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__avail = 0U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__bits = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__state))) {
            if ((0xeaU > (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__count))) {
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__count 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__count)));
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__state = 3U;
            } else {
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__state = 5U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__count = 0U;
            }
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__avail = 0U;
        } else {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__state 
                = ((IData)(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__int_tx)
                    ? 0U : 3U);
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__bits = 0U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__avail = 0U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__count = 0U;
            vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__data = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__state))) {
        if ((0x75U > (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__count))) {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__count 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__count)));
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__state = 1U;
        } else {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__state = 2U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__count = 0U;
        }
        vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__bits = 0U;
        vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__avail = 0U;
        vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__data = 0U;
    } else {
        if (vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__int_tx) {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__avail 
                = vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__avail;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__state = 0U;
        } else {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__state = 1U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__avail = 0U;
            vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__data = 0U;
        }
        vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__count = 0U;
        vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__bits = 0U;
    }
    vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__state 
        = vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__state;
    vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__count 
        = vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__count;
    vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__bits 
        = vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__bits;
    vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__avail 
        = vlSelfRef.__Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__avail;
    if ((4U & (IData)(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__state))) {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__state = 0U;
        } else if ((1U & (IData)(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__state))) {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__state = 0U;
        } else {
            if ((0xeaU > (IData)(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__count))) {
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__count 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__count)));
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__state = 4U;
            } else {
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__count = 0U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__state = 0U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__ready = 1U;
            }
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__bits = 0U;
            vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__int_tx = 1U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__copy_data = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__state))) {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__count = 0U;
            if ((7U == (IData)(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__bits))) {
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__bits = 0U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__state = 4U;
            } else {
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__bits 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__bits)));
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__state = 2U;
            }
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__ready = 0U;
        } else {
            if ((0xe9U > (IData)(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__count))) {
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__count 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__count)));
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__state = 2U;
            } else {
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__count = 0U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__state = 3U;
            }
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__ready = 0U;
            vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__int_tx 
                = (1U & ((IData)(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__copy_data) 
                         >> (IData)(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__bits)));
        }
    } else if ((1U & (IData)(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__state))) {
        if ((0xeaU > (IData)(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__count))) {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__count 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__count)));
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__state = 1U;
        } else {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__count = 0U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__state = 2U;
        }
        vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__int_tx = 0U;
        vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__ready = 0U;
        vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__bits = 0U;
    } else {
        vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__count = 0U;
        if (vlSelfRef.tb_flight_controller__DOT__int_s__DOT__byte_send) {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__state = 1U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__copy_data 
                = vlSelfRef.tb_flight_controller__DOT__int_s__DOT__data_to_send;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__ready = 0U;
        } else {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__state = 0U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__copy_data = 0U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__ready = 1U;
        }
        vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__int_tx = 1U;
        vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__bits = 0U;
    }
    vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__state 
        = vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__state;
    vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__count 
        = vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__count;
    vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__bits 
        = vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__bits;
    vlSelfRef.tb_flight_controller__DOT__int_s__DOT__txm__DOT__copy_data 
        = vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__copy_data;
    if ((2U & (IData)(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__state))) {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__bytes = 0U;
            if ((1U & ((~ (IData)(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__ready)) 
                       | (IData)(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__wait_a_bit)))) {
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__state = 3U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__wait_a_bit = 0U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__ready = 0U;
            } else {
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__state = 0U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__ready = 1U;
            }
            vlSelfRef.tb_flight_controller__DOT__int_s__DOT__data_to_send = 0U;
            vlSelfRef.tb_flight_controller__DOT__int_s__DOT__byte_send = 0U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__ready = 1U;
        } else {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__wait_a_bit = 1U;
            vlSelfRef.tb_flight_controller__DOT__int_s__DOT__byte_send = 1U;
            if ((2U & (IData)(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__bytes))) {
                if ((1U & (IData)(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__bytes))) {
                    vlSelfRef.tb_flight_controller__DOT__int_s__DOT__data_to_send 
                        = (vlSelfRef.tb_flight_controller__DOT__int_s__DOT__data_latch 
                           >> 0x18U);
                    vlSelfRef.__Vdly__tb_flight_controller__DOT__ready = 0U;
                    vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__state = 3U;
                    vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__bytes = 0U;
                } else {
                    vlSelfRef.tb_flight_controller__DOT__int_s__DOT__data_to_send 
                        = (0xffU & (vlSelfRef.tb_flight_controller__DOT__int_s__DOT__data_latch 
                                    >> 0x10U));
                    vlSelfRef.__Vdly__tb_flight_controller__DOT__ready = 0U;
                    vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__state = 1U;
                    vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__bytes = 3U;
                }
            } else if ((1U & (IData)(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__bytes))) {
                vlSelfRef.tb_flight_controller__DOT__int_s__DOT__data_to_send 
                    = (0xffU & (vlSelfRef.tb_flight_controller__DOT__int_s__DOT__data_latch 
                                >> 8U));
                vlSelfRef.__Vdly__tb_flight_controller__DOT__ready = 0U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__state = 1U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__bytes = 2U;
            } else {
                vlSelfRef.tb_flight_controller__DOT__int_s__DOT__data_to_send 
                    = (0xffU & vlSelfRef.tb_flight_controller__DOT__int_s__DOT__data_latch);
                vlSelfRef.__Vdly__tb_flight_controller__DOT__ready = 0U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__state = 1U;
                vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__bytes = 1U;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__state))) {
        vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__bytes 
            = vlSelfRef.tb_flight_controller__DOT__int_s__DOT__bytes;
        vlSelfRef.__Vdly__tb_flight_controller__DOT__ready = 0U;
        vlSelfRef.tb_flight_controller__DOT__int_s__DOT__byte_send = 0U;
        if ((1U & ((~ (IData)(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__ready)) 
                   | (IData)(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__wait_a_bit)))) {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__wait_a_bit = 0U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__state = 1U;
        } else {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__state = 2U;
        }
    } else {
        vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__wait_a_bit = 0U;
        if (vlSelfRef.tb_flight_controller__DOT__send) {
            vlSelfRef.tb_flight_controller__DOT__int_s__DOT__data_latch 
                = vlSelfRef.tb_flight_controller__DOT__data;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__state = 1U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__ready = 0U;
        } else {
            vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__state = 0U;
            vlSelfRef.tb_flight_controller__DOT__int_s__DOT__data_latch = 0U;
            vlSelfRef.__Vdly__tb_flight_controller__DOT__ready = 1U;
        }
        vlSelfRef.tb_flight_controller__DOT__int_s__DOT__data_to_send = 0U;
        vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__bytes = 0U;
        vlSelfRef.tb_flight_controller__DOT__int_s__DOT__byte_send = 0U;
    }
    vlSelfRef.tb_flight_controller__DOT__int_s__DOT__ready 
        = vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__ready;
    vlSelfRef.tb_flight_controller__DOT__int_s__DOT__bytes 
        = vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__bytes;
    vlSelfRef.tb_flight_controller__DOT__int_s__DOT__state 
        = vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__state;
    vlSelfRef.tb_flight_controller__DOT__int_s__DOT__wait_a_bit 
        = vlSelfRef.__Vdly__tb_flight_controller__DOT__int_s__DOT__wait_a_bit;
}

VL_INLINE_OPT void Vtb_flight_controller___024root___nba_sequent__TOP__15(Vtb_flight_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root___nba_sequent__TOP__15\n"); );
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_flight_controller__DOT__send = vlSelfRef.tb_flight_controller__DOT__ready;
}

VL_INLINE_OPT void Vtb_flight_controller___024root___nba_sequent__TOP__16(Vtb_flight_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root___nba_sequent__TOP__16\n"); );
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_flight_controller__DOT__ready = vlSelfRef.__Vdly__tb_flight_controller__DOT__ready;
}

void Vtb_flight_controller___024root___timing_resume(Vtb_flight_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root___timing_resume\n"); );
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x40000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_flight_controller___024root___eval_triggers__act(Vtb_flight_controller___024root* vlSelf);

bool Vtb_flight_controller___024root___eval_phase__act(Vtb_flight_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root___eval_phase__act\n"); );
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<19> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_flight_controller___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_flight_controller___024root___timing_resume(vlSelf);
        Vtb_flight_controller___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_flight_controller___024root___eval_phase__nba(Vtb_flight_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root___eval_phase__nba\n"); );
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_flight_controller___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_flight_controller___024root___dump_triggers__nba(Vtb_flight_controller___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_flight_controller___024root___dump_triggers__act(Vtb_flight_controller___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_flight_controller___024root___eval(Vtb_flight_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root___eval\n"); );
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_flight_controller___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_flight_controller.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_flight_controller___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_flight_controller.v", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_flight_controller___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_flight_controller___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_flight_controller___024root___eval_debug_assertions(Vtb_flight_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root___eval_debug_assertions\n"); );
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
