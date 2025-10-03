// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_tx.h for the primary calling header

#include "Vtb_tx__pch.h"
#include "Vtb_tx___024root.h"

VlCoroutine Vtb_tx___024root___eval_initial__TOP__Vtiming__0(Vtb_tx___024root* vlSelf);
VlCoroutine Vtb_tx___024root___eval_initial__TOP__Vtiming__1(Vtb_tx___024root* vlSelf);

void Vtb_tx___024root___eval_initial(Vtb_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tx___024root___eval_initial\n"); );
    Vtb_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_tx___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_tx___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tx__DOT__clock__0 
        = vlSelfRef.tb_tx__DOT__clock;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tx__DOT__rst__0 
        = vlSelfRef.tb_tx__DOT__rst;
}

VL_INLINE_OPT VlCoroutine Vtb_tx___024root___eval_initial__TOP__Vtiming__0(Vtb_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tx___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_tx__DOT__clock = 0U;
    vlSelfRef.tb_tx__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb_tx.v", 
                                         23);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb_tx.v", 
                                         24);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_tx__DOT__rst = 1U;
    vlSelfRef.tb_tx__DOT__i = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_tx__DOT__i)) {
        while ((1U & (~ (IData)(vlSelfRef.tb_tx__DOT__ready)))) {
            co_await vlSelfRef.__VtrigSched_h561aed02__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_tx.clock)", 
                                                                 "tb_tx.v", 
                                                                 27);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        vlSelfRef.tb_tx__DOT__data = (0xffU & vlSelfRef.tb_tx__DOT__i);
        vlSelfRef.tb_tx__DOT__send = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_tx.v", 
                                             30);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_tx.v", 
                                             31);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_tx__DOT__send = 0U;
        VL_WRITEF_NX("i = %11d tx = %1# state = %1#\n",0,
                     32,vlSelfRef.tb_tx__DOT__i,1,(IData)(vlSelfRef.tb_tx__DOT__txm__DOT__int_tx),
                     3,vlSelfRef.tb_tx__DOT__txm__DOT__state);
        co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                             nullptr, 
                                             "tb_tx.v", 
                                             35);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_tx__DOT__j = 1U;
        VL_WRITEF_NX("i = %11d tx = %1# state = %1#\n",0,
                     32,vlSelfRef.tb_tx__DOT__i,1,(IData)(vlSelfRef.tb_tx__DOT__txm__DOT__int_tx),
                     3,vlSelfRef.tb_tx__DOT__txm__DOT__state);
        co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                             nullptr, 
                                             "tb_tx.v", 
                                             35);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_tx__DOT__j = 2U;
        VL_WRITEF_NX("i = %11d tx = %1# state = %1#\n",0,
                     32,vlSelfRef.tb_tx__DOT__i,1,(IData)(vlSelfRef.tb_tx__DOT__txm__DOT__int_tx),
                     3,vlSelfRef.tb_tx__DOT__txm__DOT__state);
        co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                             nullptr, 
                                             "tb_tx.v", 
                                             35);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_tx__DOT__j = 3U;
        VL_WRITEF_NX("i = %11d tx = %1# state = %1#\n",0,
                     32,vlSelfRef.tb_tx__DOT__i,1,(IData)(vlSelfRef.tb_tx__DOT__txm__DOT__int_tx),
                     3,vlSelfRef.tb_tx__DOT__txm__DOT__state);
        co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                             nullptr, 
                                             "tb_tx.v", 
                                             35);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_tx__DOT__j = 4U;
        VL_WRITEF_NX("i = %11d tx = %1# state = %1#\n",0,
                     32,vlSelfRef.tb_tx__DOT__i,1,(IData)(vlSelfRef.tb_tx__DOT__txm__DOT__int_tx),
                     3,vlSelfRef.tb_tx__DOT__txm__DOT__state);
        co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                             nullptr, 
                                             "tb_tx.v", 
                                             35);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_tx__DOT__j = 5U;
        VL_WRITEF_NX("i = %11d tx = %1# state = %1#\n",0,
                     32,vlSelfRef.tb_tx__DOT__i,1,(IData)(vlSelfRef.tb_tx__DOT__txm__DOT__int_tx),
                     3,vlSelfRef.tb_tx__DOT__txm__DOT__state);
        co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                             nullptr, 
                                             "tb_tx.v", 
                                             35);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_tx__DOT__j = 6U;
        VL_WRITEF_NX("i = %11d tx = %1# state = %1#\n",0,
                     32,vlSelfRef.tb_tx__DOT__i,1,(IData)(vlSelfRef.tb_tx__DOT__txm__DOT__int_tx),
                     3,vlSelfRef.tb_tx__DOT__txm__DOT__state);
        co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                             nullptr, 
                                             "tb_tx.v", 
                                             35);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_tx__DOT__j = 7U;
        VL_WRITEF_NX("i = %11d tx = %1# state = %1#\n",0,
                     32,vlSelfRef.tb_tx__DOT__i,1,(IData)(vlSelfRef.tb_tx__DOT__txm__DOT__int_tx),
                     3,vlSelfRef.tb_tx__DOT__txm__DOT__state);
        co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                             nullptr, 
                                             "tb_tx.v", 
                                             35);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_tx__DOT__j = 8U;
        VL_WRITEF_NX("i = %11d tx = %1# state = %1#\n",0,
                     32,vlSelfRef.tb_tx__DOT__i,1,(IData)(vlSelfRef.tb_tx__DOT__txm__DOT__int_tx),
                     3,vlSelfRef.tb_tx__DOT__txm__DOT__state);
        co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                             nullptr, 
                                             "tb_tx.v", 
                                             35);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_tx__DOT__j = 9U;
        VL_WRITEF_NX("i = %11d tx = %1# state = %1#\n",0,
                     32,vlSelfRef.tb_tx__DOT__i,1,(IData)(vlSelfRef.tb_tx__DOT__txm__DOT__int_tx),
                     3,vlSelfRef.tb_tx__DOT__txm__DOT__state);
        co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                             nullptr, 
                                             "tb_tx.v", 
                                             35);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_tx__DOT__j = 0xaU;
        VL_WRITEF_NX("i = %11d tx = %1# state = %1#\n",0,
                     32,vlSelfRef.tb_tx__DOT__i,1,(IData)(vlSelfRef.tb_tx__DOT__txm__DOT__int_tx),
                     3,vlSelfRef.tb_tx__DOT__txm__DOT__state);
        co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                             nullptr, 
                                             "tb_tx.v", 
                                             35);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_tx__DOT__j = 0xbU;
        VL_WRITEF_NX("i = %11d tx = %1# state = %1#\n",0,
                     32,vlSelfRef.tb_tx__DOT__i,1,(IData)(vlSelfRef.tb_tx__DOT__txm__DOT__int_tx),
                     3,vlSelfRef.tb_tx__DOT__txm__DOT__state);
        co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                             nullptr, 
                                             "tb_tx.v", 
                                             35);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_tx__DOT__j = 0xcU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_tx.v", 
                                             37);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_tx.v", 
                                             38);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                             nullptr, 
                                             "tb_tx.v", 
                                             39);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                             nullptr, 
                                             "tb_tx.v", 
                                             40);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_tx__DOT__i = ((IData)(1U) + vlSelfRef.tb_tx__DOT__i);
    }
    VL_FINISH_MT("tb_tx.v", 43, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_tx___024root___eval_initial__TOP__Vtiming__1(Vtb_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tx___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_tx.v", 
                                             9);
        vlSelfRef.tb_tx__DOT__clock = (1U & (~ (IData)(vlSelfRef.tb_tx__DOT__clock)));
    }
}

