// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rx.h for the primary calling header

#include "Vtb_rx__pch.h"
#include "Vtb_rx___024root.h"

VlCoroutine Vtb_rx___024root___eval_initial__TOP__Vtiming__0(Vtb_rx___024root* vlSelf);
VlCoroutine Vtb_rx___024root___eval_initial__TOP__Vtiming__1(Vtb_rx___024root* vlSelf);

void Vtb_rx___024root___eval_initial(Vtb_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rx___024root___eval_initial\n"); );
    Vtb_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_rx___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_rx___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_rx__DOT__clock__0 
        = vlSelfRef.tb_rx__DOT__clock;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_rx__DOT__rst__0 
        = vlSelfRef.tb_rx__DOT__rst;
}

VL_INLINE_OPT VlCoroutine Vtb_rx___024root___eval_initial__TOP__Vtiming__0(Vtb_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rx___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_rx__DOT__clock = 0U;
    vlSelfRef.tb_rx__DOT__rx = 1U;
    vlSelfRef.tb_rx__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb_rx.v", 
                                         21);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb_rx.v", 
                                         22);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rx__DOT__rst = 1U;
    vlSelfRef.tb_rx__DOT__i = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_rx__DOT__i)) {
        vlSelfRef.tb_rx__DOT__unnamedblk1__DOT__to_send 
            = (0xffU & vlSelfRef.tb_rx__DOT__i);
        vlSelfRef.tb_rx__DOT__rx = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                             nullptr, 
                                             "tb_rx.v", 
                                             27);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                             nullptr, 
                                             "tb_rx.v", 
                                             28);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        VL_WRITEF_NX("data is now %3#\n",0,8,vlSelfRef.tb_rx__DOT__data);
        co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                             nullptr, 
                                             "tb_rx.v", 
                                             30);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_rx__DOT__rx = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                             nullptr, 
                                             "tb_rx.v", 
                                             32);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_rx__DOT__rx = (1U & vlSelfRef.tb_rx__DOT__i);
        co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                             nullptr, 
                                             "tb_rx.v", 
                                             41);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_rx__DOT__j = 1U;
        vlSelfRef.tb_rx__DOT__rx = (1U & (vlSelfRef.tb_rx__DOT__i 
                                          >> 1U));
        co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                             nullptr, 
                                             "tb_rx.v", 
                                             41);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_rx__DOT__j = 2U;
        vlSelfRef.tb_rx__DOT__rx = (1U & (vlSelfRef.tb_rx__DOT__i 
                                          >> 2U));
        co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                             nullptr, 
                                             "tb_rx.v", 
                                             41);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_rx__DOT__j = 3U;
        vlSelfRef.tb_rx__DOT__rx = (1U & (vlSelfRef.tb_rx__DOT__i 
                                          >> 3U));
        co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                             nullptr, 
                                             "tb_rx.v", 
                                             41);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_rx__DOT__j = 4U;
        if ((0x9cU == vlSelfRef.tb_rx__DOT__i)) {
            vlSelfRef.tb_rx__DOT__rst = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "tb_rx.v", 
                                                 36);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "tb_rx.v", 
                                                 37);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_rx__DOT__rst = 1U;
        }
        vlSelfRef.tb_rx__DOT__rx = (1U & (vlSelfRef.tb_rx__DOT__i 
                                          >> 4U));
        co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                             nullptr, 
                                             "tb_rx.v", 
                                             41);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_rx__DOT__j = 5U;
        vlSelfRef.tb_rx__DOT__rx = (1U & (vlSelfRef.tb_rx__DOT__i 
                                          >> 5U));
        co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                             nullptr, 
                                             "tb_rx.v", 
                                             41);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_rx__DOT__j = 6U;
        vlSelfRef.tb_rx__DOT__rx = (1U & (vlSelfRef.tb_rx__DOT__i 
                                          >> 6U));
        co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                             nullptr, 
                                             "tb_rx.v", 
                                             41);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_rx__DOT__j = 7U;
        vlSelfRef.tb_rx__DOT__rx = (1U & (vlSelfRef.tb_rx__DOT__i 
                                          >> 7U));
        co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                             nullptr, 
                                             "tb_rx.v", 
                                             41);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_rx__DOT__j = 8U;
        vlSelfRef.tb_rx__DOT__rx = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                             nullptr, 
                                             "tb_rx.v", 
                                             44);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_rx.v", 
                                             45);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_rx.v", 
                                             46);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        VL_WRITEF_NX("used i = %11d, got avail = %1#, data = %3#, state = %1#\n",0,
                     32,vlSelfRef.tb_rx__DOT__i,1,(IData)(vlSelfRef.tb_rx__DOT__avail),
                     8,vlSelfRef.tb_rx__DOT__data,3,
                     (IData)(vlSelfRef.tb_rx__DOT__rxm__DOT__state));
        vlSelfRef.tb_rx__DOT__i = ((IData)(1U) + vlSelfRef.tb_rx__DOT__i);
    }
    VL_FINISH_MT("tb_rx.v", 49, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_rx___024root___eval_initial__TOP__Vtiming__1(Vtb_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rx___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_rx.v", 
                                             7);
        vlSelfRef.tb_rx__DOT__clock = (1U & (~ (IData)(vlSelfRef.tb_rx__DOT__clock)));
    }
}

