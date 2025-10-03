// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_flight_controller.h for the primary calling header

#include "Vtb_flight_controller__pch.h"
#include "Vtb_flight_controller__Syms.h"
#include "Vtb_flight_controller___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_flight_controller___024root___dump_triggers__act(Vtb_flight_controller___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_flight_controller___024root___eval_triggers__act(Vtb_flight_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_flight_controller___024root___eval_triggers__act\n"); );
    Vtb_flight_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_flight_controller__DOT__ready) 
                                       ^ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__ready__0)));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.tb_flight_controller__DOT__avail) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__avail__0))));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.tb_flight_controller__DOT__clock) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__clock__0))));
    vlSelfRef.__VactTriggered.set(3U, 0U);
    vlSelfRef.__VactTriggered.set(4U, ((IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_avail) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__fc__DOT__int_avail__0)));
    vlSelfRef.__VactTriggered.set(5U, ((IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__bytes) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__fc__DOT__int_r__DOT__bytes__0)));
    vlSelfRef.__VactTriggered.set(6U, (vlSelfRef.tb_flight_controller__DOT__fc__DOT__received_int 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__fc__DOT__received_int__0));
    vlSelfRef.__VactTriggered.set(7U, ((IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__data) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__fc__DOT__int_r__DOT__data__0)));
    vlSelfRef.__VactTriggered.set(8U, ((IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__avail) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__fc__DOT__int_r__DOT__avail__0))));
    vlSelfRef.__VactTriggered.set(9U, ((IData)(vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__byte_send) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__fc__DOT__int_s__DOT__byte_send__0))));
    vlSelfRef.__VactTriggered.set(0xaU, (vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_s__DOT__data_latch 
                                         != vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__fc__DOT__int_s__DOT__data_latch__0));
    vlSelfRef.__VactTriggered.set(0xbU, ((IData)(vlSelfRef.tb_flight_controller__DOT__int_s__DOT__byte_send) 
                                         & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__int_s__DOT__byte_send__0))));
    vlSelfRef.__VactTriggered.set(0xcU, (vlSelfRef.tb_flight_controller__DOT__int_s__DOT__data_latch 
                                         != vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__int_s__DOT__data_latch__0));
    vlSelfRef.__VactTriggered.set(0xdU, ((IData)(vlSelfRef.tb_flight_controller__DOT__avail) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__avail__0)));
    vlSelfRef.__VactTriggered.set(0xeU, (vlSelfRef.tb_flight_controller__DOT__data_back 
                                         != vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__data_back__0));
    vlSelfRef.__VactTriggered.set(0xfU, ((IData)(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__bytes) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__int_r__DOT__bytes__0)));
    vlSelfRef.__VactTriggered.set(0x10U, ((IData)(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__data) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__int_r__DOT__data__0)));
    vlSelfRef.__VactTriggered.set(0x11U, ((IData)(vlSelfRef.tb_flight_controller__DOT__int_r__DOT__avail) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__int_r__DOT__avail__0))));
    vlSelfRef.__VactTriggered.set(0x12U, vlSelfRef.__VdlySched.awaitingCurrentTime());
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
    vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__fc__DOT__int_r__DOT__data__0 
        = vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__data;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__fc__DOT__int_r__DOT__avail__0 
        = vlSelfRef.tb_flight_controller__DOT__fc__DOT__int_r__DOT__avail;
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
    vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__int_r__DOT__data__0 
        = vlSelfRef.tb_flight_controller__DOT__int_r__DOT__data;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_flight_controller__DOT__int_r__DOT__avail__0 
        = vlSelfRef.tb_flight_controller__DOT__int_r__DOT__avail;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(4U, 1U);
        vlSelfRef.__VactTriggered.set(5U, 1U);
        vlSelfRef.__VactTriggered.set(6U, 1U);
        vlSelfRef.__VactTriggered.set(7U, 1U);
        vlSelfRef.__VactTriggered.set(0xaU, 1U);
        vlSelfRef.__VactTriggered.set(0xcU, 1U);
        vlSelfRef.__VactTriggered.set(0xdU, 1U);
        vlSelfRef.__VactTriggered.set(0xeU, 1U);
        vlSelfRef.__VactTriggered.set(0xfU, 1U);
        vlSelfRef.__VactTriggered.set(0x10U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_flight_controller___024root___dump_triggers__act(vlSelf);
    }
#endif
}