void Vtb_tx___024root___eval_act(Vtb_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tx___024root___eval_act\n"); );
    Vtb_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_tx___024root___nba_sequent__TOP__0(Vtb_tx___024root* vlSelf);

void Vtb_tx___024root___eval_nba(Vtb_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tx___024root___eval_nba\n"); );
    Vtb_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_tx___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_tx___024root___nba_sequent__TOP__0(Vtb_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tx___024root___nba_sequent__TOP__0\n"); );
    Vtb_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__tb_tx__DOT__txm__DOT__state;
    __Vdly__tb_tx__DOT__txm__DOT__state = 0;
    SData/*8:0*/ __Vdly__tb_tx__DOT__txm__DOT__count;
    __Vdly__tb_tx__DOT__txm__DOT__count = 0;
    CData/*2:0*/ __Vdly__tb_tx__DOT__txm__DOT__bits;
    __Vdly__tb_tx__DOT__txm__DOT__bits = 0;
    CData/*7:0*/ __Vdly__tb_tx__DOT__txm__DOT__copy_data;
    __Vdly__tb_tx__DOT__txm__DOT__copy_data = 0;
    // Body
    __Vdly__tb_tx__DOT__txm__DOT__state = vlSelfRef.tb_tx__DOT__txm__DOT__state;
    __Vdly__tb_tx__DOT__txm__DOT__count = vlSelfRef.tb_tx__DOT__txm__DOT__count;
    __Vdly__tb_tx__DOT__txm__DOT__bits = vlSelfRef.tb_tx__DOT__txm__DOT__bits;
    __Vdly__tb_tx__DOT__txm__DOT__copy_data = vlSelfRef.tb_tx__DOT__txm__DOT__copy_data;
    if (vlSelfRef.tb_tx__DOT__rst) {
        if ((4U & (IData)(vlSelfRef.tb_tx__DOT__txm__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_tx__DOT__txm__DOT__state))) {
                __Vdly__tb_tx__DOT__txm__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.tb_tx__DOT__txm__DOT__state))) {
                __Vdly__tb_tx__DOT__txm__DOT__state = 0U;
            } else {
                if ((0x1b2U > (IData)(vlSelfRef.tb_tx__DOT__txm__DOT__count))) {
                    __Vdly__tb_tx__DOT__txm__DOT__count 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_tx__DOT__txm__DOT__count)));
                    __Vdly__tb_tx__DOT__txm__DOT__state = 4U;
                } else {
                    __Vdly__tb_tx__DOT__txm__DOT__count = 0U;
                    __Vdly__tb_tx__DOT__txm__DOT__state = 0U;
                    vlSelfRef.tb_tx__DOT__ready = 1U;
                }
                __Vdly__tb_tx__DOT__txm__DOT__bits = 0U;
                vlSelfRef.tb_tx__DOT__txm__DOT__int_tx = 1U;
                __Vdly__tb_tx__DOT__txm__DOT__copy_data = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.tb_tx__DOT__txm__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_tx__DOT__txm__DOT__state))) {
                __Vdly__tb_tx__DOT__txm__DOT__count = 0U;
                if ((7U == (IData)(vlSelfRef.tb_tx__DOT__txm__DOT__bits))) {
                    __Vdly__tb_tx__DOT__txm__DOT__bits = 0U;
                    __Vdly__tb_tx__DOT__txm__DOT__state = 4U;
                } else {
                    __Vdly__tb_tx__DOT__txm__DOT__bits 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_tx__DOT__txm__DOT__bits)));
                    __Vdly__tb_tx__DOT__txm__DOT__state = 2U;
                }
                vlSelfRef.tb_tx__DOT__ready = 0U;
            } else {
                if ((0x1b1U > (IData)(vlSelfRef.tb_tx__DOT__txm__DOT__count))) {
                    __Vdly__tb_tx__DOT__txm__DOT__count 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_tx__DOT__txm__DOT__count)));
                    __Vdly__tb_tx__DOT__txm__DOT__state = 2U;
                } else {
                    __Vdly__tb_tx__DOT__txm__DOT__count = 0U;
                    __Vdly__tb_tx__DOT__txm__DOT__state = 3U;
                }
                vlSelfRef.tb_tx__DOT__ready = 0U;
                vlSelfRef.tb_tx__DOT__txm__DOT__int_tx 
                    = (1U & ((IData)(vlSelfRef.tb_tx__DOT__txm__DOT__copy_data) 
                             >> (IData)(vlSelfRef.tb_tx__DOT__txm__DOT__bits)));
            }
        } else if ((1U & (IData)(vlSelfRef.tb_tx__DOT__txm__DOT__state))) {
            if ((0x1b2U > (IData)(vlSelfRef.tb_tx__DOT__txm__DOT__count))) {
                __Vdly__tb_tx__DOT__txm__DOT__count 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_tx__DOT__txm__DOT__count)));
                __Vdly__tb_tx__DOT__txm__DOT__state = 1U;
            } else {
                __Vdly__tb_tx__DOT__txm__DOT__count = 0U;
                __Vdly__tb_tx__DOT__txm__DOT__state = 2U;
            }
            vlSelfRef.tb_tx__DOT__txm__DOT__int_tx = 0U;
            vlSelfRef.tb_tx__DOT__ready = 0U;
            __Vdly__tb_tx__DOT__txm__DOT__bits = 0U;
        } else {
            __Vdly__tb_tx__DOT__txm__DOT__count = 0U;
            if (vlSelfRef.tb_tx__DOT__send) {
                __Vdly__tb_tx__DOT__txm__DOT__state = 1U;
                __Vdly__tb_tx__DOT__txm__DOT__copy_data 
                    = vlSelfRef.tb_tx__DOT__data;
                vlSelfRef.tb_tx__DOT__ready = 0U;
            } else {
                __Vdly__tb_tx__DOT__txm__DOT__state = 0U;
                __Vdly__tb_tx__DOT__txm__DOT__copy_data = 0U;
                vlSelfRef.tb_tx__DOT__ready = 1U;
            }
            vlSelfRef.tb_tx__DOT__txm__DOT__int_tx = 1U;
            __Vdly__tb_tx__DOT__txm__DOT__bits = 0U;
        }
    } else {
        __Vdly__tb_tx__DOT__txm__DOT__count = 0U;
        __Vdly__tb_tx__DOT__txm__DOT__copy_data = 0U;
        __Vdly__tb_tx__DOT__txm__DOT__state = 0U;
        __Vdly__tb_tx__DOT__txm__DOT__bits = 0U;
        vlSelfRef.tb_tx__DOT__txm__DOT__int_tx = 1U;
        vlSelfRef.tb_tx__DOT__ready = 1U;
    }
    vlSelfRef.tb_tx__DOT__txm__DOT__state = __Vdly__tb_tx__DOT__txm__DOT__state;
    vlSelfRef.tb_tx__DOT__txm__DOT__count = __Vdly__tb_tx__DOT__txm__DOT__count;
    vlSelfRef.tb_tx__DOT__txm__DOT__bits = __Vdly__tb_tx__DOT__txm__DOT__bits;
    vlSelfRef.tb_tx__DOT__txm__DOT__copy_data = __Vdly__tb_tx__DOT__txm__DOT__copy_data;
}

