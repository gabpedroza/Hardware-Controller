// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_flooder_int.h for the primary calling header

#include "Vtb_flooder_int__pch.h"
#include "Vtb_flooder_int___024root.h"

VlCoroutine Vtb_flooder_int___024root___eval_initial__TOP__Vtiming__0(Vtb_flooder_int___024root* vlSelf);

void Vtb_flooder_int___024root___eval_initial(Vtb_flooder_int___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flooder_int___024root___eval_initial\n"); );
    Vtb_flooder_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_flooder_int___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_flooder_int__DOT__avail__0 
        = vlSelfRef.tb_flooder_int__DOT__avail;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_flooder_int__DOT__flod__DOT__sender__DOT__state__0 
        = vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__state;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_flooder_int__DOT__clock__0 
        = vlSelfRef.tb_flooder_int__DOT__clock;
}

VL_INLINE_OPT VlCoroutine Vtb_flooder_int___024root___eval_initial__TOP__Vtiming__0(Vtb_flooder_int___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flooder_int___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_flooder_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x4650ULL, 
                                             nullptr, 
                                             "tb_flooder_int.v", 
                                             12);
        vlSelfRef.tb_flooder_int__DOT__clock = (1U 
                                                & (~ (IData)(vlSelfRef.tb_flooder_int__DOT__clock)));
    }
}

