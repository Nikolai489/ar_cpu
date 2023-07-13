// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_register_file_ff.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vibex_register_file_ff__Syms.h"
#include "Vibex_register_file_ff___024root.h"

VL_ATTR_COLD void Vibex_register_file_ff___024root___eval_static(Vibex_register_file_ff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_register_file_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_register_file_ff___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vibex_register_file_ff___024root___eval_initial__TOP(Vibex_register_file_ff___024root* vlSelf);

VL_ATTR_COLD void Vibex_register_file_ff___024root___eval_initial(Vibex_register_file_ff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_register_file_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_register_file_ff___024root___eval_initial\n"); );
    // Body
    Vibex_register_file_ff___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = vlSelf->clk_i;
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = vlSelf->rst_ni;
}

VL_ATTR_COLD void Vibex_register_file_ff___024root___eval_final(Vibex_register_file_ff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_register_file_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_register_file_ff___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vibex_register_file_ff___024root___eval_triggers__stl(Vibex_register_file_ff___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_register_file_ff___024root___dump_triggers__stl(Vibex_register_file_ff___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vibex_register_file_ff___024root___eval_stl(Vibex_register_file_ff___024root* vlSelf);

VL_ATTR_COLD void Vibex_register_file_ff___024root___eval_settle(Vibex_register_file_ff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_register_file_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_register_file_ff___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vibex_register_file_ff___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vibex_register_file_ff___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("verilog/ibex_register_file_ff.v", 14, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vibex_register_file_ff___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_register_file_ff___024root___dump_triggers__stl(Vibex_register_file_ff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_register_file_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_register_file_ff___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vibex_register_file_ff___024root___stl_sequent__TOP__0(Vibex_register_file_ff___024root* vlSelf);

VL_ATTR_COLD void Vibex_register_file_ff___024root___eval_stl(Vibex_register_file_ff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_register_file_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_register_file_ff___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vibex_register_file_ff___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_register_file_ff___024root___dump_triggers__ico(Vibex_register_file_ff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_register_file_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_register_file_ff___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vibex_register_file_ff___024root___dump_triggers__act(Vibex_register_file_ff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_register_file_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_register_file_ff___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk_i or negedge rst_ni)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_register_file_ff___024root___dump_triggers__nba(Vibex_register_file_ff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_register_file_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_register_file_ff___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_i or negedge rst_ni)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vibex_register_file_ff___024root___ctor_var_reset(Vibex_register_file_ff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_register_file_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_register_file_ff___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->test_en_i = VL_RAND_RESET_I(1);
    vlSelf->dummy_instr_id_i = VL_RAND_RESET_I(1);
    vlSelf->dummy_instr_wb_i = VL_RAND_RESET_I(1);
    vlSelf->raddr_a_i = VL_RAND_RESET_I(5);
    vlSelf->rdata_a_o = VL_RAND_RESET_I(32);
    vlSelf->raddr_b_i = VL_RAND_RESET_I(5);
    vlSelf->rdata_b_o = VL_RAND_RESET_I(32);
    vlSelf->waddr_a_i = VL_RAND_RESET_I(5);
    vlSelf->wdata_a_i = VL_RAND_RESET_I(32);
    vlSelf->we_a_i = VL_RAND_RESET_I(1);
    vlSelf->err_o = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ibex_register_file_ff__DOT__rf_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ibex_register_file_ff__DOT__we_a_dec = VL_RAND_RESET_I(32);
    vlSelf->ibex_register_file_ff__DOT____Vtogcov__clk_i = VL_RAND_RESET_I(1);
    vlSelf->ibex_register_file_ff__DOT____Vtogcov__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->ibex_register_file_ff__DOT____Vtogcov__test_en_i = VL_RAND_RESET_I(1);
    vlSelf->ibex_register_file_ff__DOT____Vtogcov__dummy_instr_id_i = VL_RAND_RESET_I(1);
    vlSelf->ibex_register_file_ff__DOT____Vtogcov__dummy_instr_wb_i = VL_RAND_RESET_I(1);
    vlSelf->ibex_register_file_ff__DOT____Vtogcov__raddr_a_i = VL_RAND_RESET_I(5);
    vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o = VL_RAND_RESET_I(32);
    vlSelf->ibex_register_file_ff__DOT____Vtogcov__raddr_b_i = VL_RAND_RESET_I(5);
    vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o = VL_RAND_RESET_I(32);
    vlSelf->ibex_register_file_ff__DOT____Vtogcov__waddr_a_i = VL_RAND_RESET_I(5);
    vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i = VL_RAND_RESET_I(32);
    vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_i = VL_RAND_RESET_I(1);
    vlSelf->ibex_register_file_ff__DOT____Vtogcov__err_o = VL_RAND_RESET_I(1);
    vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec = VL_RAND_RESET_I(32);
    vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__1__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
