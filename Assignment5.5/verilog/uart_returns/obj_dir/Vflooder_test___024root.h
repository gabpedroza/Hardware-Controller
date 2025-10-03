// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vflooder_test.h for the primary calling header

#ifndef VERILATED_VFLOODER_TEST___024ROOT_H_
#define VERILATED_VFLOODER_TEST___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vflooder_test__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vflooder_test___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ flooder_test__DOT__clock;
    CData/*0:0*/ flooder_test__DOT__avail;
    CData/*0:0*/ flooder_test__DOT__rx;
    CData/*0:0*/ flooder_test__DOT__period_clock;
    CData/*7:0*/ flooder_test__DOT__data_out;
    CData/*0:0*/ flooder_test__DOT__flod__DOT__ready;
    CData/*0:0*/ flooder_test__DOT__flod__DOT__avail;
    CData/*7:0*/ flooder_test__DOT__flod__DOT__data_in;
    CData/*0:0*/ flooder_test__DOT__flod__DOT__half_clock;
    CData/*2:0*/ flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__state;
    CData/*2:0*/ flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__bits;
    CData/*7:0*/ flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__copy_data;
    CData/*2:0*/ flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__state;
    CData/*2:0*/ flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__bits;
    CData/*0:0*/ flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__int_tx;
    CData/*2:0*/ flooder_test__DOT__rxm__DOT__state;
    CData/*2:0*/ flooder_test__DOT__rxm__DOT__bits;
    CData/*2:0*/ __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__state;
    CData/*2:0*/ __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__bits;
    CData/*7:0*/ __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__copy_data;
    CData/*2:0*/ __Vdly__flooder_test__DOT__rxm__DOT__state;
    CData/*2:0*/ __Vdly__flooder_test__DOT__rxm__DOT__bits;
    CData/*0:0*/ __Vtrigprevexpr___TOP__flooder_test__DOT__avail__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__flooder_test__DOT__clock__0;
    CData/*0:0*/ __VactContinue;
    SData/*8:0*/ flooder_test__DOT__flod__DOT__sender__DOT__rxm__DOT__count;
    SData/*8:0*/ flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__count;
    SData/*8:0*/ flooder_test__DOT__rxm__DOT__count;
    SData/*8:0*/ __Vdly__flooder_test__DOT__flod__DOT__sender__DOT__txm__DOT__count;
    SData/*8:0*/ __Vdly__flooder_test__DOT__rxm__DOT__count;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vflooder_test__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vflooder_test___024root(Vflooder_test__Syms* symsp, const char* v__name);
    ~Vflooder_test___024root();
    VL_UNCOPYABLE(Vflooder_test___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
