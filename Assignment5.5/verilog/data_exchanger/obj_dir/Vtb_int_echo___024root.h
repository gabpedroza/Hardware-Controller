// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_int_echo.h for the primary calling header

#ifndef VERILATED_VTB_INT_ECHO___024ROOT_H_
#define VERILATED_VTB_INT_ECHO___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_int_echo__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_int_echo___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_int_echo__DOT__clock;
    CData/*0:0*/ tb_int_echo__DOT__avail;
    CData/*0:0*/ tb_int_echo__DOT__echo__DOT__int_s__DOT__ready;
    CData/*0:0*/ tb_int_echo__DOT__rx;
    CData/*0:0*/ tb_int_echo__DOT__period_clock;
    CData/*7:0*/ tb_int_echo__DOT__data_out;
    CData/*0:0*/ tb_int_echo__DOT__echo__DOT__int_avail;
    CData/*0:0*/ tb_int_echo__DOT__echo__DOT__int_ready;
    CData/*0:0*/ tb_int_echo__DOT__echo__DOT__int_send;
    CData/*0:0*/ tb_int_echo__DOT__echo__DOT__prev_int_avail;
    CData/*1:0*/ tb_int_echo__DOT__echo__DOT__int_r__DOT__bytes;
    CData/*7:0*/ tb_int_echo__DOT__echo__DOT__int_r__DOT__data;
    CData/*0:0*/ tb_int_echo__DOT__echo__DOT__int_r__DOT__avail;
    CData/*0:0*/ tb_int_echo__DOT__echo__DOT__int_r__DOT__prev_avail;
    CData/*1:0*/ tb_int_echo__DOT__echo__DOT__int_r__DOT__state;
    CData/*2:0*/ tb_int_echo__DOT__echo__DOT__int_r__DOT__rxm__DOT__state;
    CData/*2:0*/ tb_int_echo__DOT__echo__DOT__int_r__DOT__rxm__DOT__bits;
    CData/*1:0*/ tb_int_echo__DOT__echo__DOT__int_s__DOT__bytes;
    CData/*0:0*/ tb_int_echo__DOT__echo__DOT__int_s__DOT__prev_send;
    CData/*0:0*/ tb_int_echo__DOT__echo__DOT__int_s__DOT__byte_send;
    CData/*1:0*/ tb_int_echo__DOT__echo__DOT__int_s__DOT__state;
    CData/*7:0*/ tb_int_echo__DOT__echo__DOT__int_s__DOT__data_to_send;
    CData/*0:0*/ tb_int_echo__DOT__echo__DOT__int_s__DOT__wait_a_bit;
    CData/*7:0*/ tb_int_echo__DOT__echo__DOT__int_s__DOT__txm__DOT__copy_data;
    CData/*2:0*/ tb_int_echo__DOT__echo__DOT__int_s__DOT__txm__DOT__state;
    CData/*2:0*/ tb_int_echo__DOT__echo__DOT__int_s__DOT__txm__DOT__bits;
    CData/*0:0*/ tb_int_echo__DOT__echo__DOT__int_s__DOT__txm__DOT__int_tx;
    CData/*2:0*/ tb_int_echo__DOT__rxm__DOT__state;
    CData/*2:0*/ tb_int_echo__DOT__rxm__DOT__bits;
    CData/*0:0*/ __Vdly__tb_int_echo__DOT__echo__DOT__int_send;
    CData/*1:0*/ __Vdly__tb_int_echo__DOT__echo__DOT__int_s__DOT__state;
    CData/*1:0*/ __Vdly__tb_int_echo__DOT__echo__DOT__int_s__DOT__bytes;
    CData/*0:0*/ __Vdly__tb_int_echo__DOT__echo__DOT__int_ready;
    CData/*0:0*/ __Vdly__tb_int_echo__DOT__echo__DOT__int_s__DOT__wait_a_bit;
    CData/*2:0*/ __Vdly__tb_int_echo__DOT__echo__DOT__int_s__DOT__txm__DOT__state;
    CData/*0:0*/ __Vdly__tb_int_echo__DOT__echo__DOT__int_s__DOT__ready;
    CData/*2:0*/ __Vdly__tb_int_echo__DOT__echo__DOT__int_s__DOT__txm__DOT__bits;
    CData/*7:0*/ __Vdly__tb_int_echo__DOT__echo__DOT__int_s__DOT__txm__DOT__copy_data;
    CData/*2:0*/ __Vdly__tb_int_echo__DOT__rxm__DOT__state;
    CData/*2:0*/ __Vdly__tb_int_echo__DOT__rxm__DOT__bits;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_int_echo__DOT__avail__0;
    CData/*1:0*/ __Vtrigprevexpr___TOP__tb_int_echo__DOT__echo__DOT__int_s__DOT__state__0;
    CData/*7:0*/ __Vtrigprevexpr___TOP__tb_int_echo__DOT__echo__DOT__int_s__DOT__data_to_send__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_int_echo__DOT__echo__DOT__int_s__DOT__ready__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_int_echo__DOT__clock__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*8:0*/ tb_int_echo__DOT__echo__DOT__int_r__DOT__rxm__DOT__count;
    SData/*8:0*/ tb_int_echo__DOT__echo__DOT__int_s__DOT__txm__DOT__count;
    SData/*8:0*/ tb_int_echo__DOT__rxm__DOT__count;
    SData/*8:0*/ __Vdly__tb_int_echo__DOT__echo__DOT__int_s__DOT__txm__DOT__count;
    SData/*8:0*/ __Vdly__tb_int_echo__DOT__rxm__DOT__count;
    IData/*31:0*/ tb_int_echo__DOT__echo__DOT__data_in;
    IData/*31:0*/ tb_int_echo__DOT__echo__DOT__data_out;
    IData/*31:0*/ tb_int_echo__DOT__echo__DOT__int_s__DOT__data_latch;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<7> __VactTriggered;
    VlTriggerVec<7> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_int_echo__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_int_echo___024root(Vtb_int_echo__Syms* symsp, const char* v__name);
    ~Vtb_int_echo___024root();
    VL_UNCOPYABLE(Vtb_int_echo___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
