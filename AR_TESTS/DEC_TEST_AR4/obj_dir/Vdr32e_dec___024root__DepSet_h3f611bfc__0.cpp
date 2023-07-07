// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdr32e_dec.h for the primary calling header

#include "verilated.h"

#include "Vdr32e_dec__Syms.h"
#include "Vdr32e_dec__Syms.h"
#include "Vdr32e_dec___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdr32e_dec___024root___dump_triggers__ico(Vdr32e_dec___024root* vlSelf);
#endif  // VL_DEBUG

void Vdr32e_dec___024root___eval_triggers__ico(Vdr32e_dec___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_dec___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdr32e_dec___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vdr32e_dec___024root___ico_sequent__TOP__0(Vdr32e_dec___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_dec___024root___ico_sequent__TOP__0\n"); );
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

VL_INLINE_OPT void Vdr32e_dec___024root___ico_sequent__TOP__1(Vdr32e_dec___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_dec___024root___ico_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->illegal_c_insn_i) {
        vlSelf->dr32e_dec__DOT__illegal_insn = 1U;
    }
    if (vlSelf->dr32e_dec__DOT__illegal_insn) {
        vlSelf->dr32e_dec__DOT__rf_we = 0U;
        vlSelf->data_req_o = 0U;
        vlSelf->data_we_o = 0U;
        vlSelf->jump_in_dec_o = 0U;
        vlSelf->jump_set_o = 0U;
        vlSelf->branch_in_dec_o = 0U;
        vlSelf->csr_access_o = 0U;
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
    }
    vlSelf->imm_s_type_o = (((- (IData)((vlSelf->instr_rdata_i 
                                         >> 0x1fU))) 
                             << 0xcU) | ((0xfe0U & 
                                          (vlSelf->instr_rdata_i 
                                           >> 0x14U)) 
                                         | (IData)(vlSelf->rf_waddr_o)));
    if (((IData)(vlSelf->jump_in_dec_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__jump_in_dec_o))) {
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__jump_in_dec_o 
            = vlSelf->jump_in_dec_o;
    }
    if (((IData)(vlSelf->jump_set_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__jump_set_o))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__jump_set_o 
            = vlSelf->jump_set_o;
    }
    if (((IData)(vlSelf->branch_in_dec_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__branch_in_dec_o))) {
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__branch_in_dec_o 
            = vlSelf->branch_in_dec_o;
    }
    if (((IData)(vlSelf->icache_inval_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__icache_inval_o))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__icache_inval_o 
            = vlSelf->icache_inval_o;
    }
    if (((IData)(vlSelf->rf_wdata_sel_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__rf_wdata_sel_o))) {
        vlSymsp->__Vcoverage[278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__rf_wdata_sel_o 
            = vlSelf->rf_wdata_sel_o;
    }
    if (((IData)(vlSelf->rf_ren_a_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__rf_ren_a_o))) {
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__rf_ren_a_o 
            = vlSelf->rf_ren_a_o;
    }
    if (((IData)(vlSelf->rf_ren_b_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__rf_ren_b_o))) {
        vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__rf_ren_b_o 
            = vlSelf->rf_ren_b_o;
    }
    if (((IData)(vlSelf->csr_access_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__csr_access_o))) {
        vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__csr_access_o 
            = vlSelf->csr_access_o;
    }
    if (((IData)(vlSelf->dr32e_dec__DOT__csr_illegal) 
         ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__csr_illegal))) {
        vlSymsp->__Vcoverage[328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__csr_illegal 
            = vlSelf->dr32e_dec__DOT__csr_illegal;
    }
    if (((IData)(vlSelf->data_we_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__data_we_o))) {
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__data_we_o 
            = vlSelf->data_we_o;
    }
    if (((IData)(vlSelf->data_sign_extension_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__data_sign_extension_o))) {
        vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__data_sign_extension_o 
            = vlSelf->data_sign_extension_o;
    }
    if (((IData)(vlSelf->data_req_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__data_req_o))) {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__data_req_o 
            = vlSelf->data_req_o;
    }
    if (((IData)(vlSelf->ebrk_insn_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__ebrk_insn_o))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__ebrk_insn_o 
            = vlSelf->ebrk_insn_o;
    }
    if (((IData)(vlSelf->mret_insn_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__mret_insn_o))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__mret_insn_o 
            = vlSelf->mret_insn_o;
    }
    if (((IData)(vlSelf->dret_insn_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__dret_insn_o))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__dret_insn_o 
            = vlSelf->dret_insn_o;
    }
    if (((IData)(vlSelf->ecall_insn_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__ecall_insn_o))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__ecall_insn_o 
            = vlSelf->ecall_insn_o;
    }
    if (((IData)(vlSelf->wfi_insn_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__wfi_insn_o))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__wfi_insn_o 
            = vlSelf->wfi_insn_o;
    }
    if ((1U & ((IData)(vlSelf->multdiv_operator_o) 
               ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__multdiv_operator_o)))) {
        vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__multdiv_operator_o 
            = ((2U & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__multdiv_operator_o)) 
               | (1U & (IData)(vlSelf->multdiv_operator_o)));
    }
    if ((2U & ((IData)(vlSelf->multdiv_operator_o) 
               ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__multdiv_operator_o)))) {
        vlSymsp->__Vcoverage[313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__multdiv_operator_o 
            = ((1U & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__multdiv_operator_o)) 
               | (2U & (IData)(vlSelf->multdiv_operator_o)));
    }
    if ((1U & ((IData)(vlSelf->multdiv_signed_mode_o) 
               ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__multdiv_signed_mode_o)))) {
        vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__multdiv_signed_mode_o 
            = ((2U & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__multdiv_signed_mode_o)) 
               | (1U & (IData)(vlSelf->multdiv_signed_mode_o)));
    }
    if ((2U & ((IData)(vlSelf->multdiv_signed_mode_o) 
               ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__multdiv_signed_mode_o)))) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__multdiv_signed_mode_o 
            = ((1U & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__multdiv_signed_mode_o)) 
               | (2U & (IData)(vlSelf->multdiv_signed_mode_o)));
    }
    if ((1U & ((IData)(vlSelf->data_type_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__data_type_o)))) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__data_type_o 
            = ((2U & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__data_type_o)) 
               | (1U & (IData)(vlSelf->data_type_o)));
    }
    if ((2U & ((IData)(vlSelf->data_type_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__data_type_o)))) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__data_type_o 
            = ((1U & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__data_type_o)) 
               | (2U & (IData)(vlSelf->data_type_o)));
    }
    if (((IData)(vlSelf->dr32e_dec__DOT__rf_we) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__rf_we))) {
        vlSymsp->__Vcoverage[329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__rf_we = vlSelf->dr32e_dec__DOT__rf_we;
    }
    vlSelf->rf_we_o = vlSelf->dr32e_dec__DOT__rf_we;
    if ((1U & (~ (IData)(((0U == (0xf8000U & vlSelf->instr_rdata_i)) 
                          & ((2U == (IData)(vlSelf->dr32e_dec__DOT__csr_op)) 
                             | (3U == (IData)(vlSelf->dr32e_dec__DOT__csr_op)))))))) {
        vlSymsp->__Vcoverage[367].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & ((IData)(vlSelf->dr32e_dec__DOT__csr_op) 
               ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__csr_op)))) {
        vlSymsp->__Vcoverage[350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__csr_op = 
            ((2U & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__csr_op)) 
             | (1U & (IData)(vlSelf->dr32e_dec__DOT__csr_op)));
    }
    if ((2U & ((IData)(vlSelf->dr32e_dec__DOT__csr_op) 
               ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__csr_op)))) {
        vlSymsp->__Vcoverage[351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__csr_op = 
            ((1U & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__csr_op)) 
             | (2U & (IData)(vlSelf->dr32e_dec__DOT__csr_op)));
    }
    vlSelf->csr_op_o = vlSelf->dr32e_dec__DOT__csr_op;
    if ((IData)(((0U == (0xf8000U & vlSelf->instr_rdata_i)) 
                 & ((2U == (IData)(vlSelf->dr32e_dec__DOT__csr_op)) 
                    | (3U == (IData)(vlSelf->dr32e_dec__DOT__csr_op)))))) {
        vlSymsp->__Vcoverage[366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->csr_op_o = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->dr32e_dec__DOT__illegal_insn)))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->dr32e_dec__DOT__illegal_insn) 
         ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__illegal_insn))) {
        vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__illegal_insn 
            = vlSelf->dr32e_dec__DOT__illegal_insn;
    }
    vlSelf->illegal_insn_o = vlSelf->dr32e_dec__DOT__illegal_insn;
    vlSelf->mult_en_o = ((~ (IData)(vlSelf->dr32e_dec__DOT__illegal_insn)) 
                         & (IData)(vlSelf->mult_sel_o));
    vlSelf->div_en_o = ((~ (IData)(vlSelf->dr32e_dec__DOT__illegal_insn)) 
                        & (IData)(vlSelf->div_sel_o));
    if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlSelf->dr32e_dec__DOT__opcode)))) {
                                vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                                vlSymsp->__Vcoverage[395].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                                vlSymsp->__Vcoverage[428].fetch_add(1, std::memory_order_relaxed);
                                if ((0x4000U & vlSelf->instr_rdata_i)) {
                                    if ((1U & (~ (vlSelf->instr_rdata_i 
                                                  >> 0xdU)))) {
                                        if ((0x1000U 
                                             & vlSelf->instr_rdata_i)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->instr_rdata_i 
                                                     >> 0x1aU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->instr_rdata_i 
                                                         >> 0x1fU)))) {
                                                    if (
                                                        (0x40000000U 
                                                         & vlSelf->instr_rdata_i)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->instr_rdata_i 
                                                                 >> 0x1dU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->instr_rdata_i 
                                                                     >> 0x1cU)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->instr_rdata_i 
                                                                         >> 0x1bU)))) {
                                                                    vlSymsp->__Vcoverage[409].fetch_add(1, std::memory_order_relaxed);
                                                                }
                                                                if (
                                                                    (0x8000000U 
                                                                     & vlSelf->instr_rdata_i)) {
                                                                    vlSymsp->__Vcoverage[411].fetch_add(1, std::memory_order_relaxed);
                                                                }
                                                            }
                                                            if (
                                                                (0x10000000U 
                                                                 & vlSelf->instr_rdata_i)) {
                                                                vlSymsp->__Vcoverage[423].fetch_add(1, std::memory_order_relaxed);
                                                            }
                                                        }
                                                        if (
                                                            (0x20000000U 
                                                             & vlSelf->instr_rdata_i)) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->instr_rdata_i 
                                                                     >> 0x1cU)))) {
                                                                if (
                                                                    (0x8000000U 
                                                                     & vlSelf->instr_rdata_i)) {
                                                                    vlSymsp->__Vcoverage[415].fetch_add(1, std::memory_order_relaxed);
                                                                    vlSymsp->__Vcoverage[413].fetch_add(1, std::memory_order_relaxed);
                                                                }
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->instr_rdata_i 
                                                                         >> 0x1bU)))) {
                                                                    vlSymsp->__Vcoverage[411].fetch_add(1, std::memory_order_relaxed);
                                                                }
                                                            }
                                                            if (
                                                                (0x10000000U 
                                                                 & vlSelf->instr_rdata_i)) {
                                                                vlSymsp->__Vcoverage[423].fetch_add(1, std::memory_order_relaxed);
                                                            }
                                                        }
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->instr_rdata_i 
                                                             >> 0x1eU)))) {
                                                        if (
                                                            (0x20000000U 
                                                             & vlSelf->instr_rdata_i)) {
                                                            if (
                                                                (0x10000000U 
                                                                 & vlSelf->instr_rdata_i)) {
                                                                vlSymsp->__Vcoverage[423].fetch_add(1, std::memory_order_relaxed);
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->instr_rdata_i 
                                                                     >> 0x1cU)))) {
                                                                if (
                                                                    (0x8000000U 
                                                                     & vlSelf->instr_rdata_i)) {
                                                                    vlSymsp->__Vcoverage[419].fetch_add(1, std::memory_order_relaxed);
                                                                    if (
                                                                        (7U 
                                                                         == (IData)(vlSelf->rf_raddr_b_o))) {
                                                                        vlSymsp->__Vcoverage[416].fetch_add(1, std::memory_order_relaxed);
                                                                    }
                                                                    if (
                                                                        (7U 
                                                                         != (IData)(vlSelf->rf_raddr_b_o))) {
                                                                        vlSymsp->__Vcoverage[417].fetch_add(1, std::memory_order_relaxed);
                                                                    }
                                                                }
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->instr_rdata_i 
                                                                         >> 0x1bU)))) {
                                                                    vlSymsp->__Vcoverage[410].fetch_add(1, std::memory_order_relaxed);
                                                                }
                                                            }
                                                        }
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->instr_rdata_i 
                                                                 >> 0x1dU)))) {
                                                            if (
                                                                (0x10000000U 
                                                                 & vlSelf->instr_rdata_i)) {
                                                                vlSymsp->__Vcoverage[423].fetch_add(1, std::memory_order_relaxed);
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->instr_rdata_i 
                                                                     >> 0x1cU)))) {
                                                                if (
                                                                    (0x8000000U 
                                                                     & vlSelf->instr_rdata_i)) {
                                                                    if (
                                                                        (0x4000000U 
                                                                         & vlSelf->instr_rdata_i)) {
                                                                        vlSymsp->__Vcoverage[421].fetch_add(1, std::memory_order_relaxed);
                                                                    }
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_i 
                                                                             >> 0x1aU)))) {
                                                                        vlSymsp->__Vcoverage[420].fetch_add(1, std::memory_order_relaxed);
                                                                    }
                                                                    vlSymsp->__Vcoverage[422].fetch_add(1, std::memory_order_relaxed);
                                                                }
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->instr_rdata_i 
                                                                         >> 0x1bU)))) {
                                                                    vlSymsp->__Vcoverage[409].fetch_add(1, std::memory_order_relaxed);
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                if (
                                                    (vlSelf->instr_rdata_i 
                                                     >> 0x1fU)) {
                                                    vlSymsp->__Vcoverage[423].fetch_add(1, std::memory_order_relaxed);
                                                }
                                                vlSymsp->__Vcoverage[425].fetch_add(1, std::memory_order_relaxed);
                                            }
                                            if ((0x4000000U 
                                                 & vlSelf->instr_rdata_i)) {
                                                vlSymsp->__Vcoverage[424].fetch_add(1, std::memory_order_relaxed);
                                            }
                                            vlSymsp->__Vcoverage[426].fetch_add(1, std::memory_order_relaxed);
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->instr_rdata_i 
                                                    >> 0xcU)))) {
                                            vlSymsp->__Vcoverage[396].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                    if ((0x2000U & vlSelf->instr_rdata_i)) {
                                        vlSymsp->__Vcoverage[396].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((1U & (~ (vlSelf->instr_rdata_i 
                                              >> 0xeU)))) {
                                    if ((1U & (~ (vlSelf->instr_rdata_i 
                                                  >> 0xdU)))) {
                                        if ((0x1000U 
                                             & vlSelf->instr_rdata_i)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->instr_rdata_i 
                                                     >> 0x1fU)))) {
                                                if (
                                                    (0x40000000U 
                                                     & vlSelf->instr_rdata_i)) {
                                                    if (
                                                        (0x20000000U 
                                                         & vlSelf->instr_rdata_i)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->instr_rdata_i 
                                                                 >> 0x1cU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->instr_rdata_i 
                                                                     >> 0x1bU)))) {
                                                                vlSymsp->__Vcoverage[406].fetch_add(1, std::memory_order_relaxed);
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->instr_rdata_i 
                                                                         >> 0x1aU)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_i 
                                                                             >> 0x19U)))) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_i 
                                                                                >> 0x18U)))) {
                                                                            if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->instr_rdata_i 
                                                                                >> 0x17U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->instr_rdata_i 
                                                                                >> 0x16U)))) {
                                                                                if (
                                                                                (0x200000U 
                                                                                & vlSelf->instr_rdata_i)) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->instr_rdata_i 
                                                                                >> 0x14U)))) {
                                                                                vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (0x100000U 
                                                                                & vlSelf->instr_rdata_i)) {
                                                                                vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->instr_rdata_i 
                                                                                >> 0x15U)))) {
                                                                                vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x400000U 
                                                                                & vlSelf->instr_rdata_i)) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->instr_rdata_i 
                                                                                >> 0x15U)))) {
                                                                                vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (0x200000U 
                                                                                & vlSelf->instr_rdata_i)) {
                                                                                vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                            }
                                                                            if (
                                                                                (0x800000U 
                                                                                & vlSelf->instr_rdata_i)) {
                                                                                vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
                                                                            }
                                                                        }
                                                                        if (
                                                                            (0x1000000U 
                                                                             & vlSelf->instr_rdata_i)) {
                                                                            if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->instr_rdata_i 
                                                                                >> 0x16U)))) {
                                                                                if (
                                                                                (0x200000U 
                                                                                & vlSelf->instr_rdata_i)) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->instr_rdata_i 
                                                                                >> 0x14U)))) {
                                                                                vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (0x100000U 
                                                                                & vlSelf->instr_rdata_i)) {
                                                                                vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->instr_rdata_i 
                                                                                >> 0x15U)))) {
                                                                                vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                            }
                                                                            if (
                                                                                (0x400000U 
                                                                                & vlSelf->instr_rdata_i)) {
                                                                                vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
                                                                            }
                                                                        }
                                                                    }
                                                                    if (
                                                                        (0x2000000U 
                                                                         & vlSelf->instr_rdata_i)) {
                                                                        vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
                                                                    }
                                                                }
                                                                if (
                                                                    (0x4000000U 
                                                                     & vlSelf->instr_rdata_i)) {
                                                                    vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
                                                                }
                                                            }
                                                            if (
                                                                (0x8000000U 
                                                                 & vlSelf->instr_rdata_i)) {
                                                                vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
                                                            }
                                                        }
                                                        if (
                                                            (0x10000000U 
                                                             & vlSelf->instr_rdata_i)) {
                                                            vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
                                                        }
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->instr_rdata_i 
                                                             >> 0x1dU)))) {
                                                        if (
                                                            (0x10000000U 
                                                             & vlSelf->instr_rdata_i)) {
                                                            vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
                                                        }
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->instr_rdata_i 
                                                                 >> 0x1cU)))) {
                                                            if (
                                                                (0x8000000U 
                                                                 & vlSelf->instr_rdata_i)) {
                                                                vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->instr_rdata_i 
                                                                     >> 0x1bU)))) {
                                                                vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
                                                            }
                                                        }
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->instr_rdata_i 
                                                         >> 0x1eU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->instr_rdata_i 
                                                             >> 0x1dU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->instr_rdata_i 
                                                                 >> 0x1cU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->instr_rdata_i 
                                                                     >> 0x1bU)))) {
                                                                vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
                                                            }
                                                            if (
                                                                (0x8000000U 
                                                                 & vlSelf->instr_rdata_i)) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->instr_rdata_i 
                                                                         >> 0x1aU)))) {
                                                                    vlSymsp->__Vcoverage[400].fetch_add(1, std::memory_order_relaxed);
                                                                }
                                                                if (
                                                                    (0x4000000U 
                                                                     & vlSelf->instr_rdata_i)) {
                                                                    vlSymsp->__Vcoverage[401].fetch_add(1, std::memory_order_relaxed);
                                                                }
                                                                vlSymsp->__Vcoverage[402].fetch_add(1, std::memory_order_relaxed);
                                                            }
                                                        }
                                                        if (
                                                            (0x10000000U 
                                                             & vlSelf->instr_rdata_i)) {
                                                            vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
                                                        }
                                                    }
                                                    if (
                                                        (0x20000000U 
                                                         & vlSelf->instr_rdata_i)) {
                                                        if (
                                                            (0x10000000U 
                                                             & vlSelf->instr_rdata_i)) {
                                                            vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
                                                        }
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->instr_rdata_i 
                                                                 >> 0x1cU)))) {
                                                            if (
                                                                (0x8000000U 
                                                                 & vlSelf->instr_rdata_i)) {
                                                                vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->instr_rdata_i 
                                                                     >> 0x1bU)))) {
                                                                vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            if ((vlSelf->instr_rdata_i 
                                                 >> 0x1fU)) {
                                                vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
                                            }
                                            vlSymsp->__Vcoverage[408].fetch_add(1, std::memory_order_relaxed);
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->instr_rdata_i 
                                                    >> 0xcU)))) {
                                            vlSymsp->__Vcoverage[396].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                    if ((0x2000U & vlSelf->instr_rdata_i)) {
                                        vlSymsp->__Vcoverage[396].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                            }
                            if ((1U & (~ (IData)(vlSelf->dr32e_dec__DOT__opcode)))) {
                                vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
                if ((8U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                    vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlSelf->dr32e_dec__DOT__opcode)))) {
                                vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                                vlSymsp->__Vcoverage[393].fetch_add(1, std::memory_order_relaxed);
                                if ((0U != (3U & (vlSelf->instr_rdata_i 
                                                  >> 0xcU)))) {
                                    if ((1U != (3U 
                                                & (vlSelf->instr_rdata_i 
                                                   >> 0xcU)))) {
                                        if ((2U == 
                                             (3U & 
                                              (vlSelf->instr_rdata_i 
                                               >> 0xcU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->instr_rdata_i 
                                                     >> 0xeU)))) {
                                                vlSymsp->__Vcoverage[390].fetch_add(1, std::memory_order_relaxed);
                                            }
                                            if ((0x4000U 
                                                 & vlSelf->instr_rdata_i)) {
                                                vlSymsp->__Vcoverage[389].fetch_add(1, std::memory_order_relaxed);
                                            }
                                            vlSymsp->__Vcoverage[391].fetch_add(1, std::memory_order_relaxed);
                                        }
                                        if ((2U != 
                                             (3U & 
                                              (vlSelf->instr_rdata_i 
                                               >> 0xcU)))) {
                                            vlSymsp->__Vcoverage[392].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                    if ((1U == (3U 
                                                & (vlSelf->instr_rdata_i 
                                                   >> 0xcU)))) {
                                        vlSymsp->__Vcoverage[388].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0U == (3U & (vlSelf->instr_rdata_i 
                                                  >> 0xcU)))) {
                                    vlSymsp->__Vcoverage[387].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((8U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                    if ((4U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                                vlSymsp->__Vcoverage[450].fetch_add(1, std::memory_order_relaxed);
                                if ((0U != (7U & (vlSelf->instr_rdata_i 
                                                  >> 0xcU)))) {
                                    if ((1U != (7U 
                                                & (vlSelf->instr_rdata_i 
                                                   >> 0xcU)))) {
                                        vlSymsp->__Vcoverage[449].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if ((1U == (7U 
                                                & (vlSelf->instr_rdata_i 
                                                   >> 0xcU)))) {
                                        vlSymsp->__Vcoverage[448].fetch_add(1, std::memory_order_relaxed);
                                        if (vlSelf->instr_first_cycle_i) {
                                            vlSymsp->__Vcoverage[446].fetch_add(1, std::memory_order_relaxed);
                                        }
                                        if ((1U & (~ (IData)(vlSelf->instr_first_cycle_i)))) {
                                            vlSymsp->__Vcoverage[447].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                }
                                if ((0U == (7U & (vlSelf->instr_rdata_i 
                                                  >> 0xcU)))) {
                                    vlSymsp->__Vcoverage[445].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((1U & (~ (IData)(vlSelf->dr32e_dec__DOT__opcode)))) {
                                vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
                                  >> 2U)))) {
                        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
                    }
                }
            }
        }
        if ((0x20U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                                vlSymsp->__Vcoverage[386].fetch_add(1, std::memory_order_relaxed);
                                if ((0U != (3U & (vlSelf->instr_rdata_i 
                                                  >> 0xcU)))) {
                                    if ((1U != (3U 
                                                & (vlSelf->instr_rdata_i 
                                                   >> 0xcU)))) {
                                        if ((2U == 
                                             (3U & 
                                              (vlSelf->instr_rdata_i 
                                               >> 0xcU)))) {
                                            vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
                                        }
                                        if ((2U != 
                                             (3U & 
                                              (vlSelf->instr_rdata_i 
                                               >> 0xcU)))) {
                                            vlSymsp->__Vcoverage[385].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                    if ((1U == (3U 
                                                & (vlSelf->instr_rdata_i 
                                                   >> 0xcU)))) {
                                        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0U == (3U & (vlSelf->instr_rdata_i 
                                                  >> 0xcU)))) {
                                    vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((0x4000U & vlSelf->instr_rdata_i)) {
                                    vlSymsp->__Vcoverage[380].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((1U & (~ (vlSelf->instr_rdata_i 
                                              >> 0xeU)))) {
                                    vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((1U & (~ (IData)(vlSelf->dr32e_dec__DOT__opcode)))) {
                                vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((8U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                    vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((0x10U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                                vlSymsp->__Vcoverage[444].fetch_add(1, std::memory_order_relaxed);
                                if ((5U != ((4U & (vlSelf->instr_rdata_i 
                                                   >> 0x18U)) 
                                            | (3U & 
                                               (vlSelf->instr_rdata_i 
                                                >> 0xcU))))) {
                                    vlSymsp->__Vcoverage[443].fetch_add(1, std::memory_order_relaxed);
                                    if ((1U & (~ (vlSelf->instr_rdata_i 
                                                  >> 0x1fU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->instr_rdata_i 
                                                    >> 0x1eU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->instr_rdata_i 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->instr_rdata_i 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->instr_rdata_i 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->instr_rdata_i 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->instr_rdata_i 
                                                                     >> 0x19U)))) {
                                                                vlSymsp->__Vcoverage[429].fetch_add(1, std::memory_order_relaxed);
                                                            }
                                                            if (
                                                                (0x2000000U 
                                                                 & vlSelf->instr_rdata_i)) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->instr_rdata_i 
                                                                         >> 0xeU)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_i 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[433].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_i)) {
                                                                            vlSymsp->__Vcoverage[434].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSelf->instr_rdata_i)) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[435].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_i)) {
                                                                            vlSymsp->__Vcoverage[436].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                }
                                                                if (
                                                                    (0x4000U 
                                                                     & vlSelf->instr_rdata_i)) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_i 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[437].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_i)) {
                                                                            vlSymsp->__Vcoverage[438].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSelf->instr_rdata_i)) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_i)) {
                                                                            vlSymsp->__Vcoverage[440].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[439].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        if (
                                                            (0x4000000U 
                                                             & vlSelf->instr_rdata_i)) {
                                                            vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                        }
                                                    }
                                                    if (
                                                        (0x8000000U 
                                                         & vlSelf->instr_rdata_i)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->instr_rdata_i 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->instr_rdata_i 
                                                                     >> 0x19U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->instr_rdata_i 
                                                                         >> 0xeU)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_i 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_i)) {
                                                                            vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSelf->instr_rdata_i)) {
                                                                        vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                                    }
                                                                }
                                                                if (
                                                                    (0x4000U 
                                                                     & vlSelf->instr_rdata_i)) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_i 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_i)) {
                                                                            vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSelf->instr_rdata_i)) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[432].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_i)) {
                                                                            vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            if (
                                                                (0x2000000U 
                                                                 & vlSelf->instr_rdata_i)) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->instr_rdata_i 
                                                                         >> 0xeU)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_i 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_i)) {
                                                                            vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSelf->instr_rdata_i)) {
                                                                        vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
                                                                    }
                                                                }
                                                                if (
                                                                    (0x4000U 
                                                                     & vlSelf->instr_rdata_i)) {
                                                                    vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
                                                                }
                                                            }
                                                        }
                                                        if (
                                                            (0x4000000U 
                                                             & vlSelf->instr_rdata_i)) {
                                                            vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                        }
                                                    }
                                                }
                                                if (
                                                    (0x10000000U 
                                                     & vlSelf->instr_rdata_i)) {
                                                    vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                }
                                            }
                                            if ((0x20000000U 
                                                 & vlSelf->instr_rdata_i)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->instr_rdata_i 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->instr_rdata_i 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->instr_rdata_i 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->instr_rdata_i 
                                                                     >> 0x19U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->instr_rdata_i 
                                                                         >> 0xeU)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_i 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_i)) {
                                                                            vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSelf->instr_rdata_i)) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_i)) {
                                                                            vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                }
                                                                if (
                                                                    (0x4000U 
                                                                     & vlSelf->instr_rdata_i)) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_i 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_i)) {
                                                                            vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSelf->instr_rdata_i)) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_i)) {
                                                                            vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            if (
                                                                (0x2000000U 
                                                                 & vlSelf->instr_rdata_i)) {
                                                                vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                            }
                                                        }
                                                        if (
                                                            (0x4000000U 
                                                             & vlSelf->instr_rdata_i)) {
                                                            vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                        }
                                                    }
                                                    if (
                                                        (0x8000000U 
                                                         & vlSelf->instr_rdata_i)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->instr_rdata_i 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->instr_rdata_i 
                                                                     >> 0x19U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->instr_rdata_i 
                                                                         >> 0xeU)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_i 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_i)) {
                                                                            vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSelf->instr_rdata_i)) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_i)) {
                                                                            vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                }
                                                                if (
                                                                    (0x4000U 
                                                                     & vlSelf->instr_rdata_i)) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_i 
                                                                             >> 0xdU)))) {
                                                                        vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
                                                                    }
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSelf->instr_rdata_i)) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_i)) {
                                                                            vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            if (
                                                                (0x2000000U 
                                                                 & vlSelf->instr_rdata_i)) {
                                                                vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                            }
                                                        }
                                                        if (
                                                            (0x4000000U 
                                                             & vlSelf->instr_rdata_i)) {
                                                            vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                        }
                                                    }
                                                }
                                                if (
                                                    (0x10000000U 
                                                     & vlSelf->instr_rdata_i)) {
                                                    vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                }
                                            }
                                        }
                                        if ((0x40000000U 
                                             & vlSelf->instr_rdata_i)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->instr_rdata_i 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->instr_rdata_i 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->instr_rdata_i 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->instr_rdata_i 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->instr_rdata_i 
                                                                     >> 0x19U)))) {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlSelf->instr_rdata_i)) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_i 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_i)) {
                                                                            vlSymsp->__Vcoverage[429].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSelf->instr_rdata_i)) {
                                                                        vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
                                                                    }
                                                                }
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->instr_rdata_i 
                                                                         >> 0xeU)))) {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSelf->instr_rdata_i)) {
                                                                        vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                                    }
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_i 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_i)) {
                                                                            vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[429].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            if (
                                                                (0x2000000U 
                                                                 & vlSelf->instr_rdata_i)) {
                                                                vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                            }
                                                        }
                                                        if (
                                                            (0x4000000U 
                                                             & vlSelf->instr_rdata_i)) {
                                                            vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                        }
                                                    }
                                                    if (
                                                        (0x8000000U 
                                                         & vlSelf->instr_rdata_i)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->instr_rdata_i 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->instr_rdata_i 
                                                                     >> 0x19U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->instr_rdata_i 
                                                                         >> 0xeU)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_i 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_i)) {
                                                                            vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSelf->instr_rdata_i)) {
                                                                        vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                                    }
                                                                }
                                                                if (
                                                                    (0x4000U 
                                                                     & vlSelf->instr_rdata_i)) {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSelf->instr_rdata_i)) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[432].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_i)) {
                                                                            vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_i 
                                                                             >> 0xdU)))) {
                                                                        vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
                                                                    }
                                                                }
                                                            }
                                                            if (
                                                                (0x2000000U 
                                                                 & vlSelf->instr_rdata_i)) {
                                                                vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                            }
                                                        }
                                                        if (
                                                            (0x4000000U 
                                                             & vlSelf->instr_rdata_i)) {
                                                            vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                        }
                                                    }
                                                }
                                                if (
                                                    (0x10000000U 
                                                     & vlSelf->instr_rdata_i)) {
                                                    vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                }
                                            }
                                            if ((0x20000000U 
                                                 & vlSelf->instr_rdata_i)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->instr_rdata_i 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->instr_rdata_i 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->instr_rdata_i 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->instr_rdata_i 
                                                                     >> 0x19U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->instr_rdata_i 
                                                                         >> 0xdU)))) {
                                                                    if (
                                                                        (0x1000U 
                                                                         & vlSelf->instr_rdata_i)) {
                                                                        vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
                                                                    }
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_i 
                                                                             >> 0xcU)))) {
                                                                        vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                                    }
                                                                }
                                                                if (
                                                                    (0x2000U 
                                                                     & vlSelf->instr_rdata_i)) {
                                                                    vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                                }
                                                            }
                                                            if (
                                                                (0x2000000U 
                                                                 & vlSelf->instr_rdata_i)) {
                                                                vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                            }
                                                        }
                                                        if (
                                                            (0x4000000U 
                                                             & vlSelf->instr_rdata_i)) {
                                                            vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                        }
                                                    }
                                                    if (
                                                        (0x8000000U 
                                                         & vlSelf->instr_rdata_i)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->instr_rdata_i 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->instr_rdata_i 
                                                                     >> 0x19U)))) {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlSelf->instr_rdata_i)) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_i 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_i)) {
                                                                            vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSelf->instr_rdata_i)) {
                                                                        vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                                    }
                                                                }
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->instr_rdata_i 
                                                                         >> 0xeU)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->instr_rdata_i 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSelf->instr_rdata_i)) {
                                                                            vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->instr_rdata_i 
                                                                                >> 0xcU)))) {
                                                                            vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSelf->instr_rdata_i)) {
                                                                        vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                                    }
                                                                }
                                                            }
                                                            if (
                                                                (0x2000000U 
                                                                 & vlSelf->instr_rdata_i)) {
                                                                vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                            }
                                                        }
                                                        if (
                                                            (0x4000000U 
                                                             & vlSelf->instr_rdata_i)) {
                                                            vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                        }
                                                    }
                                                }
                                                if (
                                                    (0x10000000U 
                                                     & vlSelf->instr_rdata_i)) {
                                                    vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                                }
                                            }
                                        }
                                    }
                                    if ((vlSelf->instr_rdata_i 
                                         >> 0x1fU)) {
                                        vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((5U == ((4U & (vlSelf->instr_rdata_i 
                                                   >> 0x18U)) 
                                            | (3U & 
                                               (vlSelf->instr_rdata_i 
                                                >> 0xcU))))) {
                                    vlSymsp->__Vcoverage[442].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((1U & (~ (IData)(vlSelf->dr32e_dec__DOT__opcode)))) {
                                vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((4U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                                vlSymsp->__Vcoverage[394].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->dr32e_dec__DOT__opcode)))) {
                                vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
                if ((8U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                    vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if ((0x40U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
        if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
                      >> 5U)))) {
            vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        }
        if ((0x20U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlSelf->dr32e_dec__DOT__opcode)))) {
                                vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                                vlSymsp->__Vcoverage[379].fetch_add(1, std::memory_order_relaxed);
                                if ((1U & (~ (vlSelf->instr_rdata_i 
                                              >> 0xeU)))) {
                                    if ((1U & (~ (vlSelf->instr_rdata_i 
                                                  >> 0xdU)))) {
                                        vlSymsp->__Vcoverage[377].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if ((0x2000U & vlSelf->instr_rdata_i)) {
                                        vlSymsp->__Vcoverage[378].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0x4000U & vlSelf->instr_rdata_i)) {
                                    vlSymsp->__Vcoverage[377].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((4U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlSelf->dr32e_dec__DOT__opcode)))) {
                                vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                                vlSymsp->__Vcoverage[376].fetch_add(1, std::memory_order_relaxed);
                                if ((0U != (7U & (vlSelf->instr_rdata_i 
                                                  >> 0xcU)))) {
                                    vlSymsp->__Vcoverage[374].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((1U & (~ (IData)(vlSelf->instr_first_cycle_i)))) {
                                    vlSymsp->__Vcoverage[373].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((0U == (7U & (vlSelf->instr_rdata_i 
                                                  >> 0xcU)))) {
                                    vlSymsp->__Vcoverage[375].fetch_add(1, std::memory_order_relaxed);
                                }
                                if (vlSelf->instr_first_cycle_i) {
                                    vlSymsp->__Vcoverage[372].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
                if ((8U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                    if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
                                  >> 2U)))) {
                        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((4U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                        if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlSelf->dr32e_dec__DOT__opcode)))) {
                                vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                                vlSymsp->__Vcoverage[371].fetch_add(1, std::memory_order_relaxed);
                                if (vlSelf->instr_first_cycle_i) {
                                    vlSymsp->__Vcoverage[369].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((1U & (~ (IData)(vlSelf->instr_first_cycle_i)))) {
                                    vlSymsp->__Vcoverage[370].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                        }
                    }
                }
            }
            if ((0x10U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((2U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlSelf->dr32e_dec__DOT__opcode)))) {
                                vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                                vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
                                if ((0U == (7U & (vlSelf->instr_rdata_i 
                                                  >> 0xcU)))) {
                                    if ((0U != (vlSelf->instr_rdata_i 
                                                >> 0x14U))) {
                                        if ((1U != 
                                             (vlSelf->instr_rdata_i 
                                              >> 0x14U))) {
                                            if ((0x302U 
                                                 != 
                                                 (vlSelf->instr_rdata_i 
                                                  >> 0x14U))) {
                                                if (
                                                    (0x7b2U 
                                                     != 
                                                     (vlSelf->instr_rdata_i 
                                                      >> 0x14U))) {
                                                    if (
                                                        (0x105U 
                                                         == 
                                                         (vlSelf->instr_rdata_i 
                                                          >> 0x14U))) {
                                                        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
                                                    }
                                                    if (
                                                        (0x105U 
                                                         != 
                                                         (vlSelf->instr_rdata_i 
                                                          >> 0x14U))) {
                                                        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
                                                    }
                                                }
                                                if (
                                                    (0x7b2U 
                                                     == 
                                                     (vlSelf->instr_rdata_i 
                                                      >> 0x14U))) {
                                                    vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
                                                }
                                            }
                                            if ((0x302U 
                                                 == 
                                                 (vlSelf->instr_rdata_i 
                                                  >> 0x14U))) {
                                                vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
                                            }
                                        }
                                        if ((1U == 
                                             (vlSelf->instr_rdata_i 
                                              >> 0x14U))) {
                                            vlSymsp->__Vcoverage[452].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                    if ((0U == (vlSelf->instr_rdata_i 
                                                >> 0x14U))) {
                                        vlSymsp->__Vcoverage[451].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
                                    if ((IData)(((0U 
                                                  != 
                                                  (0xf8000U 
                                                   & vlSelf->instr_rdata_i)) 
                                                 | (0U 
                                                    != (IData)(vlSelf->rf_waddr_o))))) {
                                        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if ((1U & (~ (IData)(
                                                         ((0U 
                                                           != 
                                                           (0xf8000U 
                                                            & vlSelf->instr_rdata_i)) 
                                                          | (0U 
                                                             != (IData)(vlSelf->rf_waddr_o))))))) {
                                        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0U != (7U & (vlSelf->instr_rdata_i 
                                                  >> 0xcU)))) {
                                    if ((0x4000U & vlSelf->instr_rdata_i)) {
                                        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if ((1U != (3U 
                                                & (vlSelf->instr_rdata_i 
                                                   >> 0xcU)))) {
                                        if ((2U != 
                                             (3U & 
                                              (vlSelf->instr_rdata_i 
                                               >> 0xcU)))) {
                                            if ((3U 
                                                 == 
                                                 (3U 
                                                  & (vlSelf->instr_rdata_i 
                                                     >> 0xcU)))) {
                                                vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
                                            }
                                            if ((3U 
                                                 != 
                                                 (3U 
                                                  & (vlSelf->instr_rdata_i 
                                                     >> 0xcU)))) {
                                                vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
                                            }
                                        }
                                        if ((2U == 
                                             (3U & 
                                              (vlSelf->instr_rdata_i 
                                               >> 0xcU)))) {
                                            vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                    if ((1U & (~ (vlSelf->instr_rdata_i 
                                                  >> 0xeU)))) {
                                        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if ((1U == (3U 
                                                & (vlSelf->instr_rdata_i 
                                                   >> 0xcU)))) {
                                        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((8U & (IData)(vlSelf->dr32e_dec__DOT__opcode))) {
                    vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if ((1U & ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
               ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__opcode)))) {
        vlSymsp->__Vcoverage[352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__opcode = 
            ((0x7eU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__opcode)) 
             | (1U & (IData)(vlSelf->dr32e_dec__DOT__opcode)));
    }
    if ((2U & ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
               ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__opcode)))) {
        vlSymsp->__Vcoverage[353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__opcode = 
            ((0x7dU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__opcode)) 
             | (2U & (IData)(vlSelf->dr32e_dec__DOT__opcode)));
    }
    if ((4U & ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
               ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__opcode)))) {
        vlSymsp->__Vcoverage[354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__opcode = 
            ((0x7bU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__opcode)) 
             | (4U & (IData)(vlSelf->dr32e_dec__DOT__opcode)));
    }
    if ((8U & ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
               ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__opcode)))) {
        vlSymsp->__Vcoverage[355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__opcode = 
            ((0x77U & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__opcode)) 
             | (8U & (IData)(vlSelf->dr32e_dec__DOT__opcode)));
    }
    if ((0x10U & ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
                  ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__opcode)))) {
        vlSymsp->__Vcoverage[356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__opcode = 
            ((0x6fU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__opcode)) 
             | (0x10U & (IData)(vlSelf->dr32e_dec__DOT__opcode)));
    }
    if ((0x20U & ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
                  ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__opcode)))) {
        vlSymsp->__Vcoverage[357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__opcode = 
            ((0x5fU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__opcode)) 
             | (0x20U & (IData)(vlSelf->dr32e_dec__DOT__opcode)));
    }
    if ((0x40U & ((IData)(vlSelf->dr32e_dec__DOT__opcode) 
                  ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__opcode)))) {
        vlSymsp->__Vcoverage[358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__opcode = 
            ((0x3fU & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__opcode)) 
             | (0x40U & (IData)(vlSelf->dr32e_dec__DOT__opcode)));
    }
    if ((1U & (vlSelf->imm_s_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o 
            = ((0xfffffffeU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o) 
               | (1U & vlSelf->imm_s_type_o));
    }
    if ((2U & (vlSelf->imm_s_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o 
            = ((0xfffffffdU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o) 
               | (2U & vlSelf->imm_s_type_o));
    }
    if ((4U & (vlSelf->imm_s_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o 
            = ((0xfffffffbU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o) 
               | (4U & vlSelf->imm_s_type_o));
    }
    if ((8U & (vlSelf->imm_s_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o 
            = ((0xfffffff7U & vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o) 
               | (8U & vlSelf->imm_s_type_o));
    }
    if ((0x10U & (vlSelf->imm_s_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o 
            = ((0xffffffefU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o) 
               | (0x10U & vlSelf->imm_s_type_o));
    }
    if ((0x20U & (vlSelf->imm_s_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o 
            = ((0xffffffdfU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o) 
               | (0x20U & vlSelf->imm_s_type_o));
    }
    if ((0x40U & (vlSelf->imm_s_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o 
            = ((0xffffffbfU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o) 
               | (0x40U & vlSelf->imm_s_type_o));
    }
    if ((0x80U & (vlSelf->imm_s_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o 
            = ((0xffffff7fU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o) 
               | (0x80U & vlSelf->imm_s_type_o));
    }
    if ((0x100U & (vlSelf->imm_s_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o 
            = ((0xfffffeffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o) 
               | (0x100U & vlSelf->imm_s_type_o));
    }
    if ((0x200U & (vlSelf->imm_s_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o 
            = ((0xfffffdffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o) 
               | (0x200U & vlSelf->imm_s_type_o));
    }
    if ((0x400U & (vlSelf->imm_s_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o 
            = ((0xfffffbffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o) 
               | (0x400U & vlSelf->imm_s_type_o));
    }
    if ((0x800U & (vlSelf->imm_s_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o 
            = ((0xfffff7ffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o) 
               | (0x800U & vlSelf->imm_s_type_o));
    }
    if ((0x1000U & (vlSelf->imm_s_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o 
            = ((0xffffefffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o) 
               | (0x1000U & vlSelf->imm_s_type_o));
    }
    if ((0x2000U & (vlSelf->imm_s_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o 
            = ((0xffffdfffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o) 
               | (0x2000U & vlSelf->imm_s_type_o));
    }
    if ((0x4000U & (vlSelf->imm_s_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o 
            = ((0xffffbfffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o) 
               | (0x4000U & vlSelf->imm_s_type_o));
    }
    if ((0x8000U & (vlSelf->imm_s_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o 
            = ((0xffff7fffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o) 
               | (0x8000U & vlSelf->imm_s_type_o));
    }
    if ((0x10000U & (vlSelf->imm_s_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o 
            = ((0xfffeffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o) 
               | (0x10000U & vlSelf->imm_s_type_o));
    }
    if ((0x20000U & (vlSelf->imm_s_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o 
            = ((0xfffdffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o) 
               | (0x20000U & vlSelf->imm_s_type_o));
    }
    if ((0x40000U & (vlSelf->imm_s_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o))) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o 
            = ((0xfffbffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o) 
               | (0x40000U & vlSelf->imm_s_type_o));
    }
    if ((0x80000U & (vlSelf->imm_s_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o 
            = ((0xfff7ffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o) 
               | (0x80000U & vlSelf->imm_s_type_o));
    }
    if ((0x100000U & (vlSelf->imm_s_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o 
            = ((0xffefffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o) 
               | (0x100000U & vlSelf->imm_s_type_o));
    }
    if ((0x200000U & (vlSelf->imm_s_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o 
            = ((0xffdfffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o) 
               | (0x200000U & vlSelf->imm_s_type_o));
    }
    if ((0x400000U & (vlSelf->imm_s_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o 
            = ((0xffbfffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o) 
               | (0x400000U & vlSelf->imm_s_type_o));
    }
    if ((0x800000U & (vlSelf->imm_s_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o 
            = ((0xff7fffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o) 
               | (0x800000U & vlSelf->imm_s_type_o));
    }
    if ((0x1000000U & (vlSelf->imm_s_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o 
            = ((0xfeffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o) 
               | (0x1000000U & vlSelf->imm_s_type_o));
    }
    if ((0x2000000U & (vlSelf->imm_s_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o 
            = ((0xfdffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o) 
               | (0x2000000U & vlSelf->imm_s_type_o));
    }
    if ((0x4000000U & (vlSelf->imm_s_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o 
            = ((0xfbffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o) 
               | (0x4000000U & vlSelf->imm_s_type_o));
    }
    if ((0x8000000U & (vlSelf->imm_s_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o 
            = ((0xf7ffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o) 
               | (0x8000000U & vlSelf->imm_s_type_o));
    }
    if ((0x10000000U & (vlSelf->imm_s_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o 
            = ((0xefffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o) 
               | (0x10000000U & vlSelf->imm_s_type_o));
    }
    if ((0x20000000U & (vlSelf->imm_s_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o))) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o 
            = ((0xdfffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o) 
               | (0x20000000U & vlSelf->imm_s_type_o));
    }
    if ((0x40000000U & (vlSelf->imm_s_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o 
            = ((0xbfffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o) 
               | (0x40000000U & vlSelf->imm_s_type_o));
    }
    if (((vlSelf->imm_s_type_o ^ vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o 
            = ((0x7fffffffU & vlSelf->dr32e_dec__DOT____Vtogcov__imm_s_type_o) 
               | (0x80000000U & vlSelf->imm_s_type_o));
    }
    if (((IData)(vlSelf->rf_we_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__rf_we_o))) {
        vlSymsp->__Vcoverage[279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__rf_we_o 
            = vlSelf->rf_we_o;
    }
    if ((1U & ((IData)(vlSelf->csr_op_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__csr_op_o)))) {
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__csr_op_o 
            = ((2U & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__csr_op_o)) 
               | (1U & (IData)(vlSelf->csr_op_o)));
    }
    if ((2U & ((IData)(vlSelf->csr_op_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__csr_op_o)))) {
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__csr_op_o 
            = ((1U & (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__csr_op_o)) 
               | (2U & (IData)(vlSelf->csr_op_o)));
    }
    if (((IData)(vlSelf->illegal_insn_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__illegal_insn_o))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__illegal_insn_o 
            = vlSelf->illegal_insn_o;
    }
    if (((IData)(vlSelf->mult_en_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__mult_en_o))) {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__mult_en_o 
            = vlSelf->mult_en_o;
    }
    if (((IData)(vlSelf->div_en_o) ^ (IData)(vlSelf->dr32e_dec__DOT____Vtogcov__div_en_o))) {
        vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_dec__DOT____Vtogcov__div_en_o 
            = vlSelf->div_en_o;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdr32e_dec___024root___dump_triggers__act(Vdr32e_dec___024root* vlSelf);
#endif  // VL_DEBUG

void Vdr32e_dec___024root___eval_triggers__act(Vdr32e_dec___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_dec___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdr32e_dec___024root___dump_triggers__act(vlSelf);
    }
#endif
}
