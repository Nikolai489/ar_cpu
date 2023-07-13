// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vibex_prefetch_buffer.h"
#include "Vibex_prefetch_buffer__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vibex_prefetch_buffer::Vibex_prefetch_buffer(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vibex_prefetch_buffer__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , req_i{vlSymsp->TOP.req_i}
    , branch_i{vlSymsp->TOP.branch_i}
    , ready_i{vlSymsp->TOP.ready_i}
    , valid_o{vlSymsp->TOP.valid_o}
    , err_o{vlSymsp->TOP.err_o}
    , err_plus2_o{vlSymsp->TOP.err_plus2_o}
    , instr_req_o{vlSymsp->TOP.instr_req_o}
    , instr_gnt_i{vlSymsp->TOP.instr_gnt_i}
    , instr_err_i{vlSymsp->TOP.instr_err_i}
    , instr_rvalid_i{vlSymsp->TOP.instr_rvalid_i}
    , busy_o{vlSymsp->TOP.busy_o}
    , addr_i{vlSymsp->TOP.addr_i}
    , rdata_o{vlSymsp->TOP.rdata_o}
    , addr_o{vlSymsp->TOP.addr_o}
    , instr_addr_o{vlSymsp->TOP.instr_addr_o}
    , instr_rdata_i{vlSymsp->TOP.instr_rdata_i}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vibex_prefetch_buffer::Vibex_prefetch_buffer(const char* _vcname__)
    : Vibex_prefetch_buffer(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vibex_prefetch_buffer::~Vibex_prefetch_buffer() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vibex_prefetch_buffer___024root___eval_debug_assertions(Vibex_prefetch_buffer___024root* vlSelf);
#endif  // VL_DEBUG
void Vibex_prefetch_buffer___024root___eval_static(Vibex_prefetch_buffer___024root* vlSelf);
void Vibex_prefetch_buffer___024root___eval_initial(Vibex_prefetch_buffer___024root* vlSelf);
void Vibex_prefetch_buffer___024root___eval_settle(Vibex_prefetch_buffer___024root* vlSelf);
void Vibex_prefetch_buffer___024root___eval(Vibex_prefetch_buffer___024root* vlSelf);

void Vibex_prefetch_buffer::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vibex_prefetch_buffer::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vibex_prefetch_buffer___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vibex_prefetch_buffer___024root___eval_static(&(vlSymsp->TOP));
        Vibex_prefetch_buffer___024root___eval_initial(&(vlSymsp->TOP));
        Vibex_prefetch_buffer___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vibex_prefetch_buffer___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vibex_prefetch_buffer::eventsPending() { return false; }

uint64_t Vibex_prefetch_buffer::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vibex_prefetch_buffer::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vibex_prefetch_buffer___024root___eval_final(Vibex_prefetch_buffer___024root* vlSelf);

VL_ATTR_COLD void Vibex_prefetch_buffer::final() {
    Vibex_prefetch_buffer___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vibex_prefetch_buffer::hierName() const { return vlSymsp->name(); }
const char* Vibex_prefetch_buffer::modelName() const { return "Vibex_prefetch_buffer"; }
unsigned Vibex_prefetch_buffer::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vibex_prefetch_buffer::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vibex_prefetch_buffer___024root__trace_init_top(Vibex_prefetch_buffer___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vibex_prefetch_buffer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vibex_prefetch_buffer___024root*>(voidSelf);
    Vibex_prefetch_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vibex_prefetch_buffer___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vibex_prefetch_buffer___024root__trace_register(Vibex_prefetch_buffer___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vibex_prefetch_buffer::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vibex_prefetch_buffer::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vibex_prefetch_buffer___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
