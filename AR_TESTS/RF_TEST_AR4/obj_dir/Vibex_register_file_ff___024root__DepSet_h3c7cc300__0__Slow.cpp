// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_register_file_ff.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vibex_register_file_ff__Syms.h"
#include "Vibex_register_file_ff__Syms.h"
#include "Vibex_register_file_ff___024root.h"

VL_ATTR_COLD void Vibex_register_file_ff___024root___eval_initial__TOP(Vibex_register_file_ff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_register_file_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_register_file_ff___024root___eval_initial__TOP\n"); );
    // Body
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    if (vlSelf->ibex_register_file_ff__DOT____Vtogcov__err_o) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__err_o = 0U;
    }
    vlSelf->ibex_register_file_ff__DOT__rf_reg[0U] = 0U;
    vlSelf->err_o = 0U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_register_file_ff___024root___dump_triggers__stl(Vibex_register_file_ff___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vibex_register_file_ff___024root___eval_triggers__stl(Vibex_register_file_ff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_register_file_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_register_file_ff___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vibex_register_file_ff___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vibex_register_file_ff___024root___stl_sequent__TOP__0(Vibex_register_file_ff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_register_file_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_register_file_ff___024root___stl_sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->clk_i) ^ (IData)(vlSelf->ibex_register_file_ff__DOT____Vtogcov__clk_i))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__clk_i 
            = vlSelf->clk_i;
    }
    if (((IData)(vlSelf->rst_ni) ^ (IData)(vlSelf->ibex_register_file_ff__DOT____Vtogcov__rst_ni))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rst_ni 
            = vlSelf->rst_ni;
    }
    if (((IData)(vlSelf->test_en_i) ^ (IData)(vlSelf->ibex_register_file_ff__DOT____Vtogcov__test_en_i))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__test_en_i 
            = vlSelf->test_en_i;
    }
    if (((IData)(vlSelf->dummy_instr_id_i) ^ (IData)(vlSelf->ibex_register_file_ff__DOT____Vtogcov__dummy_instr_id_i))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__dummy_instr_id_i 
            = vlSelf->dummy_instr_id_i;
    }
    if (((IData)(vlSelf->dummy_instr_wb_i) ^ (IData)(vlSelf->ibex_register_file_ff__DOT____Vtogcov__dummy_instr_wb_i))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__dummy_instr_wb_i 
            = vlSelf->dummy_instr_wb_i;
    }
    if (((IData)(vlSelf->we_a_i) ^ (IData)(vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_i))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_i 
            = vlSelf->we_a_i;
    }
    if ((1U & ((IData)(vlSelf->raddr_a_i) ^ (IData)(vlSelf->ibex_register_file_ff__DOT____Vtogcov__raddr_a_i)))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__raddr_a_i 
            = ((0x1eU & (IData)(vlSelf->ibex_register_file_ff__DOT____Vtogcov__raddr_a_i)) 
               | (1U & (IData)(vlSelf->raddr_a_i)));
    }
    if ((2U & ((IData)(vlSelf->raddr_a_i) ^ (IData)(vlSelf->ibex_register_file_ff__DOT____Vtogcov__raddr_a_i)))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__raddr_a_i 
            = ((0x1dU & (IData)(vlSelf->ibex_register_file_ff__DOT____Vtogcov__raddr_a_i)) 
               | (2U & (IData)(vlSelf->raddr_a_i)));
    }
    if ((4U & ((IData)(vlSelf->raddr_a_i) ^ (IData)(vlSelf->ibex_register_file_ff__DOT____Vtogcov__raddr_a_i)))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__raddr_a_i 
            = ((0x1bU & (IData)(vlSelf->ibex_register_file_ff__DOT____Vtogcov__raddr_a_i)) 
               | (4U & (IData)(vlSelf->raddr_a_i)));
    }
    if ((8U & ((IData)(vlSelf->raddr_a_i) ^ (IData)(vlSelf->ibex_register_file_ff__DOT____Vtogcov__raddr_a_i)))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__raddr_a_i 
            = ((0x17U & (IData)(vlSelf->ibex_register_file_ff__DOT____Vtogcov__raddr_a_i)) 
               | (8U & (IData)(vlSelf->raddr_a_i)));
    }
    if ((0x10U & ((IData)(vlSelf->raddr_a_i) ^ (IData)(vlSelf->ibex_register_file_ff__DOT____Vtogcov__raddr_a_i)))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__raddr_a_i 
            = ((0xfU & (IData)(vlSelf->ibex_register_file_ff__DOT____Vtogcov__raddr_a_i)) 
               | (0x10U & (IData)(vlSelf->raddr_a_i)));
    }
    if ((1U & ((IData)(vlSelf->raddr_b_i) ^ (IData)(vlSelf->ibex_register_file_ff__DOT____Vtogcov__raddr_b_i)))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__raddr_b_i 
            = ((0x1eU & (IData)(vlSelf->ibex_register_file_ff__DOT____Vtogcov__raddr_b_i)) 
               | (1U & (IData)(vlSelf->raddr_b_i)));
    }
    if ((2U & ((IData)(vlSelf->raddr_b_i) ^ (IData)(vlSelf->ibex_register_file_ff__DOT____Vtogcov__raddr_b_i)))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__raddr_b_i 
            = ((0x1dU & (IData)(vlSelf->ibex_register_file_ff__DOT____Vtogcov__raddr_b_i)) 
               | (2U & (IData)(vlSelf->raddr_b_i)));
    }
    if ((4U & ((IData)(vlSelf->raddr_b_i) ^ (IData)(vlSelf->ibex_register_file_ff__DOT____Vtogcov__raddr_b_i)))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__raddr_b_i 
            = ((0x1bU & (IData)(vlSelf->ibex_register_file_ff__DOT____Vtogcov__raddr_b_i)) 
               | (4U & (IData)(vlSelf->raddr_b_i)));
    }
    if ((8U & ((IData)(vlSelf->raddr_b_i) ^ (IData)(vlSelf->ibex_register_file_ff__DOT____Vtogcov__raddr_b_i)))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__raddr_b_i 
            = ((0x17U & (IData)(vlSelf->ibex_register_file_ff__DOT____Vtogcov__raddr_b_i)) 
               | (8U & (IData)(vlSelf->raddr_b_i)));
    }
    if ((0x10U & ((IData)(vlSelf->raddr_b_i) ^ (IData)(vlSelf->ibex_register_file_ff__DOT____Vtogcov__raddr_b_i)))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__raddr_b_i 
            = ((0xfU & (IData)(vlSelf->ibex_register_file_ff__DOT____Vtogcov__raddr_b_i)) 
               | (0x10U & (IData)(vlSelf->raddr_b_i)));
    }
    if ((1U & ((IData)(vlSelf->waddr_a_i) ^ (IData)(vlSelf->ibex_register_file_ff__DOT____Vtogcov__waddr_a_i)))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__waddr_a_i 
            = ((0x1eU & (IData)(vlSelf->ibex_register_file_ff__DOT____Vtogcov__waddr_a_i)) 
               | (1U & (IData)(vlSelf->waddr_a_i)));
    }
    if ((2U & ((IData)(vlSelf->waddr_a_i) ^ (IData)(vlSelf->ibex_register_file_ff__DOT____Vtogcov__waddr_a_i)))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__waddr_a_i 
            = ((0x1dU & (IData)(vlSelf->ibex_register_file_ff__DOT____Vtogcov__waddr_a_i)) 
               | (2U & (IData)(vlSelf->waddr_a_i)));
    }
    if ((4U & ((IData)(vlSelf->waddr_a_i) ^ (IData)(vlSelf->ibex_register_file_ff__DOT____Vtogcov__waddr_a_i)))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__waddr_a_i 
            = ((0x1bU & (IData)(vlSelf->ibex_register_file_ff__DOT____Vtogcov__waddr_a_i)) 
               | (4U & (IData)(vlSelf->waddr_a_i)));
    }
    if ((8U & ((IData)(vlSelf->waddr_a_i) ^ (IData)(vlSelf->ibex_register_file_ff__DOT____Vtogcov__waddr_a_i)))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__waddr_a_i 
            = ((0x17U & (IData)(vlSelf->ibex_register_file_ff__DOT____Vtogcov__waddr_a_i)) 
               | (8U & (IData)(vlSelf->waddr_a_i)));
    }
    if ((0x10U & ((IData)(vlSelf->waddr_a_i) ^ (IData)(vlSelf->ibex_register_file_ff__DOT____Vtogcov__waddr_a_i)))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__waddr_a_i 
            = ((0xfU & (IData)(vlSelf->ibex_register_file_ff__DOT____Vtogcov__waddr_a_i)) 
               | (0x10U & (IData)(vlSelf->waddr_a_i)));
    }
    if ((1U & (vlSelf->wdata_a_i ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i 
            = ((0xfffffffeU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i) 
               | (1U & vlSelf->wdata_a_i));
    }
    if ((2U & (vlSelf->wdata_a_i ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i 
            = ((0xfffffffdU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i) 
               | (2U & vlSelf->wdata_a_i));
    }
    if ((4U & (vlSelf->wdata_a_i ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i 
            = ((0xfffffffbU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i) 
               | (4U & vlSelf->wdata_a_i));
    }
    if ((8U & (vlSelf->wdata_a_i ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i 
            = ((0xfffffff7U & vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i) 
               | (8U & vlSelf->wdata_a_i));
    }
    if ((0x10U & (vlSelf->wdata_a_i ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i 
            = ((0xffffffefU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i) 
               | (0x10U & vlSelf->wdata_a_i));
    }
    if ((0x20U & (vlSelf->wdata_a_i ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i 
            = ((0xffffffdfU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i) 
               | (0x20U & vlSelf->wdata_a_i));
    }
    if ((0x40U & (vlSelf->wdata_a_i ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i 
            = ((0xffffffbfU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i) 
               | (0x40U & vlSelf->wdata_a_i));
    }
    if ((0x80U & (vlSelf->wdata_a_i ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i 
            = ((0xffffff7fU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i) 
               | (0x80U & vlSelf->wdata_a_i));
    }
    if ((0x100U & (vlSelf->wdata_a_i ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i 
            = ((0xfffffeffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i) 
               | (0x100U & vlSelf->wdata_a_i));
    }
    if ((0x200U & (vlSelf->wdata_a_i ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i 
            = ((0xfffffdffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i) 
               | (0x200U & vlSelf->wdata_a_i));
    }
    if ((0x400U & (vlSelf->wdata_a_i ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i 
            = ((0xfffffbffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i) 
               | (0x400U & vlSelf->wdata_a_i));
    }
    if ((0x800U & (vlSelf->wdata_a_i ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i 
            = ((0xfffff7ffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i) 
               | (0x800U & vlSelf->wdata_a_i));
    }
    if ((0x1000U & (vlSelf->wdata_a_i ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i 
            = ((0xffffefffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i) 
               | (0x1000U & vlSelf->wdata_a_i));
    }
    if ((0x2000U & (vlSelf->wdata_a_i ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i 
            = ((0xffffdfffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i) 
               | (0x2000U & vlSelf->wdata_a_i));
    }
    if ((0x4000U & (vlSelf->wdata_a_i ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i 
            = ((0xffffbfffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i) 
               | (0x4000U & vlSelf->wdata_a_i));
    }
    if ((0x8000U & (vlSelf->wdata_a_i ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i 
            = ((0xffff7fffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i) 
               | (0x8000U & vlSelf->wdata_a_i));
    }
    if ((0x10000U & (vlSelf->wdata_a_i ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i 
            = ((0xfffeffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i) 
               | (0x10000U & vlSelf->wdata_a_i));
    }
    if ((0x20000U & (vlSelf->wdata_a_i ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i 
            = ((0xfffdffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i) 
               | (0x20000U & vlSelf->wdata_a_i));
    }
    if ((0x40000U & (vlSelf->wdata_a_i ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i 
            = ((0xfffbffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i) 
               | (0x40000U & vlSelf->wdata_a_i));
    }
    if ((0x80000U & (vlSelf->wdata_a_i ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i 
            = ((0xfff7ffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i) 
               | (0x80000U & vlSelf->wdata_a_i));
    }
    if ((0x100000U & (vlSelf->wdata_a_i ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i 
            = ((0xffefffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i) 
               | (0x100000U & vlSelf->wdata_a_i));
    }
    if ((0x200000U & (vlSelf->wdata_a_i ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i 
            = ((0xffdfffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i) 
               | (0x200000U & vlSelf->wdata_a_i));
    }
    if ((0x400000U & (vlSelf->wdata_a_i ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i 
            = ((0xffbfffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i) 
               | (0x400000U & vlSelf->wdata_a_i));
    }
    if ((0x800000U & (vlSelf->wdata_a_i ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i 
            = ((0xff7fffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i) 
               | (0x800000U & vlSelf->wdata_a_i));
    }
    if ((0x1000000U & (vlSelf->wdata_a_i ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i 
            = ((0xfeffffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i) 
               | (0x1000000U & vlSelf->wdata_a_i));
    }
    if ((0x2000000U & (vlSelf->wdata_a_i ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i 
            = ((0xfdffffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i) 
               | (0x2000000U & vlSelf->wdata_a_i));
    }
    if ((0x4000000U & (vlSelf->wdata_a_i ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i 
            = ((0xfbffffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i) 
               | (0x4000000U & vlSelf->wdata_a_i));
    }
    if ((0x8000000U & (vlSelf->wdata_a_i ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i 
            = ((0xf7ffffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i) 
               | (0x8000000U & vlSelf->wdata_a_i));
    }
    if ((0x10000000U & (vlSelf->wdata_a_i ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i 
            = ((0xefffffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i) 
               | (0x10000000U & vlSelf->wdata_a_i));
    }
    if ((0x20000000U & (vlSelf->wdata_a_i ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i 
            = ((0xdfffffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i) 
               | (0x20000000U & vlSelf->wdata_a_i));
    }
    if ((0x40000000U & (vlSelf->wdata_a_i ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i 
            = ((0xbfffffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i) 
               | (0x40000000U & vlSelf->wdata_a_i));
    }
    if (((vlSelf->wdata_a_i ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i 
            = ((0x7fffffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__wdata_a_i) 
               | (0x80000000U & vlSelf->wdata_a_i));
    }
    vlSelf->ibex_register_file_ff__DOT__we_a_dec = 
        ((0xfffffffcU & vlSelf->ibex_register_file_ff__DOT__we_a_dec) 
         | ((((1U == (IData)(vlSelf->waddr_a_i)) & (IData)(vlSelf->we_a_i)) 
             << 1U) | ((0U == (IData)(vlSelf->waddr_a_i)) 
                       & (IData)(vlSelf->we_a_i))));
    vlSelf->ibex_register_file_ff__DOT__we_a_dec = 
        ((0xfffffff3U & vlSelf->ibex_register_file_ff__DOT__we_a_dec) 
         | ((((3U == (IData)(vlSelf->waddr_a_i)) & (IData)(vlSelf->we_a_i)) 
             << 3U) | (((2U == (IData)(vlSelf->waddr_a_i)) 
                        & (IData)(vlSelf->we_a_i)) 
                       << 2U)));
    vlSelf->ibex_register_file_ff__DOT__we_a_dec = 
        ((0xffffffcfU & vlSelf->ibex_register_file_ff__DOT__we_a_dec) 
         | ((((5U == (IData)(vlSelf->waddr_a_i)) & (IData)(vlSelf->we_a_i)) 
             << 5U) | (((4U == (IData)(vlSelf->waddr_a_i)) 
                        & (IData)(vlSelf->we_a_i)) 
                       << 4U)));
    vlSelf->ibex_register_file_ff__DOT__we_a_dec = 
        ((0xffffff3fU & vlSelf->ibex_register_file_ff__DOT__we_a_dec) 
         | ((((7U == (IData)(vlSelf->waddr_a_i)) & (IData)(vlSelf->we_a_i)) 
             << 7U) | (((6U == (IData)(vlSelf->waddr_a_i)) 
                        & (IData)(vlSelf->we_a_i)) 
                       << 6U)));
    vlSelf->ibex_register_file_ff__DOT__we_a_dec = 
        ((0xfffffcffU & vlSelf->ibex_register_file_ff__DOT__we_a_dec) 
         | ((((9U == (IData)(vlSelf->waddr_a_i)) & (IData)(vlSelf->we_a_i)) 
             << 9U) | (((8U == (IData)(vlSelf->waddr_a_i)) 
                        & (IData)(vlSelf->we_a_i)) 
                       << 8U)));
    vlSelf->ibex_register_file_ff__DOT__we_a_dec = 
        ((0xfffff3ffU & vlSelf->ibex_register_file_ff__DOT__we_a_dec) 
         | ((((0xbU == (IData)(vlSelf->waddr_a_i)) 
              & (IData)(vlSelf->we_a_i)) << 0xbU) | 
            (((0xaU == (IData)(vlSelf->waddr_a_i)) 
              & (IData)(vlSelf->we_a_i)) << 0xaU)));
    vlSelf->ibex_register_file_ff__DOT__we_a_dec = 
        ((0xffffcfffU & vlSelf->ibex_register_file_ff__DOT__we_a_dec) 
         | ((((0xdU == (IData)(vlSelf->waddr_a_i)) 
              & (IData)(vlSelf->we_a_i)) << 0xdU) | 
            (((0xcU == (IData)(vlSelf->waddr_a_i)) 
              & (IData)(vlSelf->we_a_i)) << 0xcU)));
    vlSelf->ibex_register_file_ff__DOT__we_a_dec = 
        ((0xffff3fffU & vlSelf->ibex_register_file_ff__DOT__we_a_dec) 
         | ((((0xfU == (IData)(vlSelf->waddr_a_i)) 
              & (IData)(vlSelf->we_a_i)) << 0xfU) | 
            (((0xeU == (IData)(vlSelf->waddr_a_i)) 
              & (IData)(vlSelf->we_a_i)) << 0xeU)));
    vlSelf->ibex_register_file_ff__DOT__we_a_dec = 
        ((0xfffcffffU & vlSelf->ibex_register_file_ff__DOT__we_a_dec) 
         | ((((0x11U == (IData)(vlSelf->waddr_a_i)) 
              & (IData)(vlSelf->we_a_i)) << 0x11U) 
            | (((0x10U == (IData)(vlSelf->waddr_a_i)) 
                & (IData)(vlSelf->we_a_i)) << 0x10U)));
    vlSelf->ibex_register_file_ff__DOT__we_a_dec = 
        ((0xfff3ffffU & vlSelf->ibex_register_file_ff__DOT__we_a_dec) 
         | ((((0x13U == (IData)(vlSelf->waddr_a_i)) 
              & (IData)(vlSelf->we_a_i)) << 0x13U) 
            | (((0x12U == (IData)(vlSelf->waddr_a_i)) 
                & (IData)(vlSelf->we_a_i)) << 0x12U)));
    vlSelf->ibex_register_file_ff__DOT__we_a_dec = 
        ((0xffcfffffU & vlSelf->ibex_register_file_ff__DOT__we_a_dec) 
         | ((((0x15U == (IData)(vlSelf->waddr_a_i)) 
              & (IData)(vlSelf->we_a_i)) << 0x15U) 
            | (((0x14U == (IData)(vlSelf->waddr_a_i)) 
                & (IData)(vlSelf->we_a_i)) << 0x14U)));
    vlSelf->ibex_register_file_ff__DOT__we_a_dec = 
        ((0xff3fffffU & vlSelf->ibex_register_file_ff__DOT__we_a_dec) 
         | ((((0x17U == (IData)(vlSelf->waddr_a_i)) 
              & (IData)(vlSelf->we_a_i)) << 0x17U) 
            | (((0x16U == (IData)(vlSelf->waddr_a_i)) 
                & (IData)(vlSelf->we_a_i)) << 0x16U)));
    vlSelf->ibex_register_file_ff__DOT__we_a_dec = 
        ((0xfcffffffU & vlSelf->ibex_register_file_ff__DOT__we_a_dec) 
         | ((((0x19U == (IData)(vlSelf->waddr_a_i)) 
              & (IData)(vlSelf->we_a_i)) << 0x19U) 
            | (((0x18U == (IData)(vlSelf->waddr_a_i)) 
                & (IData)(vlSelf->we_a_i)) << 0x18U)));
    vlSelf->ibex_register_file_ff__DOT__we_a_dec = 
        ((0xf3ffffffU & vlSelf->ibex_register_file_ff__DOT__we_a_dec) 
         | ((((0x1bU == (IData)(vlSelf->waddr_a_i)) 
              & (IData)(vlSelf->we_a_i)) << 0x1bU) 
            | (((0x1aU == (IData)(vlSelf->waddr_a_i)) 
                & (IData)(vlSelf->we_a_i)) << 0x1aU)));
    vlSelf->ibex_register_file_ff__DOT__we_a_dec = 
        ((0xcfffffffU & vlSelf->ibex_register_file_ff__DOT__we_a_dec) 
         | ((((0x1dU == (IData)(vlSelf->waddr_a_i)) 
              & (IData)(vlSelf->we_a_i)) << 0x1dU) 
            | (((0x1cU == (IData)(vlSelf->waddr_a_i)) 
                & (IData)(vlSelf->we_a_i)) << 0x1cU)));
    vlSelf->ibex_register_file_ff__DOT__we_a_dec = 
        ((0x3fffffffU & vlSelf->ibex_register_file_ff__DOT__we_a_dec) 
         | ((((0x1fU == (IData)(vlSelf->waddr_a_i)) 
              & (IData)(vlSelf->we_a_i)) << 0x1fU) 
            | (((0x1eU == (IData)(vlSelf->waddr_a_i)) 
                & (IData)(vlSelf->we_a_i)) << 0x1eU)));
    vlSelf->ibex_register_file_ff__DOT__rf_reg[1U] 
        = vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__1__KET____DOT__rf_reg_q;
    vlSelf->ibex_register_file_ff__DOT__rf_reg[2U] 
        = vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q;
    vlSelf->ibex_register_file_ff__DOT__rf_reg[3U] 
        = vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q;
    vlSelf->ibex_register_file_ff__DOT__rf_reg[4U] 
        = vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q;
    vlSelf->ibex_register_file_ff__DOT__rf_reg[5U] 
        = vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q;
    vlSelf->ibex_register_file_ff__DOT__rf_reg[6U] 
        = vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q;
    vlSelf->ibex_register_file_ff__DOT__rf_reg[7U] 
        = vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q;
    vlSelf->ibex_register_file_ff__DOT__rf_reg[8U] 
        = vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q;
    vlSelf->ibex_register_file_ff__DOT__rf_reg[9U] 
        = vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q;
    vlSelf->ibex_register_file_ff__DOT__rf_reg[0xaU] 
        = vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q;
    vlSelf->ibex_register_file_ff__DOT__rf_reg[0xbU] 
        = vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q;
    vlSelf->ibex_register_file_ff__DOT__rf_reg[0xcU] 
        = vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q;
    vlSelf->ibex_register_file_ff__DOT__rf_reg[0xdU] 
        = vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q;
    vlSelf->ibex_register_file_ff__DOT__rf_reg[0xeU] 
        = vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q;
    vlSelf->ibex_register_file_ff__DOT__rf_reg[0xfU] 
        = vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q;
    vlSelf->ibex_register_file_ff__DOT__rf_reg[0x10U] 
        = vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q;
    vlSelf->ibex_register_file_ff__DOT__rf_reg[0x11U] 
        = vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q;
    vlSelf->ibex_register_file_ff__DOT__rf_reg[0x12U] 
        = vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q;
    vlSelf->ibex_register_file_ff__DOT__rf_reg[0x13U] 
        = vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q;
    vlSelf->ibex_register_file_ff__DOT__rf_reg[0x14U] 
        = vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q;
    vlSelf->ibex_register_file_ff__DOT__rf_reg[0x15U] 
        = vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q;
    vlSelf->ibex_register_file_ff__DOT__rf_reg[0x16U] 
        = vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q;
    vlSelf->ibex_register_file_ff__DOT__rf_reg[0x17U] 
        = vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q;
    vlSelf->ibex_register_file_ff__DOT__rf_reg[0x18U] 
        = vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q;
    vlSelf->ibex_register_file_ff__DOT__rf_reg[0x19U] 
        = vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q;
    vlSelf->ibex_register_file_ff__DOT__rf_reg[0x1aU] 
        = vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q;
    vlSelf->ibex_register_file_ff__DOT__rf_reg[0x1bU] 
        = vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q;
    vlSelf->ibex_register_file_ff__DOT__rf_reg[0x1cU] 
        = vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q;
    vlSelf->ibex_register_file_ff__DOT__rf_reg[0x1dU] 
        = vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q;
    vlSelf->ibex_register_file_ff__DOT__rf_reg[0x1eU] 
        = vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q;
    vlSelf->ibex_register_file_ff__DOT__rf_reg[0x1fU] 
        = vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q;
    if ((1U & (vlSelf->ibex_register_file_ff__DOT__we_a_dec 
               ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec 
            = ((0xfffffffeU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec) 
               | (1U & vlSelf->ibex_register_file_ff__DOT__we_a_dec));
    }
    if ((2U & (vlSelf->ibex_register_file_ff__DOT__we_a_dec 
               ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec 
            = ((0xfffffffdU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec) 
               | (2U & vlSelf->ibex_register_file_ff__DOT__we_a_dec));
    }
    if ((4U & (vlSelf->ibex_register_file_ff__DOT__we_a_dec 
               ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec 
            = ((0xfffffffbU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec) 
               | (4U & vlSelf->ibex_register_file_ff__DOT__we_a_dec));
    }
    if ((8U & (vlSelf->ibex_register_file_ff__DOT__we_a_dec 
               ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec 
            = ((0xfffffff7U & vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec) 
               | (8U & vlSelf->ibex_register_file_ff__DOT__we_a_dec));
    }
    if ((0x10U & (vlSelf->ibex_register_file_ff__DOT__we_a_dec 
                  ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec 
            = ((0xffffffefU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec) 
               | (0x10U & vlSelf->ibex_register_file_ff__DOT__we_a_dec));
    }
    if ((0x20U & (vlSelf->ibex_register_file_ff__DOT__we_a_dec 
                  ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec 
            = ((0xffffffdfU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec) 
               | (0x20U & vlSelf->ibex_register_file_ff__DOT__we_a_dec));
    }
    if ((0x40U & (vlSelf->ibex_register_file_ff__DOT__we_a_dec 
                  ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec 
            = ((0xffffffbfU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec) 
               | (0x40U & vlSelf->ibex_register_file_ff__DOT__we_a_dec));
    }
    if ((0x80U & (vlSelf->ibex_register_file_ff__DOT__we_a_dec 
                  ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec 
            = ((0xffffff7fU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec) 
               | (0x80U & vlSelf->ibex_register_file_ff__DOT__we_a_dec));
    }
    if ((0x100U & (vlSelf->ibex_register_file_ff__DOT__we_a_dec 
                   ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec 
            = ((0xfffffeffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec) 
               | (0x100U & vlSelf->ibex_register_file_ff__DOT__we_a_dec));
    }
    if ((0x200U & (vlSelf->ibex_register_file_ff__DOT__we_a_dec 
                   ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec 
            = ((0xfffffdffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec) 
               | (0x200U & vlSelf->ibex_register_file_ff__DOT__we_a_dec));
    }
    if ((0x400U & (vlSelf->ibex_register_file_ff__DOT__we_a_dec 
                   ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec 
            = ((0xfffffbffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec) 
               | (0x400U & vlSelf->ibex_register_file_ff__DOT__we_a_dec));
    }
    if ((0x800U & (vlSelf->ibex_register_file_ff__DOT__we_a_dec 
                   ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec 
            = ((0xfffff7ffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec) 
               | (0x800U & vlSelf->ibex_register_file_ff__DOT__we_a_dec));
    }
    if ((0x1000U & (vlSelf->ibex_register_file_ff__DOT__we_a_dec 
                    ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec 
            = ((0xffffefffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec) 
               | (0x1000U & vlSelf->ibex_register_file_ff__DOT__we_a_dec));
    }
    if ((0x2000U & (vlSelf->ibex_register_file_ff__DOT__we_a_dec 
                    ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec 
            = ((0xffffdfffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec) 
               | (0x2000U & vlSelf->ibex_register_file_ff__DOT__we_a_dec));
    }
    if ((0x4000U & (vlSelf->ibex_register_file_ff__DOT__we_a_dec 
                    ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec 
            = ((0xffffbfffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec) 
               | (0x4000U & vlSelf->ibex_register_file_ff__DOT__we_a_dec));
    }
    if ((0x8000U & (vlSelf->ibex_register_file_ff__DOT__we_a_dec 
                    ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec 
            = ((0xffff7fffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec) 
               | (0x8000U & vlSelf->ibex_register_file_ff__DOT__we_a_dec));
    }
    if ((0x10000U & (vlSelf->ibex_register_file_ff__DOT__we_a_dec 
                     ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec 
            = ((0xfffeffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec) 
               | (0x10000U & vlSelf->ibex_register_file_ff__DOT__we_a_dec));
    }
    if ((0x20000U & (vlSelf->ibex_register_file_ff__DOT__we_a_dec 
                     ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec 
            = ((0xfffdffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec) 
               | (0x20000U & vlSelf->ibex_register_file_ff__DOT__we_a_dec));
    }
    if ((0x40000U & (vlSelf->ibex_register_file_ff__DOT__we_a_dec 
                     ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec))) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec 
            = ((0xfffbffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec) 
               | (0x40000U & vlSelf->ibex_register_file_ff__DOT__we_a_dec));
    }
    if ((0x80000U & (vlSelf->ibex_register_file_ff__DOT__we_a_dec 
                     ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec 
            = ((0xfff7ffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec) 
               | (0x80000U & vlSelf->ibex_register_file_ff__DOT__we_a_dec));
    }
    if ((0x100000U & (vlSelf->ibex_register_file_ff__DOT__we_a_dec 
                      ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec 
            = ((0xffefffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec) 
               | (0x100000U & vlSelf->ibex_register_file_ff__DOT__we_a_dec));
    }
    if ((0x200000U & (vlSelf->ibex_register_file_ff__DOT__we_a_dec 
                      ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec 
            = ((0xffdfffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec) 
               | (0x200000U & vlSelf->ibex_register_file_ff__DOT__we_a_dec));
    }
    if ((0x400000U & (vlSelf->ibex_register_file_ff__DOT__we_a_dec 
                      ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec 
            = ((0xffbfffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec) 
               | (0x400000U & vlSelf->ibex_register_file_ff__DOT__we_a_dec));
    }
    if ((0x800000U & (vlSelf->ibex_register_file_ff__DOT__we_a_dec 
                      ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec 
            = ((0xff7fffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec) 
               | (0x800000U & vlSelf->ibex_register_file_ff__DOT__we_a_dec));
    }
    if ((0x1000000U & (vlSelf->ibex_register_file_ff__DOT__we_a_dec 
                       ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec 
            = ((0xfeffffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec) 
               | (0x1000000U & vlSelf->ibex_register_file_ff__DOT__we_a_dec));
    }
    if ((0x2000000U & (vlSelf->ibex_register_file_ff__DOT__we_a_dec 
                       ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec 
            = ((0xfdffffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec) 
               | (0x2000000U & vlSelf->ibex_register_file_ff__DOT__we_a_dec));
    }
    if ((0x4000000U & (vlSelf->ibex_register_file_ff__DOT__we_a_dec 
                       ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec 
            = ((0xfbffffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec) 
               | (0x4000000U & vlSelf->ibex_register_file_ff__DOT__we_a_dec));
    }
    if ((0x8000000U & (vlSelf->ibex_register_file_ff__DOT__we_a_dec 
                       ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec 
            = ((0xf7ffffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec) 
               | (0x8000000U & vlSelf->ibex_register_file_ff__DOT__we_a_dec));
    }
    if ((0x10000000U & (vlSelf->ibex_register_file_ff__DOT__we_a_dec 
                        ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec 
            = ((0xefffffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec) 
               | (0x10000000U & vlSelf->ibex_register_file_ff__DOT__we_a_dec));
    }
    if ((0x20000000U & (vlSelf->ibex_register_file_ff__DOT__we_a_dec 
                        ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec))) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec 
            = ((0xdfffffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec) 
               | (0x20000000U & vlSelf->ibex_register_file_ff__DOT__we_a_dec));
    }
    if ((0x40000000U & (vlSelf->ibex_register_file_ff__DOT__we_a_dec 
                        ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec 
            = ((0xbfffffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec) 
               | (0x40000000U & vlSelf->ibex_register_file_ff__DOT__we_a_dec));
    }
    if (((vlSelf->ibex_register_file_ff__DOT__we_a_dec 
          ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec 
            = ((0x7fffffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__we_a_dec) 
               | (0x80000000U & vlSelf->ibex_register_file_ff__DOT__we_a_dec));
    }
    vlSelf->rdata_a_o = vlSelf->ibex_register_file_ff__DOT__rf_reg
        [vlSelf->raddr_a_i];
    vlSelf->rdata_b_o = vlSelf->ibex_register_file_ff__DOT__rf_reg
        [vlSelf->raddr_b_i];
    if ((1U & (vlSelf->rdata_a_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o 
            = ((0xfffffffeU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o) 
               | (1U & vlSelf->rdata_a_o));
    }
    if ((2U & (vlSelf->rdata_a_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o 
            = ((0xfffffffdU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o) 
               | (2U & vlSelf->rdata_a_o));
    }
    if ((4U & (vlSelf->rdata_a_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o 
            = ((0xfffffffbU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o) 
               | (4U & vlSelf->rdata_a_o));
    }
    if ((8U & (vlSelf->rdata_a_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o 
            = ((0xfffffff7U & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o) 
               | (8U & vlSelf->rdata_a_o));
    }
    if ((0x10U & (vlSelf->rdata_a_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o 
            = ((0xffffffefU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o) 
               | (0x10U & vlSelf->rdata_a_o));
    }
    if ((0x20U & (vlSelf->rdata_a_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o 
            = ((0xffffffdfU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o) 
               | (0x20U & vlSelf->rdata_a_o));
    }
    if ((0x40U & (vlSelf->rdata_a_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o 
            = ((0xffffffbfU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o) 
               | (0x40U & vlSelf->rdata_a_o));
    }
    if ((0x80U & (vlSelf->rdata_a_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o 
            = ((0xffffff7fU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o) 
               | (0x80U & vlSelf->rdata_a_o));
    }
    if ((0x100U & (vlSelf->rdata_a_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o 
            = ((0xfffffeffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o) 
               | (0x100U & vlSelf->rdata_a_o));
    }
    if ((0x200U & (vlSelf->rdata_a_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o 
            = ((0xfffffdffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o) 
               | (0x200U & vlSelf->rdata_a_o));
    }
    if ((0x400U & (vlSelf->rdata_a_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o 
            = ((0xfffffbffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o) 
               | (0x400U & vlSelf->rdata_a_o));
    }
    if ((0x800U & (vlSelf->rdata_a_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o 
            = ((0xfffff7ffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o) 
               | (0x800U & vlSelf->rdata_a_o));
    }
    if ((0x1000U & (vlSelf->rdata_a_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o 
            = ((0xffffefffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o) 
               | (0x1000U & vlSelf->rdata_a_o));
    }
    if ((0x2000U & (vlSelf->rdata_a_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o 
            = ((0xffffdfffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o) 
               | (0x2000U & vlSelf->rdata_a_o));
    }
    if ((0x4000U & (vlSelf->rdata_a_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o 
            = ((0xffffbfffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o) 
               | (0x4000U & vlSelf->rdata_a_o));
    }
    if ((0x8000U & (vlSelf->rdata_a_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o 
            = ((0xffff7fffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o) 
               | (0x8000U & vlSelf->rdata_a_o));
    }
    if ((0x10000U & (vlSelf->rdata_a_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o 
            = ((0xfffeffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o) 
               | (0x10000U & vlSelf->rdata_a_o));
    }
    if ((0x20000U & (vlSelf->rdata_a_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o 
            = ((0xfffdffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o) 
               | (0x20000U & vlSelf->rdata_a_o));
    }
    if ((0x40000U & (vlSelf->rdata_a_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o 
            = ((0xfffbffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o) 
               | (0x40000U & vlSelf->rdata_a_o));
    }
    if ((0x80000U & (vlSelf->rdata_a_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o 
            = ((0xfff7ffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o) 
               | (0x80000U & vlSelf->rdata_a_o));
    }
    if ((0x100000U & (vlSelf->rdata_a_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o 
            = ((0xffefffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o) 
               | (0x100000U & vlSelf->rdata_a_o));
    }
    if ((0x200000U & (vlSelf->rdata_a_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o 
            = ((0xffdfffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o) 
               | (0x200000U & vlSelf->rdata_a_o));
    }
    if ((0x400000U & (vlSelf->rdata_a_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o 
            = ((0xffbfffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o) 
               | (0x400000U & vlSelf->rdata_a_o));
    }
    if ((0x800000U & (vlSelf->rdata_a_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o 
            = ((0xff7fffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o) 
               | (0x800000U & vlSelf->rdata_a_o));
    }
    if ((0x1000000U & (vlSelf->rdata_a_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o 
            = ((0xfeffffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o) 
               | (0x1000000U & vlSelf->rdata_a_o));
    }
    if ((0x2000000U & (vlSelf->rdata_a_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o 
            = ((0xfdffffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o) 
               | (0x2000000U & vlSelf->rdata_a_o));
    }
    if ((0x4000000U & (vlSelf->rdata_a_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o 
            = ((0xfbffffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o) 
               | (0x4000000U & vlSelf->rdata_a_o));
    }
    if ((0x8000000U & (vlSelf->rdata_a_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o 
            = ((0xf7ffffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o) 
               | (0x8000000U & vlSelf->rdata_a_o));
    }
    if ((0x10000000U & (vlSelf->rdata_a_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o 
            = ((0xefffffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o) 
               | (0x10000000U & vlSelf->rdata_a_o));
    }
    if ((0x20000000U & (vlSelf->rdata_a_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o 
            = ((0xdfffffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o) 
               | (0x20000000U & vlSelf->rdata_a_o));
    }
    if ((0x40000000U & (vlSelf->rdata_a_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o 
            = ((0xbfffffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o) 
               | (0x40000000U & vlSelf->rdata_a_o));
    }
    if (((vlSelf->rdata_a_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o 
            = ((0x7fffffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_a_o) 
               | (0x80000000U & vlSelf->rdata_a_o));
    }
    if ((1U & (vlSelf->rdata_b_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o 
            = ((0xfffffffeU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o) 
               | (1U & vlSelf->rdata_b_o));
    }
    if ((2U & (vlSelf->rdata_b_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o 
            = ((0xfffffffdU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o) 
               | (2U & vlSelf->rdata_b_o));
    }
    if ((4U & (vlSelf->rdata_b_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o 
            = ((0xfffffffbU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o) 
               | (4U & vlSelf->rdata_b_o));
    }
    if ((8U & (vlSelf->rdata_b_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o 
            = ((0xfffffff7U & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o) 
               | (8U & vlSelf->rdata_b_o));
    }
    if ((0x10U & (vlSelf->rdata_b_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o 
            = ((0xffffffefU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o) 
               | (0x10U & vlSelf->rdata_b_o));
    }
    if ((0x20U & (vlSelf->rdata_b_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o 
            = ((0xffffffdfU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o) 
               | (0x20U & vlSelf->rdata_b_o));
    }
    if ((0x40U & (vlSelf->rdata_b_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o 
            = ((0xffffffbfU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o) 
               | (0x40U & vlSelf->rdata_b_o));
    }
    if ((0x80U & (vlSelf->rdata_b_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o 
            = ((0xffffff7fU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o) 
               | (0x80U & vlSelf->rdata_b_o));
    }
    if ((0x100U & (vlSelf->rdata_b_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o 
            = ((0xfffffeffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o) 
               | (0x100U & vlSelf->rdata_b_o));
    }
    if ((0x200U & (vlSelf->rdata_b_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o 
            = ((0xfffffdffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o) 
               | (0x200U & vlSelf->rdata_b_o));
    }
    if ((0x400U & (vlSelf->rdata_b_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o 
            = ((0xfffffbffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o) 
               | (0x400U & vlSelf->rdata_b_o));
    }
    if ((0x800U & (vlSelf->rdata_b_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o 
            = ((0xfffff7ffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o) 
               | (0x800U & vlSelf->rdata_b_o));
    }
    if ((0x1000U & (vlSelf->rdata_b_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o 
            = ((0xffffefffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o) 
               | (0x1000U & vlSelf->rdata_b_o));
    }
    if ((0x2000U & (vlSelf->rdata_b_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o 
            = ((0xffffdfffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o) 
               | (0x2000U & vlSelf->rdata_b_o));
    }
    if ((0x4000U & (vlSelf->rdata_b_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o 
            = ((0xffffbfffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o) 
               | (0x4000U & vlSelf->rdata_b_o));
    }
    if ((0x8000U & (vlSelf->rdata_b_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o 
            = ((0xffff7fffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o) 
               | (0x8000U & vlSelf->rdata_b_o));
    }
    if ((0x10000U & (vlSelf->rdata_b_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o 
            = ((0xfffeffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o) 
               | (0x10000U & vlSelf->rdata_b_o));
    }
    if ((0x20000U & (vlSelf->rdata_b_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o 
            = ((0xfffdffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o) 
               | (0x20000U & vlSelf->rdata_b_o));
    }
    if ((0x40000U & (vlSelf->rdata_b_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o 
            = ((0xfffbffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o) 
               | (0x40000U & vlSelf->rdata_b_o));
    }
    if ((0x80000U & (vlSelf->rdata_b_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o 
            = ((0xfff7ffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o) 
               | (0x80000U & vlSelf->rdata_b_o));
    }
    if ((0x100000U & (vlSelf->rdata_b_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o 
            = ((0xffefffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o) 
               | (0x100000U & vlSelf->rdata_b_o));
    }
    if ((0x200000U & (vlSelf->rdata_b_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o 
            = ((0xffdfffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o) 
               | (0x200000U & vlSelf->rdata_b_o));
    }
    if ((0x400000U & (vlSelf->rdata_b_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o 
            = ((0xffbfffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o) 
               | (0x400000U & vlSelf->rdata_b_o));
    }
    if ((0x800000U & (vlSelf->rdata_b_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o 
            = ((0xff7fffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o) 
               | (0x800000U & vlSelf->rdata_b_o));
    }
    if ((0x1000000U & (vlSelf->rdata_b_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o 
            = ((0xfeffffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o) 
               | (0x1000000U & vlSelf->rdata_b_o));
    }
    if ((0x2000000U & (vlSelf->rdata_b_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o 
            = ((0xfdffffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o) 
               | (0x2000000U & vlSelf->rdata_b_o));
    }
    if ((0x4000000U & (vlSelf->rdata_b_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o 
            = ((0xfbffffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o) 
               | (0x4000000U & vlSelf->rdata_b_o));
    }
    if ((0x8000000U & (vlSelf->rdata_b_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o 
            = ((0xf7ffffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o) 
               | (0x8000000U & vlSelf->rdata_b_o));
    }
    if ((0x10000000U & (vlSelf->rdata_b_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o 
            = ((0xefffffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o) 
               | (0x10000000U & vlSelf->rdata_b_o));
    }
    if ((0x20000000U & (vlSelf->rdata_b_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o 
            = ((0xdfffffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o) 
               | (0x20000000U & vlSelf->rdata_b_o));
    }
    if ((0x40000000U & (vlSelf->rdata_b_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o 
            = ((0xbfffffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o) 
               | (0x40000000U & vlSelf->rdata_b_o));
    }
    if (((vlSelf->rdata_b_o ^ vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o 
            = ((0x7fffffffU & vlSelf->ibex_register_file_ff__DOT____Vtogcov__rdata_b_o) 
               | (0x80000000U & vlSelf->rdata_b_o));
    }
}

VL_ATTR_COLD void Vibex_register_file_ff___024root___configure_coverage(Vibex_register_file_ff___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_register_file_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_register_file_ff___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "verilog/ibex_register_file_ff.v", 22, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "clk_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "verilog/ibex_register_file_ff.v", 23, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rst_ni", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "verilog/ibex_register_file_ff.v", 25, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "test_en_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "verilog/ibex_register_file_ff.v", 26, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "dummy_instr_id_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "verilog/ibex_register_file_ff.v", 27, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "dummy_instr_wb_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "verilog/ibex_register_file_ff.v", 30, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "raddr_a_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "verilog/ibex_register_file_ff.v", 30, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "raddr_a_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "verilog/ibex_register_file_ff.v", 30, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "raddr_a_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "verilog/ibex_register_file_ff.v", 30, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "raddr_a_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "verilog/ibex_register_file_ff.v", 30, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "raddr_a_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "verilog/ibex_register_file_ff.v", 31, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_a_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "verilog/ibex_register_file_ff.v", 31, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_a_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "verilog/ibex_register_file_ff.v", 31, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_a_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "verilog/ibex_register_file_ff.v", 31, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_a_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "verilog/ibex_register_file_ff.v", 31, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_a_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "verilog/ibex_register_file_ff.v", 31, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_a_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "verilog/ibex_register_file_ff.v", 31, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_a_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "verilog/ibex_register_file_ff.v", 31, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_a_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "verilog/ibex_register_file_ff.v", 31, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_a_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "verilog/ibex_register_file_ff.v", 31, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_a_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "verilog/ibex_register_file_ff.v", 31, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_a_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "verilog/ibex_register_file_ff.v", 31, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_a_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "verilog/ibex_register_file_ff.v", 31, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_a_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "verilog/ibex_register_file_ff.v", 31, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_a_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "verilog/ibex_register_file_ff.v", 31, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_a_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "verilog/ibex_register_file_ff.v", 31, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_a_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "verilog/ibex_register_file_ff.v", 31, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_a_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "verilog/ibex_register_file_ff.v", 31, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_a_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "verilog/ibex_register_file_ff.v", 31, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_a_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "verilog/ibex_register_file_ff.v", 31, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_a_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "verilog/ibex_register_file_ff.v", 31, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_a_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "verilog/ibex_register_file_ff.v", 31, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_a_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "verilog/ibex_register_file_ff.v", 31, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_a_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "verilog/ibex_register_file_ff.v", 31, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_a_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "verilog/ibex_register_file_ff.v", 31, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_a_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "verilog/ibex_register_file_ff.v", 31, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_a_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "verilog/ibex_register_file_ff.v", 31, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_a_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "verilog/ibex_register_file_ff.v", 31, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_a_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "verilog/ibex_register_file_ff.v", 31, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_a_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "verilog/ibex_register_file_ff.v", 31, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_a_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "verilog/ibex_register_file_ff.v", 31, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_a_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "verilog/ibex_register_file_ff.v", 31, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_a_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "verilog/ibex_register_file_ff.v", 34, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "raddr_b_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "verilog/ibex_register_file_ff.v", 34, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "raddr_b_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "verilog/ibex_register_file_ff.v", 34, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "raddr_b_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "verilog/ibex_register_file_ff.v", 34, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "raddr_b_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "verilog/ibex_register_file_ff.v", 34, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "raddr_b_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "verilog/ibex_register_file_ff.v", 35, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_b_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "verilog/ibex_register_file_ff.v", 35, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_b_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "verilog/ibex_register_file_ff.v", 35, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_b_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "verilog/ibex_register_file_ff.v", 35, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_b_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "verilog/ibex_register_file_ff.v", 35, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_b_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "verilog/ibex_register_file_ff.v", 35, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_b_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "verilog/ibex_register_file_ff.v", 35, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_b_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "verilog/ibex_register_file_ff.v", 35, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_b_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "verilog/ibex_register_file_ff.v", 35, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_b_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "verilog/ibex_register_file_ff.v", 35, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_b_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "verilog/ibex_register_file_ff.v", 35, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_b_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "verilog/ibex_register_file_ff.v", 35, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_b_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "verilog/ibex_register_file_ff.v", 35, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_b_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "verilog/ibex_register_file_ff.v", 35, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_b_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "verilog/ibex_register_file_ff.v", 35, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_b_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "verilog/ibex_register_file_ff.v", 35, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_b_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "verilog/ibex_register_file_ff.v", 35, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_b_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "verilog/ibex_register_file_ff.v", 35, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_b_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "verilog/ibex_register_file_ff.v", 35, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_b_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "verilog/ibex_register_file_ff.v", 35, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_b_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "verilog/ibex_register_file_ff.v", 35, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_b_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "verilog/ibex_register_file_ff.v", 35, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_b_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "verilog/ibex_register_file_ff.v", 35, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_b_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "verilog/ibex_register_file_ff.v", 35, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_b_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "verilog/ibex_register_file_ff.v", 35, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_b_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "verilog/ibex_register_file_ff.v", 35, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_b_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "verilog/ibex_register_file_ff.v", 35, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_b_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "verilog/ibex_register_file_ff.v", 35, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_b_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "verilog/ibex_register_file_ff.v", 35, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_b_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "verilog/ibex_register_file_ff.v", 35, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_b_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "verilog/ibex_register_file_ff.v", 35, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_b_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "verilog/ibex_register_file_ff.v", 35, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "rdata_b_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "verilog/ibex_register_file_ff.v", 39, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "waddr_a_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "verilog/ibex_register_file_ff.v", 39, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "waddr_a_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "verilog/ibex_register_file_ff.v", 39, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "waddr_a_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "verilog/ibex_register_file_ff.v", 39, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "waddr_a_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "verilog/ibex_register_file_ff.v", 39, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "waddr_a_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "verilog/ibex_register_file_ff.v", 40, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "wdata_a_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "verilog/ibex_register_file_ff.v", 40, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "wdata_a_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "verilog/ibex_register_file_ff.v", 40, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "wdata_a_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "verilog/ibex_register_file_ff.v", 40, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "wdata_a_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "verilog/ibex_register_file_ff.v", 40, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "wdata_a_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "verilog/ibex_register_file_ff.v", 40, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "wdata_a_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "verilog/ibex_register_file_ff.v", 40, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "wdata_a_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "verilog/ibex_register_file_ff.v", 40, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "wdata_a_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "verilog/ibex_register_file_ff.v", 40, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "wdata_a_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "verilog/ibex_register_file_ff.v", 40, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "wdata_a_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "verilog/ibex_register_file_ff.v", 40, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "wdata_a_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "verilog/ibex_register_file_ff.v", 40, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "wdata_a_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "verilog/ibex_register_file_ff.v", 40, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "wdata_a_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "verilog/ibex_register_file_ff.v", 40, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "wdata_a_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "verilog/ibex_register_file_ff.v", 40, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "wdata_a_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "verilog/ibex_register_file_ff.v", 40, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "wdata_a_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "verilog/ibex_register_file_ff.v", 40, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "wdata_a_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "verilog/ibex_register_file_ff.v", 40, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "wdata_a_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "verilog/ibex_register_file_ff.v", 40, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "wdata_a_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "verilog/ibex_register_file_ff.v", 40, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "wdata_a_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "verilog/ibex_register_file_ff.v", 40, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "wdata_a_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "verilog/ibex_register_file_ff.v", 40, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "wdata_a_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "verilog/ibex_register_file_ff.v", 40, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "wdata_a_i[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "verilog/ibex_register_file_ff.v", 40, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "wdata_a_i[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "verilog/ibex_register_file_ff.v", 40, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "wdata_a_i[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "verilog/ibex_register_file_ff.v", 40, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "wdata_a_i[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "verilog/ibex_register_file_ff.v", 40, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "wdata_a_i[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "verilog/ibex_register_file_ff.v", 40, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "wdata_a_i[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "verilog/ibex_register_file_ff.v", 40, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "wdata_a_i[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "verilog/ibex_register_file_ff.v", 40, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "wdata_a_i[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "verilog/ibex_register_file_ff.v", 40, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "wdata_a_i[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "verilog/ibex_register_file_ff.v", 40, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "wdata_a_i[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "verilog/ibex_register_file_ff.v", 41, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "we_a_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "verilog/ibex_register_file_ff.v", 44, 32, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "err_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "verilog/ibex_register_file_ff.v", 51, 25, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "we_a_dec[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "verilog/ibex_register_file_ff.v", 51, 25, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "we_a_dec[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "verilog/ibex_register_file_ff.v", 51, 25, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "we_a_dec[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "verilog/ibex_register_file_ff.v", 51, 25, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "we_a_dec[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "verilog/ibex_register_file_ff.v", 51, 25, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "we_a_dec[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "verilog/ibex_register_file_ff.v", 51, 25, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "we_a_dec[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "verilog/ibex_register_file_ff.v", 51, 25, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "we_a_dec[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "verilog/ibex_register_file_ff.v", 51, 25, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "we_a_dec[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "verilog/ibex_register_file_ff.v", 51, 25, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "we_a_dec[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "verilog/ibex_register_file_ff.v", 51, 25, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "we_a_dec[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "verilog/ibex_register_file_ff.v", 51, 25, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "we_a_dec[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "verilog/ibex_register_file_ff.v", 51, 25, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "we_a_dec[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "verilog/ibex_register_file_ff.v", 51, 25, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "we_a_dec[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "verilog/ibex_register_file_ff.v", 51, 25, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "we_a_dec[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "verilog/ibex_register_file_ff.v", 51, 25, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "we_a_dec[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "verilog/ibex_register_file_ff.v", 51, 25, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "we_a_dec[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "verilog/ibex_register_file_ff.v", 51, 25, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "we_a_dec[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "verilog/ibex_register_file_ff.v", 51, 25, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "we_a_dec[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "verilog/ibex_register_file_ff.v", 51, 25, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "we_a_dec[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "verilog/ibex_register_file_ff.v", 51, 25, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "we_a_dec[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "verilog/ibex_register_file_ff.v", 51, 25, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "we_a_dec[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "verilog/ibex_register_file_ff.v", 51, 25, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "we_a_dec[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "verilog/ibex_register_file_ff.v", 51, 25, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "we_a_dec[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "verilog/ibex_register_file_ff.v", 51, 25, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "we_a_dec[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "verilog/ibex_register_file_ff.v", 51, 25, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "we_a_dec[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "verilog/ibex_register_file_ff.v", 51, 25, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "we_a_dec[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "verilog/ibex_register_file_ff.v", 51, 25, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "we_a_dec[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "verilog/ibex_register_file_ff.v", 51, 25, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "we_a_dec[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "verilog/ibex_register_file_ff.v", 51, 25, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "we_a_dec[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "verilog/ibex_register_file_ff.v", 51, 25, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "we_a_dec[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "verilog/ibex_register_file_ff.v", 51, 25, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "we_a_dec[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "verilog/ibex_register_file_ff.v", 51, 25, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "we_a_dec[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "verilog/ibex_register_file_ff.v", 54, 5, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "block", "54-55");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "verilog/ibex_register_file_ff.v", 53, 3, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "block", "53-54");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "verilog/ibex_register_file_ff.v", 97, 16, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "if", "97-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "verilog/ibex_register_file_ff.v", 97, 17, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "verilog/ibex_register_file_ff.v", 95, 7, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "elsif", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "verilog/ibex_register_file_ff.v", 94, 5, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "block", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "verilog/ibex_register_file_ff.v", 97, 16, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "if", "97-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "verilog/ibex_register_file_ff.v", 97, 17, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "verilog/ibex_register_file_ff.v", 95, 7, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "elsif", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "verilog/ibex_register_file_ff.v", 94, 5, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "block", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "verilog/ibex_register_file_ff.v", 97, 16, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "if", "97-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "verilog/ibex_register_file_ff.v", 97, 17, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "verilog/ibex_register_file_ff.v", 95, 7, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "elsif", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "verilog/ibex_register_file_ff.v", 94, 5, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "block", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "verilog/ibex_register_file_ff.v", 97, 16, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "if", "97-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "verilog/ibex_register_file_ff.v", 97, 17, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "verilog/ibex_register_file_ff.v", 95, 7, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "elsif", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "verilog/ibex_register_file_ff.v", 94, 5, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "block", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "verilog/ibex_register_file_ff.v", 97, 16, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "if", "97-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "verilog/ibex_register_file_ff.v", 97, 17, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "verilog/ibex_register_file_ff.v", 95, 7, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "elsif", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "verilog/ibex_register_file_ff.v", 94, 5, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "block", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "verilog/ibex_register_file_ff.v", 97, 16, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "if", "97-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "verilog/ibex_register_file_ff.v", 97, 17, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "verilog/ibex_register_file_ff.v", 95, 7, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "elsif", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "verilog/ibex_register_file_ff.v", 94, 5, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "block", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "verilog/ibex_register_file_ff.v", 97, 16, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "if", "97-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "verilog/ibex_register_file_ff.v", 97, 17, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "verilog/ibex_register_file_ff.v", 95, 7, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "elsif", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "verilog/ibex_register_file_ff.v", 94, 5, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "block", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "verilog/ibex_register_file_ff.v", 97, 16, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "if", "97-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "verilog/ibex_register_file_ff.v", 97, 17, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "verilog/ibex_register_file_ff.v", 95, 7, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "elsif", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "verilog/ibex_register_file_ff.v", 94, 5, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "block", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "verilog/ibex_register_file_ff.v", 97, 16, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "if", "97-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "verilog/ibex_register_file_ff.v", 97, 17, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "verilog/ibex_register_file_ff.v", 95, 7, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "elsif", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "verilog/ibex_register_file_ff.v", 94, 5, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "block", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "verilog/ibex_register_file_ff.v", 97, 16, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "if", "97-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "verilog/ibex_register_file_ff.v", 97, 17, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "verilog/ibex_register_file_ff.v", 95, 7, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "elsif", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "verilog/ibex_register_file_ff.v", 94, 5, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "block", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "verilog/ibex_register_file_ff.v", 97, 16, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "if", "97-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "verilog/ibex_register_file_ff.v", 97, 17, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "verilog/ibex_register_file_ff.v", 95, 7, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "elsif", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "verilog/ibex_register_file_ff.v", 94, 5, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "block", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "verilog/ibex_register_file_ff.v", 97, 16, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "if", "97-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "verilog/ibex_register_file_ff.v", 97, 17, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "verilog/ibex_register_file_ff.v", 95, 7, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "elsif", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "verilog/ibex_register_file_ff.v", 94, 5, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "block", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "verilog/ibex_register_file_ff.v", 97, 16, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "if", "97-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "verilog/ibex_register_file_ff.v", 97, 17, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "verilog/ibex_register_file_ff.v", 95, 7, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "elsif", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "verilog/ibex_register_file_ff.v", 94, 5, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "block", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "verilog/ibex_register_file_ff.v", 97, 16, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "if", "97-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "verilog/ibex_register_file_ff.v", 97, 17, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "verilog/ibex_register_file_ff.v", 95, 7, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "elsif", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "verilog/ibex_register_file_ff.v", 94, 5, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "block", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "verilog/ibex_register_file_ff.v", 97, 16, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "if", "97-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "verilog/ibex_register_file_ff.v", 97, 17, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "verilog/ibex_register_file_ff.v", 95, 7, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "elsif", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "verilog/ibex_register_file_ff.v", 94, 5, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "block", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "verilog/ibex_register_file_ff.v", 97, 16, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "if", "97-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "verilog/ibex_register_file_ff.v", 97, 17, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "verilog/ibex_register_file_ff.v", 95, 7, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "elsif", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "verilog/ibex_register_file_ff.v", 94, 5, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "block", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "verilog/ibex_register_file_ff.v", 97, 16, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "if", "97-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "verilog/ibex_register_file_ff.v", 97, 17, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "verilog/ibex_register_file_ff.v", 95, 7, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "elsif", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "verilog/ibex_register_file_ff.v", 94, 5, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "block", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "verilog/ibex_register_file_ff.v", 97, 16, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "if", "97-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "verilog/ibex_register_file_ff.v", 97, 17, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "verilog/ibex_register_file_ff.v", 95, 7, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "elsif", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "verilog/ibex_register_file_ff.v", 94, 5, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "block", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "verilog/ibex_register_file_ff.v", 97, 16, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "if", "97-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "verilog/ibex_register_file_ff.v", 97, 17, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "verilog/ibex_register_file_ff.v", 95, 7, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "elsif", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "verilog/ibex_register_file_ff.v", 94, 5, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "block", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "verilog/ibex_register_file_ff.v", 97, 16, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "if", "97-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "verilog/ibex_register_file_ff.v", 97, 17, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "verilog/ibex_register_file_ff.v", 95, 7, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "elsif", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "verilog/ibex_register_file_ff.v", 94, 5, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "block", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "verilog/ibex_register_file_ff.v", 97, 16, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "if", "97-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "verilog/ibex_register_file_ff.v", 97, 17, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "verilog/ibex_register_file_ff.v", 95, 7, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "elsif", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "verilog/ibex_register_file_ff.v", 94, 5, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "block", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "verilog/ibex_register_file_ff.v", 97, 16, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "if", "97-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "verilog/ibex_register_file_ff.v", 97, 17, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "verilog/ibex_register_file_ff.v", 95, 7, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "elsif", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "verilog/ibex_register_file_ff.v", 94, 5, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "block", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "verilog/ibex_register_file_ff.v", 97, 16, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "if", "97-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "verilog/ibex_register_file_ff.v", 97, 17, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "verilog/ibex_register_file_ff.v", 95, 7, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "elsif", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "verilog/ibex_register_file_ff.v", 94, 5, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "block", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "verilog/ibex_register_file_ff.v", 97, 16, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "if", "97-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "verilog/ibex_register_file_ff.v", 97, 17, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "verilog/ibex_register_file_ff.v", 95, 7, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "elsif", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "verilog/ibex_register_file_ff.v", 94, 5, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "block", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "verilog/ibex_register_file_ff.v", 97, 16, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "if", "97-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "verilog/ibex_register_file_ff.v", 97, 17, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "verilog/ibex_register_file_ff.v", 95, 7, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "elsif", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "verilog/ibex_register_file_ff.v", 94, 5, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "block", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "verilog/ibex_register_file_ff.v", 97, 16, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "if", "97-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "verilog/ibex_register_file_ff.v", 97, 17, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "verilog/ibex_register_file_ff.v", 95, 7, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "elsif", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "verilog/ibex_register_file_ff.v", 94, 5, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "block", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "verilog/ibex_register_file_ff.v", 97, 16, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "if", "97-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "verilog/ibex_register_file_ff.v", 97, 17, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "verilog/ibex_register_file_ff.v", 95, 7, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "elsif", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "verilog/ibex_register_file_ff.v", 94, 5, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "block", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "verilog/ibex_register_file_ff.v", 97, 16, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "if", "97-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "verilog/ibex_register_file_ff.v", 97, 17, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "verilog/ibex_register_file_ff.v", 95, 7, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "elsif", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "verilog/ibex_register_file_ff.v", 94, 5, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "block", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "verilog/ibex_register_file_ff.v", 97, 16, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "if", "97-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "verilog/ibex_register_file_ff.v", 97, 17, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "verilog/ibex_register_file_ff.v", 95, 7, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "elsif", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "verilog/ibex_register_file_ff.v", 94, 5, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "block", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "verilog/ibex_register_file_ff.v", 97, 16, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "if", "97-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "verilog/ibex_register_file_ff.v", 97, 17, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "verilog/ibex_register_file_ff.v", 95, 7, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "elsif", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "verilog/ibex_register_file_ff.v", 94, 5, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "block", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "verilog/ibex_register_file_ff.v", 97, 16, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "if", "97-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "verilog/ibex_register_file_ff.v", 97, 17, ".ibex_register_file_ff", "v_branch/ibex_register_file_ff", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "verilog/ibex_register_file_ff.v", 95, 7, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "elsif", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "verilog/ibex_register_file_ff.v", 94, 5, ".ibex_register_file_ff", "v_line/ibex_register_file_ff", "block", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "verilog/ibex_register_file_ff.v", 138, 9, ".ibex_register_file_ff", "v_toggle/ibex_register_file_ff", "unused_test_en", "");
}
