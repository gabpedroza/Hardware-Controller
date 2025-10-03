// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_tx.h for the primary calling header

#ifndef VERILATED_VTB_TX___024ROOT_H_
#define VERILATED_VTB_TX___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_tx__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_tx___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_tx__DOT__clock;
    CData/*0:0*/ tb_tx__DOT__rst;
    CData/*0:0*/ tb_tx__DOT__ready;
    CData/*0:0*/ tb_tx__DOT__send;
    CData/*7:0*/ tb_tx__DOT__data;
    CData/*7:0*/ tb_tx__DOT__txm__DOT__copy_data;
    CData/*2:0*/ tb_tx__DOT__txm__DOT__state;
    CData/*2:0*/ tb_tx__DOT__txm__DOT__bits;
    CData/*0:0*/ tb_tx__DOT__txm__DOT__int_tx;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_tx__DOT__clock__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_tx__DOT__rst__0;
    CData/*0:0*/ __VactContinue;
    SData/*8:0*/ tb_tx__DOT__txm__DOT__count;
    IData/*31:0*/ tb_tx__DOT__i;
    IData/*31:0*/ tb_tx__DOT__j;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h561aed02__0;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_tx__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_tx___024root(Vtb_tx__Syms* symsp, const char* v__name);
    ~Vtb_tx___024root();
    VL_UNCOPYABLE(Vtb_tx___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
