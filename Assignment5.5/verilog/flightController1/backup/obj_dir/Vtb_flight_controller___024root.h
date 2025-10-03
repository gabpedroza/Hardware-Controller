// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_flight_controller.h for the primary calling header

#ifndef VERILATED_VTB_FLIGHT_CONTROLLER___024ROOT_H_
#define VERILATED_VTB_FLIGHT_CONTROLLER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_flight_controller__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_flight_controller___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_flight_controller__DOT__clock;
        CData/*0:0*/ tb_flight_controller__DOT__ready;
        CData/*0:0*/ tb_flight_controller__DOT__avail;
        CData/*0:0*/ tb_flight_controller__DOT__fc__DOT__int_avail;
        CData/*0:0*/ tb_flight_controller__DOT__fc__DOT__int_r__DOT__avail;
        CData/*0:0*/ tb_flight_controller__DOT__fc__DOT__int_s__DOT__byte_send;
        CData/*0:0*/ tb_flight_controller__DOT__int_s__DOT__byte_send;
        CData/*0:0*/ tb_flight_controller__DOT__int_r__DOT__avail;
        CData/*0:0*/ tb_flight_controller__DOT__period_clock;
        CData/*2:0*/ tb_flight_controller__DOT__cnt;
        CData/*0:0*/ tb_flight_controller__DOT__send;
        CData/*2:0*/ tb_flight_controller__DOT__fc__DOT__state;
        CData/*1:0*/ tb_flight_controller__DOT__fc__DOT__ints;
        CData/*7:0*/ tb_flight_controller__DOT__fc__DOT__count;
        CData/*0:0*/ tb_flight_controller__DOT__fc__DOT__prev_avail;
        CData/*0:0*/ tb_flight_controller__DOT__fc__DOT__int_send;
        CData/*0:0*/ tb_flight_controller__DOT__fc__DOT__int_ready;
        CData/*1:0*/ tb_flight_controller__DOT__fc__DOT__int_r__DOT__bytes;
        CData/*7:0*/ tb_flight_controller__DOT__fc__DOT__int_r__DOT__data;
        CData/*7:0*/ tb_flight_controller__DOT__fc__DOT__int_r__DOT__data_latch;
        CData/*0:0*/ tb_flight_controller__DOT__fc__DOT__int_r__DOT__prev_avail;
        CData/*1:0*/ tb_flight_controller__DOT__fc__DOT__int_r__DOT__state;
        CData/*2:0*/ tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__state;
        CData/*2:0*/ tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__bits;
        CData/*1:0*/ tb_flight_controller__DOT__fc__DOT__int_s__DOT__bytes;
        CData/*0:0*/ tb_flight_controller__DOT__fc__DOT__int_s__DOT__prev_send;
        CData/*1:0*/ tb_flight_controller__DOT__fc__DOT__int_s__DOT__state;
        CData/*7:0*/ tb_flight_controller__DOT__fc__DOT__int_s__DOT__data_to_send;
        CData/*0:0*/ tb_flight_controller__DOT__fc__DOT__int_s__DOT__wait_a_bit;
        CData/*0:0*/ tb_flight_controller__DOT__fc__DOT__int_s__DOT__ready;
        CData/*7:0*/ tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__copy_data;
        CData/*2:0*/ tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__state;
        CData/*2:0*/ tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__bits;
        CData/*0:0*/ tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__int_tx;
        CData/*1:0*/ tb_flight_controller__DOT__int_s__DOT__bytes;
        CData/*0:0*/ tb_flight_controller__DOT__int_s__DOT__prev_send;
        CData/*1:0*/ tb_flight_controller__DOT__int_s__DOT__state;
        CData/*7:0*/ tb_flight_controller__DOT__int_s__DOT__data_to_send;
        CData/*0:0*/ tb_flight_controller__DOT__int_s__DOT__wait_a_bit;
        CData/*0:0*/ tb_flight_controller__DOT__int_s__DOT__ready;
        CData/*7:0*/ tb_flight_controller__DOT__int_s__DOT__txm__DOT__copy_data;
        CData/*2:0*/ tb_flight_controller__DOT__int_s__DOT__txm__DOT__state;
        CData/*2:0*/ tb_flight_controller__DOT__int_s__DOT__txm__DOT__bits;
        CData/*0:0*/ tb_flight_controller__DOT__int_s__DOT__txm__DOT__int_tx;
        CData/*1:0*/ tb_flight_controller__DOT__int_r__DOT__bytes;
        CData/*7:0*/ tb_flight_controller__DOT__int_r__DOT__data;
        CData/*7:0*/ tb_flight_controller__DOT__int_r__DOT__data_latch;
        CData/*0:0*/ tb_flight_controller__DOT__int_r__DOT__prev_avail;
        CData/*1:0*/ tb_flight_controller__DOT__int_r__DOT__state;
        CData/*2:0*/ tb_flight_controller__DOT__int_r__DOT__rxm__DOT__state;
        CData/*2:0*/ tb_flight_controller__DOT__int_r__DOT__rxm__DOT__bits;
        CData/*7:0*/ __Vdly__tb_flight_controller__DOT__fc__DOT__count;
        CData/*2:0*/ __Vdly__tb_flight_controller__DOT__fc__DOT__state;
        CData/*1:0*/ __Vdly__tb_flight_controller__DOT__fc__DOT__ints;
        CData/*1:0*/ __Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__state;
        CData/*7:0*/ __Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__data_latch;
        CData/*1:0*/ __Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__bytes;
        CData/*2:0*/ __Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__state;
        CData/*0:0*/ __Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__avail;
        CData/*2:0*/ __Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__bits;
        CData/*1:0*/ __Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__bytes;
        CData/*1:0*/ __Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__state;
        CData/*0:0*/ __Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__wait_a_bit;
        CData/*2:0*/ __Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__state;
    };
    struct {
        CData/*0:0*/ __Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__ready;
        CData/*2:0*/ __Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__bits;
        CData/*7:0*/ __Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__copy_data;
        CData/*1:0*/ __Vdly__tb_flight_controller__DOT__int_s__DOT__bytes;
        CData/*1:0*/ __Vdly__tb_flight_controller__DOT__int_s__DOT__state;
        CData/*0:0*/ __Vdly__tb_flight_controller__DOT__int_s__DOT__wait_a_bit;
        CData/*0:0*/ __Vdly__tb_flight_controller__DOT__ready;
        CData/*2:0*/ __Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__state;
        CData/*0:0*/ __Vdly__tb_flight_controller__DOT__int_s__DOT__ready;
        CData/*2:0*/ __Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__bits;
        CData/*7:0*/ __Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__copy_data;
        CData/*1:0*/ __Vdly__tb_flight_controller__DOT__int_r__DOT__state;
        CData/*7:0*/ __Vdly__tb_flight_controller__DOT__int_r__DOT__data_latch;
        CData/*1:0*/ __Vdly__tb_flight_controller__DOT__int_r__DOT__bytes;
        CData/*2:0*/ __Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__state;
        CData/*0:0*/ __Vdly__tb_flight_controller__DOT__int_r__DOT__avail;
        CData/*2:0*/ __Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__bits;
        CData/*0:0*/ __VdlySet__tb_flight_controller__DOT__counter__v0;
        CData/*0:0*/ __VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v0;
        CData/*0:0*/ __VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v3;
        CData/*0:0*/ __VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v4;
        CData/*0:0*/ __VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v6;
        CData/*0:0*/ __VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v7;
        CData/*0:0*/ __VdlySet__tb_flight_controller__DOT__fc__DOT__velocities__v9;
        CData/*0:0*/ __VdlySet__tb_flight_controller__DOT__fc__DOT__velocities__v10;
        CData/*0:0*/ __VdlySet__tb_flight_controller__DOT__fc__DOT__velocities__v11;
        CData/*0:0*/ __VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v9;
        CData/*0:0*/ __VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v10;
        CData/*0:0*/ __VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v12;
        CData/*0:0*/ __VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v13;
        CData/*0:0*/ __VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v15;
        CData/*0:0*/ __VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v16;
        CData/*0:0*/ __VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v17;
        CData/*0:0*/ __VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v18;
        CData/*0:0*/ __VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v19;
        CData/*0:0*/ __VdlySet__tb_flight_controller__DOT__fc__DOT__velocities__v21;
        CData/*0:0*/ __VdlySet__tb_flight_controller__DOT__fc__DOT__velocities__v24;
        CData/*0:0*/ __VdlySet__tb_flight_controller__DOT__fc__DOT__velocities__v25;
        CData/*0:0*/ __VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v21;
        CData/*0:0*/ __VdlySet__tb_flight_controller__DOT__fc__DOT__positions__v22;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_flight_controller__DOT__ready__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_flight_controller__DOT__avail__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_flight_controller__DOT__clock__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_flight_controller__DOT__fc__DOT__int_avail__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__tb_flight_controller__DOT__fc__DOT__int_r__DOT__bytes__0;
        CData/*7:0*/ __Vtrigprevexpr___TOP__tb_flight_controller__DOT__fc__DOT__int_r__DOT__data__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_flight_controller__DOT__fc__DOT__int_r__DOT__avail__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_flight_controller__DOT__fc__DOT__int_s__DOT__byte_send__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_flight_controller__DOT__int_s__DOT__byte_send__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__tb_flight_controller__DOT__int_r__DOT__bytes__0;
        CData/*7:0*/ __Vtrigprevexpr___TOP__tb_flight_controller__DOT__int_r__DOT__data__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_flight_controller__DOT__int_r__DOT__avail__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*8:0*/ tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__count;
        SData/*8:0*/ tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__count;
        SData/*8:0*/ tb_flight_controller__DOT__int_s__DOT__txm__DOT__count;
        SData/*8:0*/ tb_flight_controller__DOT__int_r__DOT__rxm__DOT__count;
        SData/*8:0*/ __Vdly__tb_flight_controller__DOT__fc__DOT__int_r__DOT__rxm__DOT__count;
        SData/*8:0*/ __Vdly__tb_flight_controller__DOT__fc__DOT__int_s__DOT__txm__DOT__count;
        SData/*8:0*/ __Vdly__tb_flight_controller__DOT__int_s__DOT__txm__DOT__count;
        SData/*8:0*/ __Vdly__tb_flight_controller__DOT__int_r__DOT__rxm__DOT__count;
        IData/*31:0*/ tb_flight_controller__DOT__data;
        IData/*31:0*/ tb_flight_controller__DOT__counter;
    };
    struct {
        IData/*31:0*/ tb_flight_controller__DOT__data_back;
        IData/*31:0*/ tb_flight_controller__DOT__fc__DOT__result;
        IData/*31:0*/ tb_flight_controller__DOT__fc__DOT__data_latch;
        IData/*31:0*/ tb_flight_controller__DOT__fc__DOT__received_int;
        IData/*31:0*/ tb_flight_controller__DOT__fc__DOT__j;
        IData/*31:0*/ tb_flight_controller__DOT__fc__DOT__int_s__DOT__data_latch;
        IData/*31:0*/ tb_flight_controller__DOT__int_s__DOT__data_latch;
        IData/*31:0*/ __Vdly__tb_flight_controller__DOT__fc__DOT__data_latch;
        IData/*31:0*/ __Vdly__tb_flight_controller__DOT__fc__DOT__result;
        IData/*31:0*/ __VdlyVal__tb_flight_controller__DOT__counter__v0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tb_flight_controller__DOT__fc__DOT__received_int__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tb_flight_controller__DOT__fc__DOT__int_s__DOT__data_latch__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tb_flight_controller__DOT__int_s__DOT__data_latch__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tb_flight_controller__DOT__data_back__0;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 8> tb_flight_controller__DOT__data_out;
        VlUnpacked<IData/*31:0*/, 3> tb_flight_controller__DOT__fc__DOT__positions;
        VlUnpacked<IData/*31:0*/, 3> tb_flight_controller__DOT__fc__DOT__velocities;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerVec<19> __VactTriggered;
    VlTriggerVec<19> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_flight_controller__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_flight_controller___024root(Vtb_flight_controller__Syms* symsp, const char* v__name);
    ~Vtb_flight_controller___024root();
    VL_UNCOPYABLE(Vtb_flight_controller___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
