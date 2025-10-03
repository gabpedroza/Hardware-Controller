// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vflooder_test.h for the primary calling header

#include "Vflooder_test__pch.h"
#include "Vflooder_test___024root.h"

VlCoroutine Vflooder_test___024root___eval_initial__TOP__Vtiming__0(Vflooder_test___024root* vlSelf);
VlCoroutine Vflooder_test___024root___eval_initial__TOP__Vtiming__1(Vflooder_test___024root* vlSelf);

void Vflooder_test___024root___eval_initial(Vflooder_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflooder_test___024root___eval_initial\n"); );
    Vflooder_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vflooder_test___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vflooder_test___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__flooder_test__DOT__avail__0 
        = vlSelfRef.flooder_test__DOT__avail;
    vlSelfRef.__Vtrigprevexpr___TOP__flooder_test__DOT__clock__0 
        = vlSelfRef.flooder_test__DOT__clock;
}

VL_INLINE_OPT VlCoroutine Vflooder_test___024root___eval_initial__TOP__Vtiming__0(Vflooder_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflooder_test___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vflooder_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x4650ULL, 
                                             nullptr, 
                                             "flooder_test.v", 
                                             17);
        vlSelfRef.flooder_test__DOT__clock = (1U & 
                                              (~ (IData)(vlSelfRef.flooder_test__DOT__clock)));
    }
}

VL_INLINE_OPT VlCoroutine Vflooder_test___024root___eval_initial__TOP__Vtiming__1(Vflooder_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflooder_test___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vflooder_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x423920ULL, 
                                             nullptr, 
                                             "flooder_test.v", 
                                             13);
        vlSelfRef.flooder_test__DOT__period_clock = 
            (1U & (~ (IData)(vlSelfRef.flooder_test__DOT__period_clock)));
    }
}

