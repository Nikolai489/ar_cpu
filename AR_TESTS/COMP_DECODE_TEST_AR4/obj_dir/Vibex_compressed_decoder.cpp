// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vibex_compressed_decoder.h"
#include "Vibex_compressed_decoder__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vibex_compressed_decoder::Vibex_compressed_decoder(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vibex_compressed_decoder__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , valid_i{vlSymsp->TOP.valid_i}
    , is_compressed_o{vlSymsp->TOP.is_compressed_o}
    , illegal_instr_o{vlSymsp->TOP.illegal_instr_o}
    , enum_dpi{vlSymsp->TOP.enum_dpi}
    , instr_i{vlSymsp->TOP.instr_i}
    , instr_o{vlSymsp->TOP.instr_o}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vibex_compressed_decoder::Vibex_compressed_decoder(const char* _vcname__)
    : Vibex_compressed_decoder(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vibex_compressed_decoder::~Vibex_compressed_decoder() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vibex_compressed_decoder___024root___eval_debug_assertions(Vibex_compressed_decoder___024root* vlSelf);
#endif  // VL_DEBUG
void Vibex_compressed_decoder___024root___eval_static(Vibex_compressed_decoder___024root* vlSelf);
void Vibex_compressed_decoder___024root___eval_initial(Vibex_compressed_decoder___024root* vlSelf);
void Vibex_compressed_decoder___024root___eval_settle(Vibex_compressed_decoder___024root* vlSelf);
void Vibex_compressed_decoder___024root___eval(Vibex_compressed_decoder___024root* vlSelf);

void Vibex_compressed_decoder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vibex_compressed_decoder::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vibex_compressed_decoder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vibex_compressed_decoder___024root___eval_static(&(vlSymsp->TOP));
        Vibex_compressed_decoder___024root___eval_initial(&(vlSymsp->TOP));
        Vibex_compressed_decoder___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vibex_compressed_decoder___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vibex_compressed_decoder::eventsPending() { return false; }

uint64_t Vibex_compressed_decoder::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vibex_compressed_decoder::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vibex_compressed_decoder___024root___eval_final(Vibex_compressed_decoder___024root* vlSelf);

VL_ATTR_COLD void Vibex_compressed_decoder::final() {
    Vibex_compressed_decoder___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vibex_compressed_decoder::hierName() const { return vlSymsp->name(); }
const char* Vibex_compressed_decoder::modelName() const { return "Vibex_compressed_decoder"; }
unsigned Vibex_compressed_decoder::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vibex_compressed_decoder::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vibex_compressed_decoder___024root__trace_init_top(Vibex_compressed_decoder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vibex_compressed_decoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vibex_compressed_decoder___024root*>(voidSelf);
    Vibex_compressed_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vibex_compressed_decoder___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vibex_compressed_decoder___024root__trace_register(Vibex_compressed_decoder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vibex_compressed_decoder::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vibex_compressed_decoder::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vibex_compressed_decoder___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
