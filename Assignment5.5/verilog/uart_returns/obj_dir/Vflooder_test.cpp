// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vflooder_test__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vflooder_test::Vflooder_test(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vflooder_test__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vflooder_test::Vflooder_test(const char* _vcname__)
    : Vflooder_test(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vflooder_test::~Vflooder_test() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vflooder_test___024root___eval_debug_assertions(Vflooder_test___024root* vlSelf);
#endif  // VL_DEBUG
void Vflooder_test___024root___eval_static(Vflooder_test___024root* vlSelf);
void Vflooder_test___024root___eval_initial(Vflooder_test___024root* vlSelf);
void Vflooder_test___024root___eval_settle(Vflooder_test___024root* vlSelf);
void Vflooder_test___024root___eval(Vflooder_test___024root* vlSelf);

void Vflooder_test::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vflooder_test::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vflooder_test___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vflooder_test___024root___eval_static(&(vlSymsp->TOP));
        Vflooder_test___024root___eval_initial(&(vlSymsp->TOP));
        Vflooder_test___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vflooder_test___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vflooder_test::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vflooder_test::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vflooder_test::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vflooder_test___024root___eval_final(Vflooder_test___024root* vlSelf);

VL_ATTR_COLD void Vflooder_test::final() {
    Vflooder_test___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vflooder_test::hierName() const { return vlSymsp->name(); }
const char* Vflooder_test::modelName() const { return "Vflooder_test"; }
unsigned Vflooder_test::threads() const { return 1; }
void Vflooder_test::prepareClone() const { contextp()->prepareClone(); }
void Vflooder_test::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vflooder_test::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vflooder_test___024root__trace_decl_types(VerilatedVcd* tracep);

void Vflooder_test___024root__trace_init_top(Vflooder_test___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vflooder_test___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vflooder_test___024root*>(voidSelf);
    Vflooder_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vflooder_test___024root__trace_decl_types(tracep);
    Vflooder_test___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vflooder_test___024root__trace_register(Vflooder_test___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vflooder_test::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vflooder_test::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vflooder_test___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
