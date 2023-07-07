// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdr32e_dec.h"
#include "Vdr32e_dec__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdr32e_dec::Vdr32e_dec(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdr32e_dec__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , illegal_insn_o{vlSymsp->TOP.illegal_insn_o}
    , ebrk_insn_o{vlSymsp->TOP.ebrk_insn_o}
    , mret_insn_o{vlSymsp->TOP.mret_insn_o}
    , dret_insn_o{vlSymsp->TOP.dret_insn_o}
    , ecall_insn_o{vlSymsp->TOP.ecall_insn_o}
    , wfi_insn_o{vlSymsp->TOP.wfi_insn_o}
    , jump_set_o{vlSymsp->TOP.jump_set_o}
    , branch_taken_i{vlSymsp->TOP.branch_taken_i}
    , icache_inval_o{vlSymsp->TOP.icache_inval_o}
    , instr_first_cycle_i{vlSymsp->TOP.instr_first_cycle_i}
    , illegal_c_insn_i{vlSymsp->TOP.illegal_c_insn_i}
    , imm_a_mux_sel_o{vlSymsp->TOP.imm_a_mux_sel_o}
    , imm_b_mux_sel_o{vlSymsp->TOP.imm_b_mux_sel_o}
    , bt_a_mux_sel_o{vlSymsp->TOP.bt_a_mux_sel_o}
    , bt_b_mux_sel_o{vlSymsp->TOP.bt_b_mux_sel_o}
    , rf_wdata_sel_o{vlSymsp->TOP.rf_wdata_sel_o}
    , rf_we_o{vlSymsp->TOP.rf_we_o}
    , rf_raddr_a_o{vlSymsp->TOP.rf_raddr_a_o}
    , rf_raddr_b_o{vlSymsp->TOP.rf_raddr_b_o}
    , rf_waddr_o{vlSymsp->TOP.rf_waddr_o}
    , rf_ren_a_o{vlSymsp->TOP.rf_ren_a_o}
    , rf_ren_b_o{vlSymsp->TOP.rf_ren_b_o}
    , alu_operator_o{vlSymsp->TOP.alu_operator_o}
    , alu_op_a_mux_sel_o{vlSymsp->TOP.alu_op_a_mux_sel_o}
    , alu_op_b_mux_sel_o{vlSymsp->TOP.alu_op_b_mux_sel_o}
    , alu_multicycle_o{vlSymsp->TOP.alu_multicycle_o}
    , mult_en_o{vlSymsp->TOP.mult_en_o}
    , div_en_o{vlSymsp->TOP.div_en_o}
    , mult_sel_o{vlSymsp->TOP.mult_sel_o}
    , div_sel_o{vlSymsp->TOP.div_sel_o}
    , multdiv_operator_o{vlSymsp->TOP.multdiv_operator_o}
    , multdiv_signed_mode_o{vlSymsp->TOP.multdiv_signed_mode_o}
    , csr_access_o{vlSymsp->TOP.csr_access_o}
    , csr_op_o{vlSymsp->TOP.csr_op_o}
    , data_req_o{vlSymsp->TOP.data_req_o}
    , data_we_o{vlSymsp->TOP.data_we_o}
    , data_type_o{vlSymsp->TOP.data_type_o}
    , data_sign_extension_o{vlSymsp->TOP.data_sign_extension_o}
    , jump_in_dec_o{vlSymsp->TOP.jump_in_dec_o}
    , branch_in_dec_o{vlSymsp->TOP.branch_in_dec_o}
    , instr_rdata_i{vlSymsp->TOP.instr_rdata_i}
    , instr_rdata_alu_i{vlSymsp->TOP.instr_rdata_alu_i}
    , imm_i_type_o{vlSymsp->TOP.imm_i_type_o}
    , imm_s_type_o{vlSymsp->TOP.imm_s_type_o}
    , imm_b_type_o{vlSymsp->TOP.imm_b_type_o}
    , imm_u_type_o{vlSymsp->TOP.imm_u_type_o}
    , imm_j_type_o{vlSymsp->TOP.imm_j_type_o}
    , zimm_rs1_type_o{vlSymsp->TOP.zimm_rs1_type_o}
    , __PVT__dr32e_pkg{vlSymsp->TOP.__PVT__dr32e_pkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdr32e_dec::Vdr32e_dec(const char* _vcname__)
    : Vdr32e_dec(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdr32e_dec::~Vdr32e_dec() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdr32e_dec___024root___eval_debug_assertions(Vdr32e_dec___024root* vlSelf);
#endif  // VL_DEBUG
void Vdr32e_dec___024root___eval_static(Vdr32e_dec___024root* vlSelf);
void Vdr32e_dec___024root___eval_initial(Vdr32e_dec___024root* vlSelf);
void Vdr32e_dec___024root___eval_settle(Vdr32e_dec___024root* vlSelf);
void Vdr32e_dec___024root___eval(Vdr32e_dec___024root* vlSelf);

void Vdr32e_dec::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdr32e_dec::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdr32e_dec___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdr32e_dec___024root___eval_static(&(vlSymsp->TOP));
        Vdr32e_dec___024root___eval_initial(&(vlSymsp->TOP));
        Vdr32e_dec___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdr32e_dec___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdr32e_dec::eventsPending() { return false; }

uint64_t Vdr32e_dec::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vdr32e_dec::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdr32e_dec___024root___eval_final(Vdr32e_dec___024root* vlSelf);

VL_ATTR_COLD void Vdr32e_dec::final() {
    Vdr32e_dec___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdr32e_dec::hierName() const { return vlSymsp->name(); }
const char* Vdr32e_dec::modelName() const { return "Vdr32e_dec"; }
unsigned Vdr32e_dec::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vdr32e_dec::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdr32e_dec___024root__trace_init_top(Vdr32e_dec___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdr32e_dec___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdr32e_dec___024root*>(voidSelf);
    Vdr32e_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vdr32e_dec___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vdr32e_dec___024root__trace_register(Vdr32e_dec___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdr32e_dec::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vdr32e_dec::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdr32e_dec___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
