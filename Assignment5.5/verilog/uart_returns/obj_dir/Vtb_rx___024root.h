// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rx.h for the primary calling header

#ifndef VERILATED_VTB_RX___024ROOT_H_
#define VERILATED_VTB_RX___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_rx__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rx___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_rx__DOT__clock;
    CData/*0:0*/ tb_rx__DOT__rst;
    CData/*0:0*/ tb_rx__DOT__rx;
    CData/*0:0*/ tb_rx__DOT__avail;
    CData/*7:0*/ tb_rx__DOT__data;
    CData/*7:0*/ tb_rx__DOT__unnamedblk1__DOT__to_send;
    CData/*2:0*/ tb_rx__DOT__rxm__DOT__state;
    CData/*2:0*/ tb_rx__DOT__rxm__DOT__bits;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_rx__DOT__clock__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_rx__DOT__rst__0;
    CData/*0:0*/ __VactContinue;
    SData/*8:0*/ tb_rx__DOT__rxm__DOT__count;
    IData/*31:0*/ tb_rx__DOT__i;
    IData/*31:0*/ tb_rx__DOT__j;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_rx__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_rx___024root(Vtb_rx__Syms* symsp, const char* v__name);
    ~Vtb_rx___024root();
    VL_UNCOPYABLE(Vtb_rx___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