void Vtb_tx___024root___timing_resume(Vtb_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tx___024root___timing_resume\n"); );
    Vtb_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h561aed02__0.resume(
                                                   "@(posedge tb_tx.clock)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_tx___024root___timing_commit(Vtb_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tx___024root___timing_commit\n"); );
    Vtb_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h561aed02__0.commit(
                                                   "@(posedge tb_tx.clock)");
    }
}

void Vtb_tx___024root___eval_triggers__act(Vtb_tx___024root* vlSelf);

bool Vtb_tx___024root___eval_phase__act(Vtb_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tx___024root___eval_phase__act\n"); );
    Vtb_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_tx___024root___eval_triggers__act(vlSelf);
    Vtb_tx___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_tx___024root___timing_resume(vlSelf);
        Vtb_tx___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_tx___024root___eval_phase__nba(Vtb_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tx___024root___eval_phase__nba\n"); );
    Vtb_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_tx___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_tx___024root___dump_triggers__nba(Vtb_tx___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_tx___024root___dump_triggers__act(Vtb_tx___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_tx___024root___eval(Vtb_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tx___024root___eval\n"); );
    Vtb_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_tx___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_tx.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_tx___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_tx.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_tx___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_tx___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_tx___024root___eval_debug_assertions(Vtb_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tx___024root___eval_debug_assertions\n"); );
    Vtb_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
