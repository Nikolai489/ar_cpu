// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdr32e_branch_predict.h"
#include "Vdr32e_branch_predict__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdr32e_branch_predict::Vdr32e_branch_predict(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdr32e_branch_predict__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , fetch_valid_i{vlSymsp->TOP.fetch_valid_i}
    , predict_branch_taken_o{vlSymsp->TOP.predict_branch_taken_o}
    , fetch_rdata_i{vlSymsp->TOP.fetch_rdata_i}
    , fetch_pc_i{vlSymsp->TOP.fetch_pc_i}
    , predict_branch_pc_o{vlSymsp->TOP.predict_branch_pc_o}
    , __PVT__dr32e_pkg{vlSymsp->TOP.__PVT__dr32e_pkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdr32e_branch_predict::Vdr32e_branch_predict(const char* _vcname__)
    : Vdr32e_branch_predict(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdr32e_branch_predict::~Vdr32e_branch_predict() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdr32e_branch_predict___024root___eval_debug_assertions(Vdr32e_branch_predict___024root* vlSelf);
#endif  // VL_DEBUG
void Vdr32e_branch_predict___024root___eval_static(Vdr32e_branch_predict___024root* vlSelf);
void Vdr32e_branch_predict___024root___eval_initial(Vdr32e_branch_predict___024root* vlSelf);
void Vdr32e_branch_predict___024root___eval_settle(Vdr32e_branch_predict___024root* vlSelf);
void Vdr32e_branch_predict___024root___eval(Vdr32e_branch_predict___024root* vlSelf);

void Vdr32e_branch_predict::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdr32e_branch_predict::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdr32e_branch_predict___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdr32e_branch_predict___024root___eval_static(&(vlSymsp->TOP));
        Vdr32e_branch_predict___024root___eval_initial(&(vlSymsp->TOP));
        Vdr32e_branch_predict___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdr32e_branch_predict___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdr32e_branch_predict::eventsPending() { return false; }

uint64_t Vdr32e_branch_predict::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vdr32e_branch_predict::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdr32e_branch_predict___024root___eval_final(Vdr32e_branch_predict___024root* vlSelf);

VL_ATTR_COLD void Vdr32e_branch_predict::final() {
    Vdr32e_branch_predict___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdr32e_branch_predict::hierName() const { return vlSymsp->name(); }
const char* Vdr32e_branch_predict::modelName() const { return "Vdr32e_branch_predict"; }
unsigned Vdr32e_branch_predict::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vdr32e_branch_predict::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdr32e_branch_predict___024root__trace_init_top(Vdr32e_branch_predict___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdr32e_branch_predict___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdr32e_branch_predict___024root*>(voidSelf);
    Vdr32e_branch_predict__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vdr32e_branch_predict___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vdr32e_branch_predict___024root__trace_register(Vdr32e_branch_predict___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdr32e_branch_predict::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vdr32e_branch_predict::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdr32e_branch_predict___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
