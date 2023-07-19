// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcve2_alu.h"
#include "Vcve2_alu__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vcve2_alu::Vcve2_alu(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcve2_alu__Syms(contextp(), _vcname__, this)}
    , operator_i{vlSymsp->TOP.operator_i}
    , clk_i{vlSymsp->TOP.clk_i}
    , instr_first_cycle_i{vlSymsp->TOP.instr_first_cycle_i}
    , multdiv_sel_i{vlSymsp->TOP.multdiv_sel_i}
    , imd_val_we_o{vlSymsp->TOP.imd_val_we_o}
    , comparison_result_o{vlSymsp->TOP.comparison_result_o}
    , is_equal_result_o{vlSymsp->TOP.is_equal_result_o}
    , operand_a_i{vlSymsp->TOP.operand_a_i}
    , operand_b_i{vlSymsp->TOP.operand_b_i}
    , adder_result_o{vlSymsp->TOP.adder_result_o}
    , result_o{vlSymsp->TOP.result_o}
    , multdiv_operand_a_i{vlSymsp->TOP.multdiv_operand_a_i}
    , multdiv_operand_b_i{vlSymsp->TOP.multdiv_operand_b_i}
    , adder_result_ext_o{vlSymsp->TOP.adder_result_ext_o}
    , imd_val_q_i{vlSymsp->TOP.imd_val_q_i}
    , imd_val_d_o{vlSymsp->TOP.imd_val_d_o}
    , __PVT__cve2_pkg{vlSymsp->TOP.__PVT__cve2_pkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcve2_alu::Vcve2_alu(const char* _vcname__)
    : Vcve2_alu(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcve2_alu::~Vcve2_alu() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcve2_alu___024root___eval_debug_assertions(Vcve2_alu___024root* vlSelf);
#endif  // VL_DEBUG
void Vcve2_alu___024root___eval_static(Vcve2_alu___024root* vlSelf);
void Vcve2_alu___024root___eval_initial(Vcve2_alu___024root* vlSelf);
void Vcve2_alu___024root___eval_settle(Vcve2_alu___024root* vlSelf);
void Vcve2_alu___024root___eval(Vcve2_alu___024root* vlSelf);

void Vcve2_alu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcve2_alu::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcve2_alu___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcve2_alu___024root___eval_static(&(vlSymsp->TOP));
        Vcve2_alu___024root___eval_initial(&(vlSymsp->TOP));
        Vcve2_alu___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcve2_alu___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcve2_alu::eventsPending() { return false; }

uint64_t Vcve2_alu::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcve2_alu::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcve2_alu___024root___eval_final(Vcve2_alu___024root* vlSelf);

VL_ATTR_COLD void Vcve2_alu::final() {
    Vcve2_alu___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcve2_alu::hierName() const { return vlSymsp->name(); }
const char* Vcve2_alu::modelName() const { return "Vcve2_alu"; }
unsigned Vcve2_alu::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vcve2_alu::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcve2_alu___024root__trace_init_top(Vcve2_alu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcve2_alu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcve2_alu___024root*>(voidSelf);
    Vcve2_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vcve2_alu___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vcve2_alu___024root__trace_register(Vcve2_alu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcve2_alu::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcve2_alu::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vcve2_alu___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