void Vtb_flooder_int___024root___eval_act(Vtb_flooder_int___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flooder_int___024root___eval_act\n"); );
    Vtb_flooder_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_flooder_int___024root___nba_sequent__TOP__0(Vtb_flooder_int___024root* vlSelf);
void Vtb_flooder_int___024root___nba_sequent__TOP__1(Vtb_flooder_int___024root* vlSelf);
void Vtb_flooder_int___024root___nba_sequent__TOP__2(Vtb_flooder_int___024root* vlSelf);
void Vtb_flooder_int___024root___nba_sequent__TOP__3(Vtb_flooder_int___024root* vlSelf);

void Vtb_flooder_int___024root___eval_nba(Vtb_flooder_int___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flooder_int___024root___eval_nba\n"); );
    Vtb_flooder_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_flooder_int___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_flooder_int___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_flooder_int___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_flooder_int___024root___nba_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_flooder_int___024root___nba_sequent__TOP__0(Vtb_flooder_int___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flooder_int___024root___nba_sequent__TOP__0\n"); );
    Vtb_flooder_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("state = %1#\n",0,2,vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__state);
}

VL_INLINE_OPT void Vtb_flooder_int___024root___nba_sequent__TOP__1(Vtb_flooder_int___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flooder_int___024root___nba_sequent__TOP__1\n"); );
    Vtb_flooder_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__state 
        = vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__state;
    vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__bytes 
        = vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__bytes;
    vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__wait_a_bit 
        = vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__wait_a_bit;
    vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__state 
        = vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__state;
    vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__count 
        = vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__count;
    vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__ready 
        = vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__ready;
    vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__bits 
        = vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__bits;
    vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__copy_data 
        = vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__copy_data;
    vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__count 
        = vlSelfRef.tb_flooder_int__DOT__rxm__DOT__count;
    vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__state 
        = vlSelfRef.tb_flooder_int__DOT__rxm__DOT__state;
    vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__bits 
        = vlSelfRef.tb_flooder_int__DOT__rxm__DOT__bits;
    vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__prev_send = 1U;
}

VL_INLINE_OPT void Vtb_flooder_int___024root___nba_sequent__TOP__2(Vtb_flooder_int___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flooder_int___024root___nba_sequent__TOP__2\n"); );
    Vtb_flooder_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("received %3#\n",0,8,vlSelfRef.tb_flooder_int__DOT__data_out);
}

VL_INLINE_OPT void Vtb_flooder_int___024root___nba_sequent__TOP__3(Vtb_flooder_int___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flooder_int___024root___nba_sequent__TOP__3\n"); );
    Vtb_flooder_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4U & (IData)(vlSelfRef.tb_flooder_int__DOT__rxm__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.tb_flooder_int__DOT__rxm__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_flooder_int__DOT__rxm__DOT__state))) {
                if ((0x75U > (IData)(vlSelfRef.tb_flooder_int__DOT__rxm__DOT__count))) {
                    vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__count 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_flooder_int__DOT__rxm__DOT__count)));
                    vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__state = 7U;
                } else {
                    vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__count = 0U;
                    vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__state = 0U;
                }
                vlSelfRef.tb_flooder_int__DOT__avail = 1U;
                vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__bits = 0U;
            } else {
                vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__count = 0U;
                if (vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__int_tx) {
                    vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__state = 7U;
                    vlSelfRef.tb_flooder_int__DOT__avail = 1U;
                } else {
                    vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__state = 0U;
                    vlSelfRef.tb_flooder_int__DOT__avail = 0U;
                }
                vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__bits = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_flooder_int__DOT__rxm__DOT__state))) {
            vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__count = 0U;
            vlSelfRef.tb_flooder_int__DOT__data_out 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_flooder_int__DOT__rxm__DOT__bits))) 
                    & (IData)(vlSelfRef.tb_flooder_int__DOT__data_out)) 
                   | (0xffU & ((IData)(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__int_tx) 
                               << (IData)(vlSelfRef.tb_flooder_int__DOT__rxm__DOT__bits))));
            vlSelfRef.tb_flooder_int__DOT__avail = 0U;
            if ((7U == (IData)(vlSelfRef.tb_flooder_int__DOT__rxm__DOT__bits))) {
                vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__state = 4U;
                vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__bits = 0U;
            } else {
                vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__bits 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_flooder_int__DOT__rxm__DOT__bits)));
                vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__state = 3U;
            }
        } else {
            if ((0xeaU > (IData)(vlSelfRef.tb_flooder_int__DOT__rxm__DOT__count))) {
                vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__count 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_flooder_int__DOT__rxm__DOT__count)));
                vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__state = 4U;
            } else {
                vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__count = 0U;
                vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__state = 6U;
            }
            vlSelfRef.tb_flooder_int__DOT__avail = 0U;
            vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__bits = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.tb_flooder_int__DOT__rxm__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.tb_flooder_int__DOT__rxm__DOT__state))) {
            if ((0xeaU > (IData)(vlSelfRef.tb_flooder_int__DOT__rxm__DOT__count))) {
                vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__count 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_flooder_int__DOT__rxm__DOT__count)));
                vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__state = 3U;
            } else {
                vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__count = 0U;
                vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__state = 5U;
            }
            vlSelfRef.tb_flooder_int__DOT__avail = 0U;
        } else {
            vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__count = 0U;
            vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__state 
                = ((IData)(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__int_tx)
                    ? 0U : 3U);
            vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__bits = 0U;
            vlSelfRef.tb_flooder_int__DOT__avail = 0U;
            vlSelfRef.tb_flooder_int__DOT__data_out = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.tb_flooder_int__DOT__rxm__DOT__state))) {
        if ((0x75U > (IData)(vlSelfRef.tb_flooder_int__DOT__rxm__DOT__count))) {
            vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__count 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_flooder_int__DOT__rxm__DOT__count)));
            vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__state = 1U;
        } else {
            vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__count = 0U;
            vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__state = 2U;
        }
        vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__bits = 0U;
        vlSelfRef.tb_flooder_int__DOT__avail = 0U;
        vlSelfRef.tb_flooder_int__DOT__data_out = 0U;
    } else {
        vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__count = 0U;
        if (vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__int_tx) {
            vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__state = 0U;
            vlSelfRef.tb_flooder_int__DOT__avail = 1U;
        } else {
            vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__state = 1U;
            vlSelfRef.tb_flooder_int__DOT__avail = 0U;
            vlSelfRef.tb_flooder_int__DOT__data_out = 0U;
        }
        vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__bits = 0U;
    }
    vlSelfRef.tb_flooder_int__DOT__rxm__DOT__count 
        = vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__count;
    vlSelfRef.tb_flooder_int__DOT__rxm__DOT__state 
        = vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__state;
    vlSelfRef.tb_flooder_int__DOT__rxm__DOT__bits = vlSelfRef.__Vdly__tb_flooder_int__DOT__rxm__DOT__bits;
    if ((4U & (IData)(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__state))) {
            vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__state = 0U;
        } else if ((1U & (IData)(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__state))) {
            vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__state = 0U;
        } else {
            if ((0xeaU > (IData)(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__count))) {
                vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__count 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__count)));
                vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__state = 4U;
            } else {
                vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__count = 0U;
                vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__state = 0U;
                vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__ready = 1U;
            }
            vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__bits = 0U;
            vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__int_tx = 1U;
            vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__copy_data = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__state))) {
            vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__count = 0U;
            if ((7U == (IData)(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__bits))) {
                vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__bits = 0U;
                vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__state = 4U;
            } else {
                vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__bits 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__bits)));
                vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__state = 2U;
            }
            vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__ready = 0U;
        } else {
            if ((0xe9U > (IData)(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__count))) {
                vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__count 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__count)));
                vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__state = 2U;
            } else {
                vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__count = 0U;
                vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__state = 3U;
            }
            vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__ready = 0U;
            vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__int_tx 
                = (1U & ((IData)(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__copy_data) 
                         >> (IData)(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__bits)));
        }
    } else if ((1U & (IData)(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__state))) {
        if ((0xeaU > (IData)(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__count))) {
            vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__count 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__count)));
            vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__state = 1U;
        } else {
            vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__count = 0U;
            vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__state = 2U;
        }
        vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__int_tx = 0U;
        vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__ready = 0U;
        vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__bits = 0U;
    } else {
        vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__count = 0U;
        if (vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__byte_send) {
            vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__state = 1U;
            vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__copy_data 
                = vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__data_to_send;
            vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__ready = 0U;
        } else {
            vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__state = 0U;
            vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__copy_data = 0U;
            vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__ready = 1U;
        }
        vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__int_tx = 1U;
        vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__bits = 0U;
    }
    vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__state 
        = vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__state;
    vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__count 
        = vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__count;
    vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__bits 
        = vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__bits;
    vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__copy_data 
        = vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__txm__DOT__copy_data;
    if ((2U & (IData)(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__state))) {
            vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__state = 0U;
            vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__bytes = 0U;
            vlSelfRef.tb_flooder_int__DOT__flod__DOT__ready = 1U;
            vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__data_to_send = 0U;
            vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__byte_send = 0U;
            vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__wait_a_bit = 0U;
        } else {
            vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__byte_send = 1U;
            vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__wait_a_bit = 1U;
            if ((2U & (IData)(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__bytes))) {
                if ((1U & (IData)(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__bytes))) {
                    vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__data_to_send 
                        = (vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__data_latch 
                           >> 0x18U);
                    vlSelfRef.tb_flooder_int__DOT__flod__DOT__ready = 0U;
                    vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__state = 3U;
                    vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__bytes = 0U;
                } else {
                    vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__data_to_send 
                        = (0xffU & (vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__data_latch 
                                    >> 0x10U));
                    vlSelfRef.tb_flooder_int__DOT__flod__DOT__ready = 0U;
                    vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__state = 1U;
                    vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__bytes = 3U;
                }
            } else if ((1U & (IData)(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__bytes))) {
                vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__data_to_send 
                    = (0xffU & (vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__data_latch 
                                >> 8U));
                vlSelfRef.tb_flooder_int__DOT__flod__DOT__ready = 0U;
                vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__state = 1U;
                vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__bytes = 2U;
            } else {
                vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__data_to_send 
                    = (0xffU & vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__data_latch);
                vlSelfRef.tb_flooder_int__DOT__flod__DOT__ready = 0U;
                vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__state = 1U;
                vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__bytes = 1U;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__state))) {
        vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__bytes 
            = vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__bytes;
        vlSelfRef.tb_flooder_int__DOT__flod__DOT__ready = 0U;
        vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__byte_send = 0U;
        if ((1U & ((~ (IData)(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__ready)) 
                   | (IData)(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__wait_a_bit)))) {
            vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__state = 1U;
            vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__wait_a_bit = 0U;
        } else {
            vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__state = 2U;
        }
    } else {
        vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__data_latch = 0x41424344U;
        vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__state = 1U;
        vlSelfRef.tb_flooder_int__DOT__flod__DOT__ready = 0U;
        vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__data_to_send = 0U;
        vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__bytes = 0U;
        vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__byte_send = 0U;
        vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__wait_a_bit = 0U;
    }
    vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__ready 
        = vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__ready;
    vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__state 
        = vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__state;
    vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__bytes 
        = vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__bytes;
    vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__wait_a_bit 
        = vlSelfRef.__Vdly__tb_flooder_int__DOT__flod__DOT__sender__DOT__wait_a_bit;
}

