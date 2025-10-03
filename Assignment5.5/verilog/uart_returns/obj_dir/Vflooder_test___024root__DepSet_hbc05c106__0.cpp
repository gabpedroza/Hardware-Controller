// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vflooder_test.h for the primary calling header

#include "Vflooder_test__pch.h"
#include "Vflooder_test__Syms.h"
#include "Vflooder_test___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vflooder_test___024root___dump_triggers__act(Vflooder_test___024root* vlSelf);
#endif  // VL_DEBUG

void Vflooder_test___024root___eval_triggers__act(Vflooder_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflooder_test___024root___eval_triggers__act\n"); );
    Vflooder_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.flooder_test__DOT__avail) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__flooder_test__DOT__avail__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.flooder_test__DOT__clock) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__flooder_test__DOT__clock__0))));
    vlSelfRef.__VactTriggered.set(2U, 0U);
    vlSelfRef.__VactTriggered.set(3U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__flooder_test__DOT__avail__0 
        = vlSelfRef.flooder_test__DOT__avail;
    vlSelfRef.__Vtrigprevexpr___TOP__flooder_test__DOT__clock__0 
        = vlSelfRef.flooder_test__DOT__clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vflooder_test___024root___dump_triggers__act(vlSelf);
    }
#endif
}
