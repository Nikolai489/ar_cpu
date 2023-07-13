// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcve2_alu.h for the primary calling header

#include "verilated.h"

#include "Vcve2_alu__Syms.h"
#include "Vcve2_alu___024root.h"

VL_ATTR_COLD void Vcve2_alu___024root___eval_static(Vcve2_alu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcve2_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_alu___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vcve2_alu___024root___eval_initial__TOP(Vcve2_alu___024root* vlSelf);

VL_ATTR_COLD void Vcve2_alu___024root___eval_initial(Vcve2_alu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcve2_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_alu___024root___eval_initial\n"); );
    // Body
    Vcve2_alu___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vcve2_alu___024root___eval_final(Vcve2_alu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcve2_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_alu___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vcve2_alu___024root___eval_triggers__stl(Vcve2_alu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcve2_alu___024root___dump_triggers__stl(Vcve2_alu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vcve2_alu___024root___eval_stl(Vcve2_alu___024root* vlSelf);

VL_ATTR_COLD void Vcve2_alu___024root___eval_settle(Vcve2_alu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcve2_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_alu___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vcve2_alu___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vcve2_alu___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("verilog/cve2_alu.v", 15, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vcve2_alu___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcve2_alu___024root___dump_triggers__stl(Vcve2_alu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcve2_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_alu___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcve2_alu___024root___stl_sequent__TOP__0(Vcve2_alu___024root* vlSelf);

VL_ATTR_COLD void Vcve2_alu___024root___eval_stl(Vcve2_alu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcve2_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_alu___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vcve2_alu___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcve2_alu___024root___dump_triggers__ico(Vcve2_alu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcve2_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_alu___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vcve2_alu___024root___dump_triggers__act(Vcve2_alu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcve2_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_alu___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcve2_alu___024root___dump_triggers__nba(Vcve2_alu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcve2_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_alu___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcve2_alu___024root___ctor_var_reset(Vcve2_alu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcve2_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_alu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->operator_i = VL_RAND_RESET_I(7);
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->operand_a_i = VL_RAND_RESET_I(32);
    vlSelf->operand_b_i = VL_RAND_RESET_I(32);
    vlSelf->instr_first_cycle_i = VL_RAND_RESET_I(1);
    vlSelf->multdiv_operand_a_i = VL_RAND_RESET_Q(33);
    vlSelf->multdiv_operand_b_i = VL_RAND_RESET_Q(33);
    vlSelf->multdiv_sel_i = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->imd_val_q_i[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->imd_val_d_o[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->imd_val_we_o = VL_RAND_RESET_I(2);
    vlSelf->adder_result_o = VL_RAND_RESET_I(32);
    vlSelf->adder_result_ext_o = VL_RAND_RESET_Q(34);
    vlSelf->result_o = VL_RAND_RESET_I(32);
    vlSelf->comparison_result_o = VL_RAND_RESET_I(1);
    vlSelf->is_equal_result_o = VL_RAND_RESET_I(1);
    vlSelf->cve2_alu__DOT__operand_a_rev = VL_RAND_RESET_I(32);
    vlSelf->cve2_alu__DOT__adder_op_b_negate = VL_RAND_RESET_I(1);
    vlSelf->cve2_alu__DOT__adder_in_a = VL_RAND_RESET_Q(33);
    vlSelf->cve2_alu__DOT__adder_in_b = VL_RAND_RESET_Q(33);
    vlSelf->cve2_alu__DOT__is_greater_equal = VL_RAND_RESET_I(1);
    vlSelf->cve2_alu__DOT__cmp_signed = VL_RAND_RESET_I(1);
    vlSelf->cve2_alu__DOT__cmp_result = VL_RAND_RESET_I(1);
    vlSelf->cve2_alu__DOT__shift_left = VL_RAND_RESET_I(1);
    vlSelf->cve2_alu__DOT__shift_amt = VL_RAND_RESET_I(6);
    vlSelf->cve2_alu__DOT__shift_operand = VL_RAND_RESET_I(32);
    vlSelf->cve2_alu__DOT__shift_result_ext_signed = VL_RAND_RESET_Q(33);
    vlSelf->cve2_alu__DOT__shift_result_ext = VL_RAND_RESET_Q(33);
    vlSelf->cve2_alu__DOT__unused_shift_result_ext = VL_RAND_RESET_I(1);
    vlSelf->cve2_alu__DOT__shift_result = VL_RAND_RESET_I(32);
    vlSelf->cve2_alu__DOT__shift_result_rev = VL_RAND_RESET_I(32);
    vlSelf->cve2_alu__DOT__bfp_len = VL_RAND_RESET_I(5);
    vlSelf->cve2_alu__DOT__bwlogic_or = VL_RAND_RESET_I(1);
    vlSelf->cve2_alu__DOT__bwlogic_and = VL_RAND_RESET_I(1);
    vlSelf->cve2_alu__DOT__bwlogic_operand_b = VL_RAND_RESET_I(32);
    vlSelf->cve2_alu__DOT__bwlogic_or_result = VL_RAND_RESET_I(32);
    vlSelf->cve2_alu__DOT__bwlogic_and_result = VL_RAND_RESET_I(32);
    vlSelf->cve2_alu__DOT__bwlogic_xor_result = VL_RAND_RESET_I(32);
    vlSelf->cve2_alu__DOT__bwlogic_result = VL_RAND_RESET_I(32);
    vlSelf->cve2_alu__DOT__bwlogic_op_b_negate = VL_RAND_RESET_I(1);
    vlSelf->cve2_alu__DOT____Vtogcov__operator_i = VL_RAND_RESET_I(7);
    vlSelf->cve2_alu__DOT____Vtogcov__clk_i = VL_RAND_RESET_I(1);
    vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i = VL_RAND_RESET_I(32);
    vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i = VL_RAND_RESET_I(32);
    vlSelf->cve2_alu__DOT____Vtogcov__instr_first_cycle_i = VL_RAND_RESET_I(1);
    vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i = VL_RAND_RESET_Q(33);
    vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i = VL_RAND_RESET_Q(33);
    vlSelf->cve2_alu__DOT____Vtogcov__multdiv_sel_i = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cve2_alu__DOT____Vtogcov__imd_val_we_o = VL_RAND_RESET_I(2);
    vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o = VL_RAND_RESET_I(32);
    vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o = VL_RAND_RESET_Q(34);
    vlSelf->cve2_alu__DOT____Vtogcov__result_o = VL_RAND_RESET_I(32);
    vlSelf->cve2_alu__DOT____Vtogcov__comparison_result_o = VL_RAND_RESET_I(1);
    vlSelf->cve2_alu__DOT____Vtogcov__is_equal_result_o = VL_RAND_RESET_I(1);
    vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev = VL_RAND_RESET_I(32);
    vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg = VL_RAND_RESET_Q(33);
    vlSelf->cve2_alu__DOT____Vtogcov__adder_op_b_negate = VL_RAND_RESET_I(1);
    vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a = VL_RAND_RESET_Q(33);
    vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b = VL_RAND_RESET_Q(33);
    vlSelf->cve2_alu__DOT____Vtogcov__is_greater_equal = VL_RAND_RESET_I(1);
    vlSelf->cve2_alu__DOT____Vtogcov__cmp_signed = VL_RAND_RESET_I(1);
    vlSelf->cve2_alu__DOT____Vtogcov__cmp_result = VL_RAND_RESET_I(1);
    vlSelf->cve2_alu__DOT____Vtogcov__shift_left = VL_RAND_RESET_I(1);
    vlSelf->cve2_alu__DOT____Vtogcov__shift_arith = VL_RAND_RESET_I(1);
    vlSelf->cve2_alu__DOT____Vtogcov__shift_amt = VL_RAND_RESET_I(6);
    vlSelf->cve2_alu__DOT____Vtogcov__shift_amt_compl = VL_RAND_RESET_I(6);
    vlSelf->cve2_alu__DOT____Vtogcov__shift_operand = VL_RAND_RESET_I(32);
    vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed = VL_RAND_RESET_Q(33);
    vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext = VL_RAND_RESET_Q(33);
    vlSelf->cve2_alu__DOT____Vtogcov__unused_shift_result_ext = VL_RAND_RESET_I(1);
    vlSelf->cve2_alu__DOT____Vtogcov__shift_result = VL_RAND_RESET_I(32);
    vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev = VL_RAND_RESET_I(32);
    vlSelf->cve2_alu__DOT____Vtogcov__bfp_len = VL_RAND_RESET_I(5);
    vlSelf->cve2_alu__DOT____Vtogcov__bfp_off = VL_RAND_RESET_I(5);
    vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or = VL_RAND_RESET_I(1);
    vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and = VL_RAND_RESET_I(1);
    vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b = VL_RAND_RESET_I(32);
    vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result = VL_RAND_RESET_I(32);
    vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result = VL_RAND_RESET_I(32);
    vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result = VL_RAND_RESET_I(32);
    vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result = VL_RAND_RESET_I(32);
    vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_op_b_negate = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->cve2_alu__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
