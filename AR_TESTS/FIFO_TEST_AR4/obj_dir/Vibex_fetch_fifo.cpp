// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vibex_fetch_fifo.h"
#include "Vibex_fetch_fifo__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vibex_fetch_fifo::Vibex_fetch_fifo(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vibex_fetch_fifo__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , clear_i{vlSymsp->TOP.clear_i}
    , busy_o{vlSymsp->TOP.busy_o}
    , in_valid_i{vlSymsp->TOP.in_valid_i}
    , in_err_i{vlSymsp->TOP.in_err_i}
    , out_valid_o{vlSymsp->TOP.out_valid_o}
    , out_ready_i{vlSymsp->TOP.out_ready_i}
    , out_err_o{vlSymsp->TOP.out_err_o}
    , out_err_plus2_o{vlSymsp->TOP.out_err_plus2_o}
    , in_addr_i{vlSymsp->TOP.in_addr_i}
    , in_rdata_i{vlSymsp->TOP.in_rdata_i}
    , out_addr_o{vlSymsp->TOP.out_addr_o}
    , out_rdata_o{vlSymsp->TOP.out_rdata_o}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vibex_fetch_fifo::Vibex_fetch_fifo(const char* _vcname__)
    : Vibex_fetch_fifo(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vibex_fetch_fifo::~Vibex_fetch_fifo() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vibex_fetch_fifo___024root___eval_debug_assertions(Vibex_fetch_fifo___024root* vlSelf);
#endif  // VL_DEBUG
void Vibex_fetch_fifo___024root___eval_static(Vibex_fetch_fifo___024root* vlSelf);
void Vibex_fetch_fifo___024root___eval_initial(Vibex_fetch_fifo___024root* vlSelf);
void Vibex_fetch_fifo___024root___eval_settle(Vibex_fetch_fifo___024root* vlSelf);
void Vibex_fetch_fifo___024root___eval(Vibex_fetch_fifo___024root* vlSelf);

void Vibex_fetch_fifo::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vibex_fetch_fifo::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vibex_fetch_fifo___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vibex_fetch_fifo___024root___eval_static(&(vlSymsp->TOP));
        Vibex_fetch_fifo___024root___eval_initial(&(vlSymsp->TOP));
        Vibex_fetch_fifo___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vibex_fetch_fifo___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vibex_fetch_fifo::eventsPending() { return false; }

uint64_t Vibex_fetch_fifo::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vibex_fetch_fifo::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vibex_fetch_fifo___024root___eval_final(Vibex_fetch_fifo___024root* vlSelf);

VL_ATTR_COLD void Vibex_fetch_fifo::final() {
    Vibex_fetch_fifo___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vibex_fetch_fifo::hierName() const { return vlSymsp->name(); }
const char* Vibex_fetch_fifo::modelName() const { return "Vibex_fetch_fifo"; }
unsigned Vibex_fetch_fifo::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vibex_fetch_fifo::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vibex_fetch_fifo___024root__trace_init_top(Vibex_fetch_fifo___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vibex_fetch_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vibex_fetch_fifo___024root*>(voidSelf);
    Vibex_fetch_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vibex_fetch_fifo___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vibex_fetch_fifo___024root__trace_register(Vibex_fetch_fifo___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vibex_fetch_fifo::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vibex_fetch_fifo::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vibex_fetch_fifo___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