void Vflooder_test___024root___eval_act(Vflooder_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflooder_test___024root___eval_act\n"); );
    Vflooder_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vflooder_test___024root___nba_sequent__TOP__0(Vflooder_test___024root* vlSelf);
void Vflooder_test___024root___nba_sequent__TOP__1(Vflooder_test___024root* vlSelf);
void Vflooder_test___024root___nba_sequent__TOP__2(Vflooder_test___024root* vlSelf);
void Vflooder_test___024root___nba_sequent__TOP__3(Vflooder_test___024root* vlSelf);

void Vflooder_test___024root___eval_nba(Vflooder_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflooder_test___024root___eval_nba\n"); );
    Vflooder_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vflooder_test___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vflooder_test___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vflooder_test___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vflooder_test___024root___nba_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vflooder_test___024root___nba_sequent__TOP__0(Vflooder_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflooder_test___024root___nba_sequent__TOP__0\n"); );
    Vflooder_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__count;
    __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__count = 0;
    CData/*2:0*/ __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__state;
    __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__state = 0;
    CData/*2:0*/ __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__bits;
    __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__bits = 0;
    // Body
    __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__count 
        = vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__count;
    __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__state 
        = vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__state;
    __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__bits 
        = vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__bits;
    vlSelfRef.__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__state 
        = vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__state;
    vlSelfRef.__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__count 
        = vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__count;
    vlSelfRef.__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__bits 
        = vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__bits;
    vlSelfRef.__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__copy_data 
        = vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__copy_data;
    vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__count 
        = vlSelfRef.flooder_test__DOT__rxm__DOT__count;
    vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__state 
        = vlSelfRef.flooder_test__DOT__rxm__DOT__state;
    vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__bits 
        = vlSelfRef.flooder_test__DOT__rxm__DOT__bits;
    if ((4U & (IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__state))) {
                if ((0x75U > (IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__count))) {
                    __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__count 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__count)));
                    __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__state = 7U;
                } else {
                    __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__count = 0U;
                    __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__state = 0U;
                }
                vlSelfRef.flooder_test__DOT__flod__DOT__avail = 1U;
                __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__bits = 0U;
            } else {
                __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__count = 0U;
                if (vlSelfRef.flooder_test__DOT__rx) {
                    __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__state = 7U;
                    vlSelfRef.flooder_test__DOT__flod__DOT__avail = 1U;
                } else {
                    __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__state = 0U;
                    vlSelfRef.flooder_test__DOT__flod__DOT__avail = 0U;
                }
                __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__bits = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__state))) {
            __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__count = 0U;
            vlSelfRef.flooder_test__DOT__flod__DOT__data_in 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__bits))) 
                    & (IData)(vlSelfRef.flooder_test__DOT__flod__DOT__data_in)) 
                   | (0xffU & ((IData)(vlSelfRef.flooder_test__DOT__rx) 
                               << (IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__bits))));
            vlSelfRef.flooder_test__DOT__flod__DOT__avail = 0U;
            if ((7U == (IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__bits))) {
                __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__state = 4U;
                __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__bits = 0U;
            } else {
                __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__bits 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__bits)));
                __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__state = 3U;
            }
        } else {
            if ((0xeaU > (IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__count))) {
                __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__count 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__count)));
                __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__state = 4U;
            } else {
                __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__count = 0U;
                __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__state = 6U;
            }
            vlSelfRef.flooder_test__DOT__flod__DOT__avail = 0U;
            __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__bits = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__state))) {
            if ((0xeaU > (IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__count))) {
                __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__count 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__count)));
                __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__state = 3U;
            } else {
                __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__count = 0U;
                __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__state = 5U;
            }
            vlSelfRef.flooder_test__DOT__flod__DOT__avail = 0U;
        } else {
            __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__count = 0U;
            __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__state 
                = ((IData)(vlSelfRef.flooder_test__DOT__rx)
                    ? 0U : 3U);
            __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__bits = 0U;
            vlSelfRef.flooder_test__DOT__flod__DOT__avail = 0U;
            vlSelfRef.flooder_test__DOT__flod__DOT__data_in = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__state))) {
        if ((0x75U > (IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__count))) {
            __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__count 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__count)));
            __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__state = 1U;
        } else {
            __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__count = 0U;
            __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__state = 2U;
        }
        __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__bits = 0U;
        vlSelfRef.flooder_test__DOT__flod__DOT__avail = 0U;
        vlSelfRef.flooder_test__DOT__flod__DOT__data_in = 0U;
    } else {
        __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__count = 0U;
        if (vlSelfRef.flooder_test__DOT__rx) {
            __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__state = 0U;
            vlSelfRef.flooder_test__DOT__flod__DOT__avail = 1U;
        } else {
            __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__state = 1U;
            vlSelfRef.flooder_test__DOT__flod__DOT__avail = 0U;
            vlSelfRef.flooder_test__DOT__flod__DOT__data_in = 0U;
        }
        __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__bits = 0U;
    }
    vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__count 
        = __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__count;
    vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__state 
        = __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__state;
    vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__bits 
        = __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__bits;
}

VL_INLINE_OPT void Vflooder_test___024root___nba_sequent__TOP__1(Vflooder_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflooder_test___024root___nba_sequent__TOP__1\n"); );
    Vflooder_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("received %3#\n",0,8,vlSelfRef.flooder_test__DOT__data_out);
}

VL_INLINE_OPT void Vflooder_test___024root___nba_sequent__TOP__2(Vflooder_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflooder_test___024root___nba_sequent__TOP__2\n"); );
    Vflooder_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.flooder_test__DOT__flod__DOT__half_clock 
        = (1U & (~ (IData)(vlSelfRef.flooder_test__DOT__flod__DOT__half_clock)));
}