void Vtb_rx___024root___eval_act(Vtb_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rx___024root___eval_act\n"); );
    Vtb_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_rx___024root___nba_sequent__TOP__0(Vtb_rx___024root* vlSelf);

void Vtb_rx___024root___eval_nba(Vtb_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rx___024root___eval_nba\n"); );
    Vtb_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_rx___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_rx___024root___nba_sequent__TOP__0(Vtb_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rx___024root___nba_sequent__TOP__0\n"); );
    Vtb_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __Vdly__tb_rx__DOT__rxm__DOT__count;
    __Vdly__tb_rx__DOT__rxm__DOT__count = 0;
    CData/*2:0*/ __Vdly__tb_rx__DOT__rxm__DOT__state;
    __Vdly__tb_rx__DOT__rxm__DOT__state = 0;
    CData/*2:0*/ __Vdly__tb_rx__DOT__rxm__DOT__bits;
    __Vdly__tb_rx__DOT__rxm__DOT__bits = 0;
    // Body
    __Vdly__tb_rx__DOT__rxm__DOT__count = vlSelfRef.tb_rx__DOT__rxm__DOT__count;
    __Vdly__tb_rx__DOT__rxm__DOT__state = vlSelfRef.tb_rx__DOT__rxm__DOT__state;
    __Vdly__tb_rx__DOT__rxm__DOT__bits = vlSelfRef.tb_rx__DOT__rxm__DOT__bits;
    if (vlSelfRef.tb_rx__DOT__rst) {
        if ((4U & (IData)(vlSelfRef.tb_rx__DOT__rxm__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_rx__DOT__rxm__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.tb_rx__DOT__rxm__DOT__state))) {
                    if ((0xd9U > (IData)(vlSelfRef.tb_rx__DOT__rxm__DOT__count))) {
                        __Vdly__tb_rx__DOT__rxm__DOT__count 
                            = (0x1ffU & ((IData)(1U) 
                                         + (IData)(vlSelfRef.tb_rx__DOT__rxm__DOT__count)));
                        __Vdly__tb_rx__DOT__rxm__DOT__state = 7U;
                    } else {
                        __Vdly__tb_rx__DOT__rxm__DOT__count = 0U;
                        __Vdly__tb_rx__DOT__rxm__DOT__state = 0U;
                    }
                    vlSelfRef.tb_rx__DOT__avail = 1U;
                    __Vdly__tb_rx__DOT__rxm__DOT__bits = 0U;
                } else {
                    __Vdly__tb_rx__DOT__rxm__DOT__count = 0U;
                    if (vlSelfRef.tb_rx__DOT__rx) {
                        __Vdly__tb_rx__DOT__rxm__DOT__state = 7U;
                        vlSelfRef.tb_rx__DOT__avail = 1U;
                    } else {
                        __Vdly__tb_rx__DOT__rxm__DOT__state = 0U;
                        vlSelfRef.tb_rx__DOT__avail = 0U;
                    }
                    __Vdly__tb_rx__DOT__rxm__DOT__bits = 0U;
                }
            } else if ((1U & (IData)(vlSelfRef.tb_rx__DOT__rxm__DOT__state))) {
                __Vdly__tb_rx__DOT__rxm__DOT__count = 0U;
                vlSelfRef.tb_rx__DOT__data = (((~ ((IData)(1U) 
                                                   << (IData)(vlSelfRef.tb_rx__DOT__rxm__DOT__bits))) 
                                               & (IData)(vlSelfRef.tb_rx__DOT__data)) 
                                              | (0xffU 
                                                 & ((IData)(vlSelfRef.tb_rx__DOT__rx) 
                                                    << (IData)(vlSelfRef.tb_rx__DOT__rxm__DOT__bits))));
                vlSelfRef.tb_rx__DOT__avail = 0U;
                if ((7U == (IData)(vlSelfRef.tb_rx__DOT__rxm__DOT__bits))) {
                    __Vdly__tb_rx__DOT__rxm__DOT__state = 4U;
                    __Vdly__tb_rx__DOT__rxm__DOT__bits = 0U;
                } else {
                    __Vdly__tb_rx__DOT__rxm__DOT__bits 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_rx__DOT__rxm__DOT__bits)));
                    __Vdly__tb_rx__DOT__rxm__DOT__state = 3U;
                }
            } else {
                if ((0x1b2U > (IData)(vlSelfRef.tb_rx__DOT__rxm__DOT__count))) {
                    __Vdly__tb_rx__DOT__rxm__DOT__count 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_rx__DOT__rxm__DOT__count)));
                    __Vdly__tb_rx__DOT__rxm__DOT__state = 4U;
                } else {
                    __Vdly__tb_rx__DOT__rxm__DOT__count = 0U;
                    __Vdly__tb_rx__DOT__rxm__DOT__state = 6U;
                }
                vlSelfRef.tb_rx__DOT__avail = 0U;
                __Vdly__tb_rx__DOT__rxm__DOT__bits = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.tb_rx__DOT__rxm__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_rx__DOT__rxm__DOT__state))) {
                if ((0x1b2U > (IData)(vlSelfRef.tb_rx__DOT__rxm__DOT__count))) {
                    __Vdly__tb_rx__DOT__rxm__DOT__count 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_rx__DOT__rxm__DOT__count)));
                    __Vdly__tb_rx__DOT__rxm__DOT__state = 3U;
                } else {
                    __Vdly__tb_rx__DOT__rxm__DOT__count = 0U;
                    __Vdly__tb_rx__DOT__rxm__DOT__state = 5U;
                }
                vlSelfRef.tb_rx__DOT__avail = 0U;
            } else {
                __Vdly__tb_rx__DOT__rxm__DOT__count = 0U;
                __Vdly__tb_rx__DOT__rxm__DOT__state 
                    = ((IData)(vlSelfRef.tb_rx__DOT__rx)
                        ? 0U : 3U);
                __Vdly__tb_rx__DOT__rxm__DOT__bits = 0U;
                vlSelfRef.tb_rx__DOT__avail = 0U;
                vlSelfRef.tb_rx__DOT__data = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_rx__DOT__rxm__DOT__state))) {
            if ((0xd9U > (IData)(vlSelfRef.tb_rx__DOT__rxm__DOT__count))) {
                __Vdly__tb_rx__DOT__rxm__DOT__count 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_rx__DOT__rxm__DOT__count)));
                __Vdly__tb_rx__DOT__rxm__DOT__state = 1U;
            } else {
                __Vdly__tb_rx__DOT__rxm__DOT__count = 0U;
                __Vdly__tb_rx__DOT__rxm__DOT__state = 2U;
            }
            __Vdly__tb_rx__DOT__rxm__DOT__bits = 0U;
            vlSelfRef.tb_rx__DOT__avail = 0U;
            vlSelfRef.tb_rx__DOT__data = 0U;
        } else {
            __Vdly__tb_rx__DOT__rxm__DOT__count = 0U;
            if (vlSelfRef.tb_rx__DOT__rx) {
                __Vdly__tb_rx__DOT__rxm__DOT__state = 0U;
                vlSelfRef.tb_rx__DOT__avail = 1U;
            } else {
                __Vdly__tb_rx__DOT__rxm__DOT__state = 1U;
                vlSelfRef.tb_rx__DOT__avail = 0U;
                vlSelfRef.tb_rx__DOT__data = 0U;
            }
            __Vdly__tb_rx__DOT__rxm__DOT__bits = 0U;
        }
    } else {
        __Vdly__tb_rx__DOT__rxm__DOT__count = 0U;
        vlSelfRef.tb_rx__DOT__avail = 0U;
        vlSelfRef.tb_rx__DOT__data = 0U;
        __Vdly__tb_rx__DOT__rxm__DOT__bits = 0U;
        __Vdly__tb_rx__DOT__rxm__DOT__state = 0U;
    }
    vlSelfRef.tb_rx__DOT__rxm__DOT__count = __Vdly__tb_rx__DOT__rxm__DOT__count;
    vlSelfRef.tb_rx__DOT__rxm__DOT__state = __Vdly__tb_rx__DOT__rxm__DOT__state;
    vlSelfRef.tb_rx__DOT__rxm__DOT__bits = __Vdly__tb_rx__DOT__rxm__DOT__bits;
}

void Vtb_rx___024root___timing_resume(Vtb_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rx___024root___timing_resume\n"); );
    Vtb_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_rx___024root___eval_triggers__act(Vtb_rx___024root* vlSelf);

bool Vtb_rx___024root___eval_phase__act(Vtb_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rx___024root___eval_phase__act\n"); );
    Vtb_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_rx___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_rx___024root___timing_resume(vlSelf);
        Vtb_rx___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_rx___024root___eval_phase__nba(Vtb_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rx___024root___eval_phase__nba\n"); );
    Vtb_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_rx___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_rx___024root___dump_triggers__nba(Vtb_rx___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_rx___024root___dump_triggers__act(Vtb_rx___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_rx___024root___eval(Vtb_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rx___024root___eval\n"); );
    Vtb_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_rx___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_rx.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_rx___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_rx.v", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_rx___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_rx___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_rx___024root___eval_debug_assertions(Vtb_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rx___024root___eval_debug_assertions\n"); );
    Vtb_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
