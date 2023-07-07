// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdr32e_dec.h for the primary calling header

#ifndef VERILATED_VDR32E_DEC___024ROOT_H_
#define VERILATED_VDR32E_DEC___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
class Vdr32e_dec_dr32e_pkg;


class Vdr32e_dec__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdr32e_dec___024root final : public VerilatedModule {
  public:
    // CELLS
    Vdr32e_dec_dr32e_pkg* __PVT__dr32e_pkg;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        VL_OUT8(illegal_insn_o,0,0);
        VL_OUT8(ebrk_insn_o,0,0);
        VL_OUT8(mret_insn_o,0,0);
        VL_OUT8(dret_insn_o,0,0);
        VL_OUT8(ecall_insn_o,0,0);
        VL_OUT8(wfi_insn_o,0,0);
        VL_OUT8(jump_set_o,0,0);
        VL_IN8(branch_taken_i,0,0);
        VL_OUT8(icache_inval_o,0,0);
        VL_IN8(instr_first_cycle_i,0,0);
        VL_IN8(illegal_c_insn_i,0,0);
        VL_OUT8(imm_a_mux_sel_o,0,0);
        VL_OUT8(imm_b_mux_sel_o,2,0);
        VL_OUT8(bt_a_mux_sel_o,1,0);
        VL_OUT8(bt_b_mux_sel_o,2,0);
        VL_OUT8(rf_wdata_sel_o,0,0);
        VL_OUT8(rf_we_o,0,0);
        VL_OUT8(rf_raddr_a_o,4,0);
        VL_OUT8(rf_raddr_b_o,4,0);
        VL_OUT8(rf_waddr_o,4,0);
        VL_OUT8(rf_ren_a_o,0,0);
        VL_OUT8(rf_ren_b_o,0,0);
        VL_OUT8(alu_operator_o,6,0);
        VL_OUT8(alu_op_a_mux_sel_o,1,0);
        VL_OUT8(alu_op_b_mux_sel_o,0,0);
        VL_OUT8(alu_multicycle_o,0,0);
        VL_OUT8(mult_en_o,0,0);
        VL_OUT8(div_en_o,0,0);
        VL_OUT8(mult_sel_o,0,0);
        VL_OUT8(div_sel_o,0,0);
        VL_OUT8(multdiv_operator_o,1,0);
        VL_OUT8(multdiv_signed_mode_o,1,0);
        VL_OUT8(csr_access_o,0,0);
        VL_OUT8(csr_op_o,1,0);
        VL_OUT8(data_req_o,0,0);
        VL_OUT8(data_we_o,0,0);
        VL_OUT8(data_type_o,1,0);
        VL_OUT8(data_sign_extension_o,0,0);
        VL_OUT8(jump_in_dec_o,0,0);
        VL_OUT8(branch_in_dec_o,0,0);
        CData/*0:0*/ dr32e_dec__DOT__illegal_insn;
        CData/*0:0*/ dr32e_dec__DOT__csr_illegal;
        CData/*0:0*/ dr32e_dec__DOT__rf_we;
        CData/*1:0*/ dr32e_dec__DOT__csr_op;
        CData/*6:0*/ dr32e_dec__DOT__opcode;
        CData/*6:0*/ dr32e_dec__DOT__opcode_alu;
        CData/*0:0*/ dr32e_dec__DOT____Vtogcov__clk_i;
        CData/*0:0*/ dr32e_dec__DOT____Vtogcov__rst_ni;
        CData/*0:0*/ dr32e_dec__DOT____Vtogcov__illegal_insn_o;
        CData/*0:0*/ dr32e_dec__DOT____Vtogcov__ebrk_insn_o;
        CData/*0:0*/ dr32e_dec__DOT____Vtogcov__mret_insn_o;
        CData/*0:0*/ dr32e_dec__DOT____Vtogcov__dret_insn_o;
        CData/*0:0*/ dr32e_dec__DOT____Vtogcov__ecall_insn_o;
        CData/*0:0*/ dr32e_dec__DOT____Vtogcov__wfi_insn_o;
        CData/*0:0*/ dr32e_dec__DOT____Vtogcov__jump_set_o;
        CData/*0:0*/ dr32e_dec__DOT____Vtogcov__branch_taken_i;
        CData/*0:0*/ dr32e_dec__DOT____Vtogcov__icache_inval_o;
        CData/*0:0*/ dr32e_dec__DOT____Vtogcov__instr_first_cycle_i;
        CData/*0:0*/ dr32e_dec__DOT____Vtogcov__illegal_c_insn_i;
        CData/*0:0*/ dr32e_dec__DOT____Vtogcov__imm_a_mux_sel_o;
        CData/*2:0*/ dr32e_dec__DOT____Vtogcov__imm_b_mux_sel_o;
        CData/*1:0*/ dr32e_dec__DOT____Vtogcov__bt_a_mux_sel_o;
    };
    struct {
        CData/*2:0*/ dr32e_dec__DOT____Vtogcov__bt_b_mux_sel_o;
        CData/*0:0*/ dr32e_dec__DOT____Vtogcov__rf_wdata_sel_o;
        CData/*0:0*/ dr32e_dec__DOT____Vtogcov__rf_we_o;
        CData/*4:0*/ dr32e_dec__DOT____Vtogcov__rf_raddr_a_o;
        CData/*4:0*/ dr32e_dec__DOT____Vtogcov__rf_raddr_b_o;
        CData/*4:0*/ dr32e_dec__DOT____Vtogcov__rf_waddr_o;
        CData/*0:0*/ dr32e_dec__DOT____Vtogcov__rf_ren_a_o;
        CData/*0:0*/ dr32e_dec__DOT____Vtogcov__rf_ren_b_o;
        CData/*6:0*/ dr32e_dec__DOT____Vtogcov__alu_operator_o;
        CData/*1:0*/ dr32e_dec__DOT____Vtogcov__alu_op_a_mux_sel_o;
        CData/*0:0*/ dr32e_dec__DOT____Vtogcov__alu_op_b_mux_sel_o;
        CData/*0:0*/ dr32e_dec__DOT____Vtogcov__alu_multicycle_o;
        CData/*0:0*/ dr32e_dec__DOT____Vtogcov__mult_en_o;
        CData/*0:0*/ dr32e_dec__DOT____Vtogcov__div_en_o;
        CData/*0:0*/ dr32e_dec__DOT____Vtogcov__mult_sel_o;
        CData/*0:0*/ dr32e_dec__DOT____Vtogcov__div_sel_o;
        CData/*1:0*/ dr32e_dec__DOT____Vtogcov__multdiv_operator_o;
        CData/*1:0*/ dr32e_dec__DOT____Vtogcov__multdiv_signed_mode_o;
        CData/*0:0*/ dr32e_dec__DOT____Vtogcov__csr_access_o;
        CData/*1:0*/ dr32e_dec__DOT____Vtogcov__csr_op_o;
        CData/*0:0*/ dr32e_dec__DOT____Vtogcov__data_req_o;
        CData/*0:0*/ dr32e_dec__DOT____Vtogcov__data_we_o;
        CData/*1:0*/ dr32e_dec__DOT____Vtogcov__data_type_o;
        CData/*0:0*/ dr32e_dec__DOT____Vtogcov__data_sign_extension_o;
        CData/*0:0*/ dr32e_dec__DOT____Vtogcov__jump_in_dec_o;
        CData/*0:0*/ dr32e_dec__DOT____Vtogcov__branch_in_dec_o;
        CData/*0:0*/ dr32e_dec__DOT____Vtogcov__illegal_insn;
        CData/*0:0*/ dr32e_dec__DOT____Vtogcov__illegal_reg_rv32e;
        CData/*0:0*/ dr32e_dec__DOT____Vtogcov__csr_illegal;
        CData/*0:0*/ dr32e_dec__DOT____Vtogcov__rf_we;
        CData/*4:0*/ dr32e_dec__DOT____Vtogcov__instr_rs1;
        CData/*4:0*/ dr32e_dec__DOT____Vtogcov__instr_rs3;
        CData/*1:0*/ dr32e_dec__DOT____Vtogcov__csr_op;
        CData/*6:0*/ dr32e_dec__DOT____Vtogcov__opcode;
        CData/*6:0*/ dr32e_dec__DOT____Vtogcov__opcode_alu;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ dr32e_dec__DOT__unused_instr_alu;
        SData/*9:0*/ dr32e_dec__DOT____Vtogcov__unused_instr_alu;
        VL_IN(instr_rdata_i,31,0);
        VL_IN(instr_rdata_alu_i,31,0);
        VL_OUT(imm_i_type_o,31,0);
        VL_OUT(imm_s_type_o,31,0);
        VL_OUT(imm_b_type_o,31,0);
        VL_OUT(imm_u_type_o,31,0);
        VL_OUT(imm_j_type_o,31,0);
        VL_OUT(zimm_rs1_type_o,31,0);
        IData/*31:0*/ dr32e_dec__DOT____Vtogcov__instr_rdata_i;
        IData/*31:0*/ dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i;
        IData/*31:0*/ dr32e_dec__DOT____Vtogcov__imm_i_type_o;
        IData/*31:0*/ dr32e_dec__DOT____Vtogcov__imm_s_type_o;
        IData/*31:0*/ dr32e_dec__DOT____Vtogcov__imm_b_type_o;
        IData/*31:0*/ dr32e_dec__DOT____Vtogcov__imm_u_type_o;
        IData/*31:0*/ dr32e_dec__DOT____Vtogcov__imm_j_type_o;
        IData/*31:0*/ dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdr32e_dec__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdr32e_dec___024root(Vdr32e_dec__Syms* symsp, const char* v__name);
    ~Vdr32e_dec___024root();
    VL_UNCOPYABLE(Vdr32e_dec___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