VL_INLINE_OPT void Vflooder_test___024root___nba_sequent__TOP__3(Vflooder_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflooder_test___024root___nba_sequent__TOP__3\n"); );
    Vflooder_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4U & (IData)(vlSelfRef.flooder_test__DOT__rxm__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.flooder_test__DOT__rxm__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.flooder_test__DOT__rxm__DOT__state))) {
                if ((0x75U > (IData)(vlSelfRef.flooder_test__DOT__rxm__DOT__count))) {
                    vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__count 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.flooder_test__DOT__rxm__DOT__count)));
                    vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__state = 7U;
                } else {
                    vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__count = 0U;
                    vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__state = 0U;
                }
                vlSelfRef.flooder_test__DOT__avail = 1U;
                vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__bits = 0U;
            } else {
                vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__count = 0U;
                if (vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__int_tx) {
                    vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__state = 7U;
                    vlSelfRef.flooder_test__DOT__avail = 1U;
                } else {
                    vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__state = 0U;
                    vlSelfRef.flooder_test__DOT__avail = 0U;
                }
                vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__bits = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.flooder_test__DOT__rxm__DOT__state))) {
            vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__count = 0U;
            vlSelfRef.flooder_test__DOT__data_out = 
                (((~ ((IData)(1U) << (IData)(vlSelfRef.flooder_test__DOT__rxm__DOT__bits))) 
                  & (IData)(vlSelfRef.flooder_test__DOT__data_out)) 
                 | (0xffU & ((IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__int_tx) 
                             << (IData)(vlSelfRef.flooder_test__DOT__rxm__DOT__bits))));
            vlSelfRef.flooder_test__DOT__avail = 0U;
            if ((7U == (IData)(vlSelfRef.flooder_test__DOT__rxm__DOT__bits))) {
                vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__state = 4U;
                vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__bits = 0U;
            } else {
                vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__bits 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.flooder_test__DOT__rxm__DOT__bits)));
                vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__state = 3U;
            }
        } else {
            if ((0xeaU > (IData)(vlSelfRef.flooder_test__DOT__rxm__DOT__count))) {
                vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__count 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.flooder_test__DOT__rxm__DOT__count)));
                vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__state = 4U;
            } else {
                vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__count = 0U;
                vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__state = 6U;
            }
            vlSelfRef.flooder_test__DOT__avail = 0U;
            vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__bits = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.flooder_test__DOT__rxm__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.flooder_test__DOT__rxm__DOT__state))) {
            if ((0xeaU > (IData)(vlSelfRef.flooder_test__DOT__rxm__DOT__count))) {
                vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__count 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.flooder_test__DOT__rxm__DOT__count)));
                vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__state = 3U;
            } else {
                vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__count = 0U;
                vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__state = 5U;
            }
            vlSelfRef.flooder_test__DOT__avail = 0U;
        } else {
            vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__count = 0U;
            vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__state 
                = ((IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__int_tx)
                    ? 0U : 3U);
            vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__bits = 0U;
            vlSelfRef.flooder_test__DOT__avail = 0U;
            vlSelfRef.flooder_test__DOT__data_out = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.flooder_test__DOT__rxm__DOT__state))) {
        if ((0x75U > (IData)(vlSelfRef.flooder_test__DOT__rxm__DOT__count))) {
            vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__count 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.flooder_test__DOT__rxm__DOT__count)));
            vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__state = 1U;
        } else {
            vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__count = 0U;
            vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__state = 2U;
        }
        vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__bits = 0U;
        vlSelfRef.flooder_test__DOT__avail = 0U;
        vlSelfRef.flooder_test__DOT__data_out = 0U;
    } else {
        vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__count = 0U;
        if (vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__int_tx) {
            vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__state = 0U;
            vlSelfRef.flooder_test__DOT__avail = 1U;
        } else {
            vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__state = 1U;
            vlSelfRef.flooder_test__DOT__avail = 0U;
            vlSelfRef.flooder_test__DOT__data_out = 0U;
        }
        vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__bits = 0U;
    }
    vlSelfRef.flooder_test__DOT__rxm__DOT__count = vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__count;
    vlSelfRef.flooder_test__DOT__rxm__DOT__state = vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__state;
    vlSelfRef.flooder_test__DOT__rxm__DOT__bits = vlSelfRef.__Vdly__flooder_test__DOT__rxm__DOT__bits;
    if ((4U & (IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__state))) {
            vlSelfRef.__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__state = 0U;
        } else if ((1U & (IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__state))) {
            vlSelfRef.__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__state = 0U;
        } else {
            if ((0xeaU > (IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__count))) {
                vlSelfRef.__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__count 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__count)));
                vlSelfRef.__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__state = 4U;
            } else {
                vlSelfRef.__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__count = 0U;
                vlSelfRef.__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__state = 0U;
                vlSelfRef.flooder_test__DOT__flod__DOT__ready = 1U;
            }
            vlSelfRef.__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__bits = 0U;
            vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__int_tx = 1U;
            vlSelfRef.__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__copy_data = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__state))) {
            vlSelfRef.__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__count = 0U;
            if ((7U == (IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__bits))) {
                vlSelfRef.__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__bits = 0U;
                vlSelfRef.__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__state = 4U;
            } else {
                vlSelfRef.__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__bits 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__bits)));
                vlSelfRef.__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__state = 2U;
            }
            vlSelfRef.flooder_test__DOT__flod__DOT__ready = 0U;
        } else {
            if ((0xe9U > (IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__count))) {
                vlSelfRef.__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__count 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__count)));
                vlSelfRef.__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__state = 2U;
            } else {
                vlSelfRef.__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__count = 0U;
                vlSelfRef.__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__state = 3U;
            }
            vlSelfRef.flooder_test__DOT__flod__DOT__ready = 0U;
            vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__int_tx 
                = (1U & ((IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__copy_data) 
                         >> (IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__bits)));
        }
    } else if ((1U & (IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__state))) {
        if ((0xeaU > (IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__count))) {
            vlSelfRef.__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__count 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__count)));
            vlSelfRef.__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__state = 1U;
        } else {
            vlSelfRef.__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__count = 0U;
            vlSelfRef.__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__state = 2U;
        }
        vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__int_tx = 0U;
        vlSelfRef.flooder_test__DOT__flod__DOT__ready = 0U;
        vlSelfRef.__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__bits = 0U;
    } else {
        vlSelfRef.__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__count = 0U;
        if (vlSelfRef.flooder_test__DOT__clock) {
            vlSelfRef.__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__state = 1U;
            vlSelfRef.__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__copy_data = 0xcbU;
            vlSelfRef.flooder_test__DOT__flod__DOT__ready = 0U;
        } else {
            vlSelfRef.__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__state = 0U;
            vlSelfRef.__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__copy_data = 0U;
            vlSelfRef.flooder_test__DOT__flod__DOT__ready = 1U;
        }
        vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__int_tx = 1U;
        vlSelfRef.__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__bits = 0U;
    }
    vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__state 
        = vlSelfRef.__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__state;
    vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__count 
        = vlSelfRef.__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__count;
    vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__bits 
        = vlSelfRef.__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__bits;
    vlSelfRef.flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__copy_data 
        = vlSelfRef.__Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__copy_data;
}

void Vflooder_test___024root___timing_resume(Vflooder_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflooder_test___024root___timing_resume\n"); );
    Vflooder_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vflooder_test___024root___eval_triggers__act(Vflooder_test___024root* vlSelf);

bool Vflooder_test___024root___eval_phase__act(Vflooder_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflooder_test___024root___eval_phase__act\n"); );
    Vflooder_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vflooder_test___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vflooder_test___024root___timing_resume(vlSelf);
        Vflooder_test___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vflooder_test___024root___eval_phase__nba(Vflooder_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflooder_test___024root___eval_phase__nba\n"); );
    Vflooder_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vflooder_test___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vflooder_test___024root___dump_triggers__nba(Vflooder_test___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vflooder_test___024root___dump_triggers__act(Vflooder_test___024root* vlSelf);
#endif  // VL_DEBUG

void Vflooder_test___024root___eval(Vflooder_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflooder_test___024root___eval\n"); );
    Vflooder_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vflooder_test___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("flooder_test.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vflooder_test___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("flooder_test.v", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vflooder_test___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vflooder_test___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vflooder_test___024root___eval_debug_assertions(Vflooder_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflooder_test___024root___eval_debug_assertions\n"); );
    Vflooder_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
