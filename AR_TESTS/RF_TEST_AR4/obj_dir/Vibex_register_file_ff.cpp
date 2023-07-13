// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vibex_register_file_ff.h"
#include "Vibex_register_file_ff__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vibex_register_file_ff::Vibex_register_file_ff(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vibex_register_file_ff__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , test_en_i{vlSymsp->TOP.test_en_i}
    , dummy_instr_id_i{vlSymsp->TOP.dummy_instr_id_i}
    , dummy_instr_wb_i{vlSymsp->TOP.dummy_instr_wb_i}
    , raddr_a_i{vlSymsp->TOP.raddr_a_i}
    , raddr_b_i{vlSymsp->TOP.raddr_b_i}
    , waddr_a_i{vlSymsp->TOP.waddr_a_i}
    , we_a_i{vlSymsp->TOP.we_a_i}
    , err_o{vlSymsp->TOP.err_o}
    , rdata_a_o{vlSymsp->TOP.rdata_a_o}
    , rdata_b_o{vlSymsp->TOP.rdata_b_o}
    , wdata_a_i{vlSymsp->TOP.wdata_a_i}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vibex_register_file_ff::Vibex_register_file_ff(const char* _vcname__)
    : Vibex_register_file_ff(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vibex_register_file_ff::~Vibex_register_file_ff() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vibex_register_file_ff___024root___eval_debug_assertions(Vibex_register_file_ff___024root* vlSelf);
#endif  // VL_DEBUG
void Vibex_register_file_ff___024root___eval_static(Vibex_register_file_ff___024root* vlSelf);
void Vibex_register_file_ff___024root___eval_initial(Vibex_register_file_ff___024root* vlSelf);
void Vibex_register_file_ff___024root___eval_settle(Vibex_register_file_ff___024root* vlSelf);
void Vibex_register_file_ff___024root___eval(Vibex_register_file_ff___024root* vlSelf);

void Vibex_register_file_ff::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vibex_register_file_ff::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vibex_register_file_ff___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vibex_register_file_ff___024root___eval_static(&(vlSymsp->TOP));
        Vibex_register_file_ff___024root___eval_initial(&(vlSymsp->TOP));
        Vibex_register_file_ff___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vibex_register_file_ff___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vibex_register_file_ff::eventsPending() { return false; }

uint64_t Vibex_register_file_ff::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vibex_register_file_ff::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vibex_register_file_ff___024root___eval_final(Vibex_register_file_ff___024root* vlSelf);

VL_ATTR_COLD void Vibex_register_file_ff::final() {
    Vibex_register_file_ff___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vibex_register_file_ff::hierName() const { return vlSymsp->name(); }
const char* Vibex_register_file_ff::modelName() const { return "Vibex_register_file_ff"; }
unsigned Vibex_register_file_ff::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vibex_register_file_ff::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vibex_register_file_ff___024root__trace_init_top(Vibex_register_file_ff___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vibex_register_file_ff___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vibex_register_file_ff___024root*>(voidSelf);
    Vibex_register_file_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vibex_register_file_ff___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vibex_register_file_ff___024root__trace_register(Vibex_register_file_ff___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vibex_register_file_ff::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vibex_register_file_ff::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vibex_register_file_ff___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