void Vtb_flooder_int___024root___timing_resume(Vtb_flooder_int___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flooder_int___024root___timing_resume\n"); );
    Vtb_flooder_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_flooder_int___024root___eval_triggers__act(Vtb_flooder_int___024root* vlSelf);

bool Vtb_flooder_int___024root___eval_phase__act(Vtb_flooder_int___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flooder_int___024root___eval_phase__act\n"); );
    Vtb_flooder_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_flooder_int___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_flooder_int___024root___timing_resume(vlSelf);
        Vtb_flooder_int___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_flooder_int___024root___eval_phase__nba(Vtb_flooder_int___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flooder_int___024root___eval_phase__nba\n"); );
    Vtb_flooder_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_flooder_int___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_flooder_int___024root___dump_triggers__nba(Vtb_flooder_int___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_flooder_int___024root___dump_triggers__act(Vtb_flooder_int___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_flooder_int___024root___eval(Vtb_flooder_int___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flooder_int___024root___eval\n"); );
    Vtb_flooder_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_flooder_int___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_flooder_int.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_flooder_int___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_flooder_int.v", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_flooder_int___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_flooder_int___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_flooder_int___024root___eval_debug_assertions(Vtb_flooder_int___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flooder_int___024root___eval_debug_assertions\n"); );
    Vtb_flooder_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
