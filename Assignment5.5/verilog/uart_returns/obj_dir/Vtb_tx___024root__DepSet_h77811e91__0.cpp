// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_tx.h for the primary calling header

#include "Vtb_tx__pch.h"
#include "Vtb_tx__Syms.h"
#include "Vtb_tx___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_tx___024root___dump_triggers__act(Vtb_tx___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_tx___024root___eval_triggers__act(Vtb_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tx___024root___eval_triggers__act\n"); );
    Vtb_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_tx__DOT__clock) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tx__DOT__clock__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.tb_tx__DOT__rst)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tx__DOT__rst__0)));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tx__DOT__clock__0 
        = vlSelfRef.tb_tx__DOT__clock;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tx__DOT__rst__0 
        = vlSelfRef.tb_tx__DOT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_tx___024root___dump_triggers__act(vlSelf);
    }
#endif
}
