// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdr32e_dec.h for the primary calling header

#include "verilated.h"

#include "Vdr32e_dec__Syms.h"
#include "Vdr32e_dec__Syms.h"
#include "Vdr32e_dec___024root.h"

VL_ATTR_COLD void Vdr32e_dec___024root___eval_initial__TOP(Vdr32e_dec___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_dec___024root___eval_initial__TOP\n"); );
    // Body
    vlSymsp->__Vcoverage[368].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
    vlSelf->alu_multicycle_o = 0U;
    vlSelf->bt_b_mux_sel_o = 0U;
    vlSelf->bt_a_mux_sel_o = 2U;
    vlSymsp->__Vcoverage[726].fetch_add(1, std::memory_order_relaxed);
    if (vlSelf->dr32e_dec__DOT____Vtogcov__illegal_reg_rv32e) {
        vlSymsp->__Vcoverage[327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__illegal_reg_rv32e = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdr32e_dec___024root___dump_triggers__stl(Vdr32e_dec___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdr32e_dec___024root___eval_triggers__stl(Vdr32e_dec___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_dec___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdr32e_dec___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vdr32e_dec___024root___stl_sequent__TOP__0(Vdr32e_dec___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_dec___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ dr32e_dec__DOT____VdfgExtracted_h075efacb__0;
    dr32e_dec__DOT____VdfgExtracted_h075efacb__0 = 0;
    // Body
    if (vlSelf->illegal_c_insn_i) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->illegal_c_insn_i)))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->clk_i) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__clk_i))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__clk_i = vlSelf->clk_i;
    }
    if (((IData)(vlSelf->rst_ni) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__rst_ni))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__rst_ni = vlSelf->rst_ni;
    }
    if (((IData)(vlSelf->branch_taken_i) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__branch_taken_i))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__branch_taken_i 
            = vlSelf->branch_taken_i;
    }
    if (((IData)(vlSelf->instr_first_cycle_i) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__instr_first_cycle_i))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_first_cycle_i 
            = vlSelf->instr_first_cycle_i;
    }
    if (((IData)(vlSelf->illegal_c_insn_i) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__illegal_c_insn_i))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__illegal_c_insn_i 
            = vlSelf->illegal_c_insn_i;
    }
    if (((IData)(vlSelf->alu_multicycle_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__alu_multicycle_o))) {
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__alu_multicycle_o 
            = vlSelf->alu_multicycle_o;
    }
    if ((1U & ((IData)(vlSelf->bt_a_mux_sel_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__bt_a_mux_sel_o)))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__bt_a_mux_sel_o 
            = ((2U & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__bt_a_mux_sel_o)) 
               | (1U & (IData)(vlSelf->bt_a_mux_sel_o)));
    }
    if ((2U & ((IData)(vlSelf->bt_a_mux_sel_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__bt_a_mux_sel_o)))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__bt_a_mux_sel_o 
            = ((1U & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__bt_a_mux_sel_o)) 
               | (2U & (IData)(vlSelf->bt_a_mux_sel_o)));
    }
    if ((1U & ((IData)(vlSelf->bt_b_mux_sel_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__bt_b_mux_sel_o)))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__bt_b_mux_sel_o 
            = ((6U & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__bt_b_mux_sel_o)) 
               | (1U & (IData)(vlSelf->bt_b_mux_sel_o)));
    }
    if ((2U & ((IData)(vlSelf->bt_b_mux_sel_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__bt_b_mux_sel_o)))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__bt_b_mux_sel_o 
            = ((5U & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__bt_b_mux_sel_o)) 
               | (2U & (IData)(vlSelf->bt_b_mux_sel_o)));
    }
    if ((4U & ((IData)(vlSelf->bt_b_mux_sel_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__bt_b_mux_sel_o)))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__bt_b_mux_sel_o 
            = ((3U & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__bt_b_mux_sel_o)) 
               | (4U & (IData)(vlSelf->bt_b_mux_sel_o)));
    }
    if ((1U & ((vlSelf->instr_rdata_i >> 0xfU) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__instr_rs1)))) {
        vlSymsp->__Vcoverage[340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rs1 
            = ((0x1eU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__instr_rs1)) 
               | (1U & (vlSelf->instr_rdata_i >> 0xfU)));
    }
    if ((1U & ((vlSelf->instr_rdata_i >> 0x10U) ^ ((IData)(vlSelf->dr32e_dec__DOT____Vtogcov__instr_rs1) 
                                                   >> 1U)))) {
        vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rs1 
            = ((0x1dU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__instr_rs1)) 
               | (2U & (vlSelf->instr_rdata_i >> 0xfU)));
    }
    if ((1U & ((vlSelf->instr_rdata_i >> 0x11U) ^ ((IData)(vlSelf->dr32e_dec__DOT____Vtogcov__instr_rs1) 
                                                   >> 2U)))) {
        vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rs1 
            = ((0x1bU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__instr_rs1)) 
               | (4U & (vlSelf->instr_rdata_i >> 0xfU)));
    }
    if ((1U & ((vlSelf->instr_rdata_i >> 0x12U) ^ ((IData)(vlSelf->dr32e_dec__DOT____Vtogcov__instr_rs1) 
                                                   >> 3U)))) {
        vlSymsp->__Vcoverage[343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rs1 
            = ((0x17U & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__instr_rs1)) 
               | (8U & (vlSelf->instr_rdata_i >> 0xfU)));
    }
    if ((1U & ((vlSelf->instr_rdata_i >> 0x13U) ^ ((IData)(vlSelf->dr32e_dec__DOT____Vtogcov__instr_rs1) 
                                                   >> 4U)))) {
        vlSymsp->__Vcoverage[344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rs1 
            = ((0xfU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__instr_rs1)) 
               | (0x10U & (vlSelf->instr_rdata_i >> 0xfU)));
    }
    if ((1U & ((vlSelf->instr_rdata_i >> 0x1bU) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__instr_rs3)))) {
        vlSymsp->__Vcoverage[345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rs3 
            = ((0x1eU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__instr_rs3)) 
               | (1U & (vlSelf->instr_rdata_i >> 0x1bU)));
    }
    if ((1U & ((vlSelf->instr_rdata_i >> 0x1cU) ^ ((IData)(vlSelf->dr32e_dec__DOT____Vtogcov__instr_rs3) 
                                                   >> 1U)))) {
        vlSymsp->__Vcoverage[346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rs3 
            = ((0x1dU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__instr_rs3)) 
               | (2U & (vlSelf->instr_rdata_i >> 0x1bU)));
    }
    if ((1U & ((vlSelf->instr_rdata_i >> 0x1dU) ^ ((IData)(vlSelf->dr32e_dec__DOT____Vtogcov__instr_rs3) 
                                                   >> 2U)))) {
        vlSymsp->__Vcoverage[347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rs3 
            = ((0x1bU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__instr_rs3)) 
               | (4U & (vlSelf->instr_rdata_i >> 0x1bU)));
    }
    if ((1U & ((vlSelf->instr_rdata_i >> 0x1eU) ^ ((IData)(vlSelf->dr32e_dec__DOT____Vtogcov__instr_rs3) 
                                                   >> 3U)))) {
        vlSymsp->__Vcoverage[348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rs3 
            = ((0x17U & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__instr_rs3)) 
               | (8U & (vlSelf->instr_rdata_i >> 0x1bU)));
    }
    if (((vlSelf->instr_rdata_i >> 0x1fU) ^ ((IData)(vlSelf->dr32e_dec__DOT____Vtogcov__instr_rs3) 
                                             >> 4U))) {
        vlSymsp->__Vcoverage[349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rs3 
            = ((0xfU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__instr_rs3)) 
               | (0x10U & (vlSelf->instr_rdata_i >> 0x1bU)));
    }
    if ((1U & (vlSelf->instr_rdata_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i 
            = ((0xfffffffeU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i) 
               | (1U & vlSelf->instr_rdata_i));
    }
    if ((2U & (vlSelf->instr_rdata_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i 
            = ((0xfffffffdU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i) 
               | (2U & vlSelf->instr_rdata_i));
    }
    if ((4U & (vlSelf->instr_rdata_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i 
            = ((0xfffffffbU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i) 
               | (4U & vlSelf->instr_rdata_i));
    }
    if ((8U & (vlSelf->instr_rdata_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i 
            = ((0xfffffff7U & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i) 
               | (8U & vlSelf->instr_rdata_i));
    }
    if ((0x10U & (vlSelf->instr_rdata_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i 
            = ((0xffffffefU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i) 
               | (0x10U & vlSelf->instr_rdata_i));
    }
    if ((0x20U & (vlSelf->instr_rdata_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i 
            = ((0xffffffdfU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i) 
               | (0x20U & vlSelf->instr_rdata_i));
    }
    if ((0x40U & (vlSelf->instr_rdata_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i 
            = ((0xffffffbfU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i) 
               | (0x40U & vlSelf->instr_rdata_i));
    }
    if ((0x80U & (vlSelf->instr_rdata_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i 
            = ((0xffffff7fU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i) 
               | (0x80U & vlSelf->instr_rdata_i));
    }
    if ((0x100U & (vlSelf->instr_rdata_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i 
            = ((0xfffffeffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i) 
               | (0x100U & vlSelf->instr_rdata_i));
    }
    if ((0x200U & (vlSelf->instr_rdata_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i 
            = ((0xfffffdffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i) 
               | (0x200U & vlSelf->instr_rdata_i));
    }
    if ((0x400U & (vlSelf->instr_rdata_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i 
            = ((0xfffffbffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i) 
               | (0x400U & vlSelf->instr_rdata_i));
    }
    if ((0x800U & (vlSelf->instr_rdata_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i 
            = ((0xfffff7ffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i) 
               | (0x800U & vlSelf->instr_rdata_i));
    }
    if ((0x1000U & (vlSelf->instr_rdata_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i 
            = ((0xffffefffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i) 
               | (0x1000U & vlSelf->instr_rdata_i));
    }
    if ((0x2000U & (vlSelf->instr_rdata_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i 
            = ((0xffffdfffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i) 
               | (0x2000U & vlSelf->instr_rdata_i));
    }
    if ((0x4000U & (vlSelf->instr_rdata_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i 
            = ((0xffffbfffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i) 
               | (0x4000U & vlSelf->instr_rdata_i));
    }
    if ((0x8000U & (vlSelf->instr_rdata_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i 
            = ((0xffff7fffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i) 
               | (0x8000U & vlSelf->instr_rdata_i));
    }
    if ((0x10000U & (vlSelf->instr_rdata_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i 
            = ((0xfffeffffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i) 
               | (0x10000U & vlSelf->instr_rdata_i));
    }
    if ((0x20000U & (vlSelf->instr_rdata_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i 
            = ((0xfffdffffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i) 
               | (0x20000U & vlSelf->instr_rdata_i));
    }
    if ((0x40000U & (vlSelf->instr_rdata_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i 
            = ((0xfffbffffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i) 
               | (0x40000U & vlSelf->instr_rdata_i));
    }
    if ((0x80000U & (vlSelf->instr_rdata_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i 
            = ((0xfff7ffffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i) 
               | (0x80000U & vlSelf->instr_rdata_i));
    }
    if ((0x100000U & (vlSelf->instr_rdata_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i 
            = ((0xffefffffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i) 
               | (0x100000U & vlSelf->instr_rdata_i));
    }
    if ((0x200000U & (vlSelf->instr_rdata_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i 
            = ((0xffdfffffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i) 
               | (0x200000U & vlSelf->instr_rdata_i));
    }
    if ((0x400000U & (vlSelf->instr_rdata_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i 
            = ((0xffbfffffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i) 
               | (0x400000U & vlSelf->instr_rdata_i));
    }
    if ((0x800000U & (vlSelf->instr_rdata_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i 
            = ((0xff7fffffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i) 
               | (0x800000U & vlSelf->instr_rdata_i));
    }
    if ((0x1000000U & (vlSelf->instr_rdata_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i 
            = ((0xfeffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i) 
               | (0x1000000U & vlSelf->instr_rdata_i));
    }
    if ((0x2000000U & (vlSelf->instr_rdata_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i 
            = ((0xfdffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i) 
               | (0x2000000U & vlSelf->instr_rdata_i));
    }
    if ((0x4000000U & (vlSelf->instr_rdata_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i 
            = ((0xfbffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i) 
               | (0x4000000U & vlSelf->instr_rdata_i));
    }
    if ((0x8000000U & (vlSelf->instr_rdata_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i 
            = ((0xf7ffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i) 
               | (0x8000000U & vlSelf->instr_rdata_i));
    }
    if ((0x10000000U & (vlSelf->instr_rdata_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i 
            = ((0xefffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i) 
               | (0x10000000U & vlSelf->instr_rdata_i));
    }
    if ((0x20000000U & (vlSelf->instr_rdata_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i 
            = ((0xdfffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i) 
               | (0x20000000U & vlSelf->instr_rdata_i));
    }
    if ((0x40000000U & (vlSelf->instr_rdata_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i 
            = ((0xbfffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i) 
               | (0x40000000U & vlSelf->instr_rdata_i));
    }
    if (((vlSelf->instr_rdata_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i 
            = ((0x7fffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_i) 
               | (0x80000000U & vlSelf->instr_rdata_i));
    }
    if ((1U & (vlSelf->instr_rdata_alu_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i 
            = ((0xfffffffeU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i) 
               | (1U & vlSelf->instr_rdata_alu_i));
    }
    if ((2U & (vlSelf->instr_rdata_alu_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i 
            = ((0xfffffffdU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i) 
               | (2U & vlSelf->instr_rdata_alu_i));
    }
    if ((4U & (vlSelf->instr_rdata_alu_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i 
            = ((0xfffffffbU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i) 
               | (4U & vlSelf->instr_rdata_alu_i));
    }
    if ((8U & (vlSelf->instr_rdata_alu_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i 
            = ((0xfffffff7U & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i) 
               | (8U & vlSelf->instr_rdata_alu_i));
    }
    if ((0x10U & (vlSelf->instr_rdata_alu_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i 
            = ((0xffffffefU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i) 
               | (0x10U & vlSelf->instr_rdata_alu_i));
    }
    if ((0x20U & (vlSelf->instr_rdata_alu_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i 
            = ((0xffffffdfU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i) 
               | (0x20U & vlSelf->instr_rdata_alu_i));
    }
    if ((0x40U & (vlSelf->instr_rdata_alu_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i 
            = ((0xffffffbfU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i) 
               | (0x40U & vlSelf->instr_rdata_alu_i));
    }
    if ((0x80U & (vlSelf->instr_rdata_alu_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i 
            = ((0xffffff7fU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i) 
               | (0x80U & vlSelf->instr_rdata_alu_i));
    }
    if ((0x100U & (vlSelf->instr_rdata_alu_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i 
            = ((0xfffffeffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i) 
               | (0x100U & vlSelf->instr_rdata_alu_i));
    }
    if ((0x200U & (vlSelf->instr_rdata_alu_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i 
            = ((0xfffffdffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i) 
               | (0x200U & vlSelf->instr_rdata_alu_i));
    }
    if ((0x400U & (vlSelf->instr_rdata_alu_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i 
            = ((0xfffffbffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i) 
               | (0x400U & vlSelf->instr_rdata_alu_i));
    }
    if ((0x800U & (vlSelf->instr_rdata_alu_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i 
            = ((0xfffff7ffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i) 
               | (0x800U & vlSelf->instr_rdata_alu_i));
    }
    if ((0x1000U & (vlSelf->instr_rdata_alu_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i 
            = ((0xffffefffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i) 
               | (0x1000U & vlSelf->instr_rdata_alu_i));
    }
    if ((0x2000U & (vlSelf->instr_rdata_alu_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i 
            = ((0xffffdfffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i) 
               | (0x2000U & vlSelf->instr_rdata_alu_i));
    }
    if ((0x4000U & (vlSelf->instr_rdata_alu_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i 
            = ((0xffffbfffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i) 
               | (0x4000U & vlSelf->instr_rdata_alu_i));
    }
    if ((0x8000U & (vlSelf->instr_rdata_alu_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i 
            = ((0xffff7fffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i) 
               | (0x8000U & vlSelf->instr_rdata_alu_i));
    }
    if ((0x10000U & (vlSelf->instr_rdata_alu_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i 
            = ((0xfffeffffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i) 
               | (0x10000U & vlSelf->instr_rdata_alu_i));
    }
    if ((0x20000U & (vlSelf->instr_rdata_alu_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i 
            = ((0xfffdffffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i) 
               | (0x20000U & vlSelf->instr_rdata_alu_i));
    }
    if ((0x40000U & (vlSelf->instr_rdata_alu_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i 
            = ((0xfffbffffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i) 
               | (0x40000U & vlSelf->instr_rdata_alu_i));
    }
    if ((0x80000U & (vlSelf->instr_rdata_alu_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i 
            = ((0xfff7ffffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i) 
               | (0x80000U & vlSelf->instr_rdata_alu_i));
    }
    if ((0x100000U & (vlSelf->instr_rdata_alu_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i 
            = ((0xffefffffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i) 
               | (0x100000U & vlSelf->instr_rdata_alu_i));
    }
    if ((0x200000U & (vlSelf->instr_rdata_alu_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i 
            = ((0xffdfffffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i) 
               | (0x200000U & vlSelf->instr_rdata_alu_i));
    }
    if ((0x400000U & (vlSelf->instr_rdata_alu_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i 
            = ((0xffbfffffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i) 
               | (0x400000U & vlSelf->instr_rdata_alu_i));
    }
    if ((0x800000U & (vlSelf->instr_rdata_alu_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i 
            = ((0xff7fffffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i) 
               | (0x800000U & vlSelf->instr_rdata_alu_i));
    }
    if ((0x1000000U & (vlSelf->instr_rdata_alu_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i 
            = ((0xfeffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i) 
               | (0x1000000U & vlSelf->instr_rdata_alu_i));
    }
    if ((0x2000000U & (vlSelf->instr_rdata_alu_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i 
            = ((0xfdffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i) 
               | (0x2000000U & vlSelf->instr_rdata_alu_i));
    }
    if ((0x4000000U & (vlSelf->instr_rdata_alu_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i 
            = ((0xfbffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i) 
               | (0x4000000U & vlSelf->instr_rdata_alu_i));
    }
    if ((0x8000000U & (vlSelf->instr_rdata_alu_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i 
            = ((0xf7ffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i) 
               | (0x8000000U & vlSelf->instr_rdata_alu_i));
    }
    if ((0x10000000U & (vlSelf->instr_rdata_alu_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i 
            = ((0xefffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i) 
               | (0x10000000U & vlSelf->instr_rdata_alu_i));
    }
    if ((0x20000000U & (vlSelf->instr_rdata_alu_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i 
            = ((0xdfffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i) 
               | (0x20000000U & vlSelf->instr_rdata_alu_i));
    }
    if ((0x40000000U & (vlSelf->instr_rdata_alu_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i 
            = ((0xbfffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i) 
               | (0x40000000U & vlSelf->instr_rdata_alu_i));
    }
    if (((vlSelf->instr_rdata_alu_i ^ vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i 
            = ((0x7fffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__instr_rdata_alu_i) 
               | (0x80000000U & vlSelf->instr_rdata_alu_i));
    }
    vlSelf->rf_raddr_a_o = (0x1fU & (vlSelf->instr_rdata_i 
                                     >> 0xfU));
    vlSelf->rf_raddr_b_o = (0x1fU & (vlSelf->instr_rdata_i 
                                     >> 0x14U));
    vlSelf->dr32e_dec__DOT__unused_instr_alu = ((0x3e0U 
                                                 & (vlSelf->instr_rdata_alu_i 
                                                    >> 0xaU)) 
                                                | (0x1fU 
                                                   & (vlSelf->instr_rdata_alu_i 
                                                      >> 7U)));
    vlSelf->alu_operator_o = 0x2cU;
    vlSelf->alu_op_a_mux_sel_o = 3U;
    vlSelf->alu_op_b_mux_sel_o = 1U;
    vlSelf->imm_a_mux_sel_o = 1U;
    vlSelf->imm_b_mux_sel_o = 0U;
    vlSelf->dr32e_dec__DOT__opcode_alu = (0x7fU & vlSelf->instr_rdata_alu_i);
    vlSelf->mult_sel_o = 0U;
    vlSelf->div_sel_o = 0U;
    if ((0x40U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
        if ((0x20U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
            if ((0x10U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                                if ((0U == (7U & (vlSelf->instr_rdata_alu_i 
                                                  >> 0xcU)))) {
                                    vlSelf->alu_op_a_mux_sel_o = 0U;
                                    vlSelf->alu_op_b_mux_sel_o = 1U;
                                } else {
                                    vlSelf->alu_op_b_mux_sel_o = 1U;
                                    vlSelf->imm_a_mux_sel_o = 0U;
                                    vlSelf->imm_b_mux_sel_o = 0U;
                                    vlSelf->alu_op_a_mux_sel_o 
                                        = ((0x4000U 
                                            & vlSelf->instr_rdata_alu_i)
                                            ? 3U : 0U);
                                }
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                if ((4U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                    if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                        if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                            if (vlSelf->instr_first_cycle_i) {
                                vlSelf->alu_op_a_mux_sel_o = 2U;
                                vlSelf->alu_op_b_mux_sel_o = 1U;
                                vlSelf->imm_b_mux_sel_o = 4U;
                                vlSelf->alu_operator_o = 0U;
                            } else {
                                vlSelf->alu_op_a_mux_sel_o = 2U;
                                vlSelf->alu_op_b_mux_sel_o = 1U;
                                vlSelf->imm_b_mux_sel_o = 5U;
                                vlSelf->alu_operator_o = 0U;
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                        if (vlSelf->instr_first_cycle_i) {
                            vlSelf->alu_op_a_mux_sel_o = 0U;
                            vlSelf->alu_op_b_mux_sel_o = 1U;
                            vlSelf->imm_b_mux_sel_o = 0U;
                            vlSelf->alu_operator_o = 0U;
                        } else {
                            vlSelf->alu_op_a_mux_sel_o = 2U;
                            vlSelf->alu_op_b_mux_sel_o = 1U;
                            vlSelf->imm_b_mux_sel_o = 5U;
                            vlSelf->alu_operator_o = 0U;
                        }
                    }
                }
            } else if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                    if ((0x4000U & vlSelf->instr_rdata_alu_i)) {
                        vlSelf->alu_operator_o = ((0x2000U 
                                                   & vlSelf->instr_rdata_alu_i)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->instr_rdata_alu_i)
                                                    ? 0x1cU
                                                    : 0x1aU)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->instr_rdata_alu_i)
                                                    ? 0x1bU
                                                    : 0x19U));
                    } else if ((1U & (~ (vlSelf->instr_rdata_alu_i 
                                         >> 0xdU)))) {
                        vlSelf->alu_operator_o = ((0x1000U 
                                                   & vlSelf->instr_rdata_alu_i)
                                                   ? 0x1eU
                                                   : 0x1dU);
                    }
                    if (vlSelf->instr_first_cycle_i) {
                        vlSelf->alu_op_a_mux_sel_o = 0U;
                        vlSelf->alu_op_b_mux_sel_o = 0U;
                    } else {
                        vlSelf->alu_op_a_mux_sel_o = 2U;
                        vlSelf->alu_op_b_mux_sel_o = 1U;
                        vlSelf->imm_b_mux_sel_o = ((IData)(vlSelf->branch_taken_i)
                                                    ? 2U
                                                    : 5U);
                        vlSelf->alu_operator_o = 0U;
                    }
                }
            }
        }
    } else if ((0x20U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
        if ((0x10U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
            if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                    if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                        if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                            vlSelf->alu_op_a_mux_sel_o = 3U;
                            vlSelf->alu_op_b_mux_sel_o = 1U;
                            vlSelf->imm_a_mux_sel_o = 1U;
                            vlSelf->imm_b_mux_sel_o = 3U;
                            vlSelf->alu_operator_o = 0U;
                        }
                    }
                } else if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                        vlSelf->alu_op_a_mux_sel_o = 0U;
                        vlSelf->alu_op_b_mux_sel_o = 0U;
                        if ((1U & (~ (vlSelf->instr_rdata_alu_i 
                                      >> 0x1aU)))) {
                            if ((1U & (~ (vlSelf->instr_rdata_alu_i 
                                          >> 0x1fU)))) {
                                if ((0x40000000U & vlSelf->instr_rdata_alu_i)) {
                                    if ((1U & (~ (vlSelf->instr_rdata_alu_i 
                                                  >> 0x1dU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->instr_rdata_alu_i 
                                                    >> 0x1cU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->instr_rdata_alu_i 
                                                     >> 0x1bU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->instr_rdata_alu_i 
                                                         >> 0x1aU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->instr_rdata_alu_i 
                                                             >> 0x19U)))) {
                                                        if (
                                                            (0x4000U 
                                                             & vlSelf->instr_rdata_alu_i)) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->instr_rdata_alu_i 
                                                                     >> 0xdU)))) {
                                                                if (
                                                                    (0x1000U 
                                                                     & vlSelf->instr_rdata_alu_i)) {
                                                                    vlSelf->alu_operator_o = 8U;
                                                                }
                                                            }
                                                        } else if (
                                                                   (1U 
                                                                    & (~ 
                                                                       (vlSelf->instr_rdata_alu_i 
                                                                        >> 0xdU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->instr_rdata_alu_i 
                                                                     >> 0xcU)))) {
                                                                vlSelf->alu_operator_o = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelf->instr_rdata_alu_i 
                                                   >> 0x1dU)))) {
                                    if ((1U & (~ (vlSelf->instr_rdata_alu_i 
                                                  >> 0x1cU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->instr_rdata_alu_i 
                                                    >> 0x1bU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->instr_rdata_alu_i 
                                                     >> 0x1aU)))) {
                                                if (
                                                    (0x2000000U 
                                                     & vlSelf->instr_rdata_alu_i)) {
                                                    if (
                                                        (0x4000U 
                                                         & vlSelf->instr_rdata_alu_i)) {
                                                        if (
                                                            (0x2000U 
                                                             & vlSelf->instr_rdata_alu_i)) {
                                                            if (
                                                                (0x1000U 
                                                                 & vlSelf->instr_rdata_alu_i)) {
                                                                vlSelf->alu_operator_o = 0U;
                                                                vlSelf->div_sel_o = 1U;
                                                            } else {
                                                                vlSelf->alu_operator_o = 0U;
                                                                vlSelf->div_sel_o = 1U;
                                                            }
                                                        } else if (
                                                                   (0x1000U 
                                                                    & vlSelf->instr_rdata_alu_i)) {
                                                            vlSelf->alu_operator_o = 0U;
                                                            vlSelf->div_sel_o = 1U;
                                                        } else {
                                                            vlSelf->alu_operator_o = 0U;
                                                            vlSelf->div_sel_o = 1U;
                                                        }
                                                    } else if (
                                                               (0x2000U 
                                                                & vlSelf->instr_rdata_alu_i)) {
                                                        if (
                                                            (0x1000U 
                                                             & vlSelf->instr_rdata_alu_i)) {
                                                            vlSelf->alu_operator_o = 0U;
                                                            vlSelf->mult_sel_o = 1U;
                                                        } else {
                                                            vlSelf->alu_operator_o = 0U;
                                                            vlSelf->mult_sel_o = 1U;
                                                        }
                                                    } else if (
                                                               (0x1000U 
                                                                & vlSelf->instr_rdata_alu_i)) {
                                                        vlSelf->alu_operator_o = 0U;
                                                        vlSelf->mult_sel_o = 1U;
                                                    } else {
                                                        vlSelf->alu_operator_o = 0U;
                                                        vlSelf->mult_sel_o = 1U;
                                                    }
                                                } else {
                                                    vlSelf->alu_operator_o 
                                                        = 
                                                        ((0x4000U 
                                                          & vlSelf->instr_rdata_alu_i)
                                                          ? 
                                                         ((0x2000U 
                                                           & vlSelf->instr_rdata_alu_i)
                                                           ? 
                                                          ((0x1000U 
                                                            & vlSelf->instr_rdata_alu_i)
                                                            ? 4U
                                                            : 3U)
                                                           : 
                                                          ((0x1000U 
                                                            & vlSelf->instr_rdata_alu_i)
                                                            ? 9U
                                                            : 2U))
                                                          : 
                                                         ((0x2000U 
                                                           & vlSelf->instr_rdata_alu_i)
                                                           ? 
                                                          ((0x1000U 
                                                            & vlSelf->instr_rdata_alu_i)
                                                            ? 0x2cU
                                                            : 0x2bU)
                                                           : 
                                                          ((0x1000U 
                                                            & vlSelf->instr_rdata_alu_i)
                                                            ? 0xaU
                                                            : 0U)));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                        vlSelf->alu_op_a_mux_sel_o = 0U;
                        vlSelf->alu_op_b_mux_sel_o = 0U;
                        vlSelf->alu_operator_o = 0U;
                        if ((1U & (~ (vlSelf->instr_rdata_alu_i 
                                      >> 0xeU)))) {
                            vlSelf->imm_b_mux_sel_o = 1U;
                            vlSelf->alu_op_b_mux_sel_o = 1U;
                        }
                    }
                }
            }
        }
    } else if ((0x10U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
        if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                        vlSelf->alu_op_a_mux_sel_o = 2U;
                        vlSelf->alu_op_b_mux_sel_o = 1U;
                        vlSelf->imm_b_mux_sel_o = 3U;
                        vlSelf->alu_operator_o = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                    vlSelf->alu_op_a_mux_sel_o = 0U;
                    vlSelf->alu_op_b_mux_sel_o = 1U;
                    vlSelf->imm_b_mux_sel_o = 0U;
                    if ((0x4000U & vlSelf->instr_rdata_alu_i)) {
                        if ((0x2000U & vlSelf->instr_rdata_alu_i)) {
                            vlSelf->alu_operator_o 
                                = ((0x1000U & vlSelf->instr_rdata_alu_i)
                                    ? 4U : 3U);
                        } else if ((0x1000U & vlSelf->instr_rdata_alu_i)) {
                            if ((0U == (vlSelf->instr_rdata_alu_i 
                                        >> 0x1bU))) {
                                vlSelf->alu_operator_o = 9U;
                            } else if ((8U == (vlSelf->instr_rdata_alu_i 
                                               >> 0x1bU))) {
                                vlSelf->alu_operator_o = 8U;
                            }
                        } else {
                            vlSelf->alu_operator_o = 2U;
                        }
                    } else {
                        vlSelf->alu_operator_o = ((0x2000U 
                                                   & vlSelf->instr_rdata_alu_i)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->instr_rdata_alu_i)
                                                    ? 0x2cU
                                                    : 0x2bU)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->instr_rdata_alu_i)
                                                    ? 0xaU
                                                    : 0U));
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
        if ((4U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
            if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                    if ((0U == (7U & (vlSelf->instr_rdata_alu_i 
                                      >> 0xcU)))) {
                        vlSelf->alu_operator_o = 0U;
                        vlSelf->alu_op_a_mux_sel_o = 0U;
                        vlSelf->alu_op_b_mux_sel_o = 1U;
                    } else if ((1U == (7U & (vlSelf->instr_rdata_alu_i 
                                             >> 0xcU)))) {
                        vlSelf->alu_op_a_mux_sel_o = 2U;
                        vlSelf->alu_op_b_mux_sel_o = 1U;
                        vlSelf->imm_b_mux_sel_o = 5U;
                        vlSelf->alu_operator_o = 0U;
                    }
                    if ((1U & (~ VL_ONEHOT0_I((((1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->instr_rdata_alu_i 
                                                     >> 0xcU))) 
                                                << 1U) 
                                               | (0U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->instr_rdata_alu_i 
                                                      >> 0xcU)))))))) {
                        if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                            VL_WRITEF("[%0t] %%Error: dr32e_dec.v:1142: Assertion failed in %Ndr32e_dec: synthesis parallel_case, but multiple matches found\n",
                                      64,VL_TIME_UNITED_Q(1),
                                      -12,vlSymsp->name());
                            VL_STOP_MT("verilog/dr32e_dec.v", 1142, "");
                        }
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                         >> 2U)))) {
        if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
            if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                vlSelf->alu_op_a_mux_sel_o = 0U;
                vlSelf->alu_operator_o = 0U;
                vlSelf->alu_op_b_mux_sel_o = 1U;
                vlSelf->imm_b_mux_sel_o = 0U;
            }
        }
    }
    if ((0x40U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
        if ((0x20U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
            if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                            if ((1U & (~ (IData)(vlSelf->dr32e_dec__DOT__opcode_alu)))) {
                                vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                                vlSymsp->__Vcoverage[496].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[492].fetch_add(1, std::memory_order_relaxed);
                                if ((1U & (~ (IData)(vlSelf->instr_first_cycle_i)))) {
                                    vlSymsp->__Vcoverage[493].fetch_add(1, std::memory_order_relaxed);
                                }
                                if (vlSelf->instr_first_cycle_i) {
                                    vlSymsp->__Vcoverage[495].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((1U & (~ (vlSelf->instr_rdata_alu_i 
                                              >> 0xeU)))) {
                                    if ((1U & (~ (vlSelf->instr_rdata_alu_i 
                                                  >> 0xdU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->instr_rdata_alu_i 
                                                    >> 0xcU)))) {
                                            vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
                                        }
                                        if ((0x1000U 
                                             & vlSelf->instr_rdata_alu_i)) {
                                            vlSymsp->__Vcoverage[485].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                    if ((0x2000U & vlSelf->instr_rdata_alu_i)) {
                                        vlSymsp->__Vcoverage[490].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0x4000U & vlSelf->instr_rdata_alu_i)) {
                                    if ((1U & (~ (vlSelf->instr_rdata_alu_i 
                                                  >> 0xdU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->instr_rdata_alu_i 
                                                    >> 0xcU)))) {
                                            vlSymsp->__Vcoverage[486].fetch_add(1, std::memory_order_relaxed);
                                        }
                                        if ((0x1000U 
                                             & vlSelf->instr_rdata_alu_i)) {
                                            vlSymsp->__Vcoverage[487].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                    if ((0x2000U & vlSelf->instr_rdata_alu_i)) {
                                        if ((1U & (~ 
                                                   (vlSelf->instr_rdata_alu_i 
                                                    >> 0xcU)))) {
                                            vlSymsp->__Vcoverage[488].fetch_add(1, std::memory_order_relaxed);
                                        }
                                        if ((0x1000U 
                                             & vlSelf->instr_rdata_alu_i)) {
                                            vlSymsp->__Vcoverage[489].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                        if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                            if ((1U & (~ (IData)(vlSelf->dr32e_dec__DOT__opcode_alu)))) {
                                vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                                vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
                                if ((1U & (~ (IData)(vlSelf->instr_first_cycle_i)))) {
                                    vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
                                }
                                if (vlSelf->instr_first_cycle_i) {
                                    vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
                if ((8U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                    if ((4U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                        if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                            if ((1U & (~ (IData)(vlSelf->dr32e_dec__DOT__opcode_alu)))) {
                                vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                                vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
                                if (vlSelf->instr_first_cycle_i) {
                                    vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((1U & (~ (IData)(vlSelf->instr_first_cycle_i)))) {
                                    vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                                  >> 2U)))) {
                        vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
                    }
                }
            }
            if ((0x10U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                        vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                                vlSymsp->__Vcoverage[724].fetch_add(1, std::memory_order_relaxed);
                                if ((0U != (7U & (vlSelf->instr_rdata_alu_i 
                                                  >> 0xcU)))) {
                                    vlSymsp->__Vcoverage[723].fetch_add(1, std::memory_order_relaxed);
                                    if ((1U & (~ (vlSelf->instr_rdata_alu_i 
                                                  >> 0xeU)))) {
                                        vlSymsp->__Vcoverage[721].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if ((0x4000U & vlSelf->instr_rdata_alu_i)) {
                                        vlSymsp->__Vcoverage[720].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0U == (7U & (vlSelf->instr_rdata_alu_i 
                                                  >> 0xcU)))) {
                                    vlSymsp->__Vcoverage[722].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((1U & (~ (IData)(vlSelf->dr32e_dec__DOT__opcode_alu)))) {
                                vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
                if ((8U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                    vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                      >> 5U)))) {
            vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
        }
    }
    dr32e_dec__DOT____VdfgExtracted_h075efacb__0 = 
        (1U & (~ VL_ONEHOT0_I((((2U == (3U & (vlSelf->instr_rdata_i 
                                              >> 0xcU))) 
                                << 2U) | (((1U == (3U 
                                                   & (vlSelf->instr_rdata_i 
                                                      >> 0xcU))) 
                                           << 1U) | 
                                          (0U == (3U 
                                                  & (vlSelf->instr_rdata_i 
                                                     >> 0xcU))))))));
    vlSelf->imm_i_type_o = (((- (IData)((vlSelf->instr_rdata_i 
                                         >> 0x1fU))) 
                             << 0xcU) | (vlSelf->instr_rdata_i 
                                         >> 0x14U));
    vlSelf->imm_b_type_o = (((- (IData)((vlSelf->instr_rdata_i 
                                         >> 0x1fU))) 
                             << 0xdU) | ((0x1000U & 
                                          (vlSelf->instr_rdata_i 
                                           >> 0x13U)) 
                                         | ((0x800U 
                                             & (vlSelf->instr_rdata_i 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->instr_rdata_i 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->instr_rdata_i 
                                                     >> 7U))))));
    vlSelf->imm_u_type_o = (0xfffff000U & vlSelf->instr_rdata_i);
    vlSelf->imm_j_type_o = (((- (IData)((vlSelf->instr_rdata_i 
                                         >> 0x1fU))) 
                             << 0x14U) | ((0xff000U 
                                           & vlSelf->instr_rdata_i) 
                                          | ((0x800U 
                                              & (vlSelf->instr_rdata_i 
                                                 >> 9U)) 
                                             | (0x7feU 
                                                & (vlSelf->instr_rdata_i 
                                                   >> 0x14U)))));
    vlSelf->zimm_rs1_type_o = (0x1fU & (vlSelf->instr_rdata_i 
                                        >> 0xfU));
    vlSelf->rf_waddr_o = (0x1fU & (vlSelf->instr_rdata_i 
                                   >> 7U));
    if ((1U & ((IData)(vlSelf->rf_raddr_a_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__rf_raddr_a_o)))) {
        vlSymsp->__Vcoverage[280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__rf_raddr_a_o 
            = ((0x1eU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__rf_raddr_a_o)) 
               | (1U & (IData)(vlSelf->rf_raddr_a_o)));
    }
    if ((2U & ((IData)(vlSelf->rf_raddr_a_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__rf_raddr_a_o)))) {
        vlSymsp->__Vcoverage[281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__rf_raddr_a_o 
            = ((0x1dU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__rf_raddr_a_o)) 
               | (2U & (IData)(vlSelf->rf_raddr_a_o)));
    }
    if ((4U & ((IData)(vlSelf->rf_raddr_a_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__rf_raddr_a_o)))) {
        vlSymsp->__Vcoverage[282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__rf_raddr_a_o 
            = ((0x1bU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__rf_raddr_a_o)) 
               | (4U & (IData)(vlSelf->rf_raddr_a_o)));
    }
    if ((8U & ((IData)(vlSelf->rf_raddr_a_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__rf_raddr_a_o)))) {
        vlSymsp->__Vcoverage[283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__rf_raddr_a_o 
            = ((0x17U & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__rf_raddr_a_o)) 
               | (8U & (IData)(vlSelf->rf_raddr_a_o)));
    }
    if ((0x10U & ((IData)(vlSelf->rf_raddr_a_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__rf_raddr_a_o)))) {
        vlSymsp->__Vcoverage[284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__rf_raddr_a_o 
            = ((0xfU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__rf_raddr_a_o)) 
               | (0x10U & (IData)(vlSelf->rf_raddr_a_o)));
    }
    if ((1U & ((IData)(vlSelf->rf_raddr_b_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__rf_raddr_b_o)))) {
        vlSymsp->__Vcoverage[285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__rf_raddr_b_o 
            = ((0x1eU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__rf_raddr_b_o)) 
               | (1U & (IData)(vlSelf->rf_raddr_b_o)));
    }
    if ((2U & ((IData)(vlSelf->rf_raddr_b_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__rf_raddr_b_o)))) {
        vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__rf_raddr_b_o 
            = ((0x1dU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__rf_raddr_b_o)) 
               | (2U & (IData)(vlSelf->rf_raddr_b_o)));
    }
    if ((4U & ((IData)(vlSelf->rf_raddr_b_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__rf_raddr_b_o)))) {
        vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__rf_raddr_b_o 
            = ((0x1bU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__rf_raddr_b_o)) 
               | (4U & (IData)(vlSelf->rf_raddr_b_o)));
    }
    if ((8U & ((IData)(vlSelf->rf_raddr_b_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__rf_raddr_b_o)))) {
        vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__rf_raddr_b_o 
            = ((0x17U & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__rf_raddr_b_o)) 
               | (8U & (IData)(vlSelf->rf_raddr_b_o)));
    }
    if ((0x10U & ((IData)(vlSelf->rf_raddr_b_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__rf_raddr_b_o)))) {
        vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__rf_raddr_b_o 
            = ((0xfU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__rf_raddr_b_o)) 
               | (0x10U & (IData)(vlSelf->rf_raddr_b_o)));
    }
    if ((1U & ((IData)(vlSelf->dr32e_dec__DOT__unused_instr_alu) 
               ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__unused_instr_alu)))) {
        vlSymsp->__Vcoverage[330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__unused_instr_alu 
            = ((0x3feU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__unused_instr_alu)) 
               | (1U & (IData)(vlSelf->dr32e_dec__DOT__unused_instr_alu)));
    }
    if ((2U & ((IData)(vlSelf->dr32e_dec__DOT__unused_instr_alu) 
               ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__unused_instr_alu)))) {
        vlSymsp->__Vcoverage[331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__unused_instr_alu 
            = ((0x3fdU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__unused_instr_alu)) 
               | (2U & (IData)(vlSelf->dr32e_dec__DOT__unused_instr_alu)));
    }
    if ((4U & ((IData)(vlSelf->dr32e_dec__DOT__unused_instr_alu) 
               ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__unused_instr_alu)))) {
        vlSymsp->__Vcoverage[332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__unused_instr_alu 
            = ((0x3fbU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__unused_instr_alu)) 
               | (4U & (IData)(vlSelf->dr32e_dec__DOT__unused_instr_alu)));
    }
    if ((8U & ((IData)(vlSelf->dr32e_dec__DOT__unused_instr_alu) 
               ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__unused_instr_alu)))) {
        vlSymsp->__Vcoverage[333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__unused_instr_alu 
            = ((0x3f7U & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__unused_instr_alu)) 
               | (8U & (IData)(vlSelf->dr32e_dec__DOT__unused_instr_alu)));
    }
    if ((0x10U & ((IData)(vlSelf->dr32e_dec__DOT__unused_instr_alu) 
                  ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__unused_instr_alu)))) {
        vlSymsp->__Vcoverage[334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__unused_instr_alu 
            = ((0x3efU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__unused_instr_alu)) 
               | (0x10U & (IData)(vlSelf->dr32e_dec__DOT__unused_instr_alu)));
    }
    if ((0x20U & ((IData)(vlSelf->dr32e_dec__DOT__unused_instr_alu) 
                  ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__unused_instr_alu)))) {
        vlSymsp->__Vcoverage[335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__unused_instr_alu 
            = ((0x3dfU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__unused_instr_alu)) 
               | (0x20U & (IData)(vlSelf->dr32e_dec__DOT__unused_instr_alu)));
    }
    if ((0x40U & ((IData)(vlSelf->dr32e_dec__DOT__unused_instr_alu) 
                  ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__unused_instr_alu)))) {
        vlSymsp->__Vcoverage[336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__unused_instr_alu 
            = ((0x3bfU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__unused_instr_alu)) 
               | (0x40U & (IData)(vlSelf->dr32e_dec__DOT__unused_instr_alu)));
    }
    if ((0x80U & ((IData)(vlSelf->dr32e_dec__DOT__unused_instr_alu) 
                  ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__unused_instr_alu)))) {
        vlSymsp->__Vcoverage[337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__unused_instr_alu 
            = ((0x37fU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__unused_instr_alu)) 
               | (0x80U & (IData)(vlSelf->dr32e_dec__DOT__unused_instr_alu)));
    }
    if ((0x100U & ((IData)(vlSelf->dr32e_dec__DOT__unused_instr_alu) 
                   ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__unused_instr_alu)))) {
        vlSymsp->__Vcoverage[338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__unused_instr_alu 
            = ((0x2ffU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__unused_instr_alu)) 
               | (0x100U & (IData)(vlSelf->dr32e_dec__DOT__unused_instr_alu)));
    }
    if ((0x200U & ((IData)(vlSelf->dr32e_dec__DOT__unused_instr_alu) 
                   ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__unused_instr_alu)))) {
        vlSymsp->__Vcoverage[339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__unused_instr_alu 
            = ((0x1ffU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__unused_instr_alu)) 
               | (0x200U & (IData)(vlSelf->dr32e_dec__DOT__unused_instr_alu)));
    }
    if (((IData)(vlSelf->alu_op_b_mux_sel_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__alu_op_b_mux_sel_o))) {
        vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__alu_op_b_mux_sel_o 
            = vlSelf->alu_op_b_mux_sel_o;
    }
    if (((IData)(vlSelf->imm_a_mux_sel_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__imm_a_mux_sel_o))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_a_mux_sel_o 
            = vlSelf->imm_a_mux_sel_o;
    }
    if ((1U & ((IData)(vlSelf->alu_op_a_mux_sel_o) 
               ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__alu_op_a_mux_sel_o)))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__alu_op_a_mux_sel_o 
            = ((2U & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__alu_op_a_mux_sel_o)) 
               | (1U & (IData)(vlSelf->alu_op_a_mux_sel_o)));
    }
    if ((2U & ((IData)(vlSelf->alu_op_a_mux_sel_o) 
               ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__alu_op_a_mux_sel_o)))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__alu_op_a_mux_sel_o 
            = ((1U & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__alu_op_a_mux_sel_o)) 
               | (2U & (IData)(vlSelf->alu_op_a_mux_sel_o)));
    }
    if (((IData)(vlSelf->mult_sel_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__mult_sel_o))) {
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__mult_sel_o 
            = vlSelf->mult_sel_o;
    }
    if (((IData)(vlSelf->div_sel_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__div_sel_o))) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__div_sel_o 
            = vlSelf->div_sel_o;
    }
    if ((1U & ((IData)(vlSelf->imm_b_mux_sel_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_mux_sel_o)))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_mux_sel_o 
            = ((6U & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_mux_sel_o)) 
               | (1U & (IData)(vlSelf->imm_b_mux_sel_o)));
    }
    if ((2U & ((IData)(vlSelf->imm_b_mux_sel_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_mux_sel_o)))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_mux_sel_o 
            = ((5U & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_mux_sel_o)) 
               | (2U & (IData)(vlSelf->imm_b_mux_sel_o)));
    }
    if ((4U & ((IData)(vlSelf->imm_b_mux_sel_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_mux_sel_o)))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_mux_sel_o 
            = ((3U & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_mux_sel_o)) 
               | (4U & (IData)(vlSelf->imm_b_mux_sel_o)));
    }
    if ((1U & ((IData)(vlSelf->alu_operator_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__alu_operator_o)))) {
        vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__alu_operator_o 
            = ((0x7eU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__alu_operator_o)) 
               | (1U & (IData)(vlSelf->alu_operator_o)));
    }
    if ((2U & ((IData)(vlSelf->alu_operator_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__alu_operator_o)))) {
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__alu_operator_o 
            = ((0x7dU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__alu_operator_o)) 
               | (2U & (IData)(vlSelf->alu_operator_o)));
    }
    if ((4U & ((IData)(vlSelf->alu_operator_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__alu_operator_o)))) {
        vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__alu_operator_o 
            = ((0x7bU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__alu_operator_o)) 
               | (4U & (IData)(vlSelf->alu_operator_o)));
    }
    if ((8U & ((IData)(vlSelf->alu_operator_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__alu_operator_o)))) {
        vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__alu_operator_o 
            = ((0x77U & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__alu_operator_o)) 
               | (8U & (IData)(vlSelf->alu_operator_o)));
    }
    if ((0x10U & ((IData)(vlSelf->alu_operator_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__alu_operator_o)))) {
        vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__alu_operator_o 
            = ((0x6fU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__alu_operator_o)) 
               | (0x10U & (IData)(vlSelf->alu_operator_o)));
    }
    if ((0x20U & ((IData)(vlSelf->alu_operator_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__alu_operator_o)))) {
        vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__alu_operator_o 
            = ((0x5fU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__alu_operator_o)) 
               | (0x20U & (IData)(vlSelf->alu_operator_o)));
    }
    if ((0x40U & ((IData)(vlSelf->alu_operator_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__alu_operator_o)))) {
        vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__alu_operator_o 
            = ((0x3fU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__alu_operator_o)) 
               | (0x40U & (IData)(vlSelf->alu_operator_o)));
    }
    if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
            if ((0x10U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                        if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                                vlSymsp->__Vcoverage[501].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->dr32e_dec__DOT__opcode_alu)))) {
                                vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                                vlSymsp->__Vcoverage[713].fetch_add(1, std::memory_order_relaxed);
                                if ((1U & (~ (vlSelf->instr_rdata_alu_i 
                                              >> 0x1aU)))) {
                                    if ((1U & (~ (vlSelf->instr_rdata_alu_i 
                                                  >> 0x1fU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->instr_rdata_alu_i 
                                                    >> 0x1eU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->instr_rdata_alu_i 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->instr_rdata_alu_i 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->instr_rdata_alu_i 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->instr_rdata_alu_i 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlSelf->instr_rdata_alu_i)) {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlSelf->instr_rdata_alu_i)) {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSelf->instr_rdata_alu_i)) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_alu_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[708].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_alu_i)) {
                                                                            vlSymsp->__Vcoverage[709].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_alu_i 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_alu_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[706].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_alu_i)) {
                                                                            vlSymsp->__Vcoverage[707].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                }
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->instr_rdata_alu_i 
                                                                         >> 0xeU)))) {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSelf->instr_rdata_alu_i)) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_alu_i)) {
                                                                            vlSymsp->__Vcoverage[705].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_alu_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[704].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_alu_i 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_alu_i)) {
                                                                            vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_alu_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[702].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->instr_rdata_alu_i 
                                                                     >> 0x19U)))) {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlSelf->instr_rdata_alu_i)) {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSelf->instr_rdata_alu_i)) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_alu_i)) {
                                                                            vlSymsp->__Vcoverage[596].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_alu_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[595].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_alu_i 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_alu_i)) {
                                                                            vlSymsp->__Vcoverage[598].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_alu_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[594].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                }
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->instr_rdata_alu_i 
                                                                         >> 0xeU)))) {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSelf->instr_rdata_alu_i)) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_alu_i)) {
                                                                            vlSymsp->__Vcoverage[593].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_alu_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[592].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_alu_i 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_alu_i)) {
                                                                            vlSymsp->__Vcoverage[597].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_alu_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[590].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        if (
                                                            (0x4000000U 
                                                             & vlSelf->instr_rdata_alu_i)) {
                                                            vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                        }
                                                    }
                                                    if (
                                                        (0x8000000U 
                                                         & vlSelf->instr_rdata_alu_i)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->instr_rdata_alu_i 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->instr_rdata_alu_i 
                                                                     >> 0x19U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->instr_rdata_alu_i 
                                                                         >> 0xeU)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_alu_i 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_alu_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_alu_i)) {
                                                                            vlSymsp->__Vcoverage[668].fetch_add(1, std::memory_order_relaxed);
                                                                            vlSymsp->__Vcoverage[667].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSelf->instr_rdata_alu_i)) {
                                                                        vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                                    }
                                                                }
                                                                if (
                                                                    (0x4000U 
                                                                     & vlSelf->instr_rdata_alu_i)) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_alu_i 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_alu_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[620].fetch_add(1, std::memory_order_relaxed);
                                                                            vlSymsp->__Vcoverage[619].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_alu_i)) {
                                                                            vlSymsp->__Vcoverage[671].fetch_add(1, std::memory_order_relaxed);
                                                                            vlSymsp->__Vcoverage[670].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSelf->instr_rdata_alu_i)) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_alu_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[700].fetch_add(1, std::memory_order_relaxed);
                                                                            vlSymsp->__Vcoverage[701].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_alu_i)) {
                                                                            vlSymsp->__Vcoverage[626].fetch_add(1, std::memory_order_relaxed);
                                                                            vlSymsp->__Vcoverage[625].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            if (
                                                                (0x2000000U 
                                                                 & vlSelf->instr_rdata_alu_i)) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->instr_rdata_alu_i 
                                                                         >> 0xeU)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_alu_i 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_alu_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_alu_i)) {
                                                                            vlSymsp->__Vcoverage[689].fetch_add(1, std::memory_order_relaxed);
                                                                            vlSymsp->__Vcoverage[688].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSelf->instr_rdata_alu_i)) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_alu_i)) {
                                                                            vlSymsp->__Vcoverage[695].fetch_add(1, std::memory_order_relaxed);
                                                                            vlSymsp->__Vcoverage[694].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_alu_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[691].fetch_add(1, std::memory_order_relaxed);
                                                                            vlSymsp->__Vcoverage[692].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                }
                                                                if (
                                                                    (0x4000U 
                                                                     & vlSelf->instr_rdata_alu_i)) {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSelf->instr_rdata_alu_i)) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_alu_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[611].fetch_add(1, std::memory_order_relaxed);
                                                                            vlSymsp->__Vcoverage[610].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_alu_i)) {
                                                                            vlSymsp->__Vcoverage[617].fetch_add(1, std::memory_order_relaxed);
                                                                            vlSymsp->__Vcoverage[616].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_alu_i 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_alu_i)) {
                                                                            vlSymsp->__Vcoverage[613].fetch_add(1, std::memory_order_relaxed);
                                                                            vlSymsp->__Vcoverage[614].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_alu_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[607].fetch_add(1, std::memory_order_relaxed);
                                                                            vlSymsp->__Vcoverage[608].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        if (
                                                            (0x4000000U 
                                                             & vlSelf->instr_rdata_alu_i)) {
                                                            vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                        }
                                                    }
                                                }
                                                if (
                                                    (0x10000000U 
                                                     & vlSelf->instr_rdata_alu_i)) {
                                                    vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                }
                                            }
                                            if ((0x20000000U 
                                                 & vlSelf->instr_rdata_alu_i)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->instr_rdata_alu_i 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->instr_rdata_alu_i 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->instr_rdata_alu_i 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->instr_rdata_alu_i 
                                                                     >> 0x19U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->instr_rdata_alu_i 
                                                                         >> 0xeU)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_alu_i 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_alu_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_alu_i)) {
                                                                            vlSymsp->__Vcoverage[683].fetch_add(1, std::memory_order_relaxed);
                                                                            vlSymsp->__Vcoverage[682].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSelf->instr_rdata_alu_i)) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_alu_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[637].fetch_add(1, std::memory_order_relaxed);
                                                                            vlSymsp->__Vcoverage[638].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_alu_i)) {
                                                                            vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                }
                                                                if (
                                                                    (0x4000U 
                                                                     & vlSelf->instr_rdata_alu_i)) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_alu_i 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_alu_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[641].fetch_add(1, std::memory_order_relaxed);
                                                                            vlSymsp->__Vcoverage[640].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_alu_i)) {
                                                                            vlSymsp->__Vcoverage[686].fetch_add(1, std::memory_order_relaxed);
                                                                            vlSymsp->__Vcoverage[685].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSelf->instr_rdata_alu_i)) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_alu_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[643].fetch_add(1, std::memory_order_relaxed);
                                                                            vlSymsp->__Vcoverage[644].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_alu_i)) {
                                                                            vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            if (
                                                                (0x2000000U 
                                                                 & vlSelf->instr_rdata_alu_i)) {
                                                                vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                            }
                                                        }
                                                        if (
                                                            (0x4000000U 
                                                             & vlSelf->instr_rdata_alu_i)) {
                                                            vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                        }
                                                    }
                                                    if (
                                                        (0x8000000U 
                                                         & vlSelf->instr_rdata_alu_i)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->instr_rdata_alu_i 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->instr_rdata_alu_i 
                                                                     >> 0x19U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->instr_rdata_alu_i 
                                                                         >> 0xeU)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_alu_i 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_alu_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_alu_i)) {
                                                                            vlSymsp->__Vcoverage[650].fetch_add(1, std::memory_order_relaxed);
                                                                            vlSymsp->__Vcoverage[649].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSelf->instr_rdata_alu_i)) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_alu_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[674].fetch_add(1, std::memory_order_relaxed);
                                                                            vlSymsp->__Vcoverage[673].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_alu_i)) {
                                                                            vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                }
                                                                if (
                                                                    (0x4000U 
                                                                     & vlSelf->instr_rdata_alu_i)) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_alu_i 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_alu_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[676].fetch_add(1, std::memory_order_relaxed);
                                                                            vlSymsp->__Vcoverage[677].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_alu_i)) {
                                                                            vlSymsp->__Vcoverage[665].fetch_add(1, std::memory_order_relaxed);
                                                                            vlSymsp->__Vcoverage[664].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSelf->instr_rdata_alu_i)) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_alu_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[680].fetch_add(1, std::memory_order_relaxed);
                                                                            vlSymsp->__Vcoverage[679].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_alu_i)) {
                                                                            vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            if (
                                                                (0x2000000U 
                                                                 & vlSelf->instr_rdata_alu_i)) {
                                                                vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                            }
                                                        }
                                                        if (
                                                            (0x4000000U 
                                                             & vlSelf->instr_rdata_alu_i)) {
                                                            vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                        }
                                                    }
                                                }
                                                if (
                                                    (0x10000000U 
                                                     & vlSelf->instr_rdata_alu_i)) {
                                                    vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                }
                                            }
                                        }
                                        if ((0x40000000U 
                                             & vlSelf->instr_rdata_alu_i)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->instr_rdata_alu_i 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->instr_rdata_alu_i 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->instr_rdata_alu_i 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->instr_rdata_alu_i 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->instr_rdata_alu_i 
                                                                     >> 0x19U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->instr_rdata_alu_i 
                                                                         >> 0xeU)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_alu_i 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_alu_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[591].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_alu_i)) {
                                                                            vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSelf->instr_rdata_alu_i)) {
                                                                        vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                                    }
                                                                }
                                                                if (
                                                                    (0x4000U 
                                                                     & vlSelf->instr_rdata_alu_i)) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_alu_i 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_alu_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[629].fetch_add(1, std::memory_order_relaxed);
                                                                            vlSymsp->__Vcoverage[628].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_alu_i)) {
                                                                            vlSymsp->__Vcoverage[599].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSelf->instr_rdata_alu_i)) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_alu_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[632].fetch_add(1, std::memory_order_relaxed);
                                                                            vlSymsp->__Vcoverage[631].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_alu_i)) {
                                                                            vlSymsp->__Vcoverage[635].fetch_add(1, std::memory_order_relaxed);
                                                                            vlSymsp->__Vcoverage[634].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            if (
                                                                (0x2000000U 
                                                                 & vlSelf->instr_rdata_alu_i)) {
                                                                vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                            }
                                                        }
                                                        if (
                                                            (0x4000000U 
                                                             & vlSelf->instr_rdata_alu_i)) {
                                                            vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                        }
                                                    }
                                                    if (
                                                        (0x8000000U 
                                                         & vlSelf->instr_rdata_alu_i)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->instr_rdata_alu_i 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->instr_rdata_alu_i 
                                                                     >> 0x19U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->instr_rdata_alu_i 
                                                                         >> 0xeU)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_alu_i 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_alu_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_alu_i)) {
                                                                            vlSymsp->__Vcoverage[646].fetch_add(1, std::memory_order_relaxed);
                                                                            vlSymsp->__Vcoverage[647].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSelf->instr_rdata_alu_i)) {
                                                                        vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                                    }
                                                                }
                                                                if (
                                                                    (0x4000U 
                                                                     & vlSelf->instr_rdata_alu_i)) {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSelf->instr_rdata_alu_i)) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_alu_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[697].fetch_add(1, std::memory_order_relaxed);
                                                                            vlSymsp->__Vcoverage[698].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_alu_i)) {
                                                                            vlSymsp->__Vcoverage[659].fetch_add(1, std::memory_order_relaxed);
                                                                            vlSymsp->__Vcoverage[658].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_alu_i 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_alu_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[622].fetch_add(1, std::memory_order_relaxed);
                                                                            vlSymsp->__Vcoverage[623].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_alu_i)) {
                                                                            vlSymsp->__Vcoverage[655].fetch_add(1, std::memory_order_relaxed);
                                                                            vlSymsp->__Vcoverage[656].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            if (
                                                                (0x2000000U 
                                                                 & vlSelf->instr_rdata_alu_i)) {
                                                                vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                            }
                                                        }
                                                        if (
                                                            (0x4000000U 
                                                             & vlSelf->instr_rdata_alu_i)) {
                                                            vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                        }
                                                    }
                                                }
                                                if (
                                                    (0x10000000U 
                                                     & vlSelf->instr_rdata_alu_i)) {
                                                    vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                }
                                            }
                                            if ((0x20000000U 
                                                 & vlSelf->instr_rdata_alu_i)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->instr_rdata_alu_i 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (0x8000000U 
                                                         & vlSelf->instr_rdata_alu_i)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->instr_rdata_alu_i 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->instr_rdata_alu_i 
                                                                     >> 0x19U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->instr_rdata_alu_i 
                                                                         >> 0xeU)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_alu_i 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_alu_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_alu_i)) {
                                                                            vlSymsp->__Vcoverage[652].fetch_add(1, std::memory_order_relaxed);
                                                                            vlSymsp->__Vcoverage[653].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSelf->instr_rdata_alu_i)) {
                                                                        vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                                    }
                                                                }
                                                                if (
                                                                    (0x4000U 
                                                                     & vlSelf->instr_rdata_alu_i)) {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSelf->instr_rdata_alu_i)) {
                                                                        vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                                    }
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_alu_i 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_alu_i)) {
                                                                            vlSymsp->__Vcoverage[661].fetch_add(1, std::memory_order_relaxed);
                                                                            vlSymsp->__Vcoverage[662].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_alu_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            if (
                                                                (0x2000000U 
                                                                 & vlSelf->instr_rdata_alu_i)) {
                                                                vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                            }
                                                        }
                                                        if (
                                                            (0x4000000U 
                                                             & vlSelf->instr_rdata_alu_i)) {
                                                            vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                        }
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->instr_rdata_alu_i 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->instr_rdata_alu_i 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->instr_rdata_alu_i 
                                                                     >> 0x19U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->instr_rdata_alu_i 
                                                                         >> 0xeU)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_alu_i 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_alu_i)) {
                                                                            vlSymsp->__Vcoverage[602].fetch_add(1, std::memory_order_relaxed);
                                                                            vlSymsp->__Vcoverage[601].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_alu_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSelf->instr_rdata_alu_i)) {
                                                                        vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                                    }
                                                                }
                                                                if (
                                                                    (0x4000U 
                                                                     & vlSelf->instr_rdata_alu_i)) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_alu_i 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_alu_i)) {
                                                                            vlSymsp->__Vcoverage[604].fetch_add(1, std::memory_order_relaxed);
                                                                            vlSymsp->__Vcoverage[605].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_alu_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSelf->instr_rdata_alu_i)) {
                                                                        vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                                    }
                                                                }
                                                            }
                                                            if (
                                                                (0x2000000U 
                                                                 & vlSelf->instr_rdata_alu_i)) {
                                                                vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                            }
                                                        }
                                                        if (
                                                            (0x4000000U 
                                                             & vlSelf->instr_rdata_alu_i)) {
                                                            vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                        }
                                                    }
                                                }
                                                if (
                                                    (0x10000000U 
                                                     & vlSelf->instr_rdata_alu_i)) {
                                                    vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                                }
                                            }
                                        }
                                    }
                                    if ((vlSelf->instr_rdata_alu_i 
                                         >> 0x1fU)) {
                                        vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    vlSymsp->__Vcoverage[712].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((0x4000000U & vlSelf->instr_rdata_alu_i)) {
                                    vlSymsp->__Vcoverage[711].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[589].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((1U & (~ (IData)(vlSelf->dr32e_dec__DOT__opcode_alu)))) {
                                vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
                if ((8U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                    vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                    vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                        vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                                vlSymsp->__Vcoverage[499].fetch_add(1, std::memory_order_relaxed);
                                if ((0x4000U & vlSelf->instr_rdata_alu_i)) {
                                    vlSymsp->__Vcoverage[498].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((1U & (~ (vlSelf->instr_rdata_alu_i 
                                              >> 0xeU)))) {
                                    vlSymsp->__Vcoverage[497].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((1U & (~ (IData)(vlSelf->dr32e_dec__DOT__opcode_alu)))) {
                                vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                if ((8U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                    vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                        if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                                vlSymsp->__Vcoverage[502].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->dr32e_dec__DOT__opcode_alu)))) {
                                vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                                vlSymsp->__Vcoverage[574].fetch_add(1, std::memory_order_relaxed);
                                if ((0x4000U & vlSelf->instr_rdata_alu_i)) {
                                    if ((0x2000U & vlSelf->instr_rdata_alu_i)) {
                                        if ((0x1000U 
                                             & vlSelf->instr_rdata_alu_i)) {
                                            vlSymsp->__Vcoverage[508].fetch_add(1, std::memory_order_relaxed);
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->instr_rdata_alu_i 
                                                    >> 0xcU)))) {
                                            vlSymsp->__Vcoverage[507].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                    if ((1U & (~ (vlSelf->instr_rdata_alu_i 
                                                  >> 0xdU)))) {
                                        if ((0x1000U 
                                             & vlSelf->instr_rdata_alu_i)) {
                                            if ((0U 
                                                 == 
                                                 (vlSelf->instr_rdata_alu_i 
                                                  >> 0x1bU))) {
                                                vlSymsp->__Vcoverage[569].fetch_add(1, std::memory_order_relaxed);
                                            }
                                            if ((0U 
                                                 != 
                                                 (vlSelf->instr_rdata_alu_i 
                                                  >> 0x1bU))) {
                                                if (
                                                    (8U 
                                                     == 
                                                     (vlSelf->instr_rdata_alu_i 
                                                      >> 0x1bU))) {
                                                    vlSymsp->__Vcoverage[567].fetch_add(1, std::memory_order_relaxed);
                                                }
                                                if (
                                                    (8U 
                                                     != 
                                                     (vlSelf->instr_rdata_alu_i 
                                                      >> 0x1bU))) {
                                                    vlSymsp->__Vcoverage[568].fetch_add(1, std::memory_order_relaxed);
                                                }
                                            }
                                            vlSymsp->__Vcoverage[571].fetch_add(1, std::memory_order_relaxed);
                                            vlSymsp->__Vcoverage[572].fetch_add(1, std::memory_order_relaxed);
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->instr_rdata_alu_i 
                                                    >> 0xcU)))) {
                                            vlSymsp->__Vcoverage[506].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                }
                                if ((1U & (~ (vlSelf->instr_rdata_alu_i 
                                              >> 0xeU)))) {
                                    if ((0x2000U & vlSelf->instr_rdata_alu_i)) {
                                        if ((0x1000U 
                                             & vlSelf->instr_rdata_alu_i)) {
                                            vlSymsp->__Vcoverage[505].fetch_add(1, std::memory_order_relaxed);
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->instr_rdata_alu_i 
                                                    >> 0xcU)))) {
                                            vlSymsp->__Vcoverage[504].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                    if ((1U & (~ (vlSelf->instr_rdata_alu_i 
                                                  >> 0xdU)))) {
                                        if ((0x1000U 
                                             & vlSelf->instr_rdata_alu_i)) {
                                            vlSymsp->__Vcoverage[546].fetch_add(1, std::memory_order_relaxed);
                                            vlSymsp->__Vcoverage[547].fetch_add(1, std::memory_order_relaxed);
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->instr_rdata_alu_i 
                                                    >> 0xcU)))) {
                                            vlSymsp->__Vcoverage[503].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                }
                            }
                            if ((1U & (~ (IData)(vlSelf->dr32e_dec__DOT__opcode_alu)))) {
                                vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                    if ((4U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                        if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                                vlSymsp->__Vcoverage[719].fetch_add(1, std::memory_order_relaxed);
                                if ((0U == (7U & (vlSelf->instr_rdata_alu_i 
                                                  >> 0xcU)))) {
                                    vlSymsp->__Vcoverage[714].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((0U != (7U & (vlSelf->instr_rdata_alu_i 
                                                  >> 0xcU)))) {
                                    if ((1U == (7U 
                                                & (vlSelf->instr_rdata_alu_i 
                                                   >> 0xcU)))) {
                                        vlSymsp->__Vcoverage[716].fetch_add(1, std::memory_order_relaxed);
                                        vlSymsp->__Vcoverage[717].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if ((1U != (7U 
                                                & (vlSelf->instr_rdata_alu_i 
                                                   >> 0xcU)))) {
                                        vlSymsp->__Vcoverage[718].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                            }
                            if ((1U & (~ (IData)(vlSelf->dr32e_dec__DOT__opcode_alu)))) {
                                vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                                  >> 2U)))) {
                        vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                        vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu))) {
                                vlSymsp->__Vcoverage[500].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->dr32e_dec__DOT__opcode_alu)))) {
                                vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
            }
        }
    }
    if ((1U & ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
               ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__opcode_alu)))) {
        vlSymsp->__Vcoverage[359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__opcode_alu 
            = ((0x7eU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__opcode_alu)) 
               | (1U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu)));
    }
    if ((2U & ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
               ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__opcode_alu)))) {
        vlSymsp->__Vcoverage[360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__opcode_alu 
            = ((0x7dU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__opcode_alu)) 
               | (2U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu)));
    }
    if ((4U & ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
               ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__opcode_alu)))) {
        vlSymsp->__Vcoverage[361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__opcode_alu 
            = ((0x7bU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__opcode_alu)) 
               | (4U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu)));
    }
    if ((8U & ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
               ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__opcode_alu)))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__opcode_alu 
            = ((0x77U & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__opcode_alu)) 
               | (8U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu)));
    }
    if ((0x10U & ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                  ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__opcode_alu)))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__opcode_alu 
            = ((0x6fU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__opcode_alu)) 
               | (0x10U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu)));
    }
    if ((0x20U & ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                  ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__opcode_alu)))) {
        vlSymsp->__Vcoverage[364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__opcode_alu 
            = ((0x5fU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__opcode_alu)) 
               | (0x20U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu)));
    }
    if ((0x40U & ((IData)(vlSelf->dr32e_dec__DOT__opcode_alu) 
                  ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__opcode_alu)))) {
        vlSymsp->__Vcoverage[365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__opcode_alu 
            = ((0x3fU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__opcode_alu)) 
               | (0x40U & (IData)(vlSelf->dr32e_dec__DOT__opcode_alu)));
    }
    if ((1U & (vlSelf->imm_i_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o 
            = ((0xfffffffeU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o) 
               | (1U & vlSelf->imm_i_type_o));
    }
    if ((2U & (vlSelf->imm_i_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o 
            = ((0xfffffffdU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o) 
               | (2U & vlSelf->imm_i_type_o));
    }
    if ((4U & (vlSelf->imm_i_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o 
            = ((0xfffffffbU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o) 
               | (4U & vlSelf->imm_i_type_o));
    }
    if ((8U & (vlSelf->imm_i_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o 
            = ((0xfffffff7U & vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o) 
               | (8U & vlSelf->imm_i_type_o));
    }
    if ((0x10U & (vlSelf->imm_i_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o 
            = ((0xffffffefU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o) 
               | (0x10U & vlSelf->imm_i_type_o));
    }
    if ((0x20U & (vlSelf->imm_i_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o 
            = ((0xffffffdfU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o) 
               | (0x20U & vlSelf->imm_i_type_o));
    }
    if ((0x40U & (vlSelf->imm_i_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o 
            = ((0xffffffbfU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o) 
               | (0x40U & vlSelf->imm_i_type_o));
    }
    if ((0x80U & (vlSelf->imm_i_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o 
            = ((0xffffff7fU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o) 
               | (0x80U & vlSelf->imm_i_type_o));
    }
    if ((0x100U & (vlSelf->imm_i_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o 
            = ((0xfffffeffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o) 
               | (0x100U & vlSelf->imm_i_type_o));
    }
    if ((0x200U & (vlSelf->imm_i_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o 
            = ((0xfffffdffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o) 
               | (0x200U & vlSelf->imm_i_type_o));
    }
    if ((0x400U & (vlSelf->imm_i_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o 
            = ((0xfffffbffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o) 
               | (0x400U & vlSelf->imm_i_type_o));
    }
    if ((0x800U & (vlSelf->imm_i_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o 
            = ((0xfffff7ffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o) 
               | (0x800U & vlSelf->imm_i_type_o));
    }
    if ((0x1000U & (vlSelf->imm_i_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o 
            = ((0xffffefffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o) 
               | (0x1000U & vlSelf->imm_i_type_o));
    }
    if ((0x2000U & (vlSelf->imm_i_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o 
            = ((0xffffdfffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o) 
               | (0x2000U & vlSelf->imm_i_type_o));
    }
    if ((0x4000U & (vlSelf->imm_i_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o 
            = ((0xffffbfffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o) 
               | (0x4000U & vlSelf->imm_i_type_o));
    }
    if ((0x8000U & (vlSelf->imm_i_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o 
            = ((0xffff7fffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o) 
               | (0x8000U & vlSelf->imm_i_type_o));
    }
    if ((0x10000U & (vlSelf->imm_i_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o 
            = ((0xfffeffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o) 
               | (0x10000U & vlSelf->imm_i_type_o));
    }
    if ((0x20000U & (vlSelf->imm_i_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o 
            = ((0xfffdffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o) 
               | (0x20000U & vlSelf->imm_i_type_o));
    }
    if ((0x40000U & (vlSelf->imm_i_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o 
            = ((0xfffbffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o) 
               | (0x40000U & vlSelf->imm_i_type_o));
    }
    if ((0x80000U & (vlSelf->imm_i_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o 
            = ((0xfff7ffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o) 
               | (0x80000U & vlSelf->imm_i_type_o));
    }
    if ((0x100000U & (vlSelf->imm_i_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o 
            = ((0xffefffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o) 
               | (0x100000U & vlSelf->imm_i_type_o));
    }
    if ((0x200000U & (vlSelf->imm_i_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o 
            = ((0xffdfffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o) 
               | (0x200000U & vlSelf->imm_i_type_o));
    }
    if ((0x400000U & (vlSelf->imm_i_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o 
            = ((0xffbfffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o) 
               | (0x400000U & vlSelf->imm_i_type_o));
    }
    if ((0x800000U & (vlSelf->imm_i_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o 
            = ((0xff7fffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o) 
               | (0x800000U & vlSelf->imm_i_type_o));
    }
    if ((0x1000000U & (vlSelf->imm_i_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o 
            = ((0xfeffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o) 
               | (0x1000000U & vlSelf->imm_i_type_o));
    }
    if ((0x2000000U & (vlSelf->imm_i_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o 
            = ((0xfdffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o) 
               | (0x2000000U & vlSelf->imm_i_type_o));
    }
    if ((0x4000000U & (vlSelf->imm_i_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o 
            = ((0xfbffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o) 
               | (0x4000000U & vlSelf->imm_i_type_o));
    }
    if ((0x8000000U & (vlSelf->imm_i_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o 
            = ((0xf7ffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o) 
               | (0x8000000U & vlSelf->imm_i_type_o));
    }
    if ((0x10000000U & (vlSelf->imm_i_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o 
            = ((0xefffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o) 
               | (0x10000000U & vlSelf->imm_i_type_o));
    }
    if ((0x20000000U & (vlSelf->imm_i_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o 
            = ((0xdfffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o) 
               | (0x20000000U & vlSelf->imm_i_type_o));
    }
    if ((0x40000000U & (vlSelf->imm_i_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o 
            = ((0xbfffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o) 
               | (0x40000000U & vlSelf->imm_i_type_o));
    }
    if (((vlSelf->imm_i_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o 
            = ((0x7fffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_i_type_o) 
               | (0x80000000U & vlSelf->imm_i_type_o));
    }
    if ((1U & (vlSelf->imm_b_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o))) {
        vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o 
            = ((0xfffffffeU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o) 
               | (1U & vlSelf->imm_b_type_o));
    }
    if ((2U & (vlSelf->imm_b_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o))) {
        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o 
            = ((0xfffffffdU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o) 
               | (2U & vlSelf->imm_b_type_o));
    }
    if ((4U & (vlSelf->imm_b_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o))) {
        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o 
            = ((0xfffffffbU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o) 
               | (4U & vlSelf->imm_b_type_o));
    }
    if ((8U & (vlSelf->imm_b_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o))) {
        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o 
            = ((0xfffffff7U & vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o) 
               | (8U & vlSelf->imm_b_type_o));
    }
    if ((0x10U & (vlSelf->imm_b_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o))) {
        vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o 
            = ((0xffffffefU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o) 
               | (0x10U & vlSelf->imm_b_type_o));
    }
    if ((0x20U & (vlSelf->imm_b_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o))) {
        vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o 
            = ((0xffffffdfU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o) 
               | (0x20U & vlSelf->imm_b_type_o));
    }
    if ((0x40U & (vlSelf->imm_b_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o))) {
        vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o 
            = ((0xffffffbfU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o) 
               | (0x40U & vlSelf->imm_b_type_o));
    }
    if ((0x80U & (vlSelf->imm_b_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o))) {
        vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o 
            = ((0xffffff7fU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o) 
               | (0x80U & vlSelf->imm_b_type_o));
    }
    if ((0x100U & (vlSelf->imm_b_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o 
            = ((0xfffffeffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o) 
               | (0x100U & vlSelf->imm_b_type_o));
    }
    if ((0x200U & (vlSelf->imm_b_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o 
            = ((0xfffffdffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o) 
               | (0x200U & vlSelf->imm_b_type_o));
    }
    if ((0x400U & (vlSelf->imm_b_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o 
            = ((0xfffffbffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o) 
               | (0x400U & vlSelf->imm_b_type_o));
    }
    if ((0x800U & (vlSelf->imm_b_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o 
            = ((0xfffff7ffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o) 
               | (0x800U & vlSelf->imm_b_type_o));
    }
    if ((0x1000U & (vlSelf->imm_b_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o))) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o 
            = ((0xffffefffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o) 
               | (0x1000U & vlSelf->imm_b_type_o));
    }
    if ((0x2000U & (vlSelf->imm_b_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o 
            = ((0xffffdfffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o) 
               | (0x2000U & vlSelf->imm_b_type_o));
    }
    if ((0x4000U & (vlSelf->imm_b_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o 
            = ((0xffffbfffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o) 
               | (0x4000U & vlSelf->imm_b_type_o));
    }
    if ((0x8000U & (vlSelf->imm_b_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o 
            = ((0xffff7fffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o) 
               | (0x8000U & vlSelf->imm_b_type_o));
    }
    if ((0x10000U & (vlSelf->imm_b_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o 
            = ((0xfffeffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o) 
               | (0x10000U & vlSelf->imm_b_type_o));
    }
    if ((0x20000U & (vlSelf->imm_b_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o))) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o 
            = ((0xfffdffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o) 
               | (0x20000U & vlSelf->imm_b_type_o));
    }
    if ((0x40000U & (vlSelf->imm_b_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o))) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o 
            = ((0xfffbffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o) 
               | (0x40000U & vlSelf->imm_b_type_o));
    }
    if ((0x80000U & (vlSelf->imm_b_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o))) {
        vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o 
            = ((0xfff7ffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o) 
               | (0x80000U & vlSelf->imm_b_type_o));
    }
    if ((0x100000U & (vlSelf->imm_b_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o))) {
        vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o 
            = ((0xffefffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o) 
               | (0x100000U & vlSelf->imm_b_type_o));
    }
    if ((0x200000U & (vlSelf->imm_b_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o))) {
        vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o 
            = ((0xffdfffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o) 
               | (0x200000U & vlSelf->imm_b_type_o));
    }
    if ((0x400000U & (vlSelf->imm_b_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o))) {
        vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o 
            = ((0xffbfffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o) 
               | (0x400000U & vlSelf->imm_b_type_o));
    }
    if ((0x800000U & (vlSelf->imm_b_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o))) {
        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o 
            = ((0xff7fffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o) 
               | (0x800000U & vlSelf->imm_b_type_o));
    }
    if ((0x1000000U & (vlSelf->imm_b_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o))) {
        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o 
            = ((0xfeffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o) 
               | (0x1000000U & vlSelf->imm_b_type_o));
    }
    if ((0x2000000U & (vlSelf->imm_b_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o))) {
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o 
            = ((0xfdffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o) 
               | (0x2000000U & vlSelf->imm_b_type_o));
    }
    if ((0x4000000U & (vlSelf->imm_b_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o))) {
        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o 
            = ((0xfbffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o) 
               | (0x4000000U & vlSelf->imm_b_type_o));
    }
    if ((0x8000000U & (vlSelf->imm_b_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o))) {
        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o 
            = ((0xf7ffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o) 
               | (0x8000000U & vlSelf->imm_b_type_o));
    }
    if ((0x10000000U & (vlSelf->imm_b_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o))) {
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o 
            = ((0xefffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o) 
               | (0x10000000U & vlSelf->imm_b_type_o));
    }
    if ((0x20000000U & (vlSelf->imm_b_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o))) {
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o 
            = ((0xdfffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o) 
               | (0x20000000U & vlSelf->imm_b_type_o));
    }
    if ((0x40000000U & (vlSelf->imm_b_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o))) {
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o 
            = ((0xbfffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o) 
               | (0x40000000U & vlSelf->imm_b_type_o));
    }
    if (((vlSelf->imm_b_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o 
            = ((0x7fffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_b_type_o) 
               | (0x80000000U & vlSelf->imm_b_type_o));
    }
    if ((1U & (vlSelf->imm_u_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o))) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o 
            = ((0xfffffffeU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o) 
               | (1U & vlSelf->imm_u_type_o));
    }
    if ((2U & (vlSelf->imm_u_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o))) {
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o 
            = ((0xfffffffdU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o) 
               | (2U & vlSelf->imm_u_type_o));
    }
    if ((4U & (vlSelf->imm_u_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o))) {
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o 
            = ((0xfffffffbU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o) 
               | (4U & vlSelf->imm_u_type_o));
    }
    if ((8U & (vlSelf->imm_u_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o))) {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o 
            = ((0xfffffff7U & vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o) 
               | (8U & vlSelf->imm_u_type_o));
    }
    if ((0x10U & (vlSelf->imm_u_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o))) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o 
            = ((0xffffffefU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o) 
               | (0x10U & vlSelf->imm_u_type_o));
    }
    if ((0x20U & (vlSelf->imm_u_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o 
            = ((0xffffffdfU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o) 
               | (0x20U & vlSelf->imm_u_type_o));
    }
    if ((0x40U & (vlSelf->imm_u_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o 
            = ((0xffffffbfU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o) 
               | (0x40U & vlSelf->imm_u_type_o));
    }
    if ((0x80U & (vlSelf->imm_u_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o 
            = ((0xffffff7fU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o) 
               | (0x80U & vlSelf->imm_u_type_o));
    }
    if ((0x100U & (vlSelf->imm_u_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o 
            = ((0xfffffeffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o) 
               | (0x100U & vlSelf->imm_u_type_o));
    }
    if ((0x200U & (vlSelf->imm_u_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o 
            = ((0xfffffdffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o) 
               | (0x200U & vlSelf->imm_u_type_o));
    }
    if ((0x400U & (vlSelf->imm_u_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o 
            = ((0xfffffbffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o) 
               | (0x400U & vlSelf->imm_u_type_o));
    }
    if ((0x800U & (vlSelf->imm_u_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o 
            = ((0xfffff7ffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o) 
               | (0x800U & vlSelf->imm_u_type_o));
    }
    if ((0x1000U & (vlSelf->imm_u_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o 
            = ((0xffffefffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o) 
               | (0x1000U & vlSelf->imm_u_type_o));
    }
    if ((0x2000U & (vlSelf->imm_u_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o 
            = ((0xffffdfffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o) 
               | (0x2000U & vlSelf->imm_u_type_o));
    }
    if ((0x4000U & (vlSelf->imm_u_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o 
            = ((0xffffbfffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o) 
               | (0x4000U & vlSelf->imm_u_type_o));
    }
    if ((0x8000U & (vlSelf->imm_u_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o 
            = ((0xffff7fffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o) 
               | (0x8000U & vlSelf->imm_u_type_o));
    }
    if ((0x10000U & (vlSelf->imm_u_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o 
            = ((0xfffeffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o) 
               | (0x10000U & vlSelf->imm_u_type_o));
    }
    if ((0x20000U & (vlSelf->imm_u_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o))) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o 
            = ((0xfffdffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o) 
               | (0x20000U & vlSelf->imm_u_type_o));
    }
    if ((0x40000U & (vlSelf->imm_u_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o))) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o 
            = ((0xfffbffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o) 
               | (0x40000U & vlSelf->imm_u_type_o));
    }
    if ((0x80000U & (vlSelf->imm_u_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o 
            = ((0xfff7ffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o) 
               | (0x80000U & vlSelf->imm_u_type_o));
    }
    if ((0x100000U & (vlSelf->imm_u_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o 
            = ((0xffefffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o) 
               | (0x100000U & vlSelf->imm_u_type_o));
    }
    if ((0x200000U & (vlSelf->imm_u_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o 
            = ((0xffdfffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o) 
               | (0x200000U & vlSelf->imm_u_type_o));
    }
    if ((0x400000U & (vlSelf->imm_u_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o 
            = ((0xffbfffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o) 
               | (0x400000U & vlSelf->imm_u_type_o));
    }
    if ((0x800000U & (vlSelf->imm_u_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o 
            = ((0xff7fffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o) 
               | (0x800000U & vlSelf->imm_u_type_o));
    }
    if ((0x1000000U & (vlSelf->imm_u_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o 
            = ((0xfeffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o) 
               | (0x1000000U & vlSelf->imm_u_type_o));
    }
    if ((0x2000000U & (vlSelf->imm_u_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o 
            = ((0xfdffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o) 
               | (0x2000000U & vlSelf->imm_u_type_o));
    }
    if ((0x4000000U & (vlSelf->imm_u_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o 
            = ((0xfbffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o) 
               | (0x4000000U & vlSelf->imm_u_type_o));
    }
    if ((0x8000000U & (vlSelf->imm_u_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o 
            = ((0xf7ffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o) 
               | (0x8000000U & vlSelf->imm_u_type_o));
    }
    if ((0x10000000U & (vlSelf->imm_u_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o))) {
        vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o 
            = ((0xefffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o) 
               | (0x10000000U & vlSelf->imm_u_type_o));
    }
    if ((0x20000000U & (vlSelf->imm_u_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o))) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o 
            = ((0xdfffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o) 
               | (0x20000000U & vlSelf->imm_u_type_o));
    }
    if ((0x40000000U & (vlSelf->imm_u_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o))) {
        vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o 
            = ((0xbfffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o) 
               | (0x40000000U & vlSelf->imm_u_type_o));
    }
    if (((vlSelf->imm_u_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o 
            = ((0x7fffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_u_type_o) 
               | (0x80000000U & vlSelf->imm_u_type_o));
    }
    if ((1U & (vlSelf->imm_j_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o))) {
        vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o 
            = ((0xfffffffeU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o) 
               | (1U & vlSelf->imm_j_type_o));
    }
    if ((2U & (vlSelf->imm_j_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o))) {
        vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o 
            = ((0xfffffffdU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o) 
               | (2U & vlSelf->imm_j_type_o));
    }
    if ((4U & (vlSelf->imm_j_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o))) {
        vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o 
            = ((0xfffffffbU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o) 
               | (4U & vlSelf->imm_j_type_o));
    }
    if ((8U & (vlSelf->imm_j_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o))) {
        vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o 
            = ((0xfffffff7U & vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o) 
               | (8U & vlSelf->imm_j_type_o));
    }
    if ((0x10U & (vlSelf->imm_j_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o 
            = ((0xffffffefU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o) 
               | (0x10U & vlSelf->imm_j_type_o));
    }
    if ((0x20U & (vlSelf->imm_j_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o 
            = ((0xffffffdfU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o) 
               | (0x20U & vlSelf->imm_j_type_o));
    }
    if ((0x40U & (vlSelf->imm_j_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o 
            = ((0xffffffbfU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o) 
               | (0x40U & vlSelf->imm_j_type_o));
    }
    if ((0x80U & (vlSelf->imm_j_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o 
            = ((0xffffff7fU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o) 
               | (0x80U & vlSelf->imm_j_type_o));
    }
    if ((0x100U & (vlSelf->imm_j_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o 
            = ((0xfffffeffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o) 
               | (0x100U & vlSelf->imm_j_type_o));
    }
    if ((0x200U & (vlSelf->imm_j_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o 
            = ((0xfffffdffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o) 
               | (0x200U & vlSelf->imm_j_type_o));
    }
    if ((0x400U & (vlSelf->imm_j_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o 
            = ((0xfffffbffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o) 
               | (0x400U & vlSelf->imm_j_type_o));
    }
    if ((0x800U & (vlSelf->imm_j_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o 
            = ((0xfffff7ffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o) 
               | (0x800U & vlSelf->imm_j_type_o));
    }
    if ((0x1000U & (vlSelf->imm_j_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o 
            = ((0xffffefffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o) 
               | (0x1000U & vlSelf->imm_j_type_o));
    }
    if ((0x2000U & (vlSelf->imm_j_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o))) {
        vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o 
            = ((0xffffdfffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o) 
               | (0x2000U & vlSelf->imm_j_type_o));
    }
    if ((0x4000U & (vlSelf->imm_j_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o))) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o 
            = ((0xffffbfffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o) 
               | (0x4000U & vlSelf->imm_j_type_o));
    }
    if ((0x8000U & (vlSelf->imm_j_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o 
            = ((0xffff7fffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o) 
               | (0x8000U & vlSelf->imm_j_type_o));
    }
    if ((0x10000U & (vlSelf->imm_j_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o))) {
        vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o 
            = ((0xfffeffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o) 
               | (0x10000U & vlSelf->imm_j_type_o));
    }
    if ((0x20000U & (vlSelf->imm_j_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o))) {
        vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o 
            = ((0xfffdffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o) 
               | (0x20000U & vlSelf->imm_j_type_o));
    }
    if ((0x40000U & (vlSelf->imm_j_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o))) {
        vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o 
            = ((0xfffbffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o) 
               | (0x40000U & vlSelf->imm_j_type_o));
    }
    if ((0x80000U & (vlSelf->imm_j_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o))) {
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o 
            = ((0xfff7ffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o) 
               | (0x80000U & vlSelf->imm_j_type_o));
    }
    if ((0x100000U & (vlSelf->imm_j_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o))) {
        vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o 
            = ((0xffefffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o) 
               | (0x100000U & vlSelf->imm_j_type_o));
    }
    if ((0x200000U & (vlSelf->imm_j_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o))) {
        vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o 
            = ((0xffdfffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o) 
               | (0x200000U & vlSelf->imm_j_type_o));
    }
    if ((0x400000U & (vlSelf->imm_j_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o))) {
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o 
            = ((0xffbfffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o) 
               | (0x400000U & vlSelf->imm_j_type_o));
    }
    if ((0x800000U & (vlSelf->imm_j_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o))) {
        vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o 
            = ((0xff7fffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o) 
               | (0x800000U & vlSelf->imm_j_type_o));
    }
    if ((0x1000000U & (vlSelf->imm_j_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o 
            = ((0xfeffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o) 
               | (0x1000000U & vlSelf->imm_j_type_o));
    }
    if ((0x2000000U & (vlSelf->imm_j_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o))) {
        vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o 
            = ((0xfdffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o) 
               | (0x2000000U & vlSelf->imm_j_type_o));
    }
    if ((0x4000000U & (vlSelf->imm_j_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o))) {
        vlSymsp->__Vcoverage[240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o 
            = ((0xfbffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o) 
               | (0x4000000U & vlSelf->imm_j_type_o));
    }
    if ((0x8000000U & (vlSelf->imm_j_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o))) {
        vlSymsp->__Vcoverage[241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o 
            = ((0xf7ffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o) 
               | (0x8000000U & vlSelf->imm_j_type_o));
    }
    if ((0x10000000U & (vlSelf->imm_j_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o))) {
        vlSymsp->__Vcoverage[242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o 
            = ((0xefffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o) 
               | (0x10000000U & vlSelf->imm_j_type_o));
    }
    if ((0x20000000U & (vlSelf->imm_j_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o))) {
        vlSymsp->__Vcoverage[243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o 
            = ((0xdfffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o) 
               | (0x20000000U & vlSelf->imm_j_type_o));
    }
    if ((0x40000000U & (vlSelf->imm_j_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o))) {
        vlSymsp->__Vcoverage[244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o 
            = ((0xbfffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o) 
               | (0x40000000U & vlSelf->imm_j_type_o));
    }
    if (((vlSelf->imm_j_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o 
            = ((0x7fffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_j_type_o) 
               | (0x80000000U & vlSelf->imm_j_type_o));
    }
    if ((1U & (vlSelf->zimm_rs1_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o))) {
        vlSymsp->__Vcoverage[246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o 
            = ((0xfffffffeU & vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o) 
               | (1U & vlSelf->zimm_rs1_type_o));
    }
    if ((2U & (vlSelf->zimm_rs1_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o))) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o 
            = ((0xfffffffdU & vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o) 
               | (2U & vlSelf->zimm_rs1_type_o));
    }
    if ((4U & (vlSelf->zimm_rs1_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o 
            = ((0xfffffffbU & vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o) 
               | (4U & vlSelf->zimm_rs1_type_o));
    }
    if ((8U & (vlSelf->zimm_rs1_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o))) {
        vlSymsp->__Vcoverage[249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o 
            = ((0xfffffff7U & vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o) 
               | (8U & vlSelf->zimm_rs1_type_o));
    }
    if ((0x10U & (vlSelf->zimm_rs1_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o))) {
        vlSymsp->__Vcoverage[250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o 
            = ((0xffffffefU & vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o) 
               | (0x10U & vlSelf->zimm_rs1_type_o));
    }
    if ((0x20U & (vlSelf->zimm_rs1_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o))) {
        vlSymsp->__Vcoverage[251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o 
            = ((0xffffffdfU & vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o) 
               | (0x20U & vlSelf->zimm_rs1_type_o));
    }
    if ((0x40U & (vlSelf->zimm_rs1_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o))) {
        vlSymsp->__Vcoverage[252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o 
            = ((0xffffffbfU & vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o) 
               | (0x40U & vlSelf->zimm_rs1_type_o));
    }
    if ((0x80U & (vlSelf->zimm_rs1_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o))) {
        vlSymsp->__Vcoverage[253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o 
            = ((0xffffff7fU & vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o) 
               | (0x80U & vlSelf->zimm_rs1_type_o));
    }
    if ((0x100U & (vlSelf->zimm_rs1_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o 
            = ((0xfffffeffU & vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o) 
               | (0x100U & vlSelf->zimm_rs1_type_o));
    }
    if ((0x200U & (vlSelf->zimm_rs1_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o))) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o 
            = ((0xfffffdffU & vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o) 
               | (0x200U & vlSelf->zimm_rs1_type_o));
    }
    if ((0x400U & (vlSelf->zimm_rs1_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o))) {
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o 
            = ((0xfffffbffU & vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o) 
               | (0x400U & vlSelf->zimm_rs1_type_o));
    }
    if ((0x800U & (vlSelf->zimm_rs1_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o 
            = ((0xfffff7ffU & vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o) 
               | (0x800U & vlSelf->zimm_rs1_type_o));
    }
    if ((0x1000U & (vlSelf->zimm_rs1_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o))) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o 
            = ((0xffffefffU & vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o) 
               | (0x1000U & vlSelf->zimm_rs1_type_o));
    }
    if ((0x2000U & (vlSelf->zimm_rs1_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o))) {
        vlSymsp->__Vcoverage[259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o 
            = ((0xffffdfffU & vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o) 
               | (0x2000U & vlSelf->zimm_rs1_type_o));
    }
    if ((0x4000U & (vlSelf->zimm_rs1_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o))) {
        vlSymsp->__Vcoverage[260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o 
            = ((0xffffbfffU & vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o) 
               | (0x4000U & vlSelf->zimm_rs1_type_o));
    }
    if ((0x8000U & (vlSelf->zimm_rs1_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o))) {
        vlSymsp->__Vcoverage[261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o 
            = ((0xffff7fffU & vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o) 
               | (0x8000U & vlSelf->zimm_rs1_type_o));
    }
    if ((0x10000U & (vlSelf->zimm_rs1_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o 
            = ((0xfffeffffU & vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o) 
               | (0x10000U & vlSelf->zimm_rs1_type_o));
    }
    if ((0x20000U & (vlSelf->zimm_rs1_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o 
            = ((0xfffdffffU & vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o) 
               | (0x20000U & vlSelf->zimm_rs1_type_o));
    }
    if ((0x40000U & (vlSelf->zimm_rs1_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o))) {
        vlSymsp->__Vcoverage[264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o 
            = ((0xfffbffffU & vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o) 
               | (0x40000U & vlSelf->zimm_rs1_type_o));
    }
    if ((0x80000U & (vlSelf->zimm_rs1_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o))) {
        vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o 
            = ((0xfff7ffffU & vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o) 
               | (0x80000U & vlSelf->zimm_rs1_type_o));
    }
    if ((0x100000U & (vlSelf->zimm_rs1_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o))) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o 
            = ((0xffefffffU & vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o) 
               | (0x100000U & vlSelf->zimm_rs1_type_o));
    }
    if ((0x200000U & (vlSelf->zimm_rs1_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o 
            = ((0xffdfffffU & vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o) 
               | (0x200000U & vlSelf->zimm_rs1_type_o));
    }
    if ((0x400000U & (vlSelf->zimm_rs1_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o))) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o 
            = ((0xffbfffffU & vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o) 
               | (0x400000U & vlSelf->zimm_rs1_type_o));
    }
    if ((0x800000U & (vlSelf->zimm_rs1_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o 
            = ((0xff7fffffU & vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o) 
               | (0x800000U & vlSelf->zimm_rs1_type_o));
    }
    if ((0x1000000U & (vlSelf->zimm_rs1_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o))) {
        vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o 
            = ((0xfeffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o) 
               | (0x1000000U & vlSelf->zimm_rs1_type_o));
    }
    if ((0x2000000U & (vlSelf->zimm_rs1_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o))) {
        vlSymsp->__Vcoverage[271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o 
            = ((0xfdffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o) 
               | (0x2000000U & vlSelf->zimm_rs1_type_o));
    }
    if ((0x4000000U & (vlSelf->zimm_rs1_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o))) {
        vlSymsp->__Vcoverage[272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o 
            = ((0xfbffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o) 
               | (0x4000000U & vlSelf->zimm_rs1_type_o));
    }
    if ((0x8000000U & (vlSelf->zimm_rs1_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o))) {
        vlSymsp->__Vcoverage[273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o 
            = ((0xf7ffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o) 
               | (0x8000000U & vlSelf->zimm_rs1_type_o));
    }
    if ((0x10000000U & (vlSelf->zimm_rs1_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o))) {
        vlSymsp->__Vcoverage[274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o 
            = ((0xefffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o) 
               | (0x10000000U & vlSelf->zimm_rs1_type_o));
    }
    if ((0x20000000U & (vlSelf->zimm_rs1_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o))) {
        vlSymsp->__Vcoverage[275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o 
            = ((0xdfffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o) 
               | (0x20000000U & vlSelf->zimm_rs1_type_o));
    }
    if ((0x40000000U & (vlSelf->zimm_rs1_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o))) {
        vlSymsp->__Vcoverage[276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o 
            = ((0xbfffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o) 
               | (0x40000000U & vlSelf->zimm_rs1_type_o));
    }
    if (((vlSelf->zimm_rs1_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o 
            = ((0x7fffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__zimm_rs1_type_o) 
               | (0x80000000U & vlSelf->zimm_rs1_type_o));
    }
    if ((1U & ((IData)(vlSelf->rf_waddr_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__rf_waddr_o)))) {
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__rf_waddr_o 
            = ((0x1eU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__rf_waddr_o)) 
               | (1U & (IData)(vlSelf->rf_waddr_o)));
    }
    if ((2U & ((IData)(vlSelf->rf_waddr_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__rf_waddr_o)))) {
        vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__rf_waddr_o 
            = ((0x1dU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__rf_waddr_o)) 
               | (2U & (IData)(vlSelf->rf_waddr_o)));
    }
    if ((4U & ((IData)(vlSelf->rf_waddr_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__rf_waddr_o)))) {
        vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__rf_waddr_o 
            = ((0x1bU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__rf_waddr_o)) 
               | (4U & (IData)(vlSelf->rf_waddr_o)));
    }
    if ((8U & ((IData)(vlSelf->rf_waddr_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__rf_waddr_o)))) {
        vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__rf_waddr_o 
            = ((0x17U & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__rf_waddr_o)) 
               | (8U & (IData)(vlSelf->rf_waddr_o)));
    }
    if ((0x10U & ((IData)(vlSelf->rf_waddr_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__rf_waddr_o)))) {
        vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__rf_waddr_o 
            = ((0xfU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__rf_waddr_o)) 
               | (0x10U & (IData)(vlSelf->rf_waddr_o)));
    }
    vlSelf->jump_in_dec_o = 0U;
    vlSelf->jump_set_o = 0U;
    vlSelf->branch_in_dec_o = 0U;
    vlSelf->icache_inval_o = 0U;
    vlSelf->multdiv_operator_o = 0U;
    vlSelf->multdiv_signed_mode_o = 0U;
    vlSelf->rf_wdata_sel_o = 0U;
    vlSelf->dr32e_dec__DOT__rf_we = 0U;
    vlSelf->rf_ren_a_o = 0U;
    vlSelf->rf_ren_b_o = 0U;
    vlSelf->csr_access_o = 0U;
    vlSelf->dr32e_dec__DOT__csr_illegal = 0U;
    vlSelf->dr32e_dec__DOT__csr_op = 0U;
    vlSelf->data_we_o = 0U;
    vlSelf->data_type_o = 0U;
    vlSelf->data_sign_extension_o = 0U;
    vlSelf->data_req_o = 0U;
    vlSelf->dr32e_dec__DOT__illegal_insn = 0U;
    vlSelf->ebrk_insn_o = 0U;
    vlSelf->mret_insn_o = 0U;
    vlSelf->dret_insn_o = 0U;
    vlSelf->ecall_insn_o = 0U;
    vlSelf->wfi_insn_o = 0U;
    vlSelf->dr32e_dec__DOT__opcode = (0x7fU & vlSelf->instr_rdata_i);
    if ((0x40U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                if ((8U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                    vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
                } else if ((4U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                    vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
                } else if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                        if ((0U == (7U & (vlSelf->instr_rdata_i 
                                          >> 0xcU)))) {
                            if ((0U == (vlSelf->instr_rdata_i 
                                        >> 0x14U))) {
                                vlSelf->ecall_insn_o = 1U;
                            } else if ((1U == (vlSelf->instr_rdata_i 
                                               >> 0x14U))) {
                                vlSelf->ebrk_insn_o = 1U;
                            } else if ((0x302U == (vlSelf->instr_rdata_i 
                                                   >> 0x14U))) {
                                vlSelf->mret_insn_o = 1U;
                            } else if ((0x7b2U == (vlSelf->instr_rdata_i 
                                                   >> 0x14U))) {
                                vlSelf->dret_insn_o = 1U;
                            } else if ((0x105U == (vlSelf->instr_rdata_i 
                                                   >> 0x14U))) {
                                vlSelf->wfi_insn_o = 1U;
                            } else {
                                vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
                            }
                            if ((1U & (~ VL_ONEHOT0_I(
                                                      (((0x105U 
                                                         == 
                                                         (vlSelf->instr_rdata_i 
                                                          >> 0x14U)) 
                                                        << 4U) 
                                                       | (((0x7b2U 
                                                            == 
                                                            (vlSelf->instr_rdata_i 
                                                             >> 0x14U)) 
                                                           << 3U) 
                                                          | (((0x302U 
                                                               == 
                                                               (vlSelf->instr_rdata_i 
                                                                >> 0x14U)) 
                                                              << 2U) 
                                                             | (((1U 
                                                                  == 
                                                                  (vlSelf->instr_rdata_i 
                                                                   >> 0x14U)) 
                                                                 << 1U) 
                                                                | (0U 
                                                                   == 
                                                                   (vlSelf->instr_rdata_i 
                                                                    >> 0x14U)))))))))) {
                                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                                    VL_WRITEF("[%0t] %%Error: dr32e_dec.v:595: Assertion failed in %Ndr32e_dec: synthesis parallel_case, but multiple matches found\n",
                                              64,VL_TIME_UNITED_Q(1),
                                              -12,vlSymsp->name());
                                    VL_STOP_MT("verilog/dr32e_dec.v", 595, "");
                                }
                            }
                            if ((IData)(((0U != (0xf8000U 
                                                 & vlSelf->instr_rdata_i)) 
                                         | (0U != (IData)(vlSelf->rf_waddr_o))))) {
                                vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
                            }
                        } else {
                            if ((1U & (~ VL_ONEHOT0_I(
                                                      (((3U 
                                                         == 
                                                         (3U 
                                                          & (vlSelf->instr_rdata_i 
                                                             >> 0xcU))) 
                                                        << 2U) 
                                                       | (((2U 
                                                            == 
                                                            (3U 
                                                             & (vlSelf->instr_rdata_i 
                                                                >> 0xcU))) 
                                                           << 1U) 
                                                          | (1U 
                                                             == 
                                                             (3U 
                                                              & (vlSelf->instr_rdata_i 
                                                                 >> 0xcU))))))))) {
                                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                                    VL_WRITEF("[%0t] %%Error: dr32e_dec.v:631: Assertion failed in %Ndr32e_dec: synthesis parallel_case, but multiple matches found\n",
                                              64,VL_TIME_UNITED_Q(1),
                                              -12,vlSymsp->name());
                                    VL_STOP_MT("verilog/dr32e_dec.v", 631, "");
                                }
                            }
                            vlSelf->csr_access_o = 1U;
                            vlSelf->rf_wdata_sel_o = 1U;
                            vlSelf->dr32e_dec__DOT__rf_we = 1U;
                            if ((1U & (~ (vlSelf->instr_rdata_i 
                                          >> 0xeU)))) {
                                vlSelf->rf_ren_a_o = 1U;
                            }
                            if ((1U == (3U & (vlSelf->instr_rdata_i 
                                              >> 0xcU)))) {
                                vlSelf->dr32e_dec__DOT__csr_op = 1U;
                            } else if ((2U == (3U & 
                                               (vlSelf->instr_rdata_i 
                                                >> 0xcU)))) {
                                vlSelf->dr32e_dec__DOT__csr_op = 2U;
                            } else if ((3U == (3U & 
                                               (vlSelf->instr_rdata_i 
                                                >> 0xcU)))) {
                                vlSelf->dr32e_dec__DOT__csr_op = 3U;
                            } else {
                                vlSelf->dr32e_dec__DOT__csr_illegal = 1U;
                            }
                            vlSelf->dr32e_dec__DOT__illegal_insn 
                                = vlSelf->dr32e_dec__DOT__csr_illegal;
                        }
                    } else {
                        vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
                }
            } else if ((8U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                if ((4U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                    if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                        if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                            vlSelf->jump_in_dec_o = 1U;
                            if (vlSelf->instr_first_cycle_i) {
                                vlSelf->dr32e_dec__DOT__rf_we = 0U;
                                vlSelf->jump_set_o = 1U;
                            } else {
                                vlSelf->dr32e_dec__DOT__rf_we = 1U;
                            }
                        } else {
                            vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
                        }
                    } else {
                        vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
                }
            } else if ((4U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                        vlSelf->jump_in_dec_o = 1U;
                        if (vlSelf->instr_first_cycle_i) {
                            vlSelf->dr32e_dec__DOT__rf_we = 0U;
                            vlSelf->jump_set_o = 1U;
                        } else {
                            vlSelf->dr32e_dec__DOT__rf_we = 1U;
                        }
                        if ((0U != (7U & (vlSelf->instr_rdata_i 
                                          >> 0xcU)))) {
                            vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
                        }
                        vlSelf->rf_ren_a_o = 1U;
                    } else {
                        vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
                }
            } else if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                    vlSelf->branch_in_dec_o = 1U;
                    vlSelf->dr32e_dec__DOT__illegal_insn 
                        = (IData)((0x2000U == (0x6000U 
                                               & vlSelf->instr_rdata_i)));
                    vlSelf->rf_ren_a_o = 1U;
                    vlSelf->rf_ren_b_o = 1U;
                } else {
                    vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
        }
    } else if ((0x20U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
        if ((0x10U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
            if ((8U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
            } else if ((4U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                        vlSelf->dr32e_dec__DOT__rf_we = 1U;
                    } else {
                        vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
                }
            } else if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                    vlSelf->rf_ren_a_o = 1U;
                    vlSelf->rf_ren_b_o = 1U;
                    vlSelf->dr32e_dec__DOT__rf_we = 1U;
                    if ((5U == ((4U & (vlSelf->instr_rdata_i 
                                       >> 0x18U)) | 
                                (3U & (vlSelf->instr_rdata_i 
                                       >> 0xcU))))) {
                        vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
                    } else if ((vlSelf->instr_rdata_i 
                                >> 0x1fU)) {
                        vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
                    } else if ((0x40000000U & vlSelf->instr_rdata_i)) {
                        vlSelf->dr32e_dec__DOT__illegal_insn 
                            = (1U & ((0U != (0x3e000000U 
                                             & vlSelf->instr_rdata_i)) 
                                     | ((0x4000U & vlSelf->instr_rdata_i)
                                         ? (IData)(
                                                   (0x1000U 
                                                    != 
                                                    (0x3000U 
                                                     & vlSelf->instr_rdata_i)))
                                         : (IData)(
                                                   (0U 
                                                    != 
                                                    (0x3000U 
                                                     & vlSelf->instr_rdata_i))))));
                    } else if ((0x20000000U & vlSelf->instr_rdata_i)) {
                        vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
                    } else if ((0x10000000U & vlSelf->instr_rdata_i)) {
                        vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
                    } else if ((0x8000000U & vlSelf->instr_rdata_i)) {
                        vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
                    } else if ((0x4000000U & vlSelf->instr_rdata_i)) {
                        vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
                    } else if ((0x2000000U & vlSelf->instr_rdata_i)) {
                        if ((0x4000U & vlSelf->instr_rdata_i)) {
                            if ((0x2000U & vlSelf->instr_rdata_i)) {
                                if ((0x1000U & vlSelf->instr_rdata_i)) {
                                    vlSelf->multdiv_operator_o = 3U;
                                    vlSelf->multdiv_signed_mode_o = 0U;
                                    vlSelf->dr32e_dec__DOT__illegal_insn = 0U;
                                } else {
                                    vlSelf->multdiv_operator_o = 3U;
                                    vlSelf->multdiv_signed_mode_o = 3U;
                                    vlSelf->dr32e_dec__DOT__illegal_insn = 0U;
                                }
                            } else if ((0x1000U & vlSelf->instr_rdata_i)) {
                                vlSelf->multdiv_operator_o = 2U;
                                vlSelf->multdiv_signed_mode_o = 0U;
                                vlSelf->dr32e_dec__DOT__illegal_insn = 0U;
                            } else {
                                vlSelf->multdiv_operator_o = 2U;
                                vlSelf->multdiv_signed_mode_o = 3U;
                                vlSelf->dr32e_dec__DOT__illegal_insn = 0U;
                            }
                        } else if ((0x2000U & vlSelf->instr_rdata_i)) {
                            if ((0x1000U & vlSelf->instr_rdata_i)) {
                                vlSelf->multdiv_operator_o = 1U;
                                vlSelf->multdiv_signed_mode_o = 0U;
                                vlSelf->dr32e_dec__DOT__illegal_insn = 0U;
                            } else {
                                vlSelf->multdiv_operator_o = 1U;
                                vlSelf->multdiv_signed_mode_o = 1U;
                                vlSelf->dr32e_dec__DOT__illegal_insn = 0U;
                            }
                        } else if ((0x1000U & vlSelf->instr_rdata_i)) {
                            vlSelf->multdiv_operator_o = 1U;
                            vlSelf->multdiv_signed_mode_o = 3U;
                            vlSelf->dr32e_dec__DOT__illegal_insn = 0U;
                        } else {
                            vlSelf->multdiv_operator_o = 0U;
                            vlSelf->multdiv_signed_mode_o = 0U;
                            vlSelf->dr32e_dec__DOT__illegal_insn = 0U;
                        }
                    } else {
                        vlSelf->dr32e_dec__DOT__illegal_insn = 0U;
                    }
                } else {
                    vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
            }
        } else if ((8U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
            vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
        } else if ((4U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
            vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
        } else if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
            if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                if (dr32e_dec__DOT____VdfgExtracted_h075efacb__0) {
                    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                        VL_WRITEF("[%0t] %%Error: dr32e_dec.v:307: Assertion failed in %Ndr32e_dec: synthesis parallel_case, but multiple matches found\n",
                                  64,VL_TIME_UNITED_Q(1),
                                  -12,vlSymsp->name());
                        VL_STOP_MT("verilog/dr32e_dec.v", 307, "");
                    }
                }
                vlSelf->rf_ren_a_o = 1U;
                vlSelf->rf_ren_b_o = 1U;
                vlSelf->data_req_o = 1U;
                vlSelf->data_we_o = 1U;
                if ((0x4000U & vlSelf->instr_rdata_i)) {
                    vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
                }
                if ((0U == (3U & (vlSelf->instr_rdata_i 
                                  >> 0xcU)))) {
                    vlSelf->data_type_o = 2U;
                } else if ((1U == (3U & (vlSelf->instr_rdata_i 
                                         >> 0xcU)))) {
                    vlSelf->data_type_o = 1U;
                } else if ((2U == (3U & (vlSelf->instr_rdata_i 
                                         >> 0xcU)))) {
                    vlSelf->data_type_o = 0U;
                } else {
                    vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
        }
    } else if ((0x10U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
        if ((8U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
            vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
        } else if ((4U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
            if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                    vlSelf->dr32e_dec__DOT__rf_we = 1U;
                } else {
                    vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
            }
        } else if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
            if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                vlSelf->rf_ren_a_o = 1U;
                vlSelf->dr32e_dec__DOT__rf_we = 1U;
                vlSelf->dr32e_dec__DOT__illegal_insn 
                    = (1U & ((0x4000U & vlSelf->instr_rdata_i)
                              ? (IData)(((0x1000U == 
                                          (0x3000U 
                                           & vlSelf->instr_rdata_i)) 
                                         & ((vlSelf->instr_rdata_i 
                                             >> 0x1aU) 
                                            | ((vlSelf->instr_rdata_i 
                                                >> 0x1fU) 
                                               | ((0x40000000U 
                                                   & vlSelf->instr_rdata_i)
                                                   ? (IData)(
                                                             (0U 
                                                              != 
                                                              (0x3e000000U 
                                                               & vlSelf->instr_rdata_i)))
                                                   : (IData)(
                                                             (0U 
                                                              != 
                                                              (0x3e000000U 
                                                               & vlSelf->instr_rdata_i))))))))
                              : (IData)(((0x1000U == 
                                          (0x3000U 
                                           & vlSelf->instr_rdata_i)) 
                                         & (0U != (0xfe000000U 
                                                   & vlSelf->instr_rdata_i))))));
            } else {
                vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
        }
    } else if ((8U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
        if ((4U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
            if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                    if ((1U & (~ VL_ONEHOT0_I((((1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->instr_rdata_i 
                                                     >> 0xcU))) 
                                                << 1U) 
                                               | (0U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->instr_rdata_i 
                                                      >> 0xcU)))))))) {
                        if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                            VL_WRITEF("[%0t] %%Error: dr32e_dec.v:567: Assertion failed in %Ndr32e_dec: synthesis parallel_case, but multiple matches found\n",
                                      64,VL_TIME_UNITED_Q(1),
                                      -12,vlSymsp->name());
                            VL_STOP_MT("verilog/dr32e_dec.v", 567, "");
                        }
                    }
                    if ((0U == (7U & (vlSelf->instr_rdata_i 
                                      >> 0xcU)))) {
                        vlSelf->dr32e_dec__DOT__rf_we = 0U;
                    } else if ((1U == (7U & (vlSelf->instr_rdata_i 
                                             >> 0xcU)))) {
                        vlSelf->jump_in_dec_o = 1U;
                        vlSelf->dr32e_dec__DOT__rf_we = 0U;
                        if (vlSelf->instr_first_cycle_i) {
                            vlSelf->jump_set_o = 1U;
                            vlSelf->icache_inval_o = 1U;
                        }
                    } else {
                        vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
        }
    } else if ((4U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
        vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
    } else if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
        if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
            if (dr32e_dec__DOT____VdfgExtracted_h075efacb__0) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: dr32e_dec.v:324: Assertion failed in %Ndr32e_dec: synthesis parallel_case, but multiple matches found\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("verilog/dr32e_dec.v", 324, "");
                }
            }
            vlSelf->rf_ren_a_o = 1U;
            vlSelf->data_req_o = 1U;
            vlSelf->data_type_o = 0U;
            vlSelf->data_sign_extension_o = (1U & (~ 
                                                   (vlSelf->instr_rdata_i 
                                                    >> 0xeU)));
            if ((0U == (3U & (vlSelf->instr_rdata_i 
                              >> 0xcU)))) {
                vlSelf->data_type_o = 2U;
            } else if ((1U == (3U & (vlSelf->instr_rdata_i 
                                     >> 0xcU)))) {
                vlSelf->data_type_o = 1U;
            } else if ((2U == (3U & (vlSelf->instr_rdata_i 
                                     >> 0xcU)))) {
                vlSelf->data_type_o = 0U;
                if ((0x4000U & vlSelf->instr_rdata_i)) {
                    vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
        }
    } else {
        vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
    }
}

VL_ATTR_COLD void Vdr32e_dec___024root___configure_coverage(Vdr32e_dec___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_dec___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "verilog/dr32e_dec.v", 23, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "clk_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "verilog/dr32e_dec.v", 24, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "rst_ni", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "verilog/dr32e_dec.v", 27, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "illegal_insn_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "verilog/dr32e_dec.v", 28, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "ebrk_insn_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "verilog/dr32e_dec.v", 29, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "mret_insn_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "verilog/dr32e_dec.v", 31, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "dret_insn_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "verilog/dr32e_dec.v", 32, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "ecall_insn_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "verilog/dr32e_dec.v", 33, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "wfi_insn_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "verilog/dr32e_dec.v", 34, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "jump_set_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "verilog/dr32e_dec.v", 35, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "branch_taken_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "verilog/dr32e_dec.v", 36, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "icache_inval_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "verilog/dr32e_dec.v", 39, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_first_cycle_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "verilog/dr32e_dec.v", 40, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "verilog/dr32e_dec.v", 40, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "verilog/dr32e_dec.v", 40, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "verilog/dr32e_dec.v", 40, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "verilog/dr32e_dec.v", 40, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "verilog/dr32e_dec.v", 40, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "verilog/dr32e_dec.v", 40, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "verilog/dr32e_dec.v", 40, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "verilog/dr32e_dec.v", 40, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "verilog/dr32e_dec.v", 40, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "verilog/dr32e_dec.v", 40, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "verilog/dr32e_dec.v", 40, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "verilog/dr32e_dec.v", 40, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "verilog/dr32e_dec.v", 40, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "verilog/dr32e_dec.v", 40, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "verilog/dr32e_dec.v", 40, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "verilog/dr32e_dec.v", 40, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "verilog/dr32e_dec.v", 40, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "verilog/dr32e_dec.v", 40, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "verilog/dr32e_dec.v", 40, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "verilog/dr32e_dec.v", 40, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "verilog/dr32e_dec.v", 40, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "verilog/dr32e_dec.v", 40, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_i[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "verilog/dr32e_dec.v", 40, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_i[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "verilog/dr32e_dec.v", 40, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_i[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "verilog/dr32e_dec.v", 40, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_i[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "verilog/dr32e_dec.v", 40, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_i[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "verilog/dr32e_dec.v", 40, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_i[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "verilog/dr32e_dec.v", 40, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_i[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "verilog/dr32e_dec.v", 40, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_i[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "verilog/dr32e_dec.v", 40, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_i[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "verilog/dr32e_dec.v", 40, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_i[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "verilog/dr32e_dec.v", 41, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_alu_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "verilog/dr32e_dec.v", 41, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_alu_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "verilog/dr32e_dec.v", 41, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_alu_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "verilog/dr32e_dec.v", 41, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_alu_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "verilog/dr32e_dec.v", 41, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_alu_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "verilog/dr32e_dec.v", 41, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_alu_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "verilog/dr32e_dec.v", 41, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_alu_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "verilog/dr32e_dec.v", 41, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_alu_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "verilog/dr32e_dec.v", 41, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_alu_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "verilog/dr32e_dec.v", 41, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_alu_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "verilog/dr32e_dec.v", 41, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_alu_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "verilog/dr32e_dec.v", 41, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_alu_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "verilog/dr32e_dec.v", 41, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_alu_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "verilog/dr32e_dec.v", 41, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_alu_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "verilog/dr32e_dec.v", 41, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_alu_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "verilog/dr32e_dec.v", 41, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_alu_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "verilog/dr32e_dec.v", 41, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_alu_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "verilog/dr32e_dec.v", 41, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_alu_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "verilog/dr32e_dec.v", 41, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_alu_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "verilog/dr32e_dec.v", 41, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_alu_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "verilog/dr32e_dec.v", 41, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_alu_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "verilog/dr32e_dec.v", 41, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_alu_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "verilog/dr32e_dec.v", 41, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_alu_i[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "verilog/dr32e_dec.v", 41, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_alu_i[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "verilog/dr32e_dec.v", 41, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_alu_i[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "verilog/dr32e_dec.v", 41, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_alu_i[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "verilog/dr32e_dec.v", 41, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_alu_i[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "verilog/dr32e_dec.v", 41, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_alu_i[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "verilog/dr32e_dec.v", 41, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_alu_i[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "verilog/dr32e_dec.v", 41, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_alu_i[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "verilog/dr32e_dec.v", 41, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_alu_i[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "verilog/dr32e_dec.v", 41, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rdata_alu_i[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "verilog/dr32e_dec.v", 44, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "illegal_c_insn_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "verilog/dr32e_dec.v", 47, 34, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_a_mux_sel_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "verilog/dr32e_dec.v", 48, 34, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_b_mux_sel_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "verilog/dr32e_dec.v", 48, 34, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_b_mux_sel_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "verilog/dr32e_dec.v", 48, 34, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_b_mux_sel_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "verilog/dr32e_dec.v", 49, 34, ".dr32e_dec", "v_toggle/dr32e_dec", "bt_a_mux_sel_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "verilog/dr32e_dec.v", 49, 34, ".dr32e_dec", "v_toggle/dr32e_dec", "bt_a_mux_sel_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "verilog/dr32e_dec.v", 50, 34, ".dr32e_dec", "v_toggle/dr32e_dec", "bt_b_mux_sel_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "verilog/dr32e_dec.v", 50, 34, ".dr32e_dec", "v_toggle/dr32e_dec", "bt_b_mux_sel_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "verilog/dr32e_dec.v", 50, 34, ".dr32e_dec", "v_toggle/dr32e_dec", "bt_b_mux_sel_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "verilog/dr32e_dec.v", 51, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_i_type_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "verilog/dr32e_dec.v", 51, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_i_type_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "verilog/dr32e_dec.v", 51, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_i_type_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "verilog/dr32e_dec.v", 51, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_i_type_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "verilog/dr32e_dec.v", 51, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_i_type_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "verilog/dr32e_dec.v", 51, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_i_type_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "verilog/dr32e_dec.v", 51, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_i_type_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "verilog/dr32e_dec.v", 51, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_i_type_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "verilog/dr32e_dec.v", 51, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_i_type_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "verilog/dr32e_dec.v", 51, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_i_type_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "verilog/dr32e_dec.v", 51, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_i_type_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "verilog/dr32e_dec.v", 51, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_i_type_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "verilog/dr32e_dec.v", 51, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_i_type_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "verilog/dr32e_dec.v", 51, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_i_type_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "verilog/dr32e_dec.v", 51, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_i_type_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "verilog/dr32e_dec.v", 51, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_i_type_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "verilog/dr32e_dec.v", 51, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_i_type_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "verilog/dr32e_dec.v", 51, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_i_type_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "verilog/dr32e_dec.v", 51, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_i_type_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "verilog/dr32e_dec.v", 51, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_i_type_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "verilog/dr32e_dec.v", 51, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_i_type_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "verilog/dr32e_dec.v", 51, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_i_type_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "verilog/dr32e_dec.v", 51, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_i_type_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "verilog/dr32e_dec.v", 51, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_i_type_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "verilog/dr32e_dec.v", 51, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_i_type_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "verilog/dr32e_dec.v", 51, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_i_type_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "verilog/dr32e_dec.v", 51, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_i_type_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "verilog/dr32e_dec.v", 51, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_i_type_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "verilog/dr32e_dec.v", 51, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_i_type_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "verilog/dr32e_dec.v", 51, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_i_type_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "verilog/dr32e_dec.v", 51, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_i_type_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "verilog/dr32e_dec.v", 51, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_i_type_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "verilog/dr32e_dec.v", 52, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_s_type_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "verilog/dr32e_dec.v", 52, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_s_type_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "verilog/dr32e_dec.v", 52, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_s_type_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "verilog/dr32e_dec.v", 52, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_s_type_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "verilog/dr32e_dec.v", 52, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_s_type_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "verilog/dr32e_dec.v", 52, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_s_type_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "verilog/dr32e_dec.v", 52, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_s_type_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "verilog/dr32e_dec.v", 52, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_s_type_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "verilog/dr32e_dec.v", 52, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_s_type_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "verilog/dr32e_dec.v", 52, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_s_type_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "verilog/dr32e_dec.v", 52, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_s_type_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "verilog/dr32e_dec.v", 52, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_s_type_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "verilog/dr32e_dec.v", 52, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_s_type_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "verilog/dr32e_dec.v", 52, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_s_type_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "verilog/dr32e_dec.v", 52, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_s_type_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "verilog/dr32e_dec.v", 52, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_s_type_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "verilog/dr32e_dec.v", 52, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_s_type_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "verilog/dr32e_dec.v", 52, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_s_type_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "verilog/dr32e_dec.v", 52, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_s_type_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "verilog/dr32e_dec.v", 52, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_s_type_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "verilog/dr32e_dec.v", 52, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_s_type_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "verilog/dr32e_dec.v", 52, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_s_type_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "verilog/dr32e_dec.v", 52, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_s_type_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "verilog/dr32e_dec.v", 52, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_s_type_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "verilog/dr32e_dec.v", 52, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_s_type_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "verilog/dr32e_dec.v", 52, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_s_type_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "verilog/dr32e_dec.v", 52, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_s_type_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "verilog/dr32e_dec.v", 52, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_s_type_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "verilog/dr32e_dec.v", 52, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_s_type_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "verilog/dr32e_dec.v", 52, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_s_type_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "verilog/dr32e_dec.v", 52, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_s_type_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "verilog/dr32e_dec.v", 52, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_s_type_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "verilog/dr32e_dec.v", 53, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_b_type_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "verilog/dr32e_dec.v", 53, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_b_type_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "verilog/dr32e_dec.v", 53, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_b_type_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "verilog/dr32e_dec.v", 53, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_b_type_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "verilog/dr32e_dec.v", 53, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_b_type_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "verilog/dr32e_dec.v", 53, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_b_type_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "verilog/dr32e_dec.v", 53, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_b_type_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "verilog/dr32e_dec.v", 53, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_b_type_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "verilog/dr32e_dec.v", 53, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_b_type_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "verilog/dr32e_dec.v", 53, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_b_type_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "verilog/dr32e_dec.v", 53, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_b_type_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "verilog/dr32e_dec.v", 53, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_b_type_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "verilog/dr32e_dec.v", 53, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_b_type_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "verilog/dr32e_dec.v", 53, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_b_type_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "verilog/dr32e_dec.v", 53, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_b_type_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "verilog/dr32e_dec.v", 53, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_b_type_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "verilog/dr32e_dec.v", 53, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_b_type_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "verilog/dr32e_dec.v", 53, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_b_type_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "verilog/dr32e_dec.v", 53, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_b_type_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "verilog/dr32e_dec.v", 53, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_b_type_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "verilog/dr32e_dec.v", 53, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_b_type_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "verilog/dr32e_dec.v", 53, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_b_type_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "verilog/dr32e_dec.v", 53, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_b_type_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "verilog/dr32e_dec.v", 53, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_b_type_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "verilog/dr32e_dec.v", 53, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_b_type_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "verilog/dr32e_dec.v", 53, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_b_type_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "verilog/dr32e_dec.v", 53, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_b_type_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "verilog/dr32e_dec.v", 53, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_b_type_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "verilog/dr32e_dec.v", 53, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_b_type_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "verilog/dr32e_dec.v", 53, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_b_type_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "verilog/dr32e_dec.v", 53, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_b_type_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "verilog/dr32e_dec.v", 53, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_b_type_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "verilog/dr32e_dec.v", 54, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_u_type_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "verilog/dr32e_dec.v", 54, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_u_type_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "verilog/dr32e_dec.v", 54, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_u_type_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "verilog/dr32e_dec.v", 54, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_u_type_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "verilog/dr32e_dec.v", 54, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_u_type_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "verilog/dr32e_dec.v", 54, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_u_type_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "verilog/dr32e_dec.v", 54, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_u_type_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "verilog/dr32e_dec.v", 54, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_u_type_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "verilog/dr32e_dec.v", 54, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_u_type_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "verilog/dr32e_dec.v", 54, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_u_type_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "verilog/dr32e_dec.v", 54, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_u_type_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "verilog/dr32e_dec.v", 54, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_u_type_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "verilog/dr32e_dec.v", 54, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_u_type_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "verilog/dr32e_dec.v", 54, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_u_type_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "verilog/dr32e_dec.v", 54, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_u_type_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "verilog/dr32e_dec.v", 54, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_u_type_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "verilog/dr32e_dec.v", 54, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_u_type_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "verilog/dr32e_dec.v", 54, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_u_type_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "verilog/dr32e_dec.v", 54, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_u_type_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "verilog/dr32e_dec.v", 54, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_u_type_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "verilog/dr32e_dec.v", 54, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_u_type_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "verilog/dr32e_dec.v", 54, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_u_type_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "verilog/dr32e_dec.v", 54, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_u_type_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "verilog/dr32e_dec.v", 54, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_u_type_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "verilog/dr32e_dec.v", 54, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_u_type_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "verilog/dr32e_dec.v", 54, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_u_type_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "verilog/dr32e_dec.v", 54, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_u_type_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "verilog/dr32e_dec.v", 54, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_u_type_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "verilog/dr32e_dec.v", 54, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_u_type_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "verilog/dr32e_dec.v", 54, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_u_type_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "verilog/dr32e_dec.v", 54, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_u_type_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "verilog/dr32e_dec.v", 54, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_u_type_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "verilog/dr32e_dec.v", 55, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_j_type_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "verilog/dr32e_dec.v", 55, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_j_type_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "verilog/dr32e_dec.v", 55, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_j_type_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "verilog/dr32e_dec.v", 55, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_j_type_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "verilog/dr32e_dec.v", 55, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_j_type_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "verilog/dr32e_dec.v", 55, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_j_type_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "verilog/dr32e_dec.v", 55, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_j_type_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "verilog/dr32e_dec.v", 55, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_j_type_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "verilog/dr32e_dec.v", 55, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_j_type_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "verilog/dr32e_dec.v", 55, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_j_type_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "verilog/dr32e_dec.v", 55, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_j_type_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "verilog/dr32e_dec.v", 55, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_j_type_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "verilog/dr32e_dec.v", 55, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_j_type_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "verilog/dr32e_dec.v", 55, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_j_type_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "verilog/dr32e_dec.v", 55, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_j_type_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "verilog/dr32e_dec.v", 55, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_j_type_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "verilog/dr32e_dec.v", 55, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_j_type_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "verilog/dr32e_dec.v", 55, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_j_type_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "verilog/dr32e_dec.v", 55, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_j_type_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "verilog/dr32e_dec.v", 55, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_j_type_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "verilog/dr32e_dec.v", 55, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_j_type_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "verilog/dr32e_dec.v", 55, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_j_type_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "verilog/dr32e_dec.v", 55, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_j_type_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "verilog/dr32e_dec.v", 55, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_j_type_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "verilog/dr32e_dec.v", 55, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_j_type_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "verilog/dr32e_dec.v", 55, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_j_type_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "verilog/dr32e_dec.v", 55, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_j_type_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "verilog/dr32e_dec.v", 55, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_j_type_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "verilog/dr32e_dec.v", 55, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_j_type_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "verilog/dr32e_dec.v", 55, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_j_type_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "verilog/dr32e_dec.v", 55, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_j_type_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "verilog/dr32e_dec.v", 55, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "imm_j_type_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "verilog/dr32e_dec.v", 56, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "zimm_rs1_type_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "verilog/dr32e_dec.v", 56, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "zimm_rs1_type_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "verilog/dr32e_dec.v", 56, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "zimm_rs1_type_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "verilog/dr32e_dec.v", 56, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "zimm_rs1_type_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "verilog/dr32e_dec.v", 56, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "zimm_rs1_type_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "verilog/dr32e_dec.v", 56, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "zimm_rs1_type_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "verilog/dr32e_dec.v", 56, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "zimm_rs1_type_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "verilog/dr32e_dec.v", 56, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "zimm_rs1_type_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "verilog/dr32e_dec.v", 56, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "zimm_rs1_type_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "verilog/dr32e_dec.v", 56, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "zimm_rs1_type_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "verilog/dr32e_dec.v", 56, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "zimm_rs1_type_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "verilog/dr32e_dec.v", 56, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "zimm_rs1_type_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "verilog/dr32e_dec.v", 56, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "zimm_rs1_type_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "verilog/dr32e_dec.v", 56, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "zimm_rs1_type_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "verilog/dr32e_dec.v", 56, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "zimm_rs1_type_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "verilog/dr32e_dec.v", 56, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "zimm_rs1_type_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "verilog/dr32e_dec.v", 56, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "zimm_rs1_type_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "verilog/dr32e_dec.v", 56, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "zimm_rs1_type_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "verilog/dr32e_dec.v", 56, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "zimm_rs1_type_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "verilog/dr32e_dec.v", 56, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "zimm_rs1_type_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "verilog/dr32e_dec.v", 56, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "zimm_rs1_type_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "verilog/dr32e_dec.v", 56, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "zimm_rs1_type_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "verilog/dr32e_dec.v", 56, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "zimm_rs1_type_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "verilog/dr32e_dec.v", 56, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "zimm_rs1_type_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "verilog/dr32e_dec.v", 56, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "zimm_rs1_type_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "verilog/dr32e_dec.v", 56, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "zimm_rs1_type_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "verilog/dr32e_dec.v", 56, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "zimm_rs1_type_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "verilog/dr32e_dec.v", 56, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "zimm_rs1_type_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "verilog/dr32e_dec.v", 56, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "zimm_rs1_type_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "verilog/dr32e_dec.v", 56, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "zimm_rs1_type_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "verilog/dr32e_dec.v", 56, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "zimm_rs1_type_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "verilog/dr32e_dec.v", 56, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "zimm_rs1_type_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "verilog/dr32e_dec.v", 59, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "rf_wdata_sel_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "verilog/dr32e_dec.v", 60, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "rf_we_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "verilog/dr32e_dec.v", 61, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "rf_raddr_a_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "verilog/dr32e_dec.v", 61, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "rf_raddr_a_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "verilog/dr32e_dec.v", 61, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "rf_raddr_a_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "verilog/dr32e_dec.v", 61, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "rf_raddr_a_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "verilog/dr32e_dec.v", 61, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "rf_raddr_a_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "verilog/dr32e_dec.v", 62, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "rf_raddr_b_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "verilog/dr32e_dec.v", 62, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "rf_raddr_b_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "verilog/dr32e_dec.v", 62, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "rf_raddr_b_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "verilog/dr32e_dec.v", 62, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "rf_raddr_b_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "verilog/dr32e_dec.v", 62, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "rf_raddr_b_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "verilog/dr32e_dec.v", 63, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "rf_waddr_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "verilog/dr32e_dec.v", 63, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "rf_waddr_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "verilog/dr32e_dec.v", 63, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "rf_waddr_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "verilog/dr32e_dec.v", 63, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "rf_waddr_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "verilog/dr32e_dec.v", 63, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "rf_waddr_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "verilog/dr32e_dec.v", 64, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "rf_ren_a_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "verilog/dr32e_dec.v", 65, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "rf_ren_b_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "verilog/dr32e_dec.v", 68, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "alu_operator_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "verilog/dr32e_dec.v", 68, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "alu_operator_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "verilog/dr32e_dec.v", 68, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "alu_operator_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "verilog/dr32e_dec.v", 68, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "alu_operator_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "verilog/dr32e_dec.v", 68, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "alu_operator_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "verilog/dr32e_dec.v", 68, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "alu_operator_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[303]), first, "verilog/dr32e_dec.v", 68, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "alu_operator_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[304]), first, "verilog/dr32e_dec.v", 69, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "alu_op_a_mux_sel_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[305]), first, "verilog/dr32e_dec.v", 69, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "alu_op_a_mux_sel_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[306]), first, "verilog/dr32e_dec.v", 71, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "alu_op_b_mux_sel_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "verilog/dr32e_dec.v", 73, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "alu_multicycle_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[308]), first, "verilog/dr32e_dec.v", 76, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "mult_en_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[309]), first, "verilog/dr32e_dec.v", 77, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "div_en_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[310]), first, "verilog/dr32e_dec.v", 78, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "mult_sel_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[311]), first, "verilog/dr32e_dec.v", 79, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "div_sel_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[312]), first, "verilog/dr32e_dec.v", 81, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "multdiv_operator_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[313]), first, "verilog/dr32e_dec.v", 81, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "multdiv_operator_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[314]), first, "verilog/dr32e_dec.v", 82, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "multdiv_signed_mode_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[315]), first, "verilog/dr32e_dec.v", 82, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "multdiv_signed_mode_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[316]), first, "verilog/dr32e_dec.v", 85, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "csr_access_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[317]), first, "verilog/dr32e_dec.v", 86, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "csr_op_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[318]), first, "verilog/dr32e_dec.v", 86, 33, ".dr32e_dec", "v_toggle/dr32e_dec", "csr_op_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[319]), first, "verilog/dr32e_dec.v", 89, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "data_req_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[320]), first, "verilog/dr32e_dec.v", 90, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "data_we_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[321]), first, "verilog/dr32e_dec.v", 91, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "data_type_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[322]), first, "verilog/dr32e_dec.v", 91, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "data_type_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[323]), first, "verilog/dr32e_dec.v", 93, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "data_sign_extension_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[324]), first, "verilog/dr32e_dec.v", 97, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "jump_in_dec_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[325]), first, "verilog/dr32e_dec.v", 98, 32, ".dr32e_dec", "v_toggle/dr32e_dec", "branch_in_dec_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[326]), first, "verilog/dr32e_dec.v", 103, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "illegal_insn", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "verilog/dr32e_dec.v", 104, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "illegal_reg_rv32e", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "verilog/dr32e_dec.v", 105, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "csr_illegal", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "verilog/dr32e_dec.v", 106, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "rf_we", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "verilog/dr32e_dec.v", 108, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "verilog/dr32e_dec.v", 108, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "verilog/dr32e_dec.v", 108, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "verilog/dr32e_dec.v", 108, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "verilog/dr32e_dec.v", 108, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "verilog/dr32e_dec.v", 108, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "verilog/dr32e_dec.v", 108, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "verilog/dr32e_dec.v", 108, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "verilog/dr32e_dec.v", 108, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "verilog/dr32e_dec.v", 108, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "verilog/dr32e_dec.v", 108, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "verilog/dr32e_dec.v", 108, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "verilog/dr32e_dec.v", 108, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "verilog/dr32e_dec.v", 108, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "verilog/dr32e_dec.v", 108, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "verilog/dr32e_dec.v", 108, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "verilog/dr32e_dec.v", 108, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "verilog/dr32e_dec.v", 108, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "verilog/dr32e_dec.v", 108, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "verilog/dr32e_dec.v", 108, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "verilog/dr32e_dec.v", 108, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "verilog/dr32e_dec.v", 108, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "verilog/dr32e_dec.v", 108, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "verilog/dr32e_dec.v", 108, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "verilog/dr32e_dec.v", 108, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "verilog/dr32e_dec.v", 108, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "verilog/dr32e_dec.v", 108, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "verilog/dr32e_dec.v", 108, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "verilog/dr32e_dec.v", 108, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "verilog/dr32e_dec.v", 108, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "verilog/dr32e_dec.v", 108, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "verilog/dr32e_dec.v", 108, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "verilog/dr32e_dec.v", 109, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_alu[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "verilog/dr32e_dec.v", 109, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_alu[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "verilog/dr32e_dec.v", 109, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_alu[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "verilog/dr32e_dec.v", 109, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_alu[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "verilog/dr32e_dec.v", 109, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_alu[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "verilog/dr32e_dec.v", 109, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_alu[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "verilog/dr32e_dec.v", 109, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_alu[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "verilog/dr32e_dec.v", 109, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_alu[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "verilog/dr32e_dec.v", 109, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_alu[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "verilog/dr32e_dec.v", 109, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_alu[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "verilog/dr32e_dec.v", 109, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_alu[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "verilog/dr32e_dec.v", 109, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_alu[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "verilog/dr32e_dec.v", 109, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_alu[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "verilog/dr32e_dec.v", 109, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_alu[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "verilog/dr32e_dec.v", 109, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_alu[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "verilog/dr32e_dec.v", 109, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_alu[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "verilog/dr32e_dec.v", 109, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_alu[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "verilog/dr32e_dec.v", 109, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_alu[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "verilog/dr32e_dec.v", 109, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_alu[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "verilog/dr32e_dec.v", 109, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_alu[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "verilog/dr32e_dec.v", 109, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_alu[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "verilog/dr32e_dec.v", 109, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_alu[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "verilog/dr32e_dec.v", 109, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_alu[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "verilog/dr32e_dec.v", 109, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_alu[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "verilog/dr32e_dec.v", 109, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_alu[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "verilog/dr32e_dec.v", 109, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_alu[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "verilog/dr32e_dec.v", 109, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_alu[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "verilog/dr32e_dec.v", 109, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_alu[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "verilog/dr32e_dec.v", 109, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_alu[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "verilog/dr32e_dec.v", 109, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_alu[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "verilog/dr32e_dec.v", 109, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_alu[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "verilog/dr32e_dec.v", 109, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_alu[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "verilog/dr32e_dec.v", 110, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "unused_instr_alu[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[331]), first, "verilog/dr32e_dec.v", 110, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "unused_instr_alu[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[332]), first, "verilog/dr32e_dec.v", 110, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "unused_instr_alu[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[333]), first, "verilog/dr32e_dec.v", 110, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "unused_instr_alu[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[334]), first, "verilog/dr32e_dec.v", 110, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "unused_instr_alu[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[335]), first, "verilog/dr32e_dec.v", 110, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "unused_instr_alu[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[336]), first, "verilog/dr32e_dec.v", 110, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "unused_instr_alu[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[337]), first, "verilog/dr32e_dec.v", 110, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "unused_instr_alu[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[338]), first, "verilog/dr32e_dec.v", 110, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "unused_instr_alu[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[339]), first, "verilog/dr32e_dec.v", 110, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "unused_instr_alu[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[340]), first, "verilog/dr32e_dec.v", 112, 15, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rs1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[341]), first, "verilog/dr32e_dec.v", 112, 15, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rs1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[342]), first, "verilog/dr32e_dec.v", 112, 15, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rs1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[343]), first, "verilog/dr32e_dec.v", 112, 15, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rs1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[344]), first, "verilog/dr32e_dec.v", 112, 15, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rs1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "verilog/dr32e_dec.v", 113, 15, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rs2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "verilog/dr32e_dec.v", 113, 15, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rs2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "verilog/dr32e_dec.v", 113, 15, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rs2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "verilog/dr32e_dec.v", 113, 15, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rs2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "verilog/dr32e_dec.v", 113, 15, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rs2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[345]), first, "verilog/dr32e_dec.v", 114, 15, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rs3[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[346]), first, "verilog/dr32e_dec.v", 114, 15, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rs3[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[347]), first, "verilog/dr32e_dec.v", 114, 15, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rs3[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[348]), first, "verilog/dr32e_dec.v", 114, 15, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rs3[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[349]), first, "verilog/dr32e_dec.v", 114, 15, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rs3[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "verilog/dr32e_dec.v", 115, 15, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rd[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "verilog/dr32e_dec.v", 115, 15, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rd[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "verilog/dr32e_dec.v", 115, 15, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rd[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "verilog/dr32e_dec.v", 115, 15, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rd[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "verilog/dr32e_dec.v", 115, 15, ".dr32e_dec", "v_toggle/dr32e_dec", "instr_rd[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "verilog/dr32e_dec.v", 117, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "use_rs3_d", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "verilog/dr32e_dec.v", 118, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "use_rs3_q", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[350]), first, "verilog/dr32e_dec.v", 120, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "csr_op[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[351]), first, "verilog/dr32e_dec.v", 120, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "csr_op[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[352]), first, "verilog/dr32e_dec.v", 122, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "opcode[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "verilog/dr32e_dec.v", 122, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "opcode[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[354]), first, "verilog/dr32e_dec.v", 122, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "opcode[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[355]), first, "verilog/dr32e_dec.v", 122, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "opcode[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "verilog/dr32e_dec.v", 122, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "opcode[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "verilog/dr32e_dec.v", 122, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "opcode[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[358]), first, "verilog/dr32e_dec.v", 122, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "opcode[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[359]), first, "verilog/dr32e_dec.v", 123, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "opcode_alu[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[360]), first, "verilog/dr32e_dec.v", 123, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "opcode_alu[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[361]), first, "verilog/dr32e_dec.v", 123, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "opcode_alu[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[362]), first, "verilog/dr32e_dec.v", 123, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "opcode_alu[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[363]), first, "verilog/dr32e_dec.v", 123, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "opcode_alu[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[364]), first, "verilog/dr32e_dec.v", 123, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "opcode_alu[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[365]), first, "verilog/dr32e_dec.v", 123, 16, ".dr32e_dec", "v_toggle/dr32e_dec", "opcode_alu[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[366]), first, "verilog/dr32e_dec.v", 196, 5, ".dr32e_dec", "v_branch/dr32e_dec", "if", "196-198");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[367]), first, "verilog/dr32e_dec.v", 196, 6, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[368]), first, "verilog/dr32e_dec.v", 191, 3, ".dr32e_dec", "v_line/dr32e_dec", "block", "191-192");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[369]), first, "verilog/dr32e_dec.v", 247, 9, ".dr32e_dec", "v_branch/dr32e_dec", "if", "247,249-250");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[370]), first, "verilog/dr32e_dec.v", 247, 10, ".dr32e_dec", "v_branch/dr32e_dec", "else", "251,253");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[371]), first, "verilog/dr32e_dec.v", 244, 17, ".dr32e_dec", "v_line/dr32e_dec", "case", "244-245");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[372]), first, "verilog/dr32e_dec.v", 260, 9, ".dr32e_dec", "v_branch/dr32e_dec", "if", "260,262-263");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[373]), first, "verilog/dr32e_dec.v", 260, 10, ".dr32e_dec", "v_branch/dr32e_dec", "else", "264,266");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[374]), first, "verilog/dr32e_dec.v", 268, 9, ".dr32e_dec", "v_branch/dr32e_dec", "if", "268-269");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[375]), first, "verilog/dr32e_dec.v", 268, 10, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[376]), first, "verilog/dr32e_dec.v", 257, 18, ".dr32e_dec", "v_line/dr32e_dec", "case", "257-258,272");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[377]), first, "verilog/dr32e_dec.v", 284, 17, ".dr32e_dec", "v_line/dr32e_dec", "case", "284");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[378]), first, "verilog/dr32e_dec.v", 285, 11, ".dr32e_dec", "v_line/dr32e_dec", "case", "285");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[379]), first, "verilog/dr32e_dec.v", 275, 20, ".dr32e_dec", "v_line/dr32e_dec", "case", "275-276,278,288-289");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[380]), first, "verilog/dr32e_dec.v", 302, 9, ".dr32e_dec", "v_branch/dr32e_dec", "if", "302-303");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[381]), first, "verilog/dr32e_dec.v", 302, 10, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[382]), first, "verilog/dr32e_dec.v", 308, 16, ".dr32e_dec", "v_line/dr32e_dec", "case", "308");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[383]), first, "verilog/dr32e_dec.v", 309, 16, ".dr32e_dec", "v_line/dr32e_dec", "case", "309");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[384]), first, "verilog/dr32e_dec.v", 310, 16, ".dr32e_dec", "v_line/dr32e_dec", "case", "310");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[385]), first, "verilog/dr32e_dec.v", 311, 11, ".dr32e_dec", "v_line/dr32e_dec", "case", "311");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[386]), first, "verilog/dr32e_dec.v", 296, 19, ".dr32e_dec", "v_line/dr32e_dec", "case", "296-300,307");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[387]), first, "verilog/dr32e_dec.v", 325, 16, ".dr32e_dec", "v_line/dr32e_dec", "case", "325");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[388]), first, "verilog/dr32e_dec.v", 326, 16, ".dr32e_dec", "v_line/dr32e_dec", "case", "326");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[389]), first, "verilog/dr32e_dec.v", 329, 13, ".dr32e_dec", "v_branch/dr32e_dec", "if", "329-330");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[390]), first, "verilog/dr32e_dec.v", 329, 14, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[391]), first, "verilog/dr32e_dec.v", 327, 16, ".dr32e_dec", "v_line/dr32e_dec", "case", "327-328");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[392]), first, "verilog/dr32e_dec.v", 333, 11, ".dr32e_dec", "v_line/dr32e_dec", "case", "333-334");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[393]), first, "verilog/dr32e_dec.v", 315, 18, ".dr32e_dec", "v_line/dr32e_dec", "case", "315-318,321,324");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[394]), first, "verilog/dr32e_dec.v", 343, 17, ".dr32e_dec", "v_line/dr32e_dec", "case", "343-344");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[395]), first, "verilog/dr32e_dec.v", 347, 19, ".dr32e_dec", "v_line/dr32e_dec", "case", "347-348");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[396]), first, "verilog/dr32e_dec.v", 361, 17, ".dr32e_dec", "v_line/dr32e_dec", "case", "361");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[397]), first, "verilog/dr32e_dec.v", 365, 24, ".dr32e_dec", "v_line/dr32e_dec", "case", "365");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[398]), first, "verilog/dr32e_dec.v", 366, 24, ".dr32e_dec", "v_line/dr32e_dec", "case", "366-367");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[399]), first, "verilog/dr32e_dec.v", 371, 24, ".dr32e_dec", "v_line/dr32e_dec", "case", "371");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[400]), first, "verilog/dr32e_dec.v", 373, 17, ".dr32e_dec", "v_branch/dr32e_dec", "if", "373-374");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[401]), first, "verilog/dr32e_dec.v", 373, 18, ".dr32e_dec", "v_branch/dr32e_dec", "else", "375-376");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[402]), first, "verilog/dr32e_dec.v", 372, 24, ".dr32e_dec", "v_line/dr32e_dec", "case", "372");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[403]), first, "verilog/dr32e_dec.v", 385, 30, ".dr32e_dec", "v_line/dr32e_dec", "case", "385");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[404]), first, "verilog/dr32e_dec.v", 391, 30, ".dr32e_dec", "v_line/dr32e_dec", "case", "391-392");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[405]), first, "verilog/dr32e_dec.v", 394, 19, ".dr32e_dec", "v_line/dr32e_dec", "case", "394");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[406]), first, "verilog/dr32e_dec.v", 379, 24, ".dr32e_dec", "v_line/dr32e_dec", "case", "379-380");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[407]), first, "verilog/dr32e_dec.v", 397, 15, ".dr32e_dec", "v_line/dr32e_dec", "case", "397");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[408]), first, "verilog/dr32e_dec.v", 363, 17, ".dr32e_dec", "v_line/dr32e_dec", "case", "363-364");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[409]), first, "verilog/dr32e_dec.v", 407, 26, ".dr32e_dec", "v_line/dr32e_dec", "case", "407");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[410]), first, "verilog/dr32e_dec.v", 409, 26, ".dr32e_dec", "v_line/dr32e_dec", "case", "409-410");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[411]), first, "verilog/dr32e_dec.v", 413, 26, ".dr32e_dec", "v_line/dr32e_dec", "case", "413");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[412]), first, "verilog/dr32e_dec.v", 418, 28, ".dr32e_dec", "v_line/dr32e_dec", "if", "418-419");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[413]), first, "verilog/dr32e_dec.v", 418, 29, ".dr32e_dec", "v_line/dr32e_dec", "else", "420-421");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[414]), first, "verilog/dr32e_dec.v", 416, 19, ".dr32e_dec", "v_line/dr32e_dec", "elsif", "416-417");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[415]), first, "verilog/dr32e_dec.v", 415, 26, ".dr32e_dec", "v_line/dr32e_dec", "case", "415");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[416]), first, "verilog/dr32e_dec.v", 427, 28, ".dr32e_dec", "v_line/dr32e_dec", "if", "427-428");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[417]), first, "verilog/dr32e_dec.v", 427, 29, ".dr32e_dec", "v_line/dr32e_dec", "else", "429-430");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[418]), first, "verilog/dr32e_dec.v", 425, 19, ".dr32e_dec", "v_line/dr32e_dec", "elsif", "425-426");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[419]), first, "verilog/dr32e_dec.v", 424, 26, ".dr32e_dec", "v_line/dr32e_dec", "case", "424");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[420]), first, "verilog/dr32e_dec.v", 434, 19, ".dr32e_dec", "v_branch/dr32e_dec", "if", "434-435");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[421]), first, "verilog/dr32e_dec.v", 434, 20, ".dr32e_dec", "v_branch/dr32e_dec", "else", "436-437");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[422]), first, "verilog/dr32e_dec.v", 433, 26, ".dr32e_dec", "v_line/dr32e_dec", "case", "433");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[423]), first, "verilog/dr32e_dec.v", 441, 17, ".dr32e_dec", "v_line/dr32e_dec", "case", "441");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[424]), first, "verilog/dr32e_dec.v", 402, 13, ".dr32e_dec", "v_branch/dr32e_dec", "if", "402-403");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[425]), first, "verilog/dr32e_dec.v", 402, 14, ".dr32e_dec", "v_branch/dr32e_dec", "else", "404-405");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[426]), first, "verilog/dr32e_dec.v", 401, 17, ".dr32e_dec", "v_line/dr32e_dec", "case", "401");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[427]), first, "verilog/dr32e_dec.v", 446, 11, ".dr32e_dec", "v_line/dr32e_dec", "case", "446");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[428]), first, "verilog/dr32e_dec.v", 351, 20, ".dr32e_dec", "v_line/dr32e_dec", "case", "351-353,355");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[429]), first, "verilog/dr32e_dec.v", 468, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "468");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[430]), first, "verilog/dr32e_dec.v", 493, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "493");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[431]), first, "verilog/dr32e_dec.v", 507, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "507-508");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[432]), first, "verilog/dr32e_dec.v", 512, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "512");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[433]), first, "verilog/dr32e_dec.v", 515, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "515-518");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[434]), first, "verilog/dr32e_dec.v", 520, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "520-523");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[435]), first, "verilog/dr32e_dec.v", 525, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "525-528");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[436]), first, "verilog/dr32e_dec.v", 530, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "530-533");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[437]), first, "verilog/dr32e_dec.v", 535, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "535-538");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[438]), first, "verilog/dr32e_dec.v", 540, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "540-543");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[439]), first, "verilog/dr32e_dec.v", 545, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "545-548");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[440]), first, "verilog/dr32e_dec.v", 550, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "550-553");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[441]), first, "verilog/dr32e_dec.v", 555, 13, ".dr32e_dec", "v_line/dr32e_dec", "case", "555-556");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[442]), first, "verilog/dr32e_dec.v", 454, 9, ".dr32e_dec", "v_branch/dr32e_dec", "if", "454-455");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[443]), first, "verilog/dr32e_dec.v", 454, 10, ".dr32e_dec", "v_branch/dr32e_dec", "else", "456-457");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[444]), first, "verilog/dr32e_dec.v", 450, 16, ".dr32e_dec", "v_line/dr32e_dec", "case", "450-453");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[445]), first, "verilog/dr32e_dec.v", 568, 17, ".dr32e_dec", "v_line/dr32e_dec", "case", "568,570");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[446]), first, "verilog/dr32e_dec.v", 581, 13, ".dr32e_dec", "v_branch/dr32e_dec", "if", "581-583");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[447]), first, "verilog/dr32e_dec.v", 581, 14, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[448]), first, "verilog/dr32e_dec.v", 572, 17, ".dr32e_dec", "v_line/dr32e_dec", "case", "572,577,579");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[449]), first, "verilog/dr32e_dec.v", 586, 11, ".dr32e_dec", "v_line/dr32e_dec", "case", "586-587");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[450]), first, "verilog/dr32e_dec.v", 566, 22, ".dr32e_dec", "v_line/dr32e_dec", "case", "566-567");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[451]), first, "verilog/dr32e_dec.v", 596, 20, ".dr32e_dec", "v_line/dr32e_dec", "case", "596,598");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[452]), first, "verilog/dr32e_dec.v", 600, 20, ".dr32e_dec", "v_line/dr32e_dec", "case", "600,602");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[453]), first, "verilog/dr32e_dec.v", 604, 20, ".dr32e_dec", "v_line/dr32e_dec", "case", "604-605");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[454]), first, "verilog/dr32e_dec.v", 607, 20, ".dr32e_dec", "v_line/dr32e_dec", "case", "607-608");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[455]), first, "verilog/dr32e_dec.v", 610, 20, ".dr32e_dec", "v_line/dr32e_dec", "case", "610-611");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[456]), first, "verilog/dr32e_dec.v", 613, 13, ".dr32e_dec", "v_line/dr32e_dec", "case", "613-614");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[457]), first, "verilog/dr32e_dec.v", 618, 11, ".dr32e_dec", "v_branch/dr32e_dec", "if", "618-619");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[458]), first, "verilog/dr32e_dec.v", 618, 12, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[459]), first, "verilog/dr32e_dec.v", 627, 11, ".dr32e_dec", "v_branch/dr32e_dec", "if", "627-628");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[460]), first, "verilog/dr32e_dec.v", 627, 12, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[461]), first, "verilog/dr32e_dec.v", 632, 18, ".dr32e_dec", "v_line/dr32e_dec", "case", "632");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[462]), first, "verilog/dr32e_dec.v", 633, 18, ".dr32e_dec", "v_line/dr32e_dec", "case", "633");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[463]), first, "verilog/dr32e_dec.v", 634, 18, ".dr32e_dec", "v_line/dr32e_dec", "case", "634");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[464]), first, "verilog/dr32e_dec.v", 635, 13, ".dr32e_dec", "v_line/dr32e_dec", "case", "635");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[465]), first, "verilog/dr32e_dec.v", 593, 9, ".dr32e_dec", "v_branch/dr32e_dec", "if", "593,595");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[466]), first, "verilog/dr32e_dec.v", 593, 10, ".dr32e_dec", "v_branch/dr32e_dec", "else", "621,623-625,631,638");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[467]), first, "verilog/dr32e_dec.v", 592, 20, ".dr32e_dec", "v_line/dr32e_dec", "case", "592");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[468]), first, "verilog/dr32e_dec.v", 642, 7, ".dr32e_dec", "v_line/dr32e_dec", "case", "642-643");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[469]), first, "verilog/dr32e_dec.v", 648, 5, ".dr32e_dec", "v_branch/dr32e_dec", "if", "648-649");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[470]), first, "verilog/dr32e_dec.v", 648, 6, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[471]), first, "verilog/dr32e_dec.v", 657, 5, ".dr32e_dec", "v_branch/dr32e_dec", "if", "657-664");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[472]), first, "verilog/dr32e_dec.v", 657, 6, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[473]), first, "verilog/dr32e_dec.v", 206, 3, ".dr32e_dec", "v_line/dr32e_dec", "block", "206-210,212-213,215-218,220-222,224-227,229-234,236,238");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[474]), first, "verilog/dr32e_dec.v", 698, 9, ".dr32e_dec", "v_branch/dr32e_dec", "if", "698-700");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[475]), first, "verilog/dr32e_dec.v", 698, 10, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[476]), first, "verilog/dr32e_dec.v", 704, 9, ".dr32e_dec", "v_branch/dr32e_dec", "if", "704,706-709");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[477]), first, "verilog/dr32e_dec.v", 704, 10, ".dr32e_dec", "v_branch/dr32e_dec", "else", "710,712-715");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[478]), first, "verilog/dr32e_dec.v", 697, 17, ".dr32e_dec", "v_line/dr32e_dec", "case", "697");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[479]), first, "verilog/dr32e_dec.v", 720, 9, ".dr32e_dec", "v_branch/dr32e_dec", "if", "720-722");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[480]), first, "verilog/dr32e_dec.v", 720, 10, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[481]), first, "verilog/dr32e_dec.v", 726, 9, ".dr32e_dec", "v_branch/dr32e_dec", "if", "726,728-731");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[482]), first, "verilog/dr32e_dec.v", 726, 10, ".dr32e_dec", "v_branch/dr32e_dec", "else", "732,734-737");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[483]), first, "verilog/dr32e_dec.v", 719, 18, ".dr32e_dec", "v_line/dr32e_dec", "case", "719");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[484]), first, "verilog/dr32e_dec.v", 744, 17, ".dr32e_dec", "v_line/dr32e_dec", "case", "744");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[485]), first, "verilog/dr32e_dec.v", 745, 17, ".dr32e_dec", "v_line/dr32e_dec", "case", "745");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[486]), first, "verilog/dr32e_dec.v", 746, 17, ".dr32e_dec", "v_line/dr32e_dec", "case", "746");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[487]), first, "verilog/dr32e_dec.v", 747, 17, ".dr32e_dec", "v_line/dr32e_dec", "case", "747");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[488]), first, "verilog/dr32e_dec.v", 748, 17, ".dr32e_dec", "v_line/dr32e_dec", "case", "748");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[489]), first, "verilog/dr32e_dec.v", 749, 17, ".dr32e_dec", "v_line/dr32e_dec", "case", "749");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[490]), first, "verilog/dr32e_dec.v", 750, 11, ".dr32e_dec", "v_line/dr32e_dec", "case", "750");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[491]), first, "verilog/dr32e_dec.v", 753, 9, ".dr32e_dec", "v_branch/dr32e_dec", "if", "753-754,756");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[492]), first, "verilog/dr32e_dec.v", 753, 10, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[493]), first, "verilog/dr32e_dec.v", 765, 18, ".dr32e_dec", "v_branch/dr32e_dec", "if", "765,767-768,770-771");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[494]), first, "verilog/dr32e_dec.v", 765, 19, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[495]), first, "verilog/dr32e_dec.v", 761, 9, ".dr32e_dec", "v_line/dr32e_dec", "elsif", "761,763-764");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[496]), first, "verilog/dr32e_dec.v", 741, 20, ".dr32e_dec", "v_line/dr32e_dec", "case", "741,743");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[497]), first, "verilog/dr32e_dec.v", 784, 9, ".dr32e_dec", "v_branch/dr32e_dec", "if", "784,786-787");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[498]), first, "verilog/dr32e_dec.v", 784, 10, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[499]), first, "verilog/dr32e_dec.v", 779, 19, ".dr32e_dec", "v_line/dr32e_dec", "case", "779-782");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[500]), first, "verilog/dr32e_dec.v", 791, 18, ".dr32e_dec", "v_line/dr32e_dec", "case", "791-792,795-797");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[501]), first, "verilog/dr32e_dec.v", 804, 17, ".dr32e_dec", "v_line/dr32e_dec", "case", "804-809");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[502]), first, "verilog/dr32e_dec.v", 812, 19, ".dr32e_dec", "v_line/dr32e_dec", "case", "812-816");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[503]), first, "verilog/dr32e_dec.v", 825, 17, ".dr32e_dec", "v_line/dr32e_dec", "case", "825");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[504]), first, "verilog/dr32e_dec.v", 826, 17, ".dr32e_dec", "v_line/dr32e_dec", "case", "826");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[505]), first, "verilog/dr32e_dec.v", 827, 17, ".dr32e_dec", "v_line/dr32e_dec", "case", "827");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[506]), first, "verilog/dr32e_dec.v", 828, 17, ".dr32e_dec", "v_line/dr32e_dec", "case", "828");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[507]), first, "verilog/dr32e_dec.v", 829, 17, ".dr32e_dec", "v_line/dr32e_dec", "case", "829");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[508]), first, "verilog/dr32e_dec.v", 830, 17, ".dr32e_dec", "v_line/dr32e_dec", "case", "830");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[509]), first, "verilog/dr32e_dec.v", 835, 26, ".dr32e_dec", "v_line/dr32e_dec", "case", "835");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[510]), first, "verilog/dr32e_dec.v", 838, 19, ".dr32e_dec", "v_branch/dr32e_dec", "if", "838");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "verilog/dr32e_dec.v", 838, 20, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[512]), first, "verilog/dr32e_dec.v", 837, 26, ".dr32e_dec", "v_line/dr32e_dec", "case", "837");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[513]), first, "verilog/dr32e_dec.v", 840, 26, ".dr32e_dec", "v_line/dr32e_dec", "case", "840");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[514]), first, "verilog/dr32e_dec.v", 841, 26, ".dr32e_dec", "v_line/dr32e_dec", "case", "841");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[515]), first, "verilog/dr32e_dec.v", 842, 26, ".dr32e_dec", "v_line/dr32e_dec", "case", "842");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[516]), first, "verilog/dr32e_dec.v", 844, 28, ".dr32e_dec", "v_branch/dr32e_dec", "if", "844");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[517]), first, "verilog/dr32e_dec.v", 844, 29, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[518]), first, "verilog/dr32e_dec.v", 844, 26, ".dr32e_dec", "v_line/dr32e_dec", "case", "844");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[519]), first, "verilog/dr32e_dec.v", 847, 32, ".dr32e_dec", "v_line/dr32e_dec", "case", "847");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "verilog/dr32e_dec.v", 848, 32, ".dr32e_dec", "v_line/dr32e_dec", "case", "848");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[521]), first, "verilog/dr32e_dec.v", 849, 32, ".dr32e_dec", "v_line/dr32e_dec", "case", "849");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[522]), first, "verilog/dr32e_dec.v", 850, 32, ".dr32e_dec", "v_line/dr32e_dec", "case", "850");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[523]), first, "verilog/dr32e_dec.v", 851, 32, ".dr32e_dec", "v_line/dr32e_dec", "case", "851");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[524]), first, "verilog/dr32e_dec.v", 853, 23, ".dr32e_dec", "v_branch/dr32e_dec", "if", "853-855");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[525]), first, "verilog/dr32e_dec.v", 853, 24, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[526]), first, "verilog/dr32e_dec.v", 852, 32, ".dr32e_dec", "v_line/dr32e_dec", "case", "852");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[527]), first, "verilog/dr32e_dec.v", 859, 23, ".dr32e_dec", "v_branch/dr32e_dec", "if", "859-861");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[528]), first, "verilog/dr32e_dec.v", 859, 24, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[529]), first, "verilog/dr32e_dec.v", 858, 32, ".dr32e_dec", "v_line/dr32e_dec", "case", "858");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[530]), first, "verilog/dr32e_dec.v", 865, 23, ".dr32e_dec", "v_branch/dr32e_dec", "if", "865-867");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[531]), first, "verilog/dr32e_dec.v", 865, 24, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[532]), first, "verilog/dr32e_dec.v", 864, 32, ".dr32e_dec", "v_line/dr32e_dec", "case", "864");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[533]), first, "verilog/dr32e_dec.v", 871, 23, ".dr32e_dec", "v_branch/dr32e_dec", "if", "871-873");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[534]), first, "verilog/dr32e_dec.v", 871, 24, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[535]), first, "verilog/dr32e_dec.v", 870, 32, ".dr32e_dec", "v_line/dr32e_dec", "case", "870");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[536]), first, "verilog/dr32e_dec.v", 877, 23, ".dr32e_dec", "v_branch/dr32e_dec", "if", "877-879");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[537]), first, "verilog/dr32e_dec.v", 877, 24, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[538]), first, "verilog/dr32e_dec.v", 876, 32, ".dr32e_dec", "v_line/dr32e_dec", "case", "876");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[539]), first, "verilog/dr32e_dec.v", 883, 23, ".dr32e_dec", "v_branch/dr32e_dec", "if", "883-885");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[540]), first, "verilog/dr32e_dec.v", 883, 24, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[541]), first, "verilog/dr32e_dec.v", 882, 32, ".dr32e_dec", "v_line/dr32e_dec", "case", "882");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[542]), first, "verilog/dr32e_dec.v", 888, 21, ".dr32e_dec", "v_line/dr32e_dec", "case", "888");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[543]), first, "verilog/dr32e_dec.v", 845, 26, ".dr32e_dec", "v_line/dr32e_dec", "case", "845-846");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[544]), first, "verilog/dr32e_dec.v", 892, 17, ".dr32e_dec", "v_line/dr32e_dec", "case", "892");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[545]), first, "verilog/dr32e_dec.v", 833, 13, ".dr32e_dec", "v_branch/dr32e_dec", "if", "833-834");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[546]), first, "verilog/dr32e_dec.v", 833, 14, ".dr32e_dec", "v_branch/dr32e_dec", "else", "894-895");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[547]), first, "verilog/dr32e_dec.v", 832, 17, ".dr32e_dec", "v_line/dr32e_dec", "case", "832");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[548]), first, "verilog/dr32e_dec.v", 904, 17, ".dr32e_dec", "v_branch/dr32e_dec", "if", "904-905");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[549]), first, "verilog/dr32e_dec.v", 904, 18, ".dr32e_dec", "v_branch/dr32e_dec", "else", "906-907");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[550]), first, "verilog/dr32e_dec.v", 911, 28, ".dr32e_dec", "v_line/dr32e_dec", "case", "911");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[551]), first, "verilog/dr32e_dec.v", 912, 28, ".dr32e_dec", "v_line/dr32e_dec", "case", "912");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[552]), first, "verilog/dr32e_dec.v", 915, 21, ".dr32e_dec", "v_branch/dr32e_dec", "if", "915");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[553]), first, "verilog/dr32e_dec.v", 915, 22, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[554]), first, "verilog/dr32e_dec.v", 914, 28, ".dr32e_dec", "v_line/dr32e_dec", "case", "914");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[555]), first, "verilog/dr32e_dec.v", 917, 28, ".dr32e_dec", "v_line/dr32e_dec", "case", "917");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[556]), first, "verilog/dr32e_dec.v", 918, 28, ".dr32e_dec", "v_line/dr32e_dec", "case", "918-920");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[557]), first, "verilog/dr32e_dec.v", 922, 28, ".dr32e_dec", "v_line/dr32e_dec", "case", "922");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[558]), first, "verilog/dr32e_dec.v", 923, 28, ".dr32e_dec", "v_line/dr32e_dec", "case", "923");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[559]), first, "verilog/dr32e_dec.v", 927, 23, ".dr32e_dec", "v_branch/dr32e_dec", "if", "927");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[560]), first, "verilog/dr32e_dec.v", 927, 24, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[561]), first, "verilog/dr32e_dec.v", 926, 21, ".dr32e_dec", "v_branch/dr32e_dec", "if", "926");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[562]), first, "verilog/dr32e_dec.v", 926, 22, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[563]), first, "verilog/dr32e_dec.v", 925, 28, ".dr32e_dec", "v_line/dr32e_dec", "case", "925");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[564]), first, "verilog/dr32e_dec.v", 930, 19, ".dr32e_dec", "v_line/dr32e_dec", "case", "930");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[565]), first, "verilog/dr32e_dec.v", 901, 15, ".dr32e_dec", "v_branch/dr32e_dec", "if", "901-903");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[566]), first, "verilog/dr32e_dec.v", 901, 16, ".dr32e_dec", "v_branch/dr32e_dec", "else", "909-910");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[567]), first, "verilog/dr32e_dec.v", 937, 24, ".dr32e_dec", "v_branch/dr32e_dec", "if", "937-938");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[568]), first, "verilog/dr32e_dec.v", 937, 25, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[569]), first, "verilog/dr32e_dec.v", 935, 15, ".dr32e_dec", "v_line/dr32e_dec", "elsif", "935-936");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[570]), first, "verilog/dr32e_dec.v", 900, 13, ".dr32e_dec", "v_branch/dr32e_dec", "if", "900");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[571]), first, "verilog/dr32e_dec.v", 900, 14, ".dr32e_dec", "v_branch/dr32e_dec", "else", "934");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[572]), first, "verilog/dr32e_dec.v", 899, 17, ".dr32e_dec", "v_line/dr32e_dec", "case", "899");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[573]), first, "verilog/dr32e_dec.v", 943, 11, ".dr32e_dec", "v_line/dr32e_dec", "case", "943");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[574]), first, "verilog/dr32e_dec.v", 819, 20, ".dr32e_dec", "v_line/dr32e_dec", "case", "819-822,824");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[575]), first, "verilog/dr32e_dec.v", 957, 17, ".dr32e_dec", "v_branch/dr32e_dec", "if", "957-958");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[576]), first, "verilog/dr32e_dec.v", 957, 18, ".dr32e_dec", "v_branch/dr32e_dec", "else", "959-960");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[577]), first, "verilog/dr32e_dec.v", 954, 30, ".dr32e_dec", "v_line/dr32e_dec", "case", "954-956");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[578]), first, "verilog/dr32e_dec.v", 966, 17, ".dr32e_dec", "v_branch/dr32e_dec", "if", "966-967");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[579]), first, "verilog/dr32e_dec.v", 966, 18, ".dr32e_dec", "v_branch/dr32e_dec", "else", "968-969");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[580]), first, "verilog/dr32e_dec.v", 963, 30, ".dr32e_dec", "v_line/dr32e_dec", "case", "963-965");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[581]), first, "verilog/dr32e_dec.v", 975, 17, ".dr32e_dec", "v_branch/dr32e_dec", "if", "975-976");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[582]), first, "verilog/dr32e_dec.v", 975, 18, ".dr32e_dec", "v_branch/dr32e_dec", "else", "977-978");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[583]), first, "verilog/dr32e_dec.v", 972, 30, ".dr32e_dec", "v_line/dr32e_dec", "case", "972-974");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[584]), first, "verilog/dr32e_dec.v", 984, 17, ".dr32e_dec", "v_branch/dr32e_dec", "if", "984-985");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[585]), first, "verilog/dr32e_dec.v", 984, 18, ".dr32e_dec", "v_branch/dr32e_dec", "else", "986-987");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[586]), first, "verilog/dr32e_dec.v", 981, 30, ".dr32e_dec", "v_line/dr32e_dec", "case", "981-983");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "verilog/dr32e_dec.v", 990, 15, ".dr32e_dec", "v_line/dr32e_dec", "case", "990");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[588]), first, "verilog/dr32e_dec.v", 952, 11, ".dr32e_dec", "v_branch/dr32e_dec", "if", "952-953");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[589]), first, "verilog/dr32e_dec.v", 952, 12, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[590]), first, "verilog/dr32e_dec.v", 996, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "996");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[591]), first, "verilog/dr32e_dec.v", 997, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "997");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[592]), first, "verilog/dr32e_dec.v", 998, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "998");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[593]), first, "verilog/dr32e_dec.v", 999, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "999");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[594]), first, "verilog/dr32e_dec.v", 1000, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1000");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[595]), first, "verilog/dr32e_dec.v", 1001, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1001");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[596]), first, "verilog/dr32e_dec.v", 1002, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1002");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[597]), first, "verilog/dr32e_dec.v", 1003, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1003");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[598]), first, "verilog/dr32e_dec.v", 1004, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1004");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[599]), first, "verilog/dr32e_dec.v", 1005, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1005");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[600]), first, "verilog/dr32e_dec.v", 1009, 15, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1009-1011");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[601]), first, "verilog/dr32e_dec.v", 1009, 16, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[602]), first, "verilog/dr32e_dec.v", 1008, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1008");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[603]), first, "verilog/dr32e_dec.v", 1015, 15, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1015-1017");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[604]), first, "verilog/dr32e_dec.v", 1015, 16, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[605]), first, "verilog/dr32e_dec.v", 1014, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1014");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[606]), first, "verilog/dr32e_dec.v", 1021, 36, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1021");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[607]), first, "verilog/dr32e_dec.v", 1021, 37, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[608]), first, "verilog/dr32e_dec.v", 1021, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1021");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[609]), first, "verilog/dr32e_dec.v", 1022, 36, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1022");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[610]), first, "verilog/dr32e_dec.v", 1022, 37, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[611]), first, "verilog/dr32e_dec.v", 1022, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1022");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[612]), first, "verilog/dr32e_dec.v", 1023, 36, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1023");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[613]), first, "verilog/dr32e_dec.v", 1023, 37, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[614]), first, "verilog/dr32e_dec.v", 1023, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1023");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[615]), first, "verilog/dr32e_dec.v", 1024, 36, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1024");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[616]), first, "verilog/dr32e_dec.v", 1024, 37, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[617]), first, "verilog/dr32e_dec.v", 1024, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1024");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[618]), first, "verilog/dr32e_dec.v", 1026, 36, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1026");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[619]), first, "verilog/dr32e_dec.v", 1026, 37, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[620]), first, "verilog/dr32e_dec.v", 1026, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1026");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[621]), first, "verilog/dr32e_dec.v", 1027, 36, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1027");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[622]), first, "verilog/dr32e_dec.v", 1027, 37, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[623]), first, "verilog/dr32e_dec.v", 1027, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1027");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[624]), first, "verilog/dr32e_dec.v", 1028, 36, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1028");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[625]), first, "verilog/dr32e_dec.v", 1028, 37, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[626]), first, "verilog/dr32e_dec.v", 1028, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1028");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[627]), first, "verilog/dr32e_dec.v", 1030, 36, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1030");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[628]), first, "verilog/dr32e_dec.v", 1030, 37, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[629]), first, "verilog/dr32e_dec.v", 1030, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1030");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[630]), first, "verilog/dr32e_dec.v", 1031, 36, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1031");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[631]), first, "verilog/dr32e_dec.v", 1031, 37, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[632]), first, "verilog/dr32e_dec.v", 1031, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1031");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[633]), first, "verilog/dr32e_dec.v", 1032, 36, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1032");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[634]), first, "verilog/dr32e_dec.v", 1032, 37, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[635]), first, "verilog/dr32e_dec.v", 1032, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1032");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[636]), first, "verilog/dr32e_dec.v", 1035, 36, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1035");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[637]), first, "verilog/dr32e_dec.v", 1035, 37, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[638]), first, "verilog/dr32e_dec.v", 1035, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1035");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[639]), first, "verilog/dr32e_dec.v", 1036, 36, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1036");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[640]), first, "verilog/dr32e_dec.v", 1036, 37, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[641]), first, "verilog/dr32e_dec.v", 1036, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1036");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[642]), first, "verilog/dr32e_dec.v", 1037, 36, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1037");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[643]), first, "verilog/dr32e_dec.v", 1037, 37, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[644]), first, "verilog/dr32e_dec.v", 1037, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1037");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[645]), first, "verilog/dr32e_dec.v", 1040, 36, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1040");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[646]), first, "verilog/dr32e_dec.v", 1040, 37, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[647]), first, "verilog/dr32e_dec.v", 1040, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1040");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[648]), first, "verilog/dr32e_dec.v", 1041, 36, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1041");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[649]), first, "verilog/dr32e_dec.v", 1041, 37, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[650]), first, "verilog/dr32e_dec.v", 1041, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1041");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[651]), first, "verilog/dr32e_dec.v", 1042, 36, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1042");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[652]), first, "verilog/dr32e_dec.v", 1042, 37, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[653]), first, "verilog/dr32e_dec.v", 1042, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1042");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[654]), first, "verilog/dr32e_dec.v", 1043, 36, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1043");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[655]), first, "verilog/dr32e_dec.v", 1043, 37, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[656]), first, "verilog/dr32e_dec.v", 1043, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1043");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[657]), first, "verilog/dr32e_dec.v", 1046, 36, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1046");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[658]), first, "verilog/dr32e_dec.v", 1046, 37, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[659]), first, "verilog/dr32e_dec.v", 1046, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1046");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[660]), first, "verilog/dr32e_dec.v", 1049, 36, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1049");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[661]), first, "verilog/dr32e_dec.v", 1049, 37, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[662]), first, "verilog/dr32e_dec.v", 1049, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1049");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[663]), first, "verilog/dr32e_dec.v", 1050, 36, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1050");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[664]), first, "verilog/dr32e_dec.v", 1050, 37, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[665]), first, "verilog/dr32e_dec.v", 1050, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1050");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[666]), first, "verilog/dr32e_dec.v", 1052, 15, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1052");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[667]), first, "verilog/dr32e_dec.v", 1052, 16, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[668]), first, "verilog/dr32e_dec.v", 1051, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1051");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[669]), first, "verilog/dr32e_dec.v", 1055, 15, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1055");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[670]), first, "verilog/dr32e_dec.v", 1055, 16, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[671]), first, "verilog/dr32e_dec.v", 1054, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1054");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[672]), first, "verilog/dr32e_dec.v", 1058, 15, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1058");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[673]), first, "verilog/dr32e_dec.v", 1058, 16, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[674]), first, "verilog/dr32e_dec.v", 1057, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1057");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[675]), first, "verilog/dr32e_dec.v", 1061, 15, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1061");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[676]), first, "verilog/dr32e_dec.v", 1061, 16, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[677]), first, "verilog/dr32e_dec.v", 1060, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1060");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[678]), first, "verilog/dr32e_dec.v", 1064, 15, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1064");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[679]), first, "verilog/dr32e_dec.v", 1064, 16, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[680]), first, "verilog/dr32e_dec.v", 1063, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1063");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[681]), first, "verilog/dr32e_dec.v", 1067, 15, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1067");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[682]), first, "verilog/dr32e_dec.v", 1067, 16, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[683]), first, "verilog/dr32e_dec.v", 1066, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1066");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[684]), first, "verilog/dr32e_dec.v", 1070, 15, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1070");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[685]), first, "verilog/dr32e_dec.v", 1070, 16, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[686]), first, "verilog/dr32e_dec.v", 1069, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1069");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[687]), first, "verilog/dr32e_dec.v", 1075, 15, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1075");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[688]), first, "verilog/dr32e_dec.v", 1075, 16, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[689]), first, "verilog/dr32e_dec.v", 1074, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1074");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[690]), first, "verilog/dr32e_dec.v", 1078, 15, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1078");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[691]), first, "verilog/dr32e_dec.v", 1078, 16, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[692]), first, "verilog/dr32e_dec.v", 1077, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1077");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[693]), first, "verilog/dr32e_dec.v", 1081, 15, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1081");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[694]), first, "verilog/dr32e_dec.v", 1081, 16, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[695]), first, "verilog/dr32e_dec.v", 1080, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1080");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[696]), first, "verilog/dr32e_dec.v", 1086, 15, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1086-1088");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[697]), first, "verilog/dr32e_dec.v", 1086, 16, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[698]), first, "verilog/dr32e_dec.v", 1085, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1085");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[699]), first, "verilog/dr32e_dec.v", 1092, 15, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1092-1094");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[700]), first, "verilog/dr32e_dec.v", 1092, 16, ".dr32e_dec", "v_branch/dr32e_dec", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[701]), first, "verilog/dr32e_dec.v", 1091, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1091");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[702]), first, "verilog/dr32e_dec.v", 1099, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1099-1101");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[703]), first, "verilog/dr32e_dec.v", 1103, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1103-1105");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[704]), first, "verilog/dr32e_dec.v", 1107, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1107-1109");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[705]), first, "verilog/dr32e_dec.v", 1111, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1111-1113");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[706]), first, "verilog/dr32e_dec.v", 1115, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1115-1117");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[707]), first, "verilog/dr32e_dec.v", 1119, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1119-1121");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[708]), first, "verilog/dr32e_dec.v", 1123, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1123-1125");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[709]), first, "verilog/dr32e_dec.v", 1127, 34, ".dr32e_dec", "v_line/dr32e_dec", "case", "1127-1129");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[710]), first, "verilog/dr32e_dec.v", 1132, 13, ".dr32e_dec", "v_line/dr32e_dec", "case", "1132");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[711]), first, "verilog/dr32e_dec.v", 951, 9, ".dr32e_dec", "v_branch/dr32e_dec", "if", "951");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[712]), first, "verilog/dr32e_dec.v", 951, 10, ".dr32e_dec", "v_branch/dr32e_dec", "else", "993-994");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[713]), first, "verilog/dr32e_dec.v", 947, 16, ".dr32e_dec", "v_line/dr32e_dec", "case", "947-949");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[714]), first, "verilog/dr32e_dec.v", 1143, 17, ".dr32e_dec", "v_line/dr32e_dec", "case", "1143,1145-1147");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[715]), first, "verilog/dr32e_dec.v", 1151, 13, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1151-1153");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[716]), first, "verilog/dr32e_dec.v", 1151, 14, ".dr32e_dec", "v_branch/dr32e_dec", "else", "1154-1158");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[717]), first, "verilog/dr32e_dec.v", 1149, 17, ".dr32e_dec", "v_line/dr32e_dec", "case", "1149");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[718]), first, "verilog/dr32e_dec.v", 1161, 11, ".dr32e_dec", "v_line/dr32e_dec", "case", "1161");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[719]), first, "verilog/dr32e_dec.v", 1141, 22, ".dr32e_dec", "v_line/dr32e_dec", "case", "1141-1142");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[720]), first, "verilog/dr32e_dec.v", 1176, 11, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1176,1178");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[721]), first, "verilog/dr32e_dec.v", 1176, 12, ".dr32e_dec", "v_branch/dr32e_dec", "else", "1179-1180");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[722]), first, "verilog/dr32e_dec.v", 1166, 9, ".dr32e_dec", "v_branch/dr32e_dec", "if", "1166,1168-1169");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[723]), first, "verilog/dr32e_dec.v", 1166, 10, ".dr32e_dec", "v_branch/dr32e_dec", "else", "1170,1172-1174");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[724]), first, "verilog/dr32e_dec.v", 1165, 20, ".dr32e_dec", "v_line/dr32e_dec", "case", "1165");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[725]), first, "verilog/dr32e_dec.v", 1185, 7, ".dr32e_dec", "v_line/dr32e_dec", "case", "1185");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[726]), first, "verilog/dr32e_dec.v", 672, 3, ".dr32e_dec", "v_line/dr32e_dec", "block", "672-675,677-678,680-681,684,686-689,691");
}
