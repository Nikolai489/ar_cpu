// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdr32e_dec.h for the primary calling header

#include "verilated.h"

#include "Vdr32e_dec__Syms.h"
#include "Vdr32e_dec___024root.h"

VL_ATTR_COLD void Vdr32e_dec___024root___eval_static(Vdr32e_dec___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_dec___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vdr32e_dec___024root___eval_initial__TOP(Vdr32e_dec___024root* vlSelf);

VL_ATTR_COLD void Vdr32e_dec___024root___eval_initial(Vdr32e_dec___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_dec___024root___eval_initial\n"); );
    // Body
    Vdr32e_dec___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vdr32e_dec___024root___eval_final(Vdr32e_dec___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_dec___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vdr32e_dec___024root___eval_triggers__stl(Vdr32e_dec___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdr32e_dec___024root___dump_triggers__stl(Vdr32e_dec___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vdr32e_dec___024root___eval_stl(Vdr32e_dec___024root* vlSelf);

VL_ATTR_COLD void Vdr32e_dec___024root___eval_settle(Vdr32e_dec___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_dec___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vdr32e_dec___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vdr32e_dec___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("verilog/dr32e_dec.v", 17, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vdr32e_dec___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdr32e_dec___024root___dump_triggers__stl(Vdr32e_dec___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_dec___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdr32e_dec___024root___stl_sequent__TOP__0(Vdr32e_dec___024root* vlSelf);
void Vdr32e_dec___024root___ico_sequent__TOP__1(Vdr32e_dec___024root* vlSelf);

VL_ATTR_COLD void Vdr32e_dec___024root___eval_stl(Vdr32e_dec___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_dec___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vdr32e_dec___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        Vdr32e_dec___024root___ico_sequent__TOP__1(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdr32e_dec___024root___dump_triggers__ico(Vdr32e_dec___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_dec___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdr32e_dec___024root___dump_triggers__act(Vdr32e_dec___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_dec___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdr32e_dec___024root___dump_triggers__nba(Vdr32e_dec___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_dec___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdr32e_dec___024root___ctor_var_reset(Vdr32e_dec___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_dec___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->illegal_insn_o = VL_RAND_RESET_I(1);
    vlSelf->ebrk_insn_o = VL_RAND_RESET_I(1);
    vlSelf->mret_insn_o = VL_RAND_RESET_I(1);
    vlSelf->dret_insn_o = VL_RAND_RESET_I(1);
    vlSelf->ecall_insn_o = VL_RAND_RESET_I(1);
    vlSelf->wfi_insn_o = VL_RAND_RESET_I(1);
    vlSelf->jump_set_o = VL_RAND_RESET_I(1);
    vlSelf->branch_taken_i = VL_RAND_RESET_I(1);
    vlSelf->icache_inval_o = VL_RAND_RESET_I(1);
    vlSelf->instr_first_cycle_i = VL_RAND_RESET_I(1);
    vlSelf->instr_rdata_i = VL_RAND_RESET_I(32);
    vlSelf->instr_rdata_alu_i = VL_RAND_RESET_I(32);
    vlSelf->illegal_c_insn_i = VL_RAND_RESET_I(1);
    vlSelf->imm_a_mux_sel_o = VL_RAND_RESET_I(1);
    vlSelf->imm_b_mux_sel_o = VL_RAND_RESET_I(3);
    vlSelf->bt_a_mux_sel_o = VL_RAND_RESET_I(2);
    vlSelf->bt_b_mux_sel_o = VL_RAND_RESET_I(3);
    vlSelf->imm_i_type_o = VL_RAND_RESET_I(32);
    vlSelf->imm_s_type_o = VL_RAND_RESET_I(32);
    vlSelf->imm_b_type_o = VL_RAND_RESET_I(32);
    vlSelf->imm_u_type_o = VL_RAND_RESET_I(32);
    vlSelf->imm_j_type_o = VL_RAND_RESET_I(32);
    vlSelf->zimm_rs1_type_o = VL_RAND_RESET_I(32);
    vlSelf->rf_wdata_sel_o = VL_RAND_RESET_I(1);
    vlSelf->rf_we_o = VL_RAND_RESET_I(1);
    vlSelf->rf_raddr_a_o = VL_RAND_RESET_I(5);
    vlSelf->rf_raddr_b_o = VL_RAND_RESET_I(5);
    vlSelf->rf_waddr_o = VL_RAND_RESET_I(5);
    vlSelf->rf_ren_a_o = VL_RAND_RESET_I(1);
    vlSelf->rf_ren_b_o = VL_RAND_RESET_I(1);
    vlSelf->alu_operator_o = VL_RAND_RESET_I(7);
    vlSelf->alu_op_a_mux_sel_o = VL_RAND_RESET_I(2);
    vlSelf->alu_op_b_mux_sel_o = VL_RAND_RESET_I(1);
    vlSelf->alu_multicycle_o = VL_RAND_RESET_I(1);
    vlSelf->mult_en_o = VL_RAND_RESET_I(1);
    vlSelf->div_en_o = VL_RAND_RESET_I(1);
    vlSelf->mult_sel_o = VL_RAND_RESET_I(1);
    vlSelf->div_sel_o = VL_RAND_RESET_I(1);
    vlSelf->multdiv_operator_o = VL_RAND_RESET_I(2);
    vlSelf->multdiv_signed_mode_o = VL_RAND_RESET_I(2);
    vlSelf->csr_access_o = VL_RAND_RESET_I(1);
    vlSelf->csr_op_o = VL_RAND_RESET_I(2);
    vlSelf->data_req_o = VL_RAND_RESET_I(1);
    vlSelf->data_we_o = VL_RAND_RESET_I(1);
    vlSelf->data_type_o = VL_RAND_RESET_I(2);
    vlSelf->data_sign_extension_o = VL_RAND_RESET_I(1);
    vlSelf->jump_in_dec_o = VL_RAND_RESET_I(1);
    vlSelf->branch_in_dec_o = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT__illegal_insn = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT__csr_illegal = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT__rf_we = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT__unused_instr_alu = VL_RAND_RESET_I(10);
    vlSelf->dr32e_dec__DOT__csr_op = VL_RAND_RESET_I(2);
    vlSelf->dr32e_dec__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->dr32e_dec__DOT__opcode_alu = VL_RAND_RESET_I(7);
    vlSelf->dr32e_dec__DOT____Vtogcov__clk_i = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT____Vtogcov__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT____Vtogcov__illegal_insn_o = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT____Vtogcov__ebrk_insn_o = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT____Vtogcov__mret_insn_o = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT____Vtogcov__dret_insn_o = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT____Vtogcov__ecall_insn_o = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT____Vtogcov__wfi_insn_o = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT____Vtogcov__jump_set_o = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT____Vtogcov__branch_taken_i = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT____Vtogcov__icache_inval_o = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT____Vtogcov__instr_first_cycle_i = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i = VL_RAND_RESET_I(32);
    vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i = VL_RAND_RESET_I(32);
    vlSelf->dr32e_dec__DOT____Vtogcov__illegal_c_insn_i = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT____Vtogcov__imm_a_mux_sel_o = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_mux_sel_o = VL_RAND_RESET_I(3);
    vlSelf->dr32e_dec__DOT____Vtogcov__bt_a_mux_sel_o = VL_RAND_RESET_I(2);
    vlSelf->dr32e_dec__DOT____Vtogcov__bt_b_mux_sel_o = VL_RAND_RESET_I(3);
    vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o = VL_RAND_RESET_I(32);
    vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o = VL_RAND_RESET_I(32);
    vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o = VL_RAND_RESET_I(32);
    vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o = VL_RAND_RESET_I(32);
    vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o = VL_RAND_RESET_I(32);
    vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o = VL_RAND_RESET_I(32);
    vlSelf->dr32e_dec__DOT____Vtogcov__rf_wdata_sel_o = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT____Vtogcov__rf_we_o = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT____Vtogcov__rf_raddr_a_o = VL_RAND_RESET_I(5);
    vlSelf->dr32e_dec__DOT____Vtogcov__rf_raddr_b_o = VL_RAND_RESET_I(5);
    vlSelf->dr32e_dec__DOT____Vtogcov__rf_waddr_o = VL_RAND_RESET_I(5);
    vlSelf->dr32e_dec__DOT____Vtogcov__rf_ren_a_o = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT____Vtogcov__rf_ren_b_o = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT____Vtogcov__alu_operator_o = VL_RAND_RESET_I(7);
    vlSelf->dr32e_dec__DOT____Vtogcov__alu_op_a_mux_sel_o = VL_RAND_RESET_I(2);
    vlSelf->dr32e_dec__DOT____Vtogcov__alu_op_b_mux_sel_o = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT____Vtogcov__alu_multicycle_o = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT____Vtogcov__mult_en_o = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT____Vtogcov__div_en_o = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT____Vtogcov__mult_sel_o = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT____Vtogcov__div_sel_o = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT____Vtogcov__multdiv_operator_o = VL_RAND_RESET_I(2);
    vlSelf->dr32e_dec__DOT____Vtogcov__multdiv_signed_mode_o = VL_RAND_RESET_I(2);
    vlSelf->dr32e_dec__DOT____Vtogcov__csr_access_o = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT____Vtogcov__csr_op_o = VL_RAND_RESET_I(2);
    vlSelf->dr32e_dec__DOT____Vtogcov__data_req_o = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT____Vtogcov__data_we_o = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT____Vtogcov__data_type_o = VL_RAND_RESET_I(2);
    vlSelf->dr32e_dec__DOT____Vtogcov__data_sign_extension_o = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT____Vtogcov__jump_in_dec_o = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT____Vtogcov__branch_in_dec_o = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT____Vtogcov__illegal_insn = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT____Vtogcov__illegal_reg_rv32e = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT____Vtogcov__csr_illegal = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT____Vtogcov__rf_we = VL_RAND_RESET_I(1);
    vlSelf->dr32e_dec__DOT____Vtogcov__unused_instr_alu = VL_RAND_RESET_I(10);
    vlSelf->dr32e_dec__DOT____Vtogcov__instr_rs1 = VL_RAND_RESET_I(5);
    vlSelf->dr32e_dec__DOT____Vtogcov__instr_rs3 = VL_RAND_RESET_I(5);
    vlSelf->dr32e_dec__DOT____Vtogcov__csr_op = VL_RAND_RESET_I(2);
    vlSelf->dr32e_dec__DOT____Vtogcov__opcode = VL_RAND_RESET_I(7);
    vlSelf->dr32e_dec__DOT____Vtogcov__opcode_alu = VL_RAND_RESET_I(7);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
