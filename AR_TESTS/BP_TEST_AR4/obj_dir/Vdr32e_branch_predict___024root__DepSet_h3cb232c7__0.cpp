// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdr32e_branch_predict.h for the primary calling header

#include "verilated.h"

#include "Vdr32e_branch_predict__Syms.h"
#include "Vdr32e_branch_predict__Syms.h"
#include "Vdr32e_branch_predict___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdr32e_branch_predict___024root___dump_triggers__ico(Vdr32e_branch_predict___024root* vlSelf);
#endif  // VL_DEBUG

void Vdr32e_branch_predict___024root___eval_triggers__ico(Vdr32e_branch_predict___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_branch_predict__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_branch_predict___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdr32e_branch_predict___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vdr32e_branch_predict___024root___ico_sequent__TOP__0(Vdr32e_branch_predict___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_branch_predict__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_branch_predict___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->clk_i) ^ (IData)(vlSelf->dr32e_branch_predict__DOT____Vtogcov__clk_i))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__clk_i 
            = vlSelf->clk_i;
    }
    if (((IData)(vlSelf->rst_ni) ^ (IData)(vlSelf->dr32e_branch_predict__DOT____Vtogcov__rst_ni))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__rst_ni 
            = vlSelf->rst_ni;
    }
    if (((IData)(vlSelf->fetch_valid_i) ^ (IData)(vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_valid_i))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_valid_i 
            = vlSelf->fetch_valid_i;
    }
    if (((0x6fU == (0x7fU & vlSelf->fetch_rdata_i)) 
         ^ (IData)(vlSelf->dr32e_branch_predict__DOT____Vtogcov__instr_j))) {
        vlSymsp->__Vcoverage[260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__instr_j 
            = (0x6fU == (0x7fU & vlSelf->fetch_rdata_i));
    }
    if (((0x63U == (0x7fU & vlSelf->fetch_rdata_i)) 
         ^ (IData)(vlSelf->dr32e_branch_predict__DOT____Vtogcov__instr_b))) {
        vlSymsp->__Vcoverage[261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__instr_b 
            = (0x63U == (0x7fU & vlSelf->fetch_rdata_i));
    }
    if ((1U & (vlSelf->fetch_rdata_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i 
            = ((0xfffffffeU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i) 
               | (1U & vlSelf->fetch_rdata_i));
    }
    if ((2U & (vlSelf->fetch_rdata_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i 
            = ((0xfffffffdU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i) 
               | (2U & vlSelf->fetch_rdata_i));
    }
    if ((4U & (vlSelf->fetch_rdata_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i 
            = ((0xfffffffbU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i) 
               | (4U & vlSelf->fetch_rdata_i));
    }
    if ((8U & (vlSelf->fetch_rdata_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i 
            = ((0xfffffff7U & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i) 
               | (8U & vlSelf->fetch_rdata_i));
    }
    if ((0x10U & (vlSelf->fetch_rdata_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i 
            = ((0xffffffefU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i) 
               | (0x10U & vlSelf->fetch_rdata_i));
    }
    if ((0x20U & (vlSelf->fetch_rdata_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i 
            = ((0xffffffdfU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i) 
               | (0x20U & vlSelf->fetch_rdata_i));
    }
    if ((0x40U & (vlSelf->fetch_rdata_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i 
            = ((0xffffffbfU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i) 
               | (0x40U & vlSelf->fetch_rdata_i));
    }
    if ((0x80U & (vlSelf->fetch_rdata_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i 
            = ((0xffffff7fU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i) 
               | (0x80U & vlSelf->fetch_rdata_i));
    }
    if ((0x100U & (vlSelf->fetch_rdata_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i 
            = ((0xfffffeffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i) 
               | (0x100U & vlSelf->fetch_rdata_i));
    }
    if ((0x200U & (vlSelf->fetch_rdata_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i 
            = ((0xfffffdffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i) 
               | (0x200U & vlSelf->fetch_rdata_i));
    }
    if ((0x400U & (vlSelf->fetch_rdata_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i 
            = ((0xfffffbffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i) 
               | (0x400U & vlSelf->fetch_rdata_i));
    }
    if ((0x800U & (vlSelf->fetch_rdata_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i 
            = ((0xfffff7ffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i) 
               | (0x800U & vlSelf->fetch_rdata_i));
    }
    if ((0x1000U & (vlSelf->fetch_rdata_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i 
            = ((0xffffefffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i) 
               | (0x1000U & vlSelf->fetch_rdata_i));
    }
    if ((0x2000U & (vlSelf->fetch_rdata_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i 
            = ((0xffffdfffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i) 
               | (0x2000U & vlSelf->fetch_rdata_i));
    }
    if ((0x4000U & (vlSelf->fetch_rdata_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i 
            = ((0xffffbfffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i) 
               | (0x4000U & vlSelf->fetch_rdata_i));
    }
    if ((0x8000U & (vlSelf->fetch_rdata_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i 
            = ((0xffff7fffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i) 
               | (0x8000U & vlSelf->fetch_rdata_i));
    }
    if ((0x10000U & (vlSelf->fetch_rdata_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i 
            = ((0xfffeffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i) 
               | (0x10000U & vlSelf->fetch_rdata_i));
    }
    if ((0x20000U & (vlSelf->fetch_rdata_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i 
            = ((0xfffdffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i) 
               | (0x20000U & vlSelf->fetch_rdata_i));
    }
    if ((0x40000U & (vlSelf->fetch_rdata_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i 
            = ((0xfffbffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i) 
               | (0x40000U & vlSelf->fetch_rdata_i));
    }
    if ((0x80000U & (vlSelf->fetch_rdata_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i 
            = ((0xfff7ffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i) 
               | (0x80000U & vlSelf->fetch_rdata_i));
    }
    if ((0x100000U & (vlSelf->fetch_rdata_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i 
            = ((0xffefffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i) 
               | (0x100000U & vlSelf->fetch_rdata_i));
    }
    if ((0x200000U & (vlSelf->fetch_rdata_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i 
            = ((0xffdfffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i) 
               | (0x200000U & vlSelf->fetch_rdata_i));
    }
    if ((0x400000U & (vlSelf->fetch_rdata_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i 
            = ((0xffbfffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i) 
               | (0x400000U & vlSelf->fetch_rdata_i));
    }
    if ((0x800000U & (vlSelf->fetch_rdata_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i 
            = ((0xff7fffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i) 
               | (0x800000U & vlSelf->fetch_rdata_i));
    }
    if ((0x1000000U & (vlSelf->fetch_rdata_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i 
            = ((0xfeffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i) 
               | (0x1000000U & vlSelf->fetch_rdata_i));
    }
    if ((0x2000000U & (vlSelf->fetch_rdata_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i 
            = ((0xfdffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i) 
               | (0x2000000U & vlSelf->fetch_rdata_i));
    }
    if ((0x4000000U & (vlSelf->fetch_rdata_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i 
            = ((0xfbffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i) 
               | (0x4000000U & vlSelf->fetch_rdata_i));
    }
    if ((0x8000000U & (vlSelf->fetch_rdata_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i 
            = ((0xf7ffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i) 
               | (0x8000000U & vlSelf->fetch_rdata_i));
    }
    if ((0x10000000U & (vlSelf->fetch_rdata_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i 
            = ((0xefffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i) 
               | (0x10000000U & vlSelf->fetch_rdata_i));
    }
    if ((0x20000000U & (vlSelf->fetch_rdata_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i 
            = ((0xdfffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i) 
               | (0x20000000U & vlSelf->fetch_rdata_i));
    }
    if ((0x40000000U & (vlSelf->fetch_rdata_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i 
            = ((0xbfffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i) 
               | (0x40000000U & vlSelf->fetch_rdata_i));
    }
    if (((vlSelf->fetch_rdata_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i 
            = ((0x7fffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i) 
               | (0x80000000U & vlSelf->fetch_rdata_i));
    }
    if ((1U & (vlSelf->fetch_pc_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i 
            = ((0xfffffffeU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i) 
               | (1U & vlSelf->fetch_pc_i));
    }
    if ((2U & (vlSelf->fetch_pc_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i 
            = ((0xfffffffdU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i) 
               | (2U & vlSelf->fetch_pc_i));
    }
    if ((4U & (vlSelf->fetch_pc_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i 
            = ((0xfffffffbU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i) 
               | (4U & vlSelf->fetch_pc_i));
    }
    if ((8U & (vlSelf->fetch_pc_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i 
            = ((0xfffffff7U & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i) 
               | (8U & vlSelf->fetch_pc_i));
    }
    if ((0x10U & (vlSelf->fetch_pc_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i 
            = ((0xffffffefU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i) 
               | (0x10U & vlSelf->fetch_pc_i));
    }
    if ((0x20U & (vlSelf->fetch_pc_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i 
            = ((0xffffffdfU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i) 
               | (0x20U & vlSelf->fetch_pc_i));
    }
    if ((0x40U & (vlSelf->fetch_pc_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i 
            = ((0xffffffbfU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i) 
               | (0x40U & vlSelf->fetch_pc_i));
    }
    if ((0x80U & (vlSelf->fetch_pc_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i 
            = ((0xffffff7fU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i) 
               | (0x80U & vlSelf->fetch_pc_i));
    }
    if ((0x100U & (vlSelf->fetch_pc_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i 
            = ((0xfffffeffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i) 
               | (0x100U & vlSelf->fetch_pc_i));
    }
    if ((0x200U & (vlSelf->fetch_pc_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i 
            = ((0xfffffdffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i) 
               | (0x200U & vlSelf->fetch_pc_i));
    }
    if ((0x400U & (vlSelf->fetch_pc_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i 
            = ((0xfffffbffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i) 
               | (0x400U & vlSelf->fetch_pc_i));
    }
    if ((0x800U & (vlSelf->fetch_pc_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i 
            = ((0xfffff7ffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i) 
               | (0x800U & vlSelf->fetch_pc_i));
    }
    if ((0x1000U & (vlSelf->fetch_pc_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i 
            = ((0xffffefffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i) 
               | (0x1000U & vlSelf->fetch_pc_i));
    }
    if ((0x2000U & (vlSelf->fetch_pc_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i 
            = ((0xffffdfffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i) 
               | (0x2000U & vlSelf->fetch_pc_i));
    }
    if ((0x4000U & (vlSelf->fetch_pc_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i 
            = ((0xffffbfffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i) 
               | (0x4000U & vlSelf->fetch_pc_i));
    }
    if ((0x8000U & (vlSelf->fetch_pc_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i 
            = ((0xffff7fffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i) 
               | (0x8000U & vlSelf->fetch_pc_i));
    }
    if ((0x10000U & (vlSelf->fetch_pc_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i 
            = ((0xfffeffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i) 
               | (0x10000U & vlSelf->fetch_pc_i));
    }
    if ((0x20000U & (vlSelf->fetch_pc_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i 
            = ((0xfffdffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i) 
               | (0x20000U & vlSelf->fetch_pc_i));
    }
    if ((0x40000U & (vlSelf->fetch_pc_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i 
            = ((0xfffbffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i) 
               | (0x40000U & vlSelf->fetch_pc_i));
    }
    if ((0x80000U & (vlSelf->fetch_pc_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i 
            = ((0xfff7ffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i) 
               | (0x80000U & vlSelf->fetch_pc_i));
    }
    if ((0x100000U & (vlSelf->fetch_pc_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i 
            = ((0xffefffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i) 
               | (0x100000U & vlSelf->fetch_pc_i));
    }
    if ((0x200000U & (vlSelf->fetch_pc_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i 
            = ((0xffdfffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i) 
               | (0x200000U & vlSelf->fetch_pc_i));
    }
    if ((0x400000U & (vlSelf->fetch_pc_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i 
            = ((0xffbfffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i) 
               | (0x400000U & vlSelf->fetch_pc_i));
    }
    if ((0x800000U & (vlSelf->fetch_pc_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i 
            = ((0xff7fffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i) 
               | (0x800000U & vlSelf->fetch_pc_i));
    }
    if ((0x1000000U & (vlSelf->fetch_pc_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i 
            = ((0xfeffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i) 
               | (0x1000000U & vlSelf->fetch_pc_i));
    }
    if ((0x2000000U & (vlSelf->fetch_pc_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i 
            = ((0xfdffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i) 
               | (0x2000000U & vlSelf->fetch_pc_i));
    }
    if ((0x4000000U & (vlSelf->fetch_pc_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i 
            = ((0xfbffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i) 
               | (0x4000000U & vlSelf->fetch_pc_i));
    }
    if ((0x8000000U & (vlSelf->fetch_pc_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i 
            = ((0xf7ffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i) 
               | (0x8000000U & vlSelf->fetch_pc_i));
    }
    if ((0x10000000U & (vlSelf->fetch_pc_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i 
            = ((0xefffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i) 
               | (0x10000000U & vlSelf->fetch_pc_i));
    }
    if ((0x20000000U & (vlSelf->fetch_pc_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i 
            = ((0xdfffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i) 
               | (0x20000000U & vlSelf->fetch_pc_i));
    }
    if ((0x40000000U & (vlSelf->fetch_pc_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i 
            = ((0xbfffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i) 
               | (0x40000000U & vlSelf->fetch_pc_i));
    }
    if (((vlSelf->fetch_pc_i ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i 
            = ((0x7fffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i) 
               | (0x80000000U & vlSelf->fetch_pc_i));
    }
    vlSelf->dr32e_branch_predict__DOT__instr_cj = (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->fetch_rdata_i)) 
                                                   & ((5U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->fetch_rdata_i 
                                                           >> 0xdU))) 
                                                      | (1U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->fetch_rdata_i 
                                                             >> 0xdU)))));
    vlSelf->dr32e_branch_predict__DOT__instr_cb = (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->fetch_rdata_i)) 
                                                   & ((6U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->fetch_rdata_i 
                                                           >> 0xdU))) 
                                                      | (7U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->fetch_rdata_i 
                                                             >> 0xdU)))));
    if ((0x6fU != (0x7fU & vlSelf->fetch_rdata_i))) {
        if ((0x63U == (0x7fU & vlSelf->fetch_rdata_i))) {
            vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        }
        if ((0x63U != (0x7fU & vlSelf->fetch_rdata_i))) {
            if (vlSelf->dr32e_branch_predict__DOT__instr_cj) {
                vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (IData)(vlSelf->dr32e_branch_predict__DOT__instr_cj)))) {
                if (vlSelf->dr32e_branch_predict__DOT__instr_cb) {
                    vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->dr32e_branch_predict__DOT__instr_cb)))) {
                    vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    vlSelf->dr32e_branch_predict__DOT__imm_b_type = 
        (((- (IData)((vlSelf->fetch_rdata_i >> 0x1fU))) 
          << 0xdU) | ((0x1000U & (vlSelf->fetch_rdata_i 
                                  >> 0x13U)) | ((0x800U 
                                                 & (vlSelf->fetch_rdata_i 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->fetch_rdata_i 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->fetch_rdata_i 
                                                         >> 7U))))));
    vlSelf->dr32e_branch_predict__DOT__imm_j_type = 
        (((- (IData)((vlSelf->fetch_rdata_i >> 0x1fU))) 
          << 0x14U) | ((0xff000U & vlSelf->fetch_rdata_i) 
                       | ((0x800U & (vlSelf->fetch_rdata_i 
                                     >> 9U)) | (0x7feU 
                                                & (vlSelf->fetch_rdata_i 
                                                   >> 0x14U)))));
    vlSelf->dr32e_branch_predict__DOT__imm_cj_type 
        = (((- (IData)((1U & (vlSelf->fetch_rdata_i 
                              >> 0xcU)))) << 0xcU) 
           | ((0x800U & (vlSelf->fetch_rdata_i >> 1U)) 
              | ((0x400U & (vlSelf->fetch_rdata_i << 2U)) 
                 | ((0x300U & (vlSelf->fetch_rdata_i 
                               >> 1U)) | ((0x80U & 
                                           (vlSelf->fetch_rdata_i 
                                            << 1U)) 
                                          | ((0x40U 
                                              & (vlSelf->fetch_rdata_i 
                                                 >> 1U)) 
                                             | ((0x20U 
                                                 & (vlSelf->fetch_rdata_i 
                                                    << 3U)) 
                                                | ((0x10U 
                                                    & (vlSelf->fetch_rdata_i 
                                                       >> 7U)) 
                                                   | (0xeU 
                                                      & (vlSelf->fetch_rdata_i 
                                                         >> 2U))))))))));
    vlSelf->dr32e_branch_predict__DOT__imm_cb_type 
        = (((- (IData)((1U & (vlSelf->fetch_rdata_i 
                              >> 0xcU)))) << 9U) | 
           ((0x100U & (vlSelf->fetch_rdata_i >> 4U)) 
            | ((0xc0U & (vlSelf->fetch_rdata_i << 1U)) 
               | ((0x20U & (vlSelf->fetch_rdata_i << 3U)) 
                  | ((0x18U & (vlSelf->fetch_rdata_i 
                               >> 7U)) | (6U & (vlSelf->fetch_rdata_i 
                                                >> 2U)))))));
    if (((IData)(vlSelf->dr32e_branch_predict__DOT__instr_cj) 
         ^ (IData)(vlSelf->dr32e_branch_predict__DOT____Vtogcov__instr_cj))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__instr_cj 
            = vlSelf->dr32e_branch_predict__DOT__instr_cj;
    }
    if ((0x6fU == (0x7fU & vlSelf->fetch_rdata_i))) {
        vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->dr32e_branch_predict__DOT__instr_cb) 
                                << 3U) | (((IData)(vlSelf->dr32e_branch_predict__DOT__instr_cj) 
                                           << 2U) | 
                                          (((0x63U 
                                             == (0x7fU 
                                                 & vlSelf->fetch_rdata_i)) 
                                            << 1U) 
                                           | (0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->fetch_rdata_i))))))))) {
        if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("[%0t] %%Error: dr32e_branch_predict.v:82: Assertion failed in %Ndr32e_branch_predict: synthesis parallel_case, but multiple matches found\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("verilog/dr32e_branch_predict.v", 82, "");
        }
    }
    if (((IData)(vlSelf->dr32e_branch_predict__DOT__instr_cb) 
         ^ (IData)(vlSelf->dr32e_branch_predict__DOT____Vtogcov__instr_cb))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__instr_cb 
            = vlSelf->dr32e_branch_predict__DOT__instr_cb;
    }
    vlSelf->dr32e_branch_predict__DOT__instr_b_taken 
        = ((IData)((0x80000063U == (0x8000007fU & vlSelf->fetch_rdata_i))) 
           | ((IData)(vlSelf->dr32e_branch_predict__DOT__instr_cb) 
              & (vlSelf->fetch_rdata_i >> 0xcU)));
    if ((1U & (vlSelf->dr32e_branch_predict__DOT__imm_b_type 
               ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type 
            = ((0xfffffffeU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type) 
               | (1U & vlSelf->dr32e_branch_predict__DOT__imm_b_type));
    }
    if ((2U & (vlSelf->dr32e_branch_predict__DOT__imm_b_type 
               ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type 
            = ((0xfffffffdU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type) 
               | (2U & vlSelf->dr32e_branch_predict__DOT__imm_b_type));
    }
    if ((4U & (vlSelf->dr32e_branch_predict__DOT__imm_b_type 
               ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type 
            = ((0xfffffffbU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type) 
               | (4U & vlSelf->dr32e_branch_predict__DOT__imm_b_type));
    }
    if ((8U & (vlSelf->dr32e_branch_predict__DOT__imm_b_type 
               ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type 
            = ((0xfffffff7U & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type) 
               | (8U & vlSelf->dr32e_branch_predict__DOT__imm_b_type));
    }
    if ((0x10U & (vlSelf->dr32e_branch_predict__DOT__imm_b_type 
                  ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type))) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type 
            = ((0xffffffefU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type) 
               | (0x10U & vlSelf->dr32e_branch_predict__DOT__imm_b_type));
    }
    if ((0x20U & (vlSelf->dr32e_branch_predict__DOT__imm_b_type 
                  ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type 
            = ((0xffffffdfU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type) 
               | (0x20U & vlSelf->dr32e_branch_predict__DOT__imm_b_type));
    }
    if ((0x40U & (vlSelf->dr32e_branch_predict__DOT__imm_b_type 
                  ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type 
            = ((0xffffffbfU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type) 
               | (0x40U & vlSelf->dr32e_branch_predict__DOT__imm_b_type));
    }
    if ((0x80U & (vlSelf->dr32e_branch_predict__DOT__imm_b_type 
                  ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type 
            = ((0xffffff7fU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type) 
               | (0x80U & vlSelf->dr32e_branch_predict__DOT__imm_b_type));
    }
    if ((0x100U & (vlSelf->dr32e_branch_predict__DOT__imm_b_type 
                   ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type 
            = ((0xfffffeffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type) 
               | (0x100U & vlSelf->dr32e_branch_predict__DOT__imm_b_type));
    }
    if ((0x200U & (vlSelf->dr32e_branch_predict__DOT__imm_b_type 
                   ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type 
            = ((0xfffffdffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type) 
               | (0x200U & vlSelf->dr32e_branch_predict__DOT__imm_b_type));
    }
    if ((0x400U & (vlSelf->dr32e_branch_predict__DOT__imm_b_type 
                   ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type 
            = ((0xfffffbffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type) 
               | (0x400U & vlSelf->dr32e_branch_predict__DOT__imm_b_type));
    }
    if ((0x800U & (vlSelf->dr32e_branch_predict__DOT__imm_b_type 
                   ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type 
            = ((0xfffff7ffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type) 
               | (0x800U & vlSelf->dr32e_branch_predict__DOT__imm_b_type));
    }
    if ((0x1000U & (vlSelf->dr32e_branch_predict__DOT__imm_b_type 
                    ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type 
            = ((0xffffefffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type) 
               | (0x1000U & vlSelf->dr32e_branch_predict__DOT__imm_b_type));
    }
    if ((0x2000U & (vlSelf->dr32e_branch_predict__DOT__imm_b_type 
                    ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type 
            = ((0xffffdfffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type) 
               | (0x2000U & vlSelf->dr32e_branch_predict__DOT__imm_b_type));
    }
    if ((0x4000U & (vlSelf->dr32e_branch_predict__DOT__imm_b_type 
                    ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type 
            = ((0xffffbfffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type) 
               | (0x4000U & vlSelf->dr32e_branch_predict__DOT__imm_b_type));
    }
    if ((0x8000U & (vlSelf->dr32e_branch_predict__DOT__imm_b_type 
                    ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type))) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type 
            = ((0xffff7fffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type) 
               | (0x8000U & vlSelf->dr32e_branch_predict__DOT__imm_b_type));
    }
    if ((0x10000U & (vlSelf->dr32e_branch_predict__DOT__imm_b_type 
                     ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type 
            = ((0xfffeffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type) 
               | (0x10000U & vlSelf->dr32e_branch_predict__DOT__imm_b_type));
    }
    if ((0x20000U & (vlSelf->dr32e_branch_predict__DOT__imm_b_type 
                     ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type))) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type 
            = ((0xfffdffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type) 
               | (0x20000U & vlSelf->dr32e_branch_predict__DOT__imm_b_type));
    }
    if ((0x40000U & (vlSelf->dr32e_branch_predict__DOT__imm_b_type 
                     ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type))) {
        vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type 
            = ((0xfffbffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type) 
               | (0x40000U & vlSelf->dr32e_branch_predict__DOT__imm_b_type));
    }
    if ((0x80000U & (vlSelf->dr32e_branch_predict__DOT__imm_b_type 
                     ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type))) {
        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type 
            = ((0xfff7ffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type) 
               | (0x80000U & vlSelf->dr32e_branch_predict__DOT__imm_b_type));
    }
    if ((0x100000U & (vlSelf->dr32e_branch_predict__DOT__imm_b_type 
                      ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type))) {
        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type 
            = ((0xffefffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type) 
               | (0x100000U & vlSelf->dr32e_branch_predict__DOT__imm_b_type));
    }
    if ((0x200000U & (vlSelf->dr32e_branch_predict__DOT__imm_b_type 
                      ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type))) {
        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type 
            = ((0xffdfffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type) 
               | (0x200000U & vlSelf->dr32e_branch_predict__DOT__imm_b_type));
    }
    if ((0x400000U & (vlSelf->dr32e_branch_predict__DOT__imm_b_type 
                      ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type))) {
        vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type 
            = ((0xffbfffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type) 
               | (0x400000U & vlSelf->dr32e_branch_predict__DOT__imm_b_type));
    }
    if ((0x800000U & (vlSelf->dr32e_branch_predict__DOT__imm_b_type 
                      ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type))) {
        vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type 
            = ((0xff7fffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type) 
               | (0x800000U & vlSelf->dr32e_branch_predict__DOT__imm_b_type));
    }
    if ((0x1000000U & (vlSelf->dr32e_branch_predict__DOT__imm_b_type 
                       ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type))) {
        vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type 
            = ((0xfeffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type) 
               | (0x1000000U & vlSelf->dr32e_branch_predict__DOT__imm_b_type));
    }
    if ((0x2000000U & (vlSelf->dr32e_branch_predict__DOT__imm_b_type 
                       ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type))) {
        vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type 
            = ((0xfdffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type) 
               | (0x2000000U & vlSelf->dr32e_branch_predict__DOT__imm_b_type));
    }
    if ((0x4000000U & (vlSelf->dr32e_branch_predict__DOT__imm_b_type 
                       ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type 
            = ((0xfbffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type) 
               | (0x4000000U & vlSelf->dr32e_branch_predict__DOT__imm_b_type));
    }
    if ((0x8000000U & (vlSelf->dr32e_branch_predict__DOT__imm_b_type 
                       ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type 
            = ((0xf7ffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type) 
               | (0x8000000U & vlSelf->dr32e_branch_predict__DOT__imm_b_type));
    }
    if ((0x10000000U & (vlSelf->dr32e_branch_predict__DOT__imm_b_type 
                        ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type 
            = ((0xefffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type) 
               | (0x10000000U & vlSelf->dr32e_branch_predict__DOT__imm_b_type));
    }
    if ((0x20000000U & (vlSelf->dr32e_branch_predict__DOT__imm_b_type 
                        ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type 
            = ((0xdfffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type) 
               | (0x20000000U & vlSelf->dr32e_branch_predict__DOT__imm_b_type));
    }
    if ((0x40000000U & (vlSelf->dr32e_branch_predict__DOT__imm_b_type 
                        ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type))) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type 
            = ((0xbfffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type) 
               | (0x40000000U & vlSelf->dr32e_branch_predict__DOT__imm_b_type));
    }
    if (((vlSelf->dr32e_branch_predict__DOT__imm_b_type 
          ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type 
            = ((0x7fffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_b_type) 
               | (0x80000000U & vlSelf->dr32e_branch_predict__DOT__imm_b_type));
    }
    if ((1U & (vlSelf->dr32e_branch_predict__DOT__imm_j_type 
               ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type 
            = ((0xfffffffeU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type) 
               | (1U & vlSelf->dr32e_branch_predict__DOT__imm_j_type));
    }
    if ((2U & (vlSelf->dr32e_branch_predict__DOT__imm_j_type 
               ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type 
            = ((0xfffffffdU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type) 
               | (2U & vlSelf->dr32e_branch_predict__DOT__imm_j_type));
    }
    if ((4U & (vlSelf->dr32e_branch_predict__DOT__imm_j_type 
               ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type 
            = ((0xfffffffbU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type) 
               | (4U & vlSelf->dr32e_branch_predict__DOT__imm_j_type));
    }
    if ((8U & (vlSelf->dr32e_branch_predict__DOT__imm_j_type 
               ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type 
            = ((0xfffffff7U & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type) 
               | (8U & vlSelf->dr32e_branch_predict__DOT__imm_j_type));
    }
    if ((0x10U & (vlSelf->dr32e_branch_predict__DOT__imm_j_type 
                  ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type 
            = ((0xffffffefU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type) 
               | (0x10U & vlSelf->dr32e_branch_predict__DOT__imm_j_type));
    }
    if ((0x20U & (vlSelf->dr32e_branch_predict__DOT__imm_j_type 
                  ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type 
            = ((0xffffffdfU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type) 
               | (0x20U & vlSelf->dr32e_branch_predict__DOT__imm_j_type));
    }
    if ((0x40U & (vlSelf->dr32e_branch_predict__DOT__imm_j_type 
                  ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type 
            = ((0xffffffbfU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type) 
               | (0x40U & vlSelf->dr32e_branch_predict__DOT__imm_j_type));
    }
    if ((0x80U & (vlSelf->dr32e_branch_predict__DOT__imm_j_type 
                  ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type 
            = ((0xffffff7fU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type) 
               | (0x80U & vlSelf->dr32e_branch_predict__DOT__imm_j_type));
    }
    if ((0x100U & (vlSelf->dr32e_branch_predict__DOT__imm_j_type 
                   ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type 
            = ((0xfffffeffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type) 
               | (0x100U & vlSelf->dr32e_branch_predict__DOT__imm_j_type));
    }
    if ((0x200U & (vlSelf->dr32e_branch_predict__DOT__imm_j_type 
                   ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type 
            = ((0xfffffdffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type) 
               | (0x200U & vlSelf->dr32e_branch_predict__DOT__imm_j_type));
    }
    if ((0x400U & (vlSelf->dr32e_branch_predict__DOT__imm_j_type 
                   ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type 
            = ((0xfffffbffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type) 
               | (0x400U & vlSelf->dr32e_branch_predict__DOT__imm_j_type));
    }
    if ((0x800U & (vlSelf->dr32e_branch_predict__DOT__imm_j_type 
                   ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type 
            = ((0xfffff7ffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type) 
               | (0x800U & vlSelf->dr32e_branch_predict__DOT__imm_j_type));
    }
    if ((0x1000U & (vlSelf->dr32e_branch_predict__DOT__imm_j_type 
                    ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type 
            = ((0xffffefffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type) 
               | (0x1000U & vlSelf->dr32e_branch_predict__DOT__imm_j_type));
    }
    if ((0x2000U & (vlSelf->dr32e_branch_predict__DOT__imm_j_type 
                    ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type 
            = ((0xffffdfffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type) 
               | (0x2000U & vlSelf->dr32e_branch_predict__DOT__imm_j_type));
    }
    if ((0x4000U & (vlSelf->dr32e_branch_predict__DOT__imm_j_type 
                    ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type 
            = ((0xffffbfffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type) 
               | (0x4000U & vlSelf->dr32e_branch_predict__DOT__imm_j_type));
    }
    if ((0x8000U & (vlSelf->dr32e_branch_predict__DOT__imm_j_type 
                    ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type 
            = ((0xffff7fffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type) 
               | (0x8000U & vlSelf->dr32e_branch_predict__DOT__imm_j_type));
    }
    if ((0x10000U & (vlSelf->dr32e_branch_predict__DOT__imm_j_type 
                     ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type 
            = ((0xfffeffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type) 
               | (0x10000U & vlSelf->dr32e_branch_predict__DOT__imm_j_type));
    }
    if ((0x20000U & (vlSelf->dr32e_branch_predict__DOT__imm_j_type 
                     ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type))) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type 
            = ((0xfffdffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type) 
               | (0x20000U & vlSelf->dr32e_branch_predict__DOT__imm_j_type));
    }
    if ((0x40000U & (vlSelf->dr32e_branch_predict__DOT__imm_j_type 
                     ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type 
            = ((0xfffbffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type) 
               | (0x40000U & vlSelf->dr32e_branch_predict__DOT__imm_j_type));
    }
    if ((0x80000U & (vlSelf->dr32e_branch_predict__DOT__imm_j_type 
                     ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type 
            = ((0xfff7ffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type) 
               | (0x80000U & vlSelf->dr32e_branch_predict__DOT__imm_j_type));
    }
    if ((0x100000U & (vlSelf->dr32e_branch_predict__DOT__imm_j_type 
                      ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type 
            = ((0xffefffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type) 
               | (0x100000U & vlSelf->dr32e_branch_predict__DOT__imm_j_type));
    }
    if ((0x200000U & (vlSelf->dr32e_branch_predict__DOT__imm_j_type 
                      ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type 
            = ((0xffdfffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type) 
               | (0x200000U & vlSelf->dr32e_branch_predict__DOT__imm_j_type));
    }
    if ((0x400000U & (vlSelf->dr32e_branch_predict__DOT__imm_j_type 
                      ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type 
            = ((0xffbfffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type) 
               | (0x400000U & vlSelf->dr32e_branch_predict__DOT__imm_j_type));
    }
    if ((0x800000U & (vlSelf->dr32e_branch_predict__DOT__imm_j_type 
                      ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type 
            = ((0xff7fffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type) 
               | (0x800000U & vlSelf->dr32e_branch_predict__DOT__imm_j_type));
    }
    if ((0x1000000U & (vlSelf->dr32e_branch_predict__DOT__imm_j_type 
                       ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type 
            = ((0xfeffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type) 
               | (0x1000000U & vlSelf->dr32e_branch_predict__DOT__imm_j_type));
    }
    if ((0x2000000U & (vlSelf->dr32e_branch_predict__DOT__imm_j_type 
                       ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type 
            = ((0xfdffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type) 
               | (0x2000000U & vlSelf->dr32e_branch_predict__DOT__imm_j_type));
    }
    if ((0x4000000U & (vlSelf->dr32e_branch_predict__DOT__imm_j_type 
                       ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type 
            = ((0xfbffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type) 
               | (0x4000000U & vlSelf->dr32e_branch_predict__DOT__imm_j_type));
    }
    if ((0x8000000U & (vlSelf->dr32e_branch_predict__DOT__imm_j_type 
                       ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type 
            = ((0xf7ffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type) 
               | (0x8000000U & vlSelf->dr32e_branch_predict__DOT__imm_j_type));
    }
    if ((0x10000000U & (vlSelf->dr32e_branch_predict__DOT__imm_j_type 
                        ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type 
            = ((0xefffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type) 
               | (0x10000000U & vlSelf->dr32e_branch_predict__DOT__imm_j_type));
    }
    if ((0x20000000U & (vlSelf->dr32e_branch_predict__DOT__imm_j_type 
                        ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type 
            = ((0xdfffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type) 
               | (0x20000000U & vlSelf->dr32e_branch_predict__DOT__imm_j_type));
    }
    if ((0x40000000U & (vlSelf->dr32e_branch_predict__DOT__imm_j_type 
                        ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type 
            = ((0xbfffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type) 
               | (0x40000000U & vlSelf->dr32e_branch_predict__DOT__imm_j_type));
    }
    if (((vlSelf->dr32e_branch_predict__DOT__imm_j_type 
          ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type 
            = ((0x7fffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_j_type) 
               | (0x80000000U & vlSelf->dr32e_branch_predict__DOT__imm_j_type));
    }
    if ((1U & (vlSelf->dr32e_branch_predict__DOT__imm_cj_type 
               ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type 
            = ((0xfffffffeU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type) 
               | (1U & vlSelf->dr32e_branch_predict__DOT__imm_cj_type));
    }
    if ((2U & (vlSelf->dr32e_branch_predict__DOT__imm_cj_type 
               ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type 
            = ((0xfffffffdU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type) 
               | (2U & vlSelf->dr32e_branch_predict__DOT__imm_cj_type));
    }
    if ((4U & (vlSelf->dr32e_branch_predict__DOT__imm_cj_type 
               ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type 
            = ((0xfffffffbU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type) 
               | (4U & vlSelf->dr32e_branch_predict__DOT__imm_cj_type));
    }
    if ((8U & (vlSelf->dr32e_branch_predict__DOT__imm_cj_type 
               ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type))) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type 
            = ((0xfffffff7U & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type) 
               | (8U & vlSelf->dr32e_branch_predict__DOT__imm_cj_type));
    }
    if ((0x10U & (vlSelf->dr32e_branch_predict__DOT__imm_cj_type 
                  ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type))) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type 
            = ((0xffffffefU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type) 
               | (0x10U & vlSelf->dr32e_branch_predict__DOT__imm_cj_type));
    }
    if ((0x20U & (vlSelf->dr32e_branch_predict__DOT__imm_cj_type 
                  ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type))) {
        vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type 
            = ((0xffffffdfU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type) 
               | (0x20U & vlSelf->dr32e_branch_predict__DOT__imm_cj_type));
    }
    if ((0x40U & (vlSelf->dr32e_branch_predict__DOT__imm_cj_type 
                  ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type))) {
        vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type 
            = ((0xffffffbfU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type) 
               | (0x40U & vlSelf->dr32e_branch_predict__DOT__imm_cj_type));
    }
    if ((0x80U & (vlSelf->dr32e_branch_predict__DOT__imm_cj_type 
                  ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type))) {
        vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type 
            = ((0xffffff7fU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type) 
               | (0x80U & vlSelf->dr32e_branch_predict__DOT__imm_cj_type));
    }
    if ((0x100U & (vlSelf->dr32e_branch_predict__DOT__imm_cj_type 
                   ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type))) {
        vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type 
            = ((0xfffffeffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type) 
               | (0x100U & vlSelf->dr32e_branch_predict__DOT__imm_cj_type));
    }
    if ((0x200U & (vlSelf->dr32e_branch_predict__DOT__imm_cj_type 
                   ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type))) {
        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type 
            = ((0xfffffdffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type) 
               | (0x200U & vlSelf->dr32e_branch_predict__DOT__imm_cj_type));
    }
    if ((0x400U & (vlSelf->dr32e_branch_predict__DOT__imm_cj_type 
                   ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type))) {
        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type 
            = ((0xfffffbffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type) 
               | (0x400U & vlSelf->dr32e_branch_predict__DOT__imm_cj_type));
    }
    if ((0x800U & (vlSelf->dr32e_branch_predict__DOT__imm_cj_type 
                   ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type))) {
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type 
            = ((0xfffff7ffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type) 
               | (0x800U & vlSelf->dr32e_branch_predict__DOT__imm_cj_type));
    }
    if ((0x1000U & (vlSelf->dr32e_branch_predict__DOT__imm_cj_type 
                    ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type))) {
        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type 
            = ((0xffffefffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type) 
               | (0x1000U & vlSelf->dr32e_branch_predict__DOT__imm_cj_type));
    }
    if ((0x2000U & (vlSelf->dr32e_branch_predict__DOT__imm_cj_type 
                    ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type))) {
        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type 
            = ((0xffffdfffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type) 
               | (0x2000U & vlSelf->dr32e_branch_predict__DOT__imm_cj_type));
    }
    if ((0x4000U & (vlSelf->dr32e_branch_predict__DOT__imm_cj_type 
                    ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type))) {
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type 
            = ((0xffffbfffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type) 
               | (0x4000U & vlSelf->dr32e_branch_predict__DOT__imm_cj_type));
    }
    if ((0x8000U & (vlSelf->dr32e_branch_predict__DOT__imm_cj_type 
                    ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type))) {
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type 
            = ((0xffff7fffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type) 
               | (0x8000U & vlSelf->dr32e_branch_predict__DOT__imm_cj_type));
    }
    if ((0x10000U & (vlSelf->dr32e_branch_predict__DOT__imm_cj_type 
                     ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type))) {
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type 
            = ((0xfffeffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type) 
               | (0x10000U & vlSelf->dr32e_branch_predict__DOT__imm_cj_type));
    }
    if ((0x20000U & (vlSelf->dr32e_branch_predict__DOT__imm_cj_type 
                     ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type))) {
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type 
            = ((0xfffdffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type) 
               | (0x20000U & vlSelf->dr32e_branch_predict__DOT__imm_cj_type));
    }
    if ((0x40000U & (vlSelf->dr32e_branch_predict__DOT__imm_cj_type 
                     ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type))) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type 
            = ((0xfffbffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type) 
               | (0x40000U & vlSelf->dr32e_branch_predict__DOT__imm_cj_type));
    }
    if ((0x80000U & (vlSelf->dr32e_branch_predict__DOT__imm_cj_type 
                     ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type))) {
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type 
            = ((0xfff7ffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type) 
               | (0x80000U & vlSelf->dr32e_branch_predict__DOT__imm_cj_type));
    }
    if ((0x100000U & (vlSelf->dr32e_branch_predict__DOT__imm_cj_type 
                      ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type))) {
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type 
            = ((0xffefffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type) 
               | (0x100000U & vlSelf->dr32e_branch_predict__DOT__imm_cj_type));
    }
    if ((0x200000U & (vlSelf->dr32e_branch_predict__DOT__imm_cj_type 
                      ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type))) {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type 
            = ((0xffdfffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type) 
               | (0x200000U & vlSelf->dr32e_branch_predict__DOT__imm_cj_type));
    }
    if ((0x400000U & (vlSelf->dr32e_branch_predict__DOT__imm_cj_type 
                      ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type))) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type 
            = ((0xffbfffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type) 
               | (0x400000U & vlSelf->dr32e_branch_predict__DOT__imm_cj_type));
    }
    if ((0x800000U & (vlSelf->dr32e_branch_predict__DOT__imm_cj_type 
                      ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type 
            = ((0xff7fffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type) 
               | (0x800000U & vlSelf->dr32e_branch_predict__DOT__imm_cj_type));
    }
    if ((0x1000000U & (vlSelf->dr32e_branch_predict__DOT__imm_cj_type 
                       ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type 
            = ((0xfeffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type) 
               | (0x1000000U & vlSelf->dr32e_branch_predict__DOT__imm_cj_type));
    }
    if ((0x2000000U & (vlSelf->dr32e_branch_predict__DOT__imm_cj_type 
                       ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type 
            = ((0xfdffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type) 
               | (0x2000000U & vlSelf->dr32e_branch_predict__DOT__imm_cj_type));
    }
    if ((0x4000000U & (vlSelf->dr32e_branch_predict__DOT__imm_cj_type 
                       ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type 
            = ((0xfbffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type) 
               | (0x4000000U & vlSelf->dr32e_branch_predict__DOT__imm_cj_type));
    }
    if ((0x8000000U & (vlSelf->dr32e_branch_predict__DOT__imm_cj_type 
                       ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type 
            = ((0xf7ffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type) 
               | (0x8000000U & vlSelf->dr32e_branch_predict__DOT__imm_cj_type));
    }
    if ((0x10000000U & (vlSelf->dr32e_branch_predict__DOT__imm_cj_type 
                        ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type 
            = ((0xefffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type) 
               | (0x10000000U & vlSelf->dr32e_branch_predict__DOT__imm_cj_type));
    }
    if ((0x20000000U & (vlSelf->dr32e_branch_predict__DOT__imm_cj_type 
                        ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type 
            = ((0xdfffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type) 
               | (0x20000000U & vlSelf->dr32e_branch_predict__DOT__imm_cj_type));
    }
    if ((0x40000000U & (vlSelf->dr32e_branch_predict__DOT__imm_cj_type 
                        ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type 
            = ((0xbfffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type) 
               | (0x40000000U & vlSelf->dr32e_branch_predict__DOT__imm_cj_type));
    }
    if (((vlSelf->dr32e_branch_predict__DOT__imm_cj_type 
          ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type 
            = ((0x7fffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cj_type) 
               | (0x80000000U & vlSelf->dr32e_branch_predict__DOT__imm_cj_type));
    }
    if ((1U & (vlSelf->dr32e_branch_predict__DOT__imm_cb_type 
               ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type 
            = ((0xfffffffeU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type) 
               | (1U & vlSelf->dr32e_branch_predict__DOT__imm_cb_type));
    }
    if ((2U & (vlSelf->dr32e_branch_predict__DOT__imm_cb_type 
               ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type 
            = ((0xfffffffdU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type) 
               | (2U & vlSelf->dr32e_branch_predict__DOT__imm_cb_type));
    }
    if ((4U & (vlSelf->dr32e_branch_predict__DOT__imm_cb_type 
               ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type 
            = ((0xfffffffbU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type) 
               | (4U & vlSelf->dr32e_branch_predict__DOT__imm_cb_type));
    }
    if ((8U & (vlSelf->dr32e_branch_predict__DOT__imm_cb_type 
               ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type))) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type 
            = ((0xfffffff7U & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type) 
               | (8U & vlSelf->dr32e_branch_predict__DOT__imm_cb_type));
    }
    if ((0x10U & (vlSelf->dr32e_branch_predict__DOT__imm_cb_type 
                  ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type))) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type 
            = ((0xffffffefU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type) 
               | (0x10U & vlSelf->dr32e_branch_predict__DOT__imm_cb_type));
    }
    if ((0x20U & (vlSelf->dr32e_branch_predict__DOT__imm_cb_type 
                  ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type 
            = ((0xffffffdfU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type) 
               | (0x20U & vlSelf->dr32e_branch_predict__DOT__imm_cb_type));
    }
    if ((0x40U & (vlSelf->dr32e_branch_predict__DOT__imm_cb_type 
                  ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type 
            = ((0xffffffbfU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type) 
               | (0x40U & vlSelf->dr32e_branch_predict__DOT__imm_cb_type));
    }
    if ((0x80U & (vlSelf->dr32e_branch_predict__DOT__imm_cb_type 
                  ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type 
            = ((0xffffff7fU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type) 
               | (0x80U & vlSelf->dr32e_branch_predict__DOT__imm_cb_type));
    }
    if ((0x100U & (vlSelf->dr32e_branch_predict__DOT__imm_cb_type 
                   ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type 
            = ((0xfffffeffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type) 
               | (0x100U & vlSelf->dr32e_branch_predict__DOT__imm_cb_type));
    }
    if ((0x200U & (vlSelf->dr32e_branch_predict__DOT__imm_cb_type 
                   ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type 
            = ((0xfffffdffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type) 
               | (0x200U & vlSelf->dr32e_branch_predict__DOT__imm_cb_type));
    }
    if ((0x400U & (vlSelf->dr32e_branch_predict__DOT__imm_cb_type 
                   ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type 
            = ((0xfffffbffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type) 
               | (0x400U & vlSelf->dr32e_branch_predict__DOT__imm_cb_type));
    }
    if ((0x800U & (vlSelf->dr32e_branch_predict__DOT__imm_cb_type 
                   ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type 
            = ((0xfffff7ffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type) 
               | (0x800U & vlSelf->dr32e_branch_predict__DOT__imm_cb_type));
    }
    if ((0x1000U & (vlSelf->dr32e_branch_predict__DOT__imm_cb_type 
                    ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type 
            = ((0xffffefffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type) 
               | (0x1000U & vlSelf->dr32e_branch_predict__DOT__imm_cb_type));
    }
    if ((0x2000U & (vlSelf->dr32e_branch_predict__DOT__imm_cb_type 
                    ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type 
            = ((0xffffdfffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type) 
               | (0x2000U & vlSelf->dr32e_branch_predict__DOT__imm_cb_type));
    }
    if ((0x4000U & (vlSelf->dr32e_branch_predict__DOT__imm_cb_type 
                    ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type))) {
        vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type 
            = ((0xffffbfffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type) 
               | (0x4000U & vlSelf->dr32e_branch_predict__DOT__imm_cb_type));
    }
    if ((0x8000U & (vlSelf->dr32e_branch_predict__DOT__imm_cb_type 
                    ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type))) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type 
            = ((0xffff7fffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type) 
               | (0x8000U & vlSelf->dr32e_branch_predict__DOT__imm_cb_type));
    }
    if ((0x10000U & (vlSelf->dr32e_branch_predict__DOT__imm_cb_type 
                     ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type))) {
        vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type 
            = ((0xfffeffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type) 
               | (0x10000U & vlSelf->dr32e_branch_predict__DOT__imm_cb_type));
    }
    if ((0x20000U & (vlSelf->dr32e_branch_predict__DOT__imm_cb_type 
                     ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type))) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type 
            = ((0xfffdffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type) 
               | (0x20000U & vlSelf->dr32e_branch_predict__DOT__imm_cb_type));
    }
    if ((0x40000U & (vlSelf->dr32e_branch_predict__DOT__imm_cb_type 
                     ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type))) {
        vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type 
            = ((0xfffbffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type) 
               | (0x40000U & vlSelf->dr32e_branch_predict__DOT__imm_cb_type));
    }
    if ((0x80000U & (vlSelf->dr32e_branch_predict__DOT__imm_cb_type 
                     ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type))) {
        vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type 
            = ((0xfff7ffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type) 
               | (0x80000U & vlSelf->dr32e_branch_predict__DOT__imm_cb_type));
    }
    if ((0x100000U & (vlSelf->dr32e_branch_predict__DOT__imm_cb_type 
                      ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type))) {
        vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type 
            = ((0xffefffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type) 
               | (0x100000U & vlSelf->dr32e_branch_predict__DOT__imm_cb_type));
    }
    if ((0x200000U & (vlSelf->dr32e_branch_predict__DOT__imm_cb_type 
                      ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type))) {
        vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type 
            = ((0xffdfffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type) 
               | (0x200000U & vlSelf->dr32e_branch_predict__DOT__imm_cb_type));
    }
    if ((0x400000U & (vlSelf->dr32e_branch_predict__DOT__imm_cb_type 
                      ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type 
            = ((0xffbfffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type) 
               | (0x400000U & vlSelf->dr32e_branch_predict__DOT__imm_cb_type));
    }
    if ((0x800000U & (vlSelf->dr32e_branch_predict__DOT__imm_cb_type 
                      ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type 
            = ((0xff7fffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type) 
               | (0x800000U & vlSelf->dr32e_branch_predict__DOT__imm_cb_type));
    }
    if ((0x1000000U & (vlSelf->dr32e_branch_predict__DOT__imm_cb_type 
                       ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type 
            = ((0xfeffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type) 
               | (0x1000000U & vlSelf->dr32e_branch_predict__DOT__imm_cb_type));
    }
    if ((0x2000000U & (vlSelf->dr32e_branch_predict__DOT__imm_cb_type 
                       ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type 
            = ((0xfdffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type) 
               | (0x2000000U & vlSelf->dr32e_branch_predict__DOT__imm_cb_type));
    }
    if ((0x4000000U & (vlSelf->dr32e_branch_predict__DOT__imm_cb_type 
                       ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type 
            = ((0xfbffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type) 
               | (0x4000000U & vlSelf->dr32e_branch_predict__DOT__imm_cb_type));
    }
    if ((0x8000000U & (vlSelf->dr32e_branch_predict__DOT__imm_cb_type 
                       ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type 
            = ((0xf7ffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type) 
               | (0x8000000U & vlSelf->dr32e_branch_predict__DOT__imm_cb_type));
    }
    if ((0x10000000U & (vlSelf->dr32e_branch_predict__DOT__imm_cb_type 
                        ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type 
            = ((0xefffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type) 
               | (0x10000000U & vlSelf->dr32e_branch_predict__DOT__imm_cb_type));
    }
    if ((0x20000000U & (vlSelf->dr32e_branch_predict__DOT__imm_cb_type 
                        ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type 
            = ((0xdfffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type) 
               | (0x20000000U & vlSelf->dr32e_branch_predict__DOT__imm_cb_type));
    }
    if ((0x40000000U & (vlSelf->dr32e_branch_predict__DOT__imm_cb_type 
                        ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type 
            = ((0xbfffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type) 
               | (0x40000000U & vlSelf->dr32e_branch_predict__DOT__imm_cb_type));
    }
    if (((vlSelf->dr32e_branch_predict__DOT__imm_cb_type 
          ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type 
            = ((0x7fffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__imm_cb_type) 
               | (0x80000000U & vlSelf->dr32e_branch_predict__DOT__imm_cb_type));
    }
    vlSelf->dr32e_branch_predict__DOT__branch_imm = vlSelf->dr32e_branch_predict__DOT__imm_b_type;
    if ((0x6fU == (0x7fU & vlSelf->fetch_rdata_i))) {
        vlSelf->dr32e_branch_predict__DOT__branch_imm 
            = vlSelf->dr32e_branch_predict__DOT__imm_j_type;
    } else if ((0x63U == (0x7fU & vlSelf->fetch_rdata_i))) {
        vlSelf->dr32e_branch_predict__DOT__branch_imm 
            = vlSelf->dr32e_branch_predict__DOT__imm_b_type;
    } else if (vlSelf->dr32e_branch_predict__DOT__instr_cj) {
        vlSelf->dr32e_branch_predict__DOT__branch_imm 
            = vlSelf->dr32e_branch_predict__DOT__imm_cj_type;
    } else if (vlSelf->dr32e_branch_predict__DOT__instr_cb) {
        vlSelf->dr32e_branch_predict__DOT__branch_imm 
            = vlSelf->dr32e_branch_predict__DOT__imm_cb_type;
    }
    if (((IData)(vlSelf->dr32e_branch_predict__DOT__instr_b_taken) 
         ^ (IData)(vlSelf->dr32e_branch_predict__DOT____Vtogcov__instr_b_taken))) {
        vlSymsp->__Vcoverage[264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__instr_b_taken 
            = vlSelf->dr32e_branch_predict__DOT__instr_b_taken;
    }
    vlSelf->predict_branch_taken_o = ((IData)(vlSelf->fetch_valid_i) 
                                      & ((0x6fU == 
                                          (0x7fU & vlSelf->fetch_rdata_i)) 
                                         | ((IData)(vlSelf->dr32e_branch_predict__DOT__instr_cj) 
                                            | (IData)(vlSelf->dr32e_branch_predict__DOT__instr_b_taken))));
    if ((1U & (vlSelf->dr32e_branch_predict__DOT__branch_imm 
               ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm))) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm 
            = ((0xfffffffeU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm) 
               | (1U & vlSelf->dr32e_branch_predict__DOT__branch_imm));
    }
    if ((2U & (vlSelf->dr32e_branch_predict__DOT__branch_imm 
               ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm 
            = ((0xfffffffdU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm) 
               | (2U & vlSelf->dr32e_branch_predict__DOT__branch_imm));
    }
    if ((4U & (vlSelf->dr32e_branch_predict__DOT__branch_imm 
               ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm))) {
        vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm 
            = ((0xfffffffbU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm) 
               | (4U & vlSelf->dr32e_branch_predict__DOT__branch_imm));
    }
    if ((8U & (vlSelf->dr32e_branch_predict__DOT__branch_imm 
               ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm))) {
        vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm 
            = ((0xfffffff7U & vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm) 
               | (8U & vlSelf->dr32e_branch_predict__DOT__branch_imm));
    }
    if ((0x10U & (vlSelf->dr32e_branch_predict__DOT__branch_imm 
                  ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm))) {
        vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm 
            = ((0xffffffefU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm) 
               | (0x10U & vlSelf->dr32e_branch_predict__DOT__branch_imm));
    }
    if ((0x20U & (vlSelf->dr32e_branch_predict__DOT__branch_imm 
                  ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm))) {
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm 
            = ((0xffffffdfU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm) 
               | (0x20U & vlSelf->dr32e_branch_predict__DOT__branch_imm));
    }
    if ((0x40U & (vlSelf->dr32e_branch_predict__DOT__branch_imm 
                  ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm))) {
        vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm 
            = ((0xffffffbfU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm) 
               | (0x40U & vlSelf->dr32e_branch_predict__DOT__branch_imm));
    }
    if ((0x80U & (vlSelf->dr32e_branch_predict__DOT__branch_imm 
                  ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm))) {
        vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm 
            = ((0xffffff7fU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm) 
               | (0x80U & vlSelf->dr32e_branch_predict__DOT__branch_imm));
    }
    if ((0x100U & (vlSelf->dr32e_branch_predict__DOT__branch_imm 
                   ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm))) {
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm 
            = ((0xfffffeffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm) 
               | (0x100U & vlSelf->dr32e_branch_predict__DOT__branch_imm));
    }
    if ((0x200U & (vlSelf->dr32e_branch_predict__DOT__branch_imm 
                   ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm))) {
        vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm 
            = ((0xfffffdffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm) 
               | (0x200U & vlSelf->dr32e_branch_predict__DOT__branch_imm));
    }
    if ((0x400U & (vlSelf->dr32e_branch_predict__DOT__branch_imm 
                   ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm 
            = ((0xfffffbffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm) 
               | (0x400U & vlSelf->dr32e_branch_predict__DOT__branch_imm));
    }
    if ((0x800U & (vlSelf->dr32e_branch_predict__DOT__branch_imm 
                   ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm))) {
        vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm 
            = ((0xfffff7ffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm) 
               | (0x800U & vlSelf->dr32e_branch_predict__DOT__branch_imm));
    }
    if ((0x1000U & (vlSelf->dr32e_branch_predict__DOT__branch_imm 
                    ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm))) {
        vlSymsp->__Vcoverage[240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm 
            = ((0xffffefffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm) 
               | (0x1000U & vlSelf->dr32e_branch_predict__DOT__branch_imm));
    }
    if ((0x2000U & (vlSelf->dr32e_branch_predict__DOT__branch_imm 
                    ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm))) {
        vlSymsp->__Vcoverage[241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm 
            = ((0xffffdfffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm) 
               | (0x2000U & vlSelf->dr32e_branch_predict__DOT__branch_imm));
    }
    if ((0x4000U & (vlSelf->dr32e_branch_predict__DOT__branch_imm 
                    ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm))) {
        vlSymsp->__Vcoverage[242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm 
            = ((0xffffbfffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm) 
               | (0x4000U & vlSelf->dr32e_branch_predict__DOT__branch_imm));
    }
    if ((0x8000U & (vlSelf->dr32e_branch_predict__DOT__branch_imm 
                    ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm))) {
        vlSymsp->__Vcoverage[243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm 
            = ((0xffff7fffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm) 
               | (0x8000U & vlSelf->dr32e_branch_predict__DOT__branch_imm));
    }
    if ((0x10000U & (vlSelf->dr32e_branch_predict__DOT__branch_imm 
                     ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm))) {
        vlSymsp->__Vcoverage[244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm 
            = ((0xfffeffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm) 
               | (0x10000U & vlSelf->dr32e_branch_predict__DOT__branch_imm));
    }
    if ((0x20000U & (vlSelf->dr32e_branch_predict__DOT__branch_imm 
                     ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm))) {
        vlSymsp->__Vcoverage[245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm 
            = ((0xfffdffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm) 
               | (0x20000U & vlSelf->dr32e_branch_predict__DOT__branch_imm));
    }
    if ((0x40000U & (vlSelf->dr32e_branch_predict__DOT__branch_imm 
                     ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm))) {
        vlSymsp->__Vcoverage[246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm 
            = ((0xfffbffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm) 
               | (0x40000U & vlSelf->dr32e_branch_predict__DOT__branch_imm));
    }
    if ((0x80000U & (vlSelf->dr32e_branch_predict__DOT__branch_imm 
                     ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm))) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm 
            = ((0xfff7ffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm) 
               | (0x80000U & vlSelf->dr32e_branch_predict__DOT__branch_imm));
    }
    if ((0x100000U & (vlSelf->dr32e_branch_predict__DOT__branch_imm 
                      ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm 
            = ((0xffefffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm) 
               | (0x100000U & vlSelf->dr32e_branch_predict__DOT__branch_imm));
    }
    if ((0x200000U & (vlSelf->dr32e_branch_predict__DOT__branch_imm 
                      ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm))) {
        vlSymsp->__Vcoverage[249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm 
            = ((0xffdfffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm) 
               | (0x200000U & vlSelf->dr32e_branch_predict__DOT__branch_imm));
    }
    if ((0x400000U & (vlSelf->dr32e_branch_predict__DOT__branch_imm 
                      ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm))) {
        vlSymsp->__Vcoverage[250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm 
            = ((0xffbfffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm) 
               | (0x400000U & vlSelf->dr32e_branch_predict__DOT__branch_imm));
    }
    if ((0x800000U & (vlSelf->dr32e_branch_predict__DOT__branch_imm 
                      ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm))) {
        vlSymsp->__Vcoverage[251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm 
            = ((0xff7fffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm) 
               | (0x800000U & vlSelf->dr32e_branch_predict__DOT__branch_imm));
    }
    if ((0x1000000U & (vlSelf->dr32e_branch_predict__DOT__branch_imm 
                       ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm))) {
        vlSymsp->__Vcoverage[252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm 
            = ((0xfeffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm) 
               | (0x1000000U & vlSelf->dr32e_branch_predict__DOT__branch_imm));
    }
    if ((0x2000000U & (vlSelf->dr32e_branch_predict__DOT__branch_imm 
                       ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm))) {
        vlSymsp->__Vcoverage[253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm 
            = ((0xfdffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm) 
               | (0x2000000U & vlSelf->dr32e_branch_predict__DOT__branch_imm));
    }
    if ((0x4000000U & (vlSelf->dr32e_branch_predict__DOT__branch_imm 
                       ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm 
            = ((0xfbffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm) 
               | (0x4000000U & vlSelf->dr32e_branch_predict__DOT__branch_imm));
    }
    if ((0x8000000U & (vlSelf->dr32e_branch_predict__DOT__branch_imm 
                       ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm))) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm 
            = ((0xf7ffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm) 
               | (0x8000000U & vlSelf->dr32e_branch_predict__DOT__branch_imm));
    }
    if ((0x10000000U & (vlSelf->dr32e_branch_predict__DOT__branch_imm 
                        ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm))) {
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm 
            = ((0xefffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm) 
               | (0x10000000U & vlSelf->dr32e_branch_predict__DOT__branch_imm));
    }
    if ((0x20000000U & (vlSelf->dr32e_branch_predict__DOT__branch_imm 
                        ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm 
            = ((0xdfffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm) 
               | (0x20000000U & vlSelf->dr32e_branch_predict__DOT__branch_imm));
    }
    if ((0x40000000U & (vlSelf->dr32e_branch_predict__DOT__branch_imm 
                        ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm))) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm 
            = ((0xbfffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm) 
               | (0x40000000U & vlSelf->dr32e_branch_predict__DOT__branch_imm));
    }
    if (((vlSelf->dr32e_branch_predict__DOT__branch_imm 
          ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm 
            = ((0x7fffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__branch_imm) 
               | (0x80000000U & vlSelf->dr32e_branch_predict__DOT__branch_imm));
    }
    vlSelf->predict_branch_pc_o = (vlSelf->dr32e_branch_predict__DOT__branch_imm 
                                   + vlSelf->fetch_pc_i);
    if (((IData)(vlSelf->predict_branch_taken_o) ^ (IData)(vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_taken_o))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_taken_o 
            = vlSelf->predict_branch_taken_o;
    }
    if ((1U & (vlSelf->predict_branch_pc_o ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o 
            = ((0xfffffffeU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o) 
               | (1U & vlSelf->predict_branch_pc_o));
    }
    if ((2U & (vlSelf->predict_branch_pc_o ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o 
            = ((0xfffffffdU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o) 
               | (2U & vlSelf->predict_branch_pc_o));
    }
    if ((4U & (vlSelf->predict_branch_pc_o ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o 
            = ((0xfffffffbU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o) 
               | (4U & vlSelf->predict_branch_pc_o));
    }
    if ((8U & (vlSelf->predict_branch_pc_o ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o 
            = ((0xfffffff7U & vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o) 
               | (8U & vlSelf->predict_branch_pc_o));
    }
    if ((0x10U & (vlSelf->predict_branch_pc_o ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o 
            = ((0xffffffefU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o) 
               | (0x10U & vlSelf->predict_branch_pc_o));
    }
    if ((0x20U & (vlSelf->predict_branch_pc_o ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o 
            = ((0xffffffdfU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o) 
               | (0x20U & vlSelf->predict_branch_pc_o));
    }
    if ((0x40U & (vlSelf->predict_branch_pc_o ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o 
            = ((0xffffffbfU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o) 
               | (0x40U & vlSelf->predict_branch_pc_o));
    }
    if ((0x80U & (vlSelf->predict_branch_pc_o ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o 
            = ((0xffffff7fU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o) 
               | (0x80U & vlSelf->predict_branch_pc_o));
    }
    if ((0x100U & (vlSelf->predict_branch_pc_o ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o 
            = ((0xfffffeffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o) 
               | (0x100U & vlSelf->predict_branch_pc_o));
    }
    if ((0x200U & (vlSelf->predict_branch_pc_o ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o 
            = ((0xfffffdffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o) 
               | (0x200U & vlSelf->predict_branch_pc_o));
    }
    if ((0x400U & (vlSelf->predict_branch_pc_o ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o 
            = ((0xfffffbffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o) 
               | (0x400U & vlSelf->predict_branch_pc_o));
    }
    if ((0x800U & (vlSelf->predict_branch_pc_o ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o 
            = ((0xfffff7ffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o) 
               | (0x800U & vlSelf->predict_branch_pc_o));
    }
    if ((0x1000U & (vlSelf->predict_branch_pc_o ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o 
            = ((0xffffefffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o) 
               | (0x1000U & vlSelf->predict_branch_pc_o));
    }
    if ((0x2000U & (vlSelf->predict_branch_pc_o ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o 
            = ((0xffffdfffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o) 
               | (0x2000U & vlSelf->predict_branch_pc_o));
    }
    if ((0x4000U & (vlSelf->predict_branch_pc_o ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o 
            = ((0xffffbfffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o) 
               | (0x4000U & vlSelf->predict_branch_pc_o));
    }
    if ((0x8000U & (vlSelf->predict_branch_pc_o ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o 
            = ((0xffff7fffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o) 
               | (0x8000U & vlSelf->predict_branch_pc_o));
    }
    if ((0x10000U & (vlSelf->predict_branch_pc_o ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o 
            = ((0xfffeffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o) 
               | (0x10000U & vlSelf->predict_branch_pc_o));
    }
    if ((0x20000U & (vlSelf->predict_branch_pc_o ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o 
            = ((0xfffdffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o) 
               | (0x20000U & vlSelf->predict_branch_pc_o));
    }
    if ((0x40000U & (vlSelf->predict_branch_pc_o ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o 
            = ((0xfffbffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o) 
               | (0x40000U & vlSelf->predict_branch_pc_o));
    }
    if ((0x80000U & (vlSelf->predict_branch_pc_o ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o 
            = ((0xfff7ffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o) 
               | (0x80000U & vlSelf->predict_branch_pc_o));
    }
    if ((0x100000U & (vlSelf->predict_branch_pc_o ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o 
            = ((0xffefffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o) 
               | (0x100000U & vlSelf->predict_branch_pc_o));
    }
    if ((0x200000U & (vlSelf->predict_branch_pc_o ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o 
            = ((0xffdfffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o) 
               | (0x200000U & vlSelf->predict_branch_pc_o));
    }
    if ((0x400000U & (vlSelf->predict_branch_pc_o ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o 
            = ((0xffbfffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o) 
               | (0x400000U & vlSelf->predict_branch_pc_o));
    }
    if ((0x800000U & (vlSelf->predict_branch_pc_o ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o 
            = ((0xff7fffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o) 
               | (0x800000U & vlSelf->predict_branch_pc_o));
    }
    if ((0x1000000U & (vlSelf->predict_branch_pc_o 
                       ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o 
            = ((0xfeffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o) 
               | (0x1000000U & vlSelf->predict_branch_pc_o));
    }
    if ((0x2000000U & (vlSelf->predict_branch_pc_o 
                       ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o 
            = ((0xfdffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o) 
               | (0x2000000U & vlSelf->predict_branch_pc_o));
    }
    if ((0x4000000U & (vlSelf->predict_branch_pc_o 
                       ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o 
            = ((0xfbffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o) 
               | (0x4000000U & vlSelf->predict_branch_pc_o));
    }
    if ((0x8000000U & (vlSelf->predict_branch_pc_o 
                       ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o 
            = ((0xf7ffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o) 
               | (0x8000000U & vlSelf->predict_branch_pc_o));
    }
    if ((0x10000000U & (vlSelf->predict_branch_pc_o 
                        ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o 
            = ((0xefffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o) 
               | (0x10000000U & vlSelf->predict_branch_pc_o));
    }
    if ((0x20000000U & (vlSelf->predict_branch_pc_o 
                        ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o 
            = ((0xdfffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o) 
               | (0x20000000U & vlSelf->predict_branch_pc_o));
    }
    if ((0x40000000U & (vlSelf->predict_branch_pc_o 
                        ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o 
            = ((0xbfffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o) 
               | (0x40000000U & vlSelf->predict_branch_pc_o));
    }
    if (((vlSelf->predict_branch_pc_o ^ vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o 
            = ((0x7fffffffU & vlSelf->dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o) 
               | (0x80000000U & vlSelf->predict_branch_pc_o));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdr32e_branch_predict___024root___dump_triggers__act(Vdr32e_branch_predict___024root* vlSelf);
#endif  // VL_DEBUG

void Vdr32e_branch_predict___024root___eval_triggers__act(Vdr32e_branch_predict___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_branch_predict__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_branch_predict___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdr32e_branch_predict___024root___dump_triggers__act(vlSelf);
    }
#endif
}
