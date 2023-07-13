// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_prefetch_buffer.h for the primary calling header

#include "verilated.h"

#include "Vibex_prefetch_buffer__Syms.h"
#include "Vibex_prefetch_buffer___024root.h"

VL_ATTR_COLD void Vibex_prefetch_buffer___024root___eval_static(Vibex_prefetch_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_prefetch_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_prefetch_buffer___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vibex_prefetch_buffer___024root___eval_initial__TOP(Vibex_prefetch_buffer___024root* vlSelf);

VL_ATTR_COLD void Vibex_prefetch_buffer___024root___eval_initial(Vibex_prefetch_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_prefetch_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_prefetch_buffer___024root___eval_initial\n"); );
    // Body
    Vibex_prefetch_buffer___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = vlSelf->clk_i;
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = vlSelf->rst_ni;
}

VL_ATTR_COLD void Vibex_prefetch_buffer___024root___eval_final(Vibex_prefetch_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_prefetch_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_prefetch_buffer___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vibex_prefetch_buffer___024root___eval_triggers__stl(Vibex_prefetch_buffer___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_prefetch_buffer___024root___dump_triggers__stl(Vibex_prefetch_buffer___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vibex_prefetch_buffer___024root___eval_stl(Vibex_prefetch_buffer___024root* vlSelf);

VL_ATTR_COLD void Vibex_prefetch_buffer___024root___eval_settle(Vibex_prefetch_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_prefetch_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_prefetch_buffer___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vibex_prefetch_buffer___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vibex_prefetch_buffer___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("verilog/ibex_prefetch_buffer.v", 16, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vibex_prefetch_buffer___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_prefetch_buffer___024root___dump_triggers__stl(Vibex_prefetch_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_prefetch_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_prefetch_buffer___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vibex_prefetch_buffer___024root___stl_sequent__TOP__0(Vibex_prefetch_buffer___024root* vlSelf);

VL_ATTR_COLD void Vibex_prefetch_buffer___024root___eval_stl(Vibex_prefetch_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_prefetch_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_prefetch_buffer___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vibex_prefetch_buffer___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_prefetch_buffer___024root___dump_triggers__ico(Vibex_prefetch_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_prefetch_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_prefetch_buffer___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vibex_prefetch_buffer___024root___dump_triggers__act(Vibex_prefetch_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_prefetch_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_prefetch_buffer___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk_i)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk_i or negedge rst_ni)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_prefetch_buffer___024root___dump_triggers__nba(Vibex_prefetch_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_prefetch_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_prefetch_buffer___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_i)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk_i or negedge rst_ni)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vibex_prefetch_buffer___024root___ctor_var_reset(Vibex_prefetch_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_prefetch_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_prefetch_buffer___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->req_i = VL_RAND_RESET_I(1);
    vlSelf->branch_i = VL_RAND_RESET_I(1);
    vlSelf->addr_i = VL_RAND_RESET_I(32);
    vlSelf->ready_i = VL_RAND_RESET_I(1);
    vlSelf->valid_o = VL_RAND_RESET_I(1);
    vlSelf->rdata_o = VL_RAND_RESET_I(32);
    vlSelf->addr_o = VL_RAND_RESET_I(32);
    vlSelf->err_o = VL_RAND_RESET_I(1);
    vlSelf->err_plus2_o = VL_RAND_RESET_I(1);
    vlSelf->instr_req_o = VL_RAND_RESET_I(1);
    vlSelf->instr_gnt_i = VL_RAND_RESET_I(1);
    vlSelf->instr_addr_o = VL_RAND_RESET_I(32);
    vlSelf->instr_rdata_i = VL_RAND_RESET_I(32);
    vlSelf->instr_err_i = VL_RAND_RESET_I(1);
    vlSelf->instr_rvalid_i = VL_RAND_RESET_I(1);
    vlSelf->busy_o = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT__valid_new_req = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT__valid_req_d = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT__valid_req_q = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT__discard_req_d = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT__discard_req_q = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_n = VL_RAND_RESET_I(2);
    vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_s = VL_RAND_RESET_I(2);
    vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_q = VL_RAND_RESET_I(2);
    vlSelf->ibex_prefetch_buffer__DOT__branch_discard_n = VL_RAND_RESET_I(2);
    vlSelf->ibex_prefetch_buffer__DOT__branch_discard_s = VL_RAND_RESET_I(2);
    vlSelf->ibex_prefetch_buffer__DOT__branch_discard_q = VL_RAND_RESET_I(2);
    vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_rev = VL_RAND_RESET_I(2);
    vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d = VL_RAND_RESET_I(32);
    vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q = VL_RAND_RESET_I(32);
    vlSelf->ibex_prefetch_buffer__DOT__stored_addr_en = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d = VL_RAND_RESET_I(32);
    vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q = VL_RAND_RESET_I(32);
    vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_en = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_valid = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_ready = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__clk_i = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__req_i = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__branch_i = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i = VL_RAND_RESET_I(32);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__ready_i = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__valid_o = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o = VL_RAND_RESET_I(32);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o = VL_RAND_RESET_I(32);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__err_o = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__err_plus2_o = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_req_o = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_gnt_i = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o = VL_RAND_RESET_I(32);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i = VL_RAND_RESET_I(32);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_err_i = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rvalid_i = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__busy_o = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__valid_new_req = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__valid_req_d = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__valid_req_q = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__discard_req_d = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__discard_req_q = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_outstanding_n = VL_RAND_RESET_I(2);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_outstanding_s = VL_RAND_RESET_I(2);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_outstanding_q = VL_RAND_RESET_I(2);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__branch_discard_n = VL_RAND_RESET_I(2);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__branch_discard_s = VL_RAND_RESET_I(2);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__branch_discard_q = VL_RAND_RESET_I(2);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_outstanding_rev = VL_RAND_RESET_I(2);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d = VL_RAND_RESET_I(32);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q = VL_RAND_RESET_I(32);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_en = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d = VL_RAND_RESET_I(32);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q = VL_RAND_RESET_I(32);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_en = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fifo_valid = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fifo_ready = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fifo_busy = VL_RAND_RESET_I(2);
    vlSelf->ibex_prefetch_buffer__DOT____VdfgTmp_h6a6a3522__0 = 0;
    VL_RAND_RESET_W(96, vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d);
    VL_RAND_RESET_W(96, vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_d = VL_RAND_RESET_I(3);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_q = VL_RAND_RESET_I(3);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_d = VL_RAND_RESET_I(3);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_q = VL_RAND_RESET_I(3);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__lowest_free_entry = VL_RAND_RESET_I(3);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_pushed = VL_RAND_RESET_I(3);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_popped = VL_RAND_RESET_I(3);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__entry_en = VL_RAND_RESET_I(3);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__pop_fifo = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned = VL_RAND_RESET_I(32);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_unaligned = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_plus2 = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_unaligned = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__aligned_is_compressed = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__unaligned_is_compressed = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__addr_incr_two = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next = VL_RAND_RESET_I(31);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d = VL_RAND_RESET_I(31);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q = VL_RAND_RESET_I(31);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_en = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(96, vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d);
    VL_RAND_RESET_W(96, vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__err_d = VL_RAND_RESET_I(3);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__err_q = VL_RAND_RESET_I(3);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_d = VL_RAND_RESET_I(3);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_q = VL_RAND_RESET_I(3);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__lowest_free_entry = VL_RAND_RESET_I(3);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_pushed = VL_RAND_RESET_I(3);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_popped = VL_RAND_RESET_I(3);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__entry_en = VL_RAND_RESET_I(3);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__pop_fifo = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata = VL_RAND_RESET_I(32);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned = VL_RAND_RESET_I(32);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__err = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__err_unaligned = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__err_plus2 = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_unaligned = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__aligned_is_compressed = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__unaligned_is_compressed = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__addr_incr_two = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next = VL_RAND_RESET_I(31);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d = VL_RAND_RESET_I(31);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q = VL_RAND_RESET_I(31);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_en = VL_RAND_RESET_I(1);
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h88eb07d9__0 = 0;
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h18d2a020__0 = 0;
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h46f3913b__0 = 0;
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h11e4035a__0 = 0;
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h72c0dcf0__0 = 0;
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h87bd3038__0 = 0;
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h379a9be1__0 = 0;
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h0de6124d__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
