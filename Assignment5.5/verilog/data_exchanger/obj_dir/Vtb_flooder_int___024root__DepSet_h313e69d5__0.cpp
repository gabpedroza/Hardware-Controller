// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_flooder_int.h for the primary calling header

#include "Vtb_flooder_int__pch.h"
#include "Vtb_flooder_int__Syms.h"
#include "Vtb_flooder_int___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_flooder_int___024root___dump_triggers__act(Vtb_flooder_int___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_flooder_int___024root___eval_triggers__act(Vtb_flooder_int___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flooder_int___024root___eval_triggers__act\n"); );
    Vtb_flooder_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_flooder_int__DOT__avail) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_flooder_int__DOT__avail__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__state) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_flooder_int__DOT__flod__DOT__sender__DOT__state__0)));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.tb_flooder_int__DOT__clock) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_flooder_int__DOT__clock__0))));
    vlSelfRef.__VactTriggered.set(3U, 0U);
    vlSelfRef.__VactTriggered.set(4U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_flooder_int__DOT__avail__0 
        = vlSelfRef.tb_flooder_int__DOT__avail;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_flooder_int__DOT__flod__DOT__sender__DOT__state__0 
        = vlSelfRef.tb_flooder_int__DOT__flod__DOT__sender__DOT__state;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_flooder_int__DOT__clock__0 
        = vlSelfRef.tb_flooder_int__DOT__clock;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_flooder_int___024root___dump_triggers__act(vlSelf);
    }
#endif
}
