// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdr32e_branch_predict.h for the primary calling header

#include "verilated.h"

#include "Vdr32e_branch_predict__Syms.h"
#include "Vdr32e_branch_predict___024root.h"

VL_ATTR_COLD void Vdr32e_branch_predict___024root___eval_static(Vdr32e_branch_predict___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_branch_predict__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_branch_predict___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vdr32e_branch_predict___024root___eval_initial__TOP(Vdr32e_branch_predict___024root* vlSelf);

VL_ATTR_COLD void Vdr32e_branch_predict___024root___eval_initial(Vdr32e_branch_predict___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_branch_predict__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_branch_predict___024root___eval_initial\n"); );
    // Body
    Vdr32e_branch_predict___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vdr32e_branch_predict___024root___eval_final(Vdr32e_branch_predict___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_branch_predict__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_branch_predict___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vdr32e_branch_predict___024root___eval_triggers__stl(Vdr32e_branch_predict___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdr32e_branch_predict___024root___dump_triggers__stl(Vdr32e_branch_predict___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vdr32e_branch_predict___024root___eval_stl(Vdr32e_branch_predict___024root* vlSelf);

VL_ATTR_COLD void Vdr32e_branch_predict___024root___eval_settle(Vdr32e_branch_predict___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_branch_predict__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_branch_predict___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vdr32e_branch_predict___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vdr32e_branch_predict___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("verilog/dr32e_branch_predict.v", 20, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vdr32e_branch_predict___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdr32e_branch_predict___024root___dump_triggers__stl(Vdr32e_branch_predict___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_branch_predict__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_branch_predict___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vdr32e_branch_predict___024root___ico_sequent__TOP__0(Vdr32e_branch_predict___024root* vlSelf);

VL_ATTR_COLD void Vdr32e_branch_predict___024root___eval_stl(Vdr32e_branch_predict___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_branch_predict__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_branch_predict___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vdr32e_branch_predict___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdr32e_branch_predict___024root___dump_triggers__ico(Vdr32e_branch_predict___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_branch_predict__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_branch_predict___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vdr32e_branch_predict___024root___dump_triggers__act(Vdr32e_branch_predict___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_branch_predict__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_branch_predict___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdr32e_branch_predict___024root___dump_triggers__nba(Vdr32e_branch_predict___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_branch_predict__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_branch_predict___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdr32e_branch_predict___024root___ctor_var_reset(Vdr32e_branch_predict___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_branch_predict__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_branch_predict___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->fetch_rdata_i = VL_RAND_RESET_I(32);
    vlSelf->fetch_pc_i = VL_RAND_RESET_I(32);
    vlSelf->fetch_valid_i = VL_RAND_RESET_I(1);
    vlSelf->predict_branch_taken_o = VL_RAND_RESET_I(1);
    vlSelf->predict_branch_pc_o = VL_RAND_RESET_I(32);
    vlSelf->dr32e_branch_predict__DOT__imm_j_type = VL_RAND_RESET_I(32);
    vlSelf->dr32e_branch_predict__DOT__imm_b_type = VL_RAND_RESET_I(32);
    vlSelf->dr32e_branch_predict__DOT__imm_cj_type = VL_RAND_RESET_I(32);
    vlSelf->dr32e_branch_predict__DOT__imm_cb_type = VL_RAND_RESET_I(32);
    vlSelf->dr32e_branch_predict__DOT__branch_imm = VL_RAND_RESET_I(32);
    vlSelf->dr32e_branch_predict__DOT__instr_cj = VL_RAND_RESET_I(1);
    vlSelf->dr32e_branch_predict__DOT__instr_cb = VL_RAND_RESET_I(1);
    vlSelf->dr32e_branch_predict__DOT__instr_b_taken = VL_RAND_RESET_I(1);
    vlSelf->dr32e_branch_predict__DOT____Vtogcov__clk_i = VL_RAND_RESET_I(1);
    vlSelf->dr32e_branch_predict__DOT____Vtogcov__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i = VL_RAND_RESET_I(32);
    vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i = VL_RAND_RESET_I(32);
    vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_valid_i = VL_RAND_RESET_I(1);
    vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_taken_o = VL_RAND_RESET_I(1);
    vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o = VL_RAND_RESET_I(32);
    vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type = VL_RAND_RESET_I(32);
    vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type = VL_RAND_RESET_I(32);
    vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type = VL_RAND_RESET_I(32);
    vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type = VL_RAND_RESET_I(32);
    vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm = VL_RAND_RESET_I(32);
    vlSelf->dr32e_branch_predict__DOT____Vtogcov__instr_j = VL_RAND_RESET_I(1);
    vlSelf->dr32e_branch_predict__DOT____Vtogcov__instr_b = VL_RAND_RESET_I(1);
    vlSelf->dr32e_branch_predict__DOT____Vtogcov__instr_cj = VL_RAND_RESET_I(1);
    vlSelf->dr32e_branch_predict__DOT____Vtogcov__instr_cb = VL_RAND_RESET_I(1);
    vlSelf->dr32e_branch_predict__DOT____Vtogcov__instr_b_taken = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
