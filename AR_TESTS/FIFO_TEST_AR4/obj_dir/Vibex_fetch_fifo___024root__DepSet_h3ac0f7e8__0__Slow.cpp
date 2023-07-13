// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_fetch_fifo.h for the primary calling header

#include "verilated.h"

#include "Vibex_fetch_fifo__Syms.h"
#include "Vibex_fetch_fifo__Syms.h"
#include "Vibex_fetch_fifo___024root.h"

VL_ATTR_COLD void Vibex_fetch_fifo___024root___eval_initial__TOP(Vibex_fetch_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_fetch_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_fetch_fifo___024root___eval_initial__TOP\n"); );
    // Body
    vlSymsp->__Vcoverage[526].fetch_add(1, std::memory_order_relaxed);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_fetch_fifo___024root___dump_triggers__stl(Vibex_fetch_fifo___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vibex_fetch_fifo___024root___eval_triggers__stl(Vibex_fetch_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_fetch_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_fetch_fifo___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vibex_fetch_fifo___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vibex_fetch_fifo___024root___stl_sequent__TOP__0(Vibex_fetch_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_fetch_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_fetch_fifo___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ ibex_fetch_fifo__DOT____VdfgTmp_hd659e1ce__0;
    ibex_fetch_fifo__DOT____VdfgTmp_hd659e1ce__0 = 0;
    CData/*0:0*/ ibex_fetch_fifo__DOT____VdfgTmp_he8fd8a81__0;
    ibex_fetch_fifo__DOT____VdfgTmp_he8fd8a81__0 = 0;
    CData/*0:0*/ ibex_fetch_fifo__DOT____VdfgTmp_hb697a1d4__0;
    ibex_fetch_fifo__DOT____VdfgTmp_hb697a1d4__0 = 0;
    CData/*0:0*/ ibex_fetch_fifo__DOT____VdfgTmp_h420cf615__0;
    ibex_fetch_fifo__DOT____VdfgTmp_h420cf615__0 = 0;
    // Body
    if ((1U & (~ vlSelf->ibex_fetch_fifo__DOT__instr_addr_q))) {
        vlSymsp->__Vcoverage[525].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->clk_i) ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__clk_i))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__clk_i 
            = vlSelf->clk_i;
    }
    if (((IData)(vlSelf->rst_ni) ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rst_ni))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rst_ni 
            = vlSelf->rst_ni;
    }
    if (((IData)(vlSelf->clear_i) ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__clear_i))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__clear_i 
            = vlSelf->clear_i;
    }
    if (((IData)(vlSelf->in_valid_i) ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_valid_i))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_valid_i 
            = vlSelf->in_valid_i;
    }
    if (((IData)(vlSelf->in_err_i) ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_err_i))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_err_i 
            = vlSelf->in_err_i;
    }
    if (((IData)(vlSelf->out_ready_i) ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_ready_i))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_ready_i 
            = vlSelf->out_ready_i;
    }
    if ((1U & ((IData)(vlSelf->ibex_fetch_fifo__DOT__err_q) 
               ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__err_q)))) {
        vlSymsp->__Vcoverage[334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__err_q 
            = ((6U & (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__err_q)) 
               | (1U & (IData)(vlSelf->ibex_fetch_fifo__DOT__err_q)));
    }
    if ((2U & ((IData)(vlSelf->ibex_fetch_fifo__DOT__err_q) 
               ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__err_q)))) {
        vlSymsp->__Vcoverage[335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__err_q 
            = ((5U & (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__err_q)) 
               | (2U & (IData)(vlSelf->ibex_fetch_fifo__DOT__err_q)));
    }
    if ((4U & ((IData)(vlSelf->ibex_fetch_fifo__DOT__err_q) 
               ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__err_q)))) {
        vlSymsp->__Vcoverage[336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__err_q 
            = ((3U & (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__err_q)) 
               | (4U & (IData)(vlSelf->ibex_fetch_fifo__DOT__err_q)));
    }
    if ((1U & ((IData)(vlSelf->ibex_fetch_fifo__DOT__valid_q) 
               ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_q)))) {
        vlSymsp->__Vcoverage[340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_q 
            = ((6U & (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_q)) 
               | (1U & (IData)(vlSelf->ibex_fetch_fifo__DOT__valid_q)));
    }
    if ((2U & ((IData)(vlSelf->ibex_fetch_fifo__DOT__valid_q) 
               ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_q)))) {
        vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_q 
            = ((5U & (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_q)) 
               | (2U & (IData)(vlSelf->ibex_fetch_fifo__DOT__valid_q)));
    }
    if ((4U & ((IData)(vlSelf->ibex_fetch_fifo__DOT__valid_q) 
               ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_q)))) {
        vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_q 
            = ((3U & (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_q)) 
               | (4U & (IData)(vlSelf->ibex_fetch_fifo__DOT__valid_q)));
    }
    vlSelf->busy_o = (3U & ((IData)(vlSelf->ibex_fetch_fifo__DOT__valid_q) 
                            >> 1U));
    vlSelf->ibex_fetch_fifo__DOT__err_d = (((IData)(vlSelf->in_err_i) 
                                            << 2U) 
                                           | ((2U & 
                                               (((4U 
                                                  & (IData)(vlSelf->ibex_fetch_fifo__DOT__valid_q))
                                                  ? 
                                                 ((IData)(vlSelf->ibex_fetch_fifo__DOT__err_q) 
                                                  >> 2U)
                                                  : (IData)(vlSelf->in_err_i)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((2U 
                                                     & (IData)(vlSelf->ibex_fetch_fifo__DOT__valid_q))
                                                     ? 
                                                    ((IData)(vlSelf->ibex_fetch_fifo__DOT__err_q) 
                                                     >> 1U)
                                                     : (IData)(vlSelf->in_err_i)))));
    if ((1U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_q 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q 
            = ((0x7ffffffeU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q) 
               | (1U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_q));
    }
    if ((2U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_q 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q 
            = ((0x7ffffffdU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q) 
               | (2U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_q));
    }
    if ((4U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_q 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q 
            = ((0x7ffffffbU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q) 
               | (4U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_q));
    }
    if ((8U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_q 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q 
            = ((0x7ffffff7U & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q) 
               | (8U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_q));
    }
    if ((0x10U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_q 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q 
            = ((0x7fffffefU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q) 
               | (0x10U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_q));
    }
    if ((0x20U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_q 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q 
            = ((0x7fffffdfU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q) 
               | (0x20U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_q));
    }
    if ((0x40U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_q 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q 
            = ((0x7fffffbfU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q) 
               | (0x40U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_q));
    }
    if ((0x80U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_q 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q 
            = ((0x7fffff7fU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q) 
               | (0x80U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_q));
    }
    if ((0x100U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_q 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q 
            = ((0x7ffffeffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q) 
               | (0x100U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_q));
    }
    if ((0x200U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_q 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q 
            = ((0x7ffffdffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q) 
               | (0x200U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_q));
    }
    if ((0x400U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_q 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q 
            = ((0x7ffffbffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q) 
               | (0x400U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_q));
    }
    if ((0x800U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_q 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q 
            = ((0x7ffff7ffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q) 
               | (0x800U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_q));
    }
    if ((0x1000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_q 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q 
            = ((0x7fffefffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q) 
               | (0x1000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_q));
    }
    if ((0x2000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_q 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q 
            = ((0x7fffdfffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q) 
               | (0x2000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_q));
    }
    if ((0x4000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_q 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q 
            = ((0x7fffbfffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q) 
               | (0x4000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_q));
    }
    if ((0x8000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_q 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q 
            = ((0x7fff7fffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q) 
               | (0x8000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_q));
    }
    if ((0x10000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_q 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q 
            = ((0x7ffeffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q) 
               | (0x10000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_q));
    }
    if ((0x20000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_q 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q 
            = ((0x7ffdffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q) 
               | (0x20000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_q));
    }
    if ((0x40000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_q 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q 
            = ((0x7ffbffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q) 
               | (0x40000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_q));
    }
    if ((0x80000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_q 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q 
            = ((0x7ff7ffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q) 
               | (0x80000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_q));
    }
    if ((0x100000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_q 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q 
            = ((0x7fefffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q) 
               | (0x100000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_q));
    }
    if ((0x200000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_q 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q 
            = ((0x7fdfffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q) 
               | (0x200000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_q));
    }
    if ((0x400000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_q 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q 
            = ((0x7fbfffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q) 
               | (0x400000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_q));
    }
    if ((0x800000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_q 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q 
            = ((0x7f7fffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q) 
               | (0x800000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_q));
    }
    if ((0x1000000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_q 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q 
            = ((0x7effffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q) 
               | (0x1000000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_q));
    }
    if ((0x2000000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_q 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q 
            = ((0x7dffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q) 
               | (0x2000000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_q));
    }
    if ((0x4000000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_q 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q 
            = ((0x7bffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q) 
               | (0x4000000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_q));
    }
    if ((0x8000000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_q 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q 
            = ((0x77ffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q) 
               | (0x8000000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_q));
    }
    if ((0x10000000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_q 
                        ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q 
            = ((0x6fffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q) 
               | (0x10000000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_q));
    }
    if ((0x20000000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_q 
                        ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q 
            = ((0x5fffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q) 
               | (0x20000000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_q));
    }
    if ((0x40000000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_q 
                        ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q 
            = ((0x3fffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q) 
               | (0x40000000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_q));
    }
    if ((1U & (vlSelf->in_addr_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i 
            = ((0xfffffffeU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i) 
               | (1U & vlSelf->in_addr_i));
    }
    if ((2U & (vlSelf->in_addr_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i 
            = ((0xfffffffdU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i) 
               | (2U & vlSelf->in_addr_i));
    }
    if ((4U & (vlSelf->in_addr_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i 
            = ((0xfffffffbU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i) 
               | (4U & vlSelf->in_addr_i));
    }
    if ((8U & (vlSelf->in_addr_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i 
            = ((0xfffffff7U & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i) 
               | (8U & vlSelf->in_addr_i));
    }
    if ((0x10U & (vlSelf->in_addr_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i 
            = ((0xffffffefU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i) 
               | (0x10U & vlSelf->in_addr_i));
    }
    if ((0x20U & (vlSelf->in_addr_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i 
            = ((0xffffffdfU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i) 
               | (0x20U & vlSelf->in_addr_i));
    }
    if ((0x40U & (vlSelf->in_addr_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i 
            = ((0xffffffbfU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i) 
               | (0x40U & vlSelf->in_addr_i));
    }
    if ((0x80U & (vlSelf->in_addr_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i 
            = ((0xffffff7fU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i) 
               | (0x80U & vlSelf->in_addr_i));
    }
    if ((0x100U & (vlSelf->in_addr_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i 
            = ((0xfffffeffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i) 
               | (0x100U & vlSelf->in_addr_i));
    }
    if ((0x200U & (vlSelf->in_addr_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i 
            = ((0xfffffdffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i) 
               | (0x200U & vlSelf->in_addr_i));
    }
    if ((0x400U & (vlSelf->in_addr_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i 
            = ((0xfffffbffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i) 
               | (0x400U & vlSelf->in_addr_i));
    }
    if ((0x800U & (vlSelf->in_addr_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i 
            = ((0xfffff7ffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i) 
               | (0x800U & vlSelf->in_addr_i));
    }
    if ((0x1000U & (vlSelf->in_addr_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i 
            = ((0xffffefffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i) 
               | (0x1000U & vlSelf->in_addr_i));
    }
    if ((0x2000U & (vlSelf->in_addr_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i 
            = ((0xffffdfffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i) 
               | (0x2000U & vlSelf->in_addr_i));
    }
    if ((0x4000U & (vlSelf->in_addr_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i 
            = ((0xffffbfffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i) 
               | (0x4000U & vlSelf->in_addr_i));
    }
    if ((0x8000U & (vlSelf->in_addr_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i 
            = ((0xffff7fffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i) 
               | (0x8000U & vlSelf->in_addr_i));
    }
    if ((0x10000U & (vlSelf->in_addr_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i 
            = ((0xfffeffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i) 
               | (0x10000U & vlSelf->in_addr_i));
    }
    if ((0x20000U & (vlSelf->in_addr_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i 
            = ((0xfffdffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i) 
               | (0x20000U & vlSelf->in_addr_i));
    }
    if ((0x40000U & (vlSelf->in_addr_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i 
            = ((0xfffbffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i) 
               | (0x40000U & vlSelf->in_addr_i));
    }
    if ((0x80000U & (vlSelf->in_addr_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i 
            = ((0xfff7ffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i) 
               | (0x80000U & vlSelf->in_addr_i));
    }
    if ((0x100000U & (vlSelf->in_addr_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i 
            = ((0xffefffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i) 
               | (0x100000U & vlSelf->in_addr_i));
    }
    if ((0x200000U & (vlSelf->in_addr_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i 
            = ((0xffdfffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i) 
               | (0x200000U & vlSelf->in_addr_i));
    }
    if ((0x400000U & (vlSelf->in_addr_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i 
            = ((0xffbfffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i) 
               | (0x400000U & vlSelf->in_addr_i));
    }
    if ((0x800000U & (vlSelf->in_addr_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i 
            = ((0xff7fffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i) 
               | (0x800000U & vlSelf->in_addr_i));
    }
    if ((0x1000000U & (vlSelf->in_addr_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i 
            = ((0xfeffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i) 
               | (0x1000000U & vlSelf->in_addr_i));
    }
    if ((0x2000000U & (vlSelf->in_addr_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i 
            = ((0xfdffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i) 
               | (0x2000000U & vlSelf->in_addr_i));
    }
    if ((0x4000000U & (vlSelf->in_addr_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i 
            = ((0xfbffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i) 
               | (0x4000000U & vlSelf->in_addr_i));
    }
    if ((0x8000000U & (vlSelf->in_addr_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i 
            = ((0xf7ffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i) 
               | (0x8000000U & vlSelf->in_addr_i));
    }
    if ((0x10000000U & (vlSelf->in_addr_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i 
            = ((0xefffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i) 
               | (0x10000000U & vlSelf->in_addr_i));
    }
    if ((0x20000000U & (vlSelf->in_addr_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i 
            = ((0xdfffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i) 
               | (0x20000000U & vlSelf->in_addr_i));
    }
    if ((0x40000000U & (vlSelf->in_addr_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i 
            = ((0xbfffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i) 
               | (0x40000000U & vlSelf->in_addr_i));
    }
    if (((vlSelf->in_addr_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i 
            = ((0x7fffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_addr_i) 
               | (0x80000000U & vlSelf->in_addr_i));
    }
    if ((1U & (vlSelf->in_rdata_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i 
            = ((0xfffffffeU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i) 
               | (1U & vlSelf->in_rdata_i));
    }
    if ((2U & (vlSelf->in_rdata_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i 
            = ((0xfffffffdU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i) 
               | (2U & vlSelf->in_rdata_i));
    }
    if ((4U & (vlSelf->in_rdata_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i 
            = ((0xfffffffbU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i) 
               | (4U & vlSelf->in_rdata_i));
    }
    if ((8U & (vlSelf->in_rdata_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i 
            = ((0xfffffff7U & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i) 
               | (8U & vlSelf->in_rdata_i));
    }
    if ((0x10U & (vlSelf->in_rdata_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i 
            = ((0xffffffefU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i) 
               | (0x10U & vlSelf->in_rdata_i));
    }
    if ((0x20U & (vlSelf->in_rdata_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i 
            = ((0xffffffdfU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i) 
               | (0x20U & vlSelf->in_rdata_i));
    }
    if ((0x40U & (vlSelf->in_rdata_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i 
            = ((0xffffffbfU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i) 
               | (0x40U & vlSelf->in_rdata_i));
    }
    if ((0x80U & (vlSelf->in_rdata_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i 
            = ((0xffffff7fU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i) 
               | (0x80U & vlSelf->in_rdata_i));
    }
    if ((0x100U & (vlSelf->in_rdata_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i 
            = ((0xfffffeffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i) 
               | (0x100U & vlSelf->in_rdata_i));
    }
    if ((0x200U & (vlSelf->in_rdata_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i 
            = ((0xfffffdffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i) 
               | (0x200U & vlSelf->in_rdata_i));
    }
    if ((0x400U & (vlSelf->in_rdata_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i 
            = ((0xfffffbffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i) 
               | (0x400U & vlSelf->in_rdata_i));
    }
    if ((0x800U & (vlSelf->in_rdata_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i 
            = ((0xfffff7ffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i) 
               | (0x800U & vlSelf->in_rdata_i));
    }
    if ((0x1000U & (vlSelf->in_rdata_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i 
            = ((0xffffefffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i) 
               | (0x1000U & vlSelf->in_rdata_i));
    }
    if ((0x2000U & (vlSelf->in_rdata_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i 
            = ((0xffffdfffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i) 
               | (0x2000U & vlSelf->in_rdata_i));
    }
    if ((0x4000U & (vlSelf->in_rdata_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i 
            = ((0xffffbfffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i) 
               | (0x4000U & vlSelf->in_rdata_i));
    }
    if ((0x8000U & (vlSelf->in_rdata_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i 
            = ((0xffff7fffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i) 
               | (0x8000U & vlSelf->in_rdata_i));
    }
    if ((0x10000U & (vlSelf->in_rdata_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i 
            = ((0xfffeffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i) 
               | (0x10000U & vlSelf->in_rdata_i));
    }
    if ((0x20000U & (vlSelf->in_rdata_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i 
            = ((0xfffdffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i) 
               | (0x20000U & vlSelf->in_rdata_i));
    }
    if ((0x40000U & (vlSelf->in_rdata_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i 
            = ((0xfffbffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i) 
               | (0x40000U & vlSelf->in_rdata_i));
    }
    if ((0x80000U & (vlSelf->in_rdata_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i 
            = ((0xfff7ffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i) 
               | (0x80000U & vlSelf->in_rdata_i));
    }
    if ((0x100000U & (vlSelf->in_rdata_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i 
            = ((0xffefffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i) 
               | (0x100000U & vlSelf->in_rdata_i));
    }
    if ((0x200000U & (vlSelf->in_rdata_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i 
            = ((0xffdfffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i) 
               | (0x200000U & vlSelf->in_rdata_i));
    }
    if ((0x400000U & (vlSelf->in_rdata_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i 
            = ((0xffbfffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i) 
               | (0x400000U & vlSelf->in_rdata_i));
    }
    if ((0x800000U & (vlSelf->in_rdata_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i 
            = ((0xff7fffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i) 
               | (0x800000U & vlSelf->in_rdata_i));
    }
    if ((0x1000000U & (vlSelf->in_rdata_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i 
            = ((0xfeffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i) 
               | (0x1000000U & vlSelf->in_rdata_i));
    }
    if ((0x2000000U & (vlSelf->in_rdata_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i 
            = ((0xfdffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i) 
               | (0x2000000U & vlSelf->in_rdata_i));
    }
    if ((0x4000000U & (vlSelf->in_rdata_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i 
            = ((0xfbffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i) 
               | (0x4000000U & vlSelf->in_rdata_i));
    }
    if ((0x8000000U & (vlSelf->in_rdata_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i 
            = ((0xf7ffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i) 
               | (0x8000000U & vlSelf->in_rdata_i));
    }
    if ((0x10000000U & (vlSelf->in_rdata_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i 
            = ((0xefffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i) 
               | (0x10000000U & vlSelf->in_rdata_i));
    }
    if ((0x20000000U & (vlSelf->in_rdata_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i 
            = ((0xdfffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i) 
               | (0x20000000U & vlSelf->in_rdata_i));
    }
    if ((0x40000000U & (vlSelf->in_rdata_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i 
            = ((0xbfffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i) 
               | (0x40000000U & vlSelf->in_rdata_i));
    }
    if (((vlSelf->in_rdata_i ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i 
            = ((0x7fffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i) 
               | (0x80000000U & vlSelf->in_rdata_i));
    }
    vlSelf->ibex_fetch_fifo__DOT____VdfgTmp_h0de6124d__0 
        = ((~ (IData)(vlSelf->ibex_fetch_fifo__DOT__valid_q)) 
           & (IData)(vlSelf->in_valid_i));
    if ((1U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U] 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U] 
            = ((0xfffffffeU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]) 
               | (1U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U]));
    }
    if ((2U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U] 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U] 
            = ((0xfffffffdU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]) 
               | (2U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U]));
    }
    if ((4U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U] 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U] 
            = ((0xfffffffbU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]) 
               | (4U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U]));
    }
    if ((8U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U] 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U] 
            = ((0xfffffff7U & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]) 
               | (8U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U]));
    }
    if ((0x10U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U] 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U] 
            = ((0xffffffefU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]) 
               | (0x10U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U]));
    }
    if ((0x20U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U] 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U] 
            = ((0xffffffdfU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]) 
               | (0x20U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U]));
    }
    if ((0x40U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U] 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U] 
            = ((0xffffffbfU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]) 
               | (0x40U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U]));
    }
    if ((0x80U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U] 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U] 
            = ((0xffffff7fU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]) 
               | (0x80U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U]));
    }
    if ((0x100U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U] 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U] 
            = ((0xfffffeffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]) 
               | (0x100U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U]));
    }
    if ((0x200U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U] 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U] 
            = ((0xfffffdffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]) 
               | (0x200U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U]));
    }
    if ((0x400U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U] 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U] 
            = ((0xfffffbffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]) 
               | (0x400U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U]));
    }
    if ((0x800U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U] 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U] 
            = ((0xfffff7ffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]) 
               | (0x800U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U]));
    }
    if ((0x1000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U] 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U] 
            = ((0xffffefffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]) 
               | (0x1000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U]));
    }
    if ((0x2000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U] 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U] 
            = ((0xffffdfffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]) 
               | (0x2000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U]));
    }
    if ((0x4000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U] 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U] 
            = ((0xffffbfffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]) 
               | (0x4000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U]));
    }
    if ((0x8000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U] 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U] 
            = ((0xffff7fffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]) 
               | (0x8000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U]));
    }
    if ((0x10000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U] 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U] 
            = ((0xfffeffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]) 
               | (0x10000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U]));
    }
    if ((0x20000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U] 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U] 
            = ((0xfffdffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]) 
               | (0x20000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U]));
    }
    if ((0x40000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U] 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U] 
            = ((0xfffbffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]) 
               | (0x40000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U]));
    }
    if ((0x80000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U] 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U] 
            = ((0xfff7ffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]) 
               | (0x80000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U]));
    }
    if ((0x100000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U] 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U] 
            = ((0xffefffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]) 
               | (0x100000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U]));
    }
    if ((0x200000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U] 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U] 
            = ((0xffdfffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]) 
               | (0x200000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U]));
    }
    if ((0x400000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U] 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U] 
            = ((0xffbfffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]) 
               | (0x400000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U]));
    }
    if ((0x800000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U] 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U] 
            = ((0xff7fffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]) 
               | (0x800000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U]));
    }
    if ((0x1000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U] 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U] 
            = ((0xfeffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]) 
               | (0x1000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U]));
    }
    if ((0x2000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U] 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U] 
            = ((0xfdffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]) 
               | (0x2000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U]));
    }
    if ((0x4000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U] 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U] 
            = ((0xfbffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]) 
               | (0x4000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U]));
    }
    if ((0x8000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U] 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U] 
            = ((0xf7ffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]) 
               | (0x8000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U]));
    }
    if ((0x10000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U] 
                        ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U] 
            = ((0xefffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]) 
               | (0x10000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U]));
    }
    if ((0x20000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U] 
                        ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U] 
            = ((0xdfffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]) 
               | (0x20000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U]));
    }
    if ((0x40000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U] 
                        ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U] 
            = ((0xbfffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]) 
               | (0x40000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U]));
    }
    if (((vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U] 
          ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U] 
            = ((0x7fffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[0U]) 
               | (0x80000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U]));
    }
    if ((1U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U] 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U] 
            = ((0xfffffffeU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]) 
               | (1U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U]));
    }
    if ((2U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U] 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U] 
            = ((0xfffffffdU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]) 
               | (2U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U]));
    }
    if ((4U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U] 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U] 
            = ((0xfffffffbU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]) 
               | (4U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U]));
    }
    if ((8U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U] 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U] 
            = ((0xfffffff7U & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]) 
               | (8U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U]));
    }
    if ((0x10U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U] 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U] 
            = ((0xffffffefU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]) 
               | (0x10U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U]));
    }
    if ((0x20U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U] 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U] 
            = ((0xffffffdfU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]) 
               | (0x20U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U]));
    }
    if ((0x40U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U] 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U] 
            = ((0xffffffbfU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]) 
               | (0x40U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U]));
    }
    if ((0x80U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U] 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U] 
            = ((0xffffff7fU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]) 
               | (0x80U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U]));
    }
    if ((0x100U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U] 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U] 
            = ((0xfffffeffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]) 
               | (0x100U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U]));
    }
    if ((0x200U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U] 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U] 
            = ((0xfffffdffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]) 
               | (0x200U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U]));
    }
    if ((0x400U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U] 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U] 
            = ((0xfffffbffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]) 
               | (0x400U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U]));
    }
    if ((0x800U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U] 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U] 
            = ((0xfffff7ffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]) 
               | (0x800U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U]));
    }
    if ((0x1000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U] 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U] 
            = ((0xffffefffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]) 
               | (0x1000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U]));
    }
    if ((0x2000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U] 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U] 
            = ((0xffffdfffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]) 
               | (0x2000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U]));
    }
    if ((0x4000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U] 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U] 
            = ((0xffffbfffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]) 
               | (0x4000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U]));
    }
    if ((0x8000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U] 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U] 
            = ((0xffff7fffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]) 
               | (0x8000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U]));
    }
    if ((0x10000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U] 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U] 
            = ((0xfffeffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]) 
               | (0x10000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U]));
    }
    if ((0x20000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U] 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U] 
            = ((0xfffdffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]) 
               | (0x20000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U]));
    }
    if ((0x40000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U] 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U] 
            = ((0xfffbffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]) 
               | (0x40000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U]));
    }
    if ((0x80000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U] 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U] 
            = ((0xfff7ffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]) 
               | (0x80000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U]));
    }
    if ((0x100000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U] 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U] 
            = ((0xffefffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]) 
               | (0x100000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U]));
    }
    if ((0x200000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U] 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U] 
            = ((0xffdfffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]) 
               | (0x200000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U]));
    }
    if ((0x400000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U] 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U] 
            = ((0xffbfffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]) 
               | (0x400000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U]));
    }
    if ((0x800000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U] 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U] 
            = ((0xff7fffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]) 
               | (0x800000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U]));
    }
    if ((0x1000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U] 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U] 
            = ((0xfeffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]) 
               | (0x1000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U]));
    }
    if ((0x2000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U] 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U] 
            = ((0xfdffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]) 
               | (0x2000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U]));
    }
    if ((0x4000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U] 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U] 
            = ((0xfbffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]) 
               | (0x4000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U]));
    }
    if ((0x8000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U] 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U] 
            = ((0xf7ffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]) 
               | (0x8000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U]));
    }
    if ((0x10000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U] 
                        ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U] 
            = ((0xefffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]) 
               | (0x10000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U]));
    }
    if ((0x20000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U] 
                        ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U] 
            = ((0xdfffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]) 
               | (0x20000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U]));
    }
    if ((0x40000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U] 
                        ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U] 
            = ((0xbfffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]) 
               | (0x40000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U]));
    }
    if (((vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U] 
          ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U] 
            = ((0x7fffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[1U]) 
               | (0x80000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U]));
    }
    if ((1U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U] 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U] 
            = ((0xfffffffeU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]) 
               | (1U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U]));
    }
    if ((2U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U] 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U] 
            = ((0xfffffffdU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]) 
               | (2U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U]));
    }
    if ((4U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U] 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U] 
            = ((0xfffffffbU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]) 
               | (4U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U]));
    }
    if ((8U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U] 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U] 
            = ((0xfffffff7U & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]) 
               | (8U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U]));
    }
    if ((0x10U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U] 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U] 
            = ((0xffffffefU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]) 
               | (0x10U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U]));
    }
    if ((0x20U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U] 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U] 
            = ((0xffffffdfU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]) 
               | (0x20U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U]));
    }
    if ((0x40U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U] 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U] 
            = ((0xffffffbfU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]) 
               | (0x40U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U]));
    }
    if ((0x80U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U] 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U] 
            = ((0xffffff7fU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]) 
               | (0x80U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U]));
    }
    if ((0x100U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U] 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U] 
            = ((0xfffffeffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]) 
               | (0x100U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U]));
    }
    if ((0x200U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U] 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U] 
            = ((0xfffffdffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]) 
               | (0x200U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U]));
    }
    if ((0x400U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U] 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U] 
            = ((0xfffffbffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]) 
               | (0x400U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U]));
    }
    if ((0x800U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U] 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U] 
            = ((0xfffff7ffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]) 
               | (0x800U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U]));
    }
    if ((0x1000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U] 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U] 
            = ((0xffffefffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]) 
               | (0x1000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U]));
    }
    if ((0x2000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U] 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U] 
            = ((0xffffdfffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]) 
               | (0x2000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U]));
    }
    if ((0x4000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U] 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U] 
            = ((0xffffbfffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]) 
               | (0x4000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U]));
    }
    if ((0x8000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U] 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U] 
            = ((0xffff7fffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]) 
               | (0x8000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U]));
    }
    if ((0x10000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U] 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U] 
            = ((0xfffeffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]) 
               | (0x10000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U]));
    }
    if ((0x20000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U] 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U] 
            = ((0xfffdffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]) 
               | (0x20000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U]));
    }
    if ((0x40000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U] 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U] 
            = ((0xfffbffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]) 
               | (0x40000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U]));
    }
    if ((0x80000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U] 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U] 
            = ((0xfff7ffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]) 
               | (0x80000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U]));
    }
    if ((0x100000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U] 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U] 
            = ((0xffefffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]) 
               | (0x100000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U]));
    }
    if ((0x200000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U] 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U] 
            = ((0xffdfffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]) 
               | (0x200000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U]));
    }
    if ((0x400000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U] 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U] 
            = ((0xffbfffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]) 
               | (0x400000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U]));
    }
    if ((0x800000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U] 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U] 
            = ((0xff7fffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]) 
               | (0x800000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U]));
    }
    if ((0x1000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U] 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U] 
            = ((0xfeffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]) 
               | (0x1000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U]));
    }
    if ((0x2000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U] 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U] 
            = ((0xfdffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]) 
               | (0x2000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U]));
    }
    if ((0x4000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U] 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U] 
            = ((0xfbffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]) 
               | (0x4000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U]));
    }
    if ((0x8000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U] 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U] 
            = ((0xf7ffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]) 
               | (0x8000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U]));
    }
    if ((0x10000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U] 
                        ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U] 
            = ((0xefffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]) 
               | (0x10000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U]));
    }
    if ((0x20000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U] 
                        ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U] 
            = ((0xdfffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]) 
               | (0x20000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U]));
    }
    if ((0x40000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U] 
                        ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U] 
            = ((0xbfffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]) 
               | (0x40000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U]));
    }
    if (((vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U] 
          ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U] 
            = ((0x7fffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_q[2U]) 
               | (0x80000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U]));
    }
    vlSelf->ibex_fetch_fifo__DOT____VdfgTmp_h88eb07d9__0 
        = (IData)((2U == (6U & (IData)(vlSelf->ibex_fetch_fifo__DOT__valid_q))));
    vlSelf->ibex_fetch_fifo__DOT____VdfgTmp_h18d2a020__0 
        = (IData)((1U == (3U & (IData)(vlSelf->ibex_fetch_fifo__DOT__valid_q))));
    vlSelf->ibex_fetch_fifo__DOT__valid = (1U & ((IData)(vlSelf->ibex_fetch_fifo__DOT__valid_q) 
                                                 | (IData)(vlSelf->in_valid_i)));
    vlSelf->ibex_fetch_fifo__DOT__valid_unaligned = 
        (1U & (((IData)(vlSelf->ibex_fetch_fifo__DOT__valid_q) 
                >> 1U) | ((IData)(vlSelf->ibex_fetch_fifo__DOT__valid_q) 
                          & (IData)(vlSelf->in_valid_i))));
    vlSelf->out_addr_o = (vlSelf->ibex_fetch_fifo__DOT__instr_addr_q 
                          << 1U);
    if ((1U & (IData)(vlSelf->ibex_fetch_fifo__DOT__valid_q))) {
        vlSelf->ibex_fetch_fifo__DOT__err = (1U & (IData)(vlSelf->ibex_fetch_fifo__DOT__err_q));
        vlSelf->ibex_fetch_fifo__DOT__rdata = vlSelf->ibex_fetch_fifo__DOT__rdata_q[0U];
    } else {
        vlSelf->ibex_fetch_fifo__DOT__err = (1U & (IData)(vlSelf->in_err_i));
        vlSelf->ibex_fetch_fifo__DOT__rdata = vlSelf->in_rdata_i;
    }
    if ((2U & (IData)(vlSelf->ibex_fetch_fifo__DOT__valid_q))) {
        vlSelf->ibex_fetch_fifo__DOT__err_plus2 = (1U 
                                                   & (IData)(
                                                             (2U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelf->ibex_fetch_fifo__DOT__err_q)))));
        vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U] = 
            vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U];
    } else {
        vlSelf->ibex_fetch_fifo__DOT__err_plus2 = (1U 
                                                   & ((IData)(vlSelf->in_err_i) 
                                                      & ((~ (IData)(vlSelf->ibex_fetch_fifo__DOT__err_q)) 
                                                         & (IData)(vlSelf->ibex_fetch_fifo__DOT__valid_q))));
        vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U] = vlSelf->in_rdata_i;
    }
    vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U] = (IData)(
                                                        (((QData)((IData)(vlSelf->in_rdata_i)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((4U 
                                                                             & (IData)(vlSelf->ibex_fetch_fifo__DOT__valid_q))
                                                                             ? 
                                                                            vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U]
                                                                             : vlSelf->in_rdata_i)))));
    vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U] = (IData)(
                                                        ((((QData)((IData)(vlSelf->in_rdata_i)) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((4U 
                                                                              & (IData)(vlSelf->ibex_fetch_fifo__DOT__valid_q))
                                                                              ? 
                                                                             vlSelf->ibex_fetch_fifo__DOT__rdata_q[2U]
                                                                              : vlSelf->in_rdata_i)))) 
                                                         >> 0x20U));
    if ((1U & ((IData)(vlSelf->busy_o) ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__busy_o)))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__busy_o 
            = ((2U & (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__busy_o)) 
               | (1U & (IData)(vlSelf->busy_o)));
    }
    if ((2U & ((IData)(vlSelf->busy_o) ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__busy_o)))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__busy_o 
            = ((1U & (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__busy_o)) 
               | (2U & (IData)(vlSelf->busy_o)));
    }
    if (((IData)(vlSelf->ibex_fetch_fifo__DOT__err_plus2) 
         ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__err_plus2))) {
        vlSymsp->__Vcoverage[422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__err_plus2 
            = vlSelf->ibex_fetch_fifo__DOT__err_plus2;
    }
    vlSelf->out_err_plus2_o = (vlSelf->ibex_fetch_fifo__DOT__instr_addr_q 
                               & (IData)(vlSelf->ibex_fetch_fifo__DOT__err_plus2));
    if ((1U & ((IData)(vlSelf->ibex_fetch_fifo__DOT__err_d) 
               ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__err_d)))) {
        vlSymsp->__Vcoverage[331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__err_d 
            = ((6U & (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__err_d)) 
               | (1U & (IData)(vlSelf->ibex_fetch_fifo__DOT__err_d)));
    }
    if ((2U & ((IData)(vlSelf->ibex_fetch_fifo__DOT__err_d) 
               ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__err_d)))) {
        vlSymsp->__Vcoverage[332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__err_d 
            = ((5U & (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__err_d)) 
               | (2U & (IData)(vlSelf->ibex_fetch_fifo__DOT__err_d)));
    }
    if ((4U & ((IData)(vlSelf->ibex_fetch_fifo__DOT__err_d) 
               ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__err_d)))) {
        vlSymsp->__Vcoverage[333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__err_d 
            = ((3U & (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__err_d)) 
               | (4U & (IData)(vlSelf->ibex_fetch_fifo__DOT__err_d)));
    }
    vlSelf->ibex_fetch_fifo__DOT____VdfgTmp_h72c0dcf0__0 
        = (1U & ((IData)(vlSelf->ibex_fetch_fifo__DOT____VdfgTmp_h0de6124d__0) 
                 | (IData)(vlSelf->ibex_fetch_fifo__DOT__valid_q)));
    vlSelf->ibex_fetch_fifo__DOT____VdfgTmp_h87bd3038__0 
        = ((IData)(vlSelf->in_valid_i) & (IData)(vlSelf->ibex_fetch_fifo__DOT____VdfgTmp_h88eb07d9__0));
    vlSelf->ibex_fetch_fifo__DOT__lowest_free_entry 
        = (((IData)(vlSelf->ibex_fetch_fifo__DOT____VdfgTmp_h88eb07d9__0) 
            << 2U) | (((IData)(vlSelf->ibex_fetch_fifo__DOT____VdfgTmp_h18d2a020__0) 
                       << 1U) | (1U & (~ (IData)(vlSelf->ibex_fetch_fifo__DOT__valid_q)))));
    vlSelf->ibex_fetch_fifo__DOT____VdfgTmp_h379a9be1__0 
        = ((IData)(vlSelf->in_valid_i) & (IData)(vlSelf->ibex_fetch_fifo__DOT____VdfgTmp_h18d2a020__0));
    if (((IData)(vlSelf->ibex_fetch_fifo__DOT__valid) 
         ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid))) {
        vlSymsp->__Vcoverage[423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid 
            = vlSelf->ibex_fetch_fifo__DOT__valid;
    }
    if (((IData)(vlSelf->ibex_fetch_fifo__DOT__valid_unaligned) 
         ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_unaligned))) {
        vlSymsp->__Vcoverage[424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_unaligned 
            = vlSelf->ibex_fetch_fifo__DOT__valid_unaligned;
    }
    if ((1U & (vlSelf->out_addr_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o 
            = ((0xfffffffeU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o) 
               | (1U & vlSelf->out_addr_o));
    }
    if ((2U & (vlSelf->out_addr_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o 
            = ((0xfffffffdU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o) 
               | (2U & vlSelf->out_addr_o));
    }
    if ((4U & (vlSelf->out_addr_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o 
            = ((0xfffffffbU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o) 
               | (4U & vlSelf->out_addr_o));
    }
    if ((8U & (vlSelf->out_addr_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o 
            = ((0xfffffff7U & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o) 
               | (8U & vlSelf->out_addr_o));
    }
    if ((0x10U & (vlSelf->out_addr_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o 
            = ((0xffffffefU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o) 
               | (0x10U & vlSelf->out_addr_o));
    }
    if ((0x20U & (vlSelf->out_addr_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o 
            = ((0xffffffdfU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o) 
               | (0x20U & vlSelf->out_addr_o));
    }
    if ((0x40U & (vlSelf->out_addr_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o 
            = ((0xffffffbfU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o) 
               | (0x40U & vlSelf->out_addr_o));
    }
    if ((0x80U & (vlSelf->out_addr_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o 
            = ((0xffffff7fU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o) 
               | (0x80U & vlSelf->out_addr_o));
    }
    if ((0x100U & (vlSelf->out_addr_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o 
            = ((0xfffffeffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o) 
               | (0x100U & vlSelf->out_addr_o));
    }
    if ((0x200U & (vlSelf->out_addr_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o 
            = ((0xfffffdffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o) 
               | (0x200U & vlSelf->out_addr_o));
    }
    if ((0x400U & (vlSelf->out_addr_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o 
            = ((0xfffffbffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o) 
               | (0x400U & vlSelf->out_addr_o));
    }
    if ((0x800U & (vlSelf->out_addr_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o 
            = ((0xfffff7ffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o) 
               | (0x800U & vlSelf->out_addr_o));
    }
    if ((0x1000U & (vlSelf->out_addr_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o 
            = ((0xffffefffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o) 
               | (0x1000U & vlSelf->out_addr_o));
    }
    if ((0x2000U & (vlSelf->out_addr_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o 
            = ((0xffffdfffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o) 
               | (0x2000U & vlSelf->out_addr_o));
    }
    if ((0x4000U & (vlSelf->out_addr_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o 
            = ((0xffffbfffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o) 
               | (0x4000U & vlSelf->out_addr_o));
    }
    if ((0x8000U & (vlSelf->out_addr_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o 
            = ((0xffff7fffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o) 
               | (0x8000U & vlSelf->out_addr_o));
    }
    if ((0x10000U & (vlSelf->out_addr_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o 
            = ((0xfffeffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o) 
               | (0x10000U & vlSelf->out_addr_o));
    }
    if ((0x20000U & (vlSelf->out_addr_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o 
            = ((0xfffdffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o) 
               | (0x20000U & vlSelf->out_addr_o));
    }
    if ((0x40000U & (vlSelf->out_addr_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o 
            = ((0xfffbffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o) 
               | (0x40000U & vlSelf->out_addr_o));
    }
    if ((0x80000U & (vlSelf->out_addr_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o 
            = ((0xfff7ffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o) 
               | (0x80000U & vlSelf->out_addr_o));
    }
    if ((0x100000U & (vlSelf->out_addr_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o 
            = ((0xffefffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o) 
               | (0x100000U & vlSelf->out_addr_o));
    }
    if ((0x200000U & (vlSelf->out_addr_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o 
            = ((0xffdfffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o) 
               | (0x200000U & vlSelf->out_addr_o));
    }
    if ((0x400000U & (vlSelf->out_addr_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o 
            = ((0xffbfffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o) 
               | (0x400000U & vlSelf->out_addr_o));
    }
    if ((0x800000U & (vlSelf->out_addr_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o 
            = ((0xff7fffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o) 
               | (0x800000U & vlSelf->out_addr_o));
    }
    if ((0x1000000U & (vlSelf->out_addr_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o 
            = ((0xfeffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o) 
               | (0x1000000U & vlSelf->out_addr_o));
    }
    if ((0x2000000U & (vlSelf->out_addr_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o 
            = ((0xfdffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o) 
               | (0x2000000U & vlSelf->out_addr_o));
    }
    if ((0x4000000U & (vlSelf->out_addr_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o 
            = ((0xfbffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o) 
               | (0x4000000U & vlSelf->out_addr_o));
    }
    if ((0x8000000U & (vlSelf->out_addr_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o 
            = ((0xf7ffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o) 
               | (0x8000000U & vlSelf->out_addr_o));
    }
    if ((0x10000000U & (vlSelf->out_addr_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o 
            = ((0xefffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o) 
               | (0x10000000U & vlSelf->out_addr_o));
    }
    if ((0x20000000U & (vlSelf->out_addr_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o 
            = ((0xdfffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o) 
               | (0x20000000U & vlSelf->out_addr_o));
    }
    if ((0x40000000U & (vlSelf->out_addr_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o 
            = ((0xbfffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o) 
               | (0x40000000U & vlSelf->out_addr_o));
    }
    if (((vlSelf->out_addr_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o 
            = ((0x7fffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_addr_o) 
               | (0x80000000U & vlSelf->out_addr_o));
    }
    if (((IData)(vlSelf->ibex_fetch_fifo__DOT__err) 
         ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__err))) {
        vlSymsp->__Vcoverage[420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__err 
            = vlSelf->ibex_fetch_fifo__DOT__err;
    }
    if ((1U & (vlSelf->ibex_fetch_fifo__DOT__rdata 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata 
            = ((0xfffffffeU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata) 
               | (1U & vlSelf->ibex_fetch_fifo__DOT__rdata));
    }
    if ((2U & (vlSelf->ibex_fetch_fifo__DOT__rdata 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata 
            = ((0xfffffffdU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata) 
               | (2U & vlSelf->ibex_fetch_fifo__DOT__rdata));
    }
    if ((4U & (vlSelf->ibex_fetch_fifo__DOT__rdata 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata 
            = ((0xfffffffbU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata) 
               | (4U & vlSelf->ibex_fetch_fifo__DOT__rdata));
    }
    if ((8U & (vlSelf->ibex_fetch_fifo__DOT__rdata 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata 
            = ((0xfffffff7U & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata) 
               | (8U & vlSelf->ibex_fetch_fifo__DOT__rdata));
    }
    if ((0x10U & (vlSelf->ibex_fetch_fifo__DOT__rdata 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata 
            = ((0xffffffefU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata) 
               | (0x10U & vlSelf->ibex_fetch_fifo__DOT__rdata));
    }
    if ((0x20U & (vlSelf->ibex_fetch_fifo__DOT__rdata 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata 
            = ((0xffffffdfU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata) 
               | (0x20U & vlSelf->ibex_fetch_fifo__DOT__rdata));
    }
    if ((0x40U & (vlSelf->ibex_fetch_fifo__DOT__rdata 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata 
            = ((0xffffffbfU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata) 
               | (0x40U & vlSelf->ibex_fetch_fifo__DOT__rdata));
    }
    if ((0x80U & (vlSelf->ibex_fetch_fifo__DOT__rdata 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata 
            = ((0xffffff7fU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata) 
               | (0x80U & vlSelf->ibex_fetch_fifo__DOT__rdata));
    }
    if ((0x100U & (vlSelf->ibex_fetch_fifo__DOT__rdata 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata 
            = ((0xfffffeffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata) 
               | (0x100U & vlSelf->ibex_fetch_fifo__DOT__rdata));
    }
    if ((0x200U & (vlSelf->ibex_fetch_fifo__DOT__rdata 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata 
            = ((0xfffffdffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata) 
               | (0x200U & vlSelf->ibex_fetch_fifo__DOT__rdata));
    }
    if ((0x400U & (vlSelf->ibex_fetch_fifo__DOT__rdata 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata 
            = ((0xfffffbffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata) 
               | (0x400U & vlSelf->ibex_fetch_fifo__DOT__rdata));
    }
    if ((0x800U & (vlSelf->ibex_fetch_fifo__DOT__rdata 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata 
            = ((0xfffff7ffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata) 
               | (0x800U & vlSelf->ibex_fetch_fifo__DOT__rdata));
    }
    if ((0x1000U & (vlSelf->ibex_fetch_fifo__DOT__rdata 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata 
            = ((0xffffefffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata) 
               | (0x1000U & vlSelf->ibex_fetch_fifo__DOT__rdata));
    }
    if ((0x2000U & (vlSelf->ibex_fetch_fifo__DOT__rdata 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata 
            = ((0xffffdfffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata) 
               | (0x2000U & vlSelf->ibex_fetch_fifo__DOT__rdata));
    }
    if ((0x4000U & (vlSelf->ibex_fetch_fifo__DOT__rdata 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata 
            = ((0xffffbfffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata) 
               | (0x4000U & vlSelf->ibex_fetch_fifo__DOT__rdata));
    }
    if ((0x8000U & (vlSelf->ibex_fetch_fifo__DOT__rdata 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata 
            = ((0xffff7fffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata) 
               | (0x8000U & vlSelf->ibex_fetch_fifo__DOT__rdata));
    }
    if ((0x10000U & (vlSelf->ibex_fetch_fifo__DOT__rdata 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata 
            = ((0xfffeffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata) 
               | (0x10000U & vlSelf->ibex_fetch_fifo__DOT__rdata));
    }
    if ((0x20000U & (vlSelf->ibex_fetch_fifo__DOT__rdata 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata 
            = ((0xfffdffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata) 
               | (0x20000U & vlSelf->ibex_fetch_fifo__DOT__rdata));
    }
    if ((0x40000U & (vlSelf->ibex_fetch_fifo__DOT__rdata 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata 
            = ((0xfffbffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata) 
               | (0x40000U & vlSelf->ibex_fetch_fifo__DOT__rdata));
    }
    if ((0x80000U & (vlSelf->ibex_fetch_fifo__DOT__rdata 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata 
            = ((0xfff7ffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata) 
               | (0x80000U & vlSelf->ibex_fetch_fifo__DOT__rdata));
    }
    if ((0x100000U & (vlSelf->ibex_fetch_fifo__DOT__rdata 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata 
            = ((0xffefffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata) 
               | (0x100000U & vlSelf->ibex_fetch_fifo__DOT__rdata));
    }
    if ((0x200000U & (vlSelf->ibex_fetch_fifo__DOT__rdata 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata 
            = ((0xffdfffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata) 
               | (0x200000U & vlSelf->ibex_fetch_fifo__DOT__rdata));
    }
    if ((0x400000U & (vlSelf->ibex_fetch_fifo__DOT__rdata 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata 
            = ((0xffbfffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata) 
               | (0x400000U & vlSelf->ibex_fetch_fifo__DOT__rdata));
    }
    if ((0x800000U & (vlSelf->ibex_fetch_fifo__DOT__rdata 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata 
            = ((0xff7fffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata) 
               | (0x800000U & vlSelf->ibex_fetch_fifo__DOT__rdata));
    }
    if ((0x1000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata 
            = ((0xfeffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata) 
               | (0x1000000U & vlSelf->ibex_fetch_fifo__DOT__rdata));
    }
    if ((0x2000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata 
            = ((0xfdffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata) 
               | (0x2000000U & vlSelf->ibex_fetch_fifo__DOT__rdata));
    }
    if ((0x4000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata 
            = ((0xfbffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata) 
               | (0x4000000U & vlSelf->ibex_fetch_fifo__DOT__rdata));
    }
    if ((0x8000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata 
            = ((0xf7ffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata) 
               | (0x8000000U & vlSelf->ibex_fetch_fifo__DOT__rdata));
    }
    if ((0x10000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata 
                        ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata 
            = ((0xefffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata) 
               | (0x10000000U & vlSelf->ibex_fetch_fifo__DOT__rdata));
    }
    if ((0x20000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata 
                        ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata 
            = ((0xdfffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata) 
               | (0x20000000U & vlSelf->ibex_fetch_fifo__DOT__rdata));
    }
    if ((0x40000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata 
                        ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata 
            = ((0xbfffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata) 
               | (0x40000000U & vlSelf->ibex_fetch_fifo__DOT__rdata));
    }
    if (((vlSelf->ibex_fetch_fifo__DOT__rdata ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata 
            = ((0x7fffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata) 
               | (0x80000000U & vlSelf->ibex_fetch_fifo__DOT__rdata));
    }
    vlSelf->ibex_fetch_fifo__DOT__aligned_is_compressed 
        = ((~ (IData)(vlSelf->ibex_fetch_fifo__DOT__err)) 
           & (3U != (3U & vlSelf->ibex_fetch_fifo__DOT__rdata)));
    vlSelf->ibex_fetch_fifo__DOT__unaligned_is_compressed 
        = ((~ (IData)(vlSelf->ibex_fetch_fifo__DOT__err)) 
           & (3U != (3U & (vlSelf->ibex_fetch_fifo__DOT__rdata 
                           >> 0x10U))));
    if ((2U & (IData)(vlSelf->ibex_fetch_fifo__DOT__valid_q))) {
        vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned 
            = ((vlSelf->ibex_fetch_fifo__DOT__rdata_q[1U] 
                << 0x10U) | (vlSelf->ibex_fetch_fifo__DOT__rdata 
                             >> 0x10U));
        vlSelf->ibex_fetch_fifo__DOT__err_unaligned 
            = (1U & (((~ (IData)(vlSelf->ibex_fetch_fifo__DOT__unaligned_is_compressed)) 
                      & ((IData)(vlSelf->ibex_fetch_fifo__DOT__err_q) 
                         >> 1U)) | (IData)(vlSelf->ibex_fetch_fifo__DOT__err_q)));
    } else {
        vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned 
            = ((vlSelf->in_rdata_i << 0x10U) | (vlSelf->ibex_fetch_fifo__DOT__rdata 
                                                >> 0x10U));
        vlSelf->ibex_fetch_fifo__DOT__err_unaligned 
            = (1U & (((IData)(vlSelf->ibex_fetch_fifo__DOT__valid_q) 
                      & (IData)(vlSelf->ibex_fetch_fifo__DOT__err_q)) 
                     | ((IData)(vlSelf->in_err_i) & 
                        ((~ (IData)(vlSelf->ibex_fetch_fifo__DOT__valid_q)) 
                         | (~ (IData)(vlSelf->ibex_fetch_fifo__DOT__unaligned_is_compressed))))));
    }
    if ((1U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_q)) {
        vlSymsp->__Vcoverage[524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->out_rdata_o = vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned;
        if (vlSelf->ibex_fetch_fifo__DOT__unaligned_is_compressed) {
            vlSymsp->__Vcoverage[522].fetch_add(1, std::memory_order_relaxed);
            vlSelf->out_valid_o = vlSelf->ibex_fetch_fifo__DOT__valid;
        } else {
            vlSelf->out_valid_o = vlSelf->ibex_fetch_fifo__DOT__valid_unaligned;
        }
        if ((1U & (~ (IData)(vlSelf->ibex_fetch_fifo__DOT__unaligned_is_compressed)))) {
            vlSymsp->__Vcoverage[523].fetch_add(1, std::memory_order_relaxed);
        }
        vlSelf->ibex_fetch_fifo__DOT__addr_incr_two 
            = vlSelf->ibex_fetch_fifo__DOT__unaligned_is_compressed;
        vlSelf->out_err_o = vlSelf->ibex_fetch_fifo__DOT__err_unaligned;
    } else {
        vlSelf->out_rdata_o = vlSelf->ibex_fetch_fifo__DOT__rdata;
        vlSelf->out_valid_o = vlSelf->ibex_fetch_fifo__DOT__valid;
        vlSelf->ibex_fetch_fifo__DOT__addr_incr_two 
            = vlSelf->ibex_fetch_fifo__DOT__aligned_is_compressed;
        vlSelf->out_err_o = vlSelf->ibex_fetch_fifo__DOT__err;
    }
    if ((1U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U] 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U] 
            = ((0xfffffffeU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]) 
               | (1U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U]));
    }
    if ((2U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U] 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U] 
            = ((0xfffffffdU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]) 
               | (2U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U]));
    }
    if ((4U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U] 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U] 
            = ((0xfffffffbU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]) 
               | (4U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U]));
    }
    if ((8U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U] 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U] 
            = ((0xfffffff7U & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]) 
               | (8U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U]));
    }
    if ((0x10U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U] 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U] 
            = ((0xffffffefU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]) 
               | (0x10U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U]));
    }
    if ((0x20U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U] 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U] 
            = ((0xffffffdfU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]) 
               | (0x20U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U]));
    }
    if ((0x40U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U] 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U] 
            = ((0xffffffbfU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]) 
               | (0x40U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U]));
    }
    if ((0x80U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U] 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U] 
            = ((0xffffff7fU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]) 
               | (0x80U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U]));
    }
    if ((0x100U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U] 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U] 
            = ((0xfffffeffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]) 
               | (0x100U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U]));
    }
    if ((0x200U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U] 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U] 
            = ((0xfffffdffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]) 
               | (0x200U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U]));
    }
    if ((0x400U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U] 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U] 
            = ((0xfffffbffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]) 
               | (0x400U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U]));
    }
    if ((0x800U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U] 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U] 
            = ((0xfffff7ffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]) 
               | (0x800U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U]));
    }
    if ((0x1000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U] 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U] 
            = ((0xffffefffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]) 
               | (0x1000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U]));
    }
    if ((0x2000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U] 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U] 
            = ((0xffffdfffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]) 
               | (0x2000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U]));
    }
    if ((0x4000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U] 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U] 
            = ((0xffffbfffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]) 
               | (0x4000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U]));
    }
    if ((0x8000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U] 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U] 
            = ((0xffff7fffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]) 
               | (0x8000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U]));
    }
    if ((0x10000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U] 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U] 
            = ((0xfffeffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]) 
               | (0x10000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U]));
    }
    if ((0x20000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U] 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U] 
            = ((0xfffdffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]) 
               | (0x20000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U]));
    }
    if ((0x40000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U] 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U] 
            = ((0xfffbffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]) 
               | (0x40000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U]));
    }
    if ((0x80000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U] 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U] 
            = ((0xfff7ffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]) 
               | (0x80000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U]));
    }
    if ((0x100000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U] 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U] 
            = ((0xffefffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]) 
               | (0x100000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U]));
    }
    if ((0x200000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U] 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U] 
            = ((0xffdfffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]) 
               | (0x200000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U]));
    }
    if ((0x400000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U] 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U] 
            = ((0xffbfffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]) 
               | (0x400000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U]));
    }
    if ((0x800000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U] 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U] 
            = ((0xff7fffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]) 
               | (0x800000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U]));
    }
    if ((0x1000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U] 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U] 
            = ((0xfeffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]) 
               | (0x1000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U]));
    }
    if ((0x2000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U] 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U] 
            = ((0xfdffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]) 
               | (0x2000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U]));
    }
    if ((0x4000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U] 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U] 
            = ((0xfbffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]) 
               | (0x4000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U]));
    }
    if ((0x8000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U] 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U] 
            = ((0xf7ffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]) 
               | (0x8000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U]));
    }
    if ((0x10000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U] 
                        ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U] 
            = ((0xefffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]) 
               | (0x10000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U]));
    }
    if ((0x20000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U] 
                        ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U] 
            = ((0xdfffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]) 
               | (0x20000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U]));
    }
    if ((0x40000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U] 
                        ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U] 
            = ((0xbfffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]) 
               | (0x40000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U]));
    }
    if (((vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U] 
          ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U] 
            = ((0x7fffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[0U]) 
               | (0x80000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[0U]));
    }
    if ((1U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U] 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U] 
            = ((0xfffffffeU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]) 
               | (1U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U]));
    }
    if ((2U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U] 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U] 
            = ((0xfffffffdU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]) 
               | (2U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U]));
    }
    if ((4U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U] 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U] 
            = ((0xfffffffbU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]) 
               | (4U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U]));
    }
    if ((8U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U] 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U] 
            = ((0xfffffff7U & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]) 
               | (8U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U]));
    }
    if ((0x10U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U] 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U] 
            = ((0xffffffefU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]) 
               | (0x10U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U]));
    }
    if ((0x20U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U] 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U] 
            = ((0xffffffdfU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]) 
               | (0x20U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U]));
    }
    if ((0x40U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U] 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U] 
            = ((0xffffffbfU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]) 
               | (0x40U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U]));
    }
    if ((0x80U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U] 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U] 
            = ((0xffffff7fU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]) 
               | (0x80U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U]));
    }
    if ((0x100U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U] 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U] 
            = ((0xfffffeffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]) 
               | (0x100U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U]));
    }
    if ((0x200U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U] 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U] 
            = ((0xfffffdffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]) 
               | (0x200U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U]));
    }
    if ((0x400U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U] 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U] 
            = ((0xfffffbffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]) 
               | (0x400U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U]));
    }
    if ((0x800U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U] 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U] 
            = ((0xfffff7ffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]) 
               | (0x800U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U]));
    }
    if ((0x1000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U] 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U] 
            = ((0xffffefffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]) 
               | (0x1000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U]));
    }
    if ((0x2000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U] 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U] 
            = ((0xffffdfffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]) 
               | (0x2000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U]));
    }
    if ((0x4000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U] 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U] 
            = ((0xffffbfffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]) 
               | (0x4000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U]));
    }
    if ((0x8000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U] 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U] 
            = ((0xffff7fffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]) 
               | (0x8000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U]));
    }
    if ((0x10000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U] 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U] 
            = ((0xfffeffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]) 
               | (0x10000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U]));
    }
    if ((0x20000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U] 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U] 
            = ((0xfffdffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]) 
               | (0x20000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U]));
    }
    if ((0x40000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U] 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U] 
            = ((0xfffbffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]) 
               | (0x40000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U]));
    }
    if ((0x80000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U] 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U] 
            = ((0xfff7ffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]) 
               | (0x80000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U]));
    }
    if ((0x100000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U] 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U] 
            = ((0xffefffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]) 
               | (0x100000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U]));
    }
    if ((0x200000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U] 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U] 
            = ((0xffdfffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]) 
               | (0x200000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U]));
    }
    if ((0x400000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U] 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U] 
            = ((0xffbfffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]) 
               | (0x400000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U]));
    }
    if ((0x800000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U] 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U] 
            = ((0xff7fffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]) 
               | (0x800000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U]));
    }
    if ((0x1000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U] 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U] 
            = ((0xfeffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]) 
               | (0x1000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U]));
    }
    if ((0x2000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U] 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U] 
            = ((0xfdffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]) 
               | (0x2000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U]));
    }
    if ((0x4000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U] 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U] 
            = ((0xfbffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]) 
               | (0x4000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U]));
    }
    if ((0x8000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U] 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U] 
            = ((0xf7ffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]) 
               | (0x8000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U]));
    }
    if ((0x10000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U] 
                        ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U] 
            = ((0xefffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]) 
               | (0x10000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U]));
    }
    if ((0x20000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U] 
                        ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U] 
            = ((0xdfffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]) 
               | (0x20000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U]));
    }
    if ((0x40000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U] 
                        ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U] 
            = ((0xbfffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]) 
               | (0x40000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U]));
    }
    if (((vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U] 
          ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U] 
            = ((0x7fffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[1U]) 
               | (0x80000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[1U]));
    }
    if ((1U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U] 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U] 
            = ((0xfffffffeU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]) 
               | (1U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U]));
    }
    if ((2U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U] 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U] 
            = ((0xfffffffdU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]) 
               | (2U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U]));
    }
    if ((4U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U] 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U] 
            = ((0xfffffffbU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]) 
               | (4U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U]));
    }
    if ((8U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U] 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U] 
            = ((0xfffffff7U & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]) 
               | (8U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U]));
    }
    if ((0x10U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U] 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U] 
            = ((0xffffffefU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]) 
               | (0x10U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U]));
    }
    if ((0x20U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U] 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U] 
            = ((0xffffffdfU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]) 
               | (0x20U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U]));
    }
    if ((0x40U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U] 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U] 
            = ((0xffffffbfU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]) 
               | (0x40U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U]));
    }
    if ((0x80U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U] 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U] 
            = ((0xffffff7fU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]) 
               | (0x80U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U]));
    }
    if ((0x100U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U] 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U] 
            = ((0xfffffeffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]) 
               | (0x100U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U]));
    }
    if ((0x200U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U] 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U] 
            = ((0xfffffdffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]) 
               | (0x200U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U]));
    }
    if ((0x400U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U] 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U] 
            = ((0xfffffbffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]) 
               | (0x400U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U]));
    }
    if ((0x800U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U] 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U] 
            = ((0xfffff7ffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]) 
               | (0x800U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U]));
    }
    if ((0x1000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U] 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U] 
            = ((0xffffefffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]) 
               | (0x1000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U]));
    }
    if ((0x2000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U] 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U] 
            = ((0xffffdfffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]) 
               | (0x2000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U]));
    }
    if ((0x4000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U] 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U] 
            = ((0xffffbfffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]) 
               | (0x4000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U]));
    }
    if ((0x8000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U] 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U] 
            = ((0xffff7fffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]) 
               | (0x8000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U]));
    }
    if ((0x10000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U] 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U] 
            = ((0xfffeffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]) 
               | (0x10000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U]));
    }
    if ((0x20000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U] 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U] 
            = ((0xfffdffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]) 
               | (0x20000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U]));
    }
    if ((0x40000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U] 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U] 
            = ((0xfffbffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]) 
               | (0x40000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U]));
    }
    if ((0x80000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U] 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U] 
            = ((0xfff7ffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]) 
               | (0x80000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U]));
    }
    if ((0x100000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U] 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U] 
            = ((0xffefffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]) 
               | (0x100000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U]));
    }
    if ((0x200000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U] 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U] 
            = ((0xffdfffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]) 
               | (0x200000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U]));
    }
    if ((0x400000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U] 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U] 
            = ((0xffbfffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]) 
               | (0x400000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U]));
    }
    if ((0x800000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U] 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U] 
            = ((0xff7fffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]) 
               | (0x800000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U]));
    }
    if ((0x1000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U] 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U] 
            = ((0xfeffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]) 
               | (0x1000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U]));
    }
    if ((0x2000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U] 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U] 
            = ((0xfdffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]) 
               | (0x2000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U]));
    }
    if ((0x4000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U] 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U] 
            = ((0xfbffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]) 
               | (0x4000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U]));
    }
    if ((0x8000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U] 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U] 
            = ((0xf7ffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]) 
               | (0x8000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U]));
    }
    if ((0x10000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U] 
                        ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U] 
            = ((0xefffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]) 
               | (0x10000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U]));
    }
    if ((0x20000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U] 
                        ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U] 
            = ((0xdfffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]) 
               | (0x20000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U]));
    }
    if ((0x40000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U] 
                        ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U] 
            = ((0xbfffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]) 
               | (0x40000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U]));
    }
    if (((vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U] 
          ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U] 
            = ((0x7fffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_d[2U]) 
               | (0x80000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_d[2U]));
    }
    if (((IData)(vlSelf->out_err_plus2_o) ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_err_plus2_o))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_err_plus2_o 
            = vlSelf->out_err_plus2_o;
    }
    vlSelf->ibex_fetch_fifo__DOT____VdfgTmp_h46f3913b__0 
        = (IData)((((IData)(vlSelf->ibex_fetch_fifo__DOT__valid_q) 
                    >> 2U) | (IData)(vlSelf->ibex_fetch_fifo__DOT____VdfgTmp_h87bd3038__0)));
    if ((1U & ((IData)(vlSelf->ibex_fetch_fifo__DOT__lowest_free_entry) 
               ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__lowest_free_entry)))) {
        vlSymsp->__Vcoverage[343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__lowest_free_entry 
            = ((6U & (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__lowest_free_entry)) 
               | (1U & (IData)(vlSelf->ibex_fetch_fifo__DOT__lowest_free_entry)));
    }
    if ((2U & ((IData)(vlSelf->ibex_fetch_fifo__DOT__lowest_free_entry) 
               ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__lowest_free_entry)))) {
        vlSymsp->__Vcoverage[344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__lowest_free_entry 
            = ((5U & (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__lowest_free_entry)) 
               | (2U & (IData)(vlSelf->ibex_fetch_fifo__DOT__lowest_free_entry)));
    }
    if ((4U & ((IData)(vlSelf->ibex_fetch_fifo__DOT__lowest_free_entry) 
               ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__lowest_free_entry)))) {
        vlSymsp->__Vcoverage[345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__lowest_free_entry 
            = ((3U & (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__lowest_free_entry)) 
               | (4U & (IData)(vlSelf->ibex_fetch_fifo__DOT__lowest_free_entry)));
    }
    vlSelf->ibex_fetch_fifo__DOT____VdfgTmp_h11e4035a__0 
        = (1U & ((IData)(vlSelf->ibex_fetch_fifo__DOT____VdfgTmp_h379a9be1__0) 
                 | ((IData)(vlSelf->ibex_fetch_fifo__DOT__valid_q) 
                    >> 1U)));
    if ((1U & (vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned 
            = ((0xfffffffeU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned) 
               | (1U & vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned));
    }
    if ((2U & (vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned 
            = ((0xfffffffdU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned) 
               | (2U & vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned));
    }
    if ((4U & (vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned 
            = ((0xfffffffbU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned) 
               | (4U & vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned));
    }
    if ((8U & (vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned 
            = ((0xfffffff7U & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned) 
               | (8U & vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned));
    }
    if ((0x10U & (vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned 
            = ((0xffffffefU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned) 
               | (0x10U & vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned));
    }
    if ((0x20U & (vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned 
            = ((0xffffffdfU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned) 
               | (0x20U & vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned));
    }
    if ((0x40U & (vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned 
            = ((0xffffffbfU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned) 
               | (0x40U & vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned));
    }
    if ((0x80U & (vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned 
            = ((0xffffff7fU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned) 
               | (0x80U & vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned));
    }
    if ((0x100U & (vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned 
            = ((0xfffffeffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned) 
               | (0x100U & vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned));
    }
    if ((0x200U & (vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned 
            = ((0xfffffdffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned) 
               | (0x200U & vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned));
    }
    if ((0x400U & (vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned 
            = ((0xfffffbffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned) 
               | (0x400U & vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned));
    }
    if ((0x800U & (vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned 
            = ((0xfffff7ffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned) 
               | (0x800U & vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned));
    }
    if ((0x1000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned 
            = ((0xffffefffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned) 
               | (0x1000U & vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned));
    }
    if ((0x2000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned 
            = ((0xffffdfffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned) 
               | (0x2000U & vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned));
    }
    if ((0x4000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned 
            = ((0xffffbfffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned) 
               | (0x4000U & vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned));
    }
    if ((0x8000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned 
            = ((0xffff7fffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned) 
               | (0x8000U & vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned));
    }
    if ((0x10000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned 
            = ((0xfffeffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned) 
               | (0x10000U & vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned));
    }
    if ((0x20000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned 
            = ((0xfffdffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned) 
               | (0x20000U & vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned));
    }
    if ((0x40000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned 
            = ((0xfffbffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned) 
               | (0x40000U & vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned));
    }
    if ((0x80000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned 
            = ((0xfff7ffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned) 
               | (0x80000U & vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned));
    }
    if ((0x100000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned 
            = ((0xffefffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned) 
               | (0x100000U & vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned));
    }
    if ((0x200000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned 
            = ((0xffdfffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned) 
               | (0x200000U & vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned));
    }
    if ((0x400000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned 
            = ((0xffbfffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned) 
               | (0x400000U & vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned));
    }
    if ((0x800000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned 
            = ((0xff7fffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned) 
               | (0x800000U & vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned));
    }
    if ((0x1000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned 
            = ((0xfeffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned) 
               | (0x1000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned));
    }
    if ((0x2000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned 
            = ((0xfdffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned) 
               | (0x2000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned));
    }
    if ((0x4000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned 
            = ((0xfbffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned) 
               | (0x4000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned));
    }
    if ((0x8000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned 
            = ((0xf7ffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned) 
               | (0x8000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned));
    }
    if ((0x10000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned 
                        ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned 
            = ((0xefffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned) 
               | (0x10000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned));
    }
    if ((0x20000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned 
                        ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned 
            = ((0xdfffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned) 
               | (0x20000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned));
    }
    if ((0x40000000U & (vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned 
                        ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned 
            = ((0xbfffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned) 
               | (0x40000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned));
    }
    if (((vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned 
          ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned 
            = ((0x7fffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned) 
               | (0x80000000U & vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned));
    }
    if (((IData)(vlSelf->ibex_fetch_fifo__DOT__aligned_is_compressed) 
         ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__aligned_is_compressed))) {
        vlSymsp->__Vcoverage[425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__aligned_is_compressed 
            = vlSelf->ibex_fetch_fifo__DOT__aligned_is_compressed;
    }
    if (((IData)(vlSelf->ibex_fetch_fifo__DOT__unaligned_is_compressed) 
         ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__unaligned_is_compressed))) {
        vlSymsp->__Vcoverage[426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__unaligned_is_compressed 
            = vlSelf->ibex_fetch_fifo__DOT__unaligned_is_compressed;
    }
    vlSelf->ibex_fetch_fifo__DOT__valid_pushed = (((IData)(vlSelf->ibex_fetch_fifo__DOT____VdfgTmp_h46f3913b__0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->ibex_fetch_fifo__DOT____VdfgTmp_h11e4035a__0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->ibex_fetch_fifo__DOT____VdfgTmp_h72c0dcf0__0)));
    if ((1U & (vlSelf->out_rdata_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o 
            = ((0xfffffffeU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o) 
               | (1U & vlSelf->out_rdata_o));
    }
    if ((2U & (vlSelf->out_rdata_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o 
            = ((0xfffffffdU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o) 
               | (2U & vlSelf->out_rdata_o));
    }
    if ((4U & (vlSelf->out_rdata_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o 
            = ((0xfffffffbU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o) 
               | (4U & vlSelf->out_rdata_o));
    }
    if ((8U & (vlSelf->out_rdata_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o 
            = ((0xfffffff7U & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o) 
               | (8U & vlSelf->out_rdata_o));
    }
    if ((0x10U & (vlSelf->out_rdata_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o 
            = ((0xffffffefU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o) 
               | (0x10U & vlSelf->out_rdata_o));
    }
    if ((0x20U & (vlSelf->out_rdata_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o 
            = ((0xffffffdfU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o) 
               | (0x20U & vlSelf->out_rdata_o));
    }
    if ((0x40U & (vlSelf->out_rdata_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o 
            = ((0xffffffbfU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o) 
               | (0x40U & vlSelf->out_rdata_o));
    }
    if ((0x80U & (vlSelf->out_rdata_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o 
            = ((0xffffff7fU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o) 
               | (0x80U & vlSelf->out_rdata_o));
    }
    if ((0x100U & (vlSelf->out_rdata_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o 
            = ((0xfffffeffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o) 
               | (0x100U & vlSelf->out_rdata_o));
    }
    if ((0x200U & (vlSelf->out_rdata_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o 
            = ((0xfffffdffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o) 
               | (0x200U & vlSelf->out_rdata_o));
    }
    if ((0x400U & (vlSelf->out_rdata_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o 
            = ((0xfffffbffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o) 
               | (0x400U & vlSelf->out_rdata_o));
    }
    if ((0x800U & (vlSelf->out_rdata_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o 
            = ((0xfffff7ffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o) 
               | (0x800U & vlSelf->out_rdata_o));
    }
    if ((0x1000U & (vlSelf->out_rdata_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o))) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o 
            = ((0xffffefffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o) 
               | (0x1000U & vlSelf->out_rdata_o));
    }
    if ((0x2000U & (vlSelf->out_rdata_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o 
            = ((0xffffdfffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o) 
               | (0x2000U & vlSelf->out_rdata_o));
    }
    if ((0x4000U & (vlSelf->out_rdata_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o 
            = ((0xffffbfffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o) 
               | (0x4000U & vlSelf->out_rdata_o));
    }
    if ((0x8000U & (vlSelf->out_rdata_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o 
            = ((0xffff7fffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o) 
               | (0x8000U & vlSelf->out_rdata_o));
    }
    if ((0x10000U & (vlSelf->out_rdata_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o 
            = ((0xfffeffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o) 
               | (0x10000U & vlSelf->out_rdata_o));
    }
    if ((0x20000U & (vlSelf->out_rdata_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o 
            = ((0xfffdffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o) 
               | (0x20000U & vlSelf->out_rdata_o));
    }
    if ((0x40000U & (vlSelf->out_rdata_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o 
            = ((0xfffbffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o) 
               | (0x40000U & vlSelf->out_rdata_o));
    }
    if ((0x80000U & (vlSelf->out_rdata_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o 
            = ((0xfff7ffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o) 
               | (0x80000U & vlSelf->out_rdata_o));
    }
    if ((0x100000U & (vlSelf->out_rdata_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o 
            = ((0xffefffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o) 
               | (0x100000U & vlSelf->out_rdata_o));
    }
    if ((0x200000U & (vlSelf->out_rdata_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o 
            = ((0xffdfffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o) 
               | (0x200000U & vlSelf->out_rdata_o));
    }
    if ((0x400000U & (vlSelf->out_rdata_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o 
            = ((0xffbfffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o) 
               | (0x400000U & vlSelf->out_rdata_o));
    }
    if ((0x800000U & (vlSelf->out_rdata_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o 
            = ((0xff7fffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o) 
               | (0x800000U & vlSelf->out_rdata_o));
    }
    if ((0x1000000U & (vlSelf->out_rdata_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o 
            = ((0xfeffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o) 
               | (0x1000000U & vlSelf->out_rdata_o));
    }
    if ((0x2000000U & (vlSelf->out_rdata_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o 
            = ((0xfdffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o) 
               | (0x2000000U & vlSelf->out_rdata_o));
    }
    if ((0x4000000U & (vlSelf->out_rdata_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o 
            = ((0xfbffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o) 
               | (0x4000000U & vlSelf->out_rdata_o));
    }
    if ((0x8000000U & (vlSelf->out_rdata_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o 
            = ((0xf7ffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o) 
               | (0x8000000U & vlSelf->out_rdata_o));
    }
    if ((0x10000000U & (vlSelf->out_rdata_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o 
            = ((0xefffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o) 
               | (0x10000000U & vlSelf->out_rdata_o));
    }
    if ((0x20000000U & (vlSelf->out_rdata_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o 
            = ((0xdfffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o) 
               | (0x20000000U & vlSelf->out_rdata_o));
    }
    if ((0x40000000U & (vlSelf->out_rdata_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o 
            = ((0xbfffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o) 
               | (0x40000000U & vlSelf->out_rdata_o));
    }
    if (((vlSelf->out_rdata_o ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o 
            = ((0x7fffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o) 
               | (0x80000000U & vlSelf->out_rdata_o));
    }
    if (((IData)(vlSelf->ibex_fetch_fifo__DOT__err_unaligned) 
         ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__err_unaligned))) {
        vlSymsp->__Vcoverage[421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__err_unaligned 
            = vlSelf->ibex_fetch_fifo__DOT__err_unaligned;
    }
    if (((IData)(vlSelf->out_valid_o) ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_valid_o))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_valid_o 
            = vlSelf->out_valid_o;
    }
    ibex_fetch_fifo__DOT____VdfgTmp_hd659e1ce__0 = 
        ((IData)(vlSelf->out_ready_i) & (IData)(vlSelf->out_valid_o));
    if (((IData)(vlSelf->ibex_fetch_fifo__DOT__addr_incr_two) 
         ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__addr_incr_two))) {
        vlSymsp->__Vcoverage[427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__addr_incr_two 
            = vlSelf->ibex_fetch_fifo__DOT__addr_incr_two;
    }
    vlSelf->ibex_fetch_fifo__DOT__instr_addr_next = 
        (0x7fffffffU & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_q 
                        + ((2U & ((~ (IData)(vlSelf->ibex_fetch_fifo__DOT__addr_incr_two)) 
                                  << 1U)) | (IData)(vlSelf->ibex_fetch_fifo__DOT__addr_incr_two))));
    if ((1U & ((IData)(vlSelf->ibex_fetch_fifo__DOT__valid_pushed) 
               ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_pushed)))) {
        vlSymsp->__Vcoverage[346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_pushed 
            = ((6U & (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_pushed)) 
               | (1U & (IData)(vlSelf->ibex_fetch_fifo__DOT__valid_pushed)));
    }
    if ((2U & ((IData)(vlSelf->ibex_fetch_fifo__DOT__valid_pushed) 
               ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_pushed)))) {
        vlSymsp->__Vcoverage[347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_pushed 
            = ((5U & (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_pushed)) 
               | (2U & (IData)(vlSelf->ibex_fetch_fifo__DOT__valid_pushed)));
    }
    if ((4U & ((IData)(vlSelf->ibex_fetch_fifo__DOT__valid_pushed) 
               ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_pushed)))) {
        vlSymsp->__Vcoverage[348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_pushed 
            = ((3U & (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_pushed)) 
               | (4U & (IData)(vlSelf->ibex_fetch_fifo__DOT__valid_pushed)));
    }
    if (((IData)(vlSelf->out_err_o) ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_err_o))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__out_err_o 
            = vlSelf->out_err_o;
    }
    vlSelf->ibex_fetch_fifo__DOT__instr_addr_en = ((IData)(vlSelf->clear_i) 
                                                   | (IData)(ibex_fetch_fifo__DOT____VdfgTmp_hd659e1ce__0));
    vlSelf->ibex_fetch_fifo__DOT__pop_fifo = ((IData)(ibex_fetch_fifo__DOT____VdfgTmp_hd659e1ce__0) 
                                              & ((~ (IData)(vlSelf->ibex_fetch_fifo__DOT__aligned_is_compressed)) 
                                                 | vlSelf->ibex_fetch_fifo__DOT__instr_addr_q));
    if ((1U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_next 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next 
            = ((0x7ffffffeU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next) 
               | (1U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_next));
    }
    if ((2U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_next 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next 
            = ((0x7ffffffdU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next) 
               | (2U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_next));
    }
    if ((4U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_next 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next 
            = ((0x7ffffffbU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next) 
               | (4U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_next));
    }
    if ((8U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_next 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next 
            = ((0x7ffffff7U & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next) 
               | (8U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_next));
    }
    if ((0x10U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_next 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next 
            = ((0x7fffffefU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next) 
               | (0x10U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_next));
    }
    if ((0x20U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_next 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next 
            = ((0x7fffffdfU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next) 
               | (0x20U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_next));
    }
    if ((0x40U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_next 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next 
            = ((0x7fffffbfU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next) 
               | (0x40U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_next));
    }
    if ((0x80U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_next 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next 
            = ((0x7fffff7fU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next) 
               | (0x80U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_next));
    }
    if ((0x100U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_next 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next 
            = ((0x7ffffeffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next) 
               | (0x100U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_next));
    }
    if ((0x200U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_next 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next 
            = ((0x7ffffdffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next) 
               | (0x200U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_next));
    }
    if ((0x400U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_next 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next 
            = ((0x7ffffbffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next) 
               | (0x400U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_next));
    }
    if ((0x800U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_next 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next 
            = ((0x7ffff7ffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next) 
               | (0x800U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_next));
    }
    if ((0x1000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_next 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next 
            = ((0x7fffefffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next) 
               | (0x1000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_next));
    }
    if ((0x2000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_next 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next 
            = ((0x7fffdfffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next) 
               | (0x2000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_next));
    }
    if ((0x4000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_next 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next 
            = ((0x7fffbfffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next) 
               | (0x4000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_next));
    }
    if ((0x8000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_next 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next 
            = ((0x7fff7fffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next) 
               | (0x8000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_next));
    }
    if ((0x10000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_next 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next 
            = ((0x7ffeffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next) 
               | (0x10000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_next));
    }
    if ((0x20000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_next 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next 
            = ((0x7ffdffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next) 
               | (0x20000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_next));
    }
    if ((0x40000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_next 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next 
            = ((0x7ffbffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next) 
               | (0x40000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_next));
    }
    if ((0x80000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_next 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next 
            = ((0x7ff7ffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next) 
               | (0x80000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_next));
    }
    if ((0x100000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_next 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next 
            = ((0x7fefffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next) 
               | (0x100000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_next));
    }
    if ((0x200000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_next 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next 
            = ((0x7fdfffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next) 
               | (0x200000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_next));
    }
    if ((0x400000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_next 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next 
            = ((0x7fbfffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next) 
               | (0x400000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_next));
    }
    if ((0x800000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_next 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next 
            = ((0x7f7fffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next) 
               | (0x800000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_next));
    }
    if ((0x1000000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_next 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next 
            = ((0x7effffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next) 
               | (0x1000000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_next));
    }
    if ((0x2000000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_next 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next 
            = ((0x7dffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next) 
               | (0x2000000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_next));
    }
    if ((0x4000000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_next 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next 
            = ((0x7bffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next) 
               | (0x4000000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_next));
    }
    if ((0x8000000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_next 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next 
            = ((0x77ffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next) 
               | (0x8000000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_next));
    }
    if ((0x10000000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_next 
                        ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next 
            = ((0x6fffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next) 
               | (0x10000000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_next));
    }
    if ((0x20000000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_next 
                        ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next 
            = ((0x5fffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next) 
               | (0x20000000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_next));
    }
    if ((0x40000000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_next 
                        ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next 
            = ((0x3fffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next) 
               | (0x40000000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_next));
    }
    vlSelf->ibex_fetch_fifo__DOT__instr_addr_d = (0x7fffffffU 
                                                  & ((IData)(vlSelf->clear_i)
                                                      ? 
                                                     (vlSelf->in_addr_i 
                                                      >> 1U)
                                                      : vlSelf->ibex_fetch_fifo__DOT__instr_addr_next));
    if (((IData)(vlSelf->ibex_fetch_fifo__DOT__instr_addr_en) 
         ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_en))) {
        vlSymsp->__Vcoverage[521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_en 
            = vlSelf->ibex_fetch_fifo__DOT__instr_addr_en;
    }
    if (((IData)(vlSelf->ibex_fetch_fifo__DOT__pop_fifo) 
         ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__pop_fifo))) {
        vlSymsp->__Vcoverage[355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__pop_fifo 
            = vlSelf->ibex_fetch_fifo__DOT__pop_fifo;
    }
    vlSelf->ibex_fetch_fifo__DOT__entry_en = (((IData)(vlSelf->ibex_fetch_fifo__DOT____VdfgTmp_h87bd3038__0) 
                                               << 2U) 
                                              | (((((IData)(vlSelf->ibex_fetch_fifo__DOT____VdfgTmp_h46f3913b__0) 
                                                    & (IData)(vlSelf->ibex_fetch_fifo__DOT__pop_fifo)) 
                                                   | ((~ (IData)(vlSelf->ibex_fetch_fifo__DOT__pop_fifo)) 
                                                      & (IData)(vlSelf->ibex_fetch_fifo__DOT____VdfgTmp_h379a9be1__0))) 
                                                  << 1U) 
                                                 | (((IData)(vlSelf->ibex_fetch_fifo__DOT____VdfgTmp_h11e4035a__0) 
                                                     & (IData)(vlSelf->ibex_fetch_fifo__DOT__pop_fifo)) 
                                                    | ((~ (IData)(vlSelf->ibex_fetch_fifo__DOT__pop_fifo)) 
                                                       & (IData)(vlSelf->ibex_fetch_fifo__DOT____VdfgTmp_h0de6124d__0)))));
    ibex_fetch_fifo__DOT____VdfgTmp_he8fd8a81__0 = 
        ((~ (IData)(vlSelf->ibex_fetch_fifo__DOT__pop_fifo)) 
         & (IData)(vlSelf->ibex_fetch_fifo__DOT____VdfgTmp_h46f3913b__0));
    if (vlSelf->ibex_fetch_fifo__DOT__pop_fifo) {
        ibex_fetch_fifo__DOT____VdfgTmp_hb697a1d4__0 
            = vlSelf->ibex_fetch_fifo__DOT____VdfgTmp_h46f3913b__0;
        ibex_fetch_fifo__DOT____VdfgTmp_h420cf615__0 
            = vlSelf->ibex_fetch_fifo__DOT____VdfgTmp_h11e4035a__0;
    } else {
        ibex_fetch_fifo__DOT____VdfgTmp_hb697a1d4__0 
            = vlSelf->ibex_fetch_fifo__DOT____VdfgTmp_h11e4035a__0;
        ibex_fetch_fifo__DOT____VdfgTmp_h420cf615__0 
            = vlSelf->ibex_fetch_fifo__DOT____VdfgTmp_h72c0dcf0__0;
    }
    if ((1U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_d 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d 
            = ((0x7ffffffeU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d) 
               | (1U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_d));
    }
    if ((2U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_d 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d 
            = ((0x7ffffffdU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d) 
               | (2U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_d));
    }
    if ((4U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_d 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d 
            = ((0x7ffffffbU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d) 
               | (4U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_d));
    }
    if ((8U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_d 
               ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d 
            = ((0x7ffffff7U & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d) 
               | (8U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_d));
    }
    if ((0x10U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_d 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d 
            = ((0x7fffffefU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d) 
               | (0x10U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_d));
    }
    if ((0x20U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_d 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d 
            = ((0x7fffffdfU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d) 
               | (0x20U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_d));
    }
    if ((0x40U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_d 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d 
            = ((0x7fffffbfU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d) 
               | (0x40U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_d));
    }
    if ((0x80U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_d 
                  ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d 
            = ((0x7fffff7fU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d) 
               | (0x80U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_d));
    }
    if ((0x100U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_d 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d 
            = ((0x7ffffeffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d) 
               | (0x100U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_d));
    }
    if ((0x200U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_d 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d 
            = ((0x7ffffdffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d) 
               | (0x200U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_d));
    }
    if ((0x400U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_d 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d 
            = ((0x7ffffbffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d) 
               | (0x400U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_d));
    }
    if ((0x800U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_d 
                   ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d 
            = ((0x7ffff7ffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d) 
               | (0x800U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_d));
    }
    if ((0x1000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_d 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d 
            = ((0x7fffefffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d) 
               | (0x1000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_d));
    }
    if ((0x2000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_d 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d 
            = ((0x7fffdfffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d) 
               | (0x2000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_d));
    }
    if ((0x4000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_d 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d 
            = ((0x7fffbfffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d) 
               | (0x4000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_d));
    }
    if ((0x8000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_d 
                    ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d 
            = ((0x7fff7fffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d) 
               | (0x8000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_d));
    }
    if ((0x10000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_d 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d 
            = ((0x7ffeffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d) 
               | (0x10000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_d));
    }
    if ((0x20000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_d 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d 
            = ((0x7ffdffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d) 
               | (0x20000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_d));
    }
    if ((0x40000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_d 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d 
            = ((0x7ffbffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d) 
               | (0x40000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_d));
    }
    if ((0x80000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_d 
                     ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d 
            = ((0x7ff7ffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d) 
               | (0x80000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_d));
    }
    if ((0x100000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_d 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d 
            = ((0x7fefffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d) 
               | (0x100000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_d));
    }
    if ((0x200000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_d 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d 
            = ((0x7fdfffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d) 
               | (0x200000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_d));
    }
    if ((0x400000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_d 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d 
            = ((0x7fbfffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d) 
               | (0x400000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_d));
    }
    if ((0x800000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_d 
                      ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d 
            = ((0x7f7fffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d) 
               | (0x800000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_d));
    }
    if ((0x1000000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_d 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d 
            = ((0x7effffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d) 
               | (0x1000000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_d));
    }
    if ((0x2000000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_d 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d 
            = ((0x7dffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d) 
               | (0x2000000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_d));
    }
    if ((0x4000000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_d 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d 
            = ((0x7bffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d) 
               | (0x4000000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_d));
    }
    if ((0x8000000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_d 
                       ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d 
            = ((0x77ffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d) 
               | (0x8000000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_d));
    }
    if ((0x10000000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_d 
                        ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d 
            = ((0x6fffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d) 
               | (0x10000000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_d));
    }
    if ((0x20000000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_d 
                        ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d 
            = ((0x5fffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d) 
               | (0x20000000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_d));
    }
    if ((0x40000000U & (vlSelf->ibex_fetch_fifo__DOT__instr_addr_d 
                        ^ vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d 
            = ((0x3fffffffU & vlSelf->ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d) 
               | (0x40000000U & vlSelf->ibex_fetch_fifo__DOT__instr_addr_d));
    }
    if ((1U & ((IData)(vlSelf->ibex_fetch_fifo__DOT__entry_en) 
               ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__entry_en)))) {
        vlSymsp->__Vcoverage[352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__entry_en 
            = ((6U & (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__entry_en)) 
               | (1U & (IData)(vlSelf->ibex_fetch_fifo__DOT__entry_en)));
    }
    if ((2U & ((IData)(vlSelf->ibex_fetch_fifo__DOT__entry_en) 
               ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__entry_en)))) {
        vlSymsp->__Vcoverage[353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__entry_en 
            = ((5U & (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__entry_en)) 
               | (2U & (IData)(vlSelf->ibex_fetch_fifo__DOT__entry_en)));
    }
    if ((4U & ((IData)(vlSelf->ibex_fetch_fifo__DOT__entry_en) 
               ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__entry_en)))) {
        vlSymsp->__Vcoverage[354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__entry_en 
            = ((3U & (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__entry_en)) 
               | (4U & (IData)(vlSelf->ibex_fetch_fifo__DOT__entry_en)));
    }
    vlSelf->ibex_fetch_fifo__DOT__valid_popped = (((IData)(ibex_fetch_fifo__DOT____VdfgTmp_he8fd8a81__0) 
                                                   << 2U) 
                                                  | (((IData)(ibex_fetch_fifo__DOT____VdfgTmp_hb697a1d4__0) 
                                                      << 1U) 
                                                     | (IData)(ibex_fetch_fifo__DOT____VdfgTmp_h420cf615__0)));
    vlSelf->ibex_fetch_fifo__DOT__valid_d = ((((~ (IData)(vlSelf->clear_i)) 
                                               & (IData)(ibex_fetch_fifo__DOT____VdfgTmp_he8fd8a81__0)) 
                                              << 2U) 
                                             | ((((~ (IData)(vlSelf->clear_i)) 
                                                  & (IData)(ibex_fetch_fifo__DOT____VdfgTmp_hb697a1d4__0)) 
                                                 << 1U) 
                                                | ((~ (IData)(vlSelf->clear_i)) 
                                                   & (IData)(ibex_fetch_fifo__DOT____VdfgTmp_h420cf615__0))));
    if ((1U & ((IData)(vlSelf->ibex_fetch_fifo__DOT__valid_popped) 
               ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_popped)))) {
        vlSymsp->__Vcoverage[349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_popped 
            = ((6U & (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_popped)) 
               | (1U & (IData)(vlSelf->ibex_fetch_fifo__DOT__valid_popped)));
    }
    if ((2U & ((IData)(vlSelf->ibex_fetch_fifo__DOT__valid_popped) 
               ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_popped)))) {
        vlSymsp->__Vcoverage[350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_popped 
            = ((5U & (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_popped)) 
               | (2U & (IData)(vlSelf->ibex_fetch_fifo__DOT__valid_popped)));
    }
    if ((4U & ((IData)(vlSelf->ibex_fetch_fifo__DOT__valid_popped) 
               ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_popped)))) {
        vlSymsp->__Vcoverage[351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_popped 
            = ((3U & (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_popped)) 
               | (4U & (IData)(vlSelf->ibex_fetch_fifo__DOT__valid_popped)));
    }
    if ((1U & ((IData)(vlSelf->ibex_fetch_fifo__DOT__valid_d) 
               ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_d)))) {
        vlSymsp->__Vcoverage[337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_d 
            = ((6U & (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_d)) 
               | (1U & (IData)(vlSelf->ibex_fetch_fifo__DOT__valid_d)));
    }
    if ((2U & ((IData)(vlSelf->ibex_fetch_fifo__DOT__valid_d) 
               ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_d)))) {
        vlSymsp->__Vcoverage[338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_d 
            = ((5U & (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_d)) 
               | (2U & (IData)(vlSelf->ibex_fetch_fifo__DOT__valid_d)));
    }
    if ((4U & ((IData)(vlSelf->ibex_fetch_fifo__DOT__valid_d) 
               ^ (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_d)))) {
        vlSymsp->__Vcoverage[339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_d 
            = ((3U & (IData)(vlSelf->ibex_fetch_fifo__DOT____Vtogcov__valid_d)) 
               | (4U & (IData)(vlSelf->ibex_fetch_fifo__DOT__valid_d)));
    }
}

VL_ATTR_COLD void Vibex_fetch_fifo___024root___configure_coverage(Vibex_fetch_fifo___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_fetch_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_fetch_fifo___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "verilog/ibex_fetch_fifo.v", 19, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "clk_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "verilog/ibex_fetch_fifo.v", 20, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rst_ni", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "verilog/ibex_fetch_fifo.v", 23, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "clear_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "verilog/ibex_fetch_fifo.v", 24, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "busy_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "verilog/ibex_fetch_fifo.v", 24, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "busy_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "verilog/ibex_fetch_fifo.v", 27, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_valid_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_addr_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_addr_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_addr_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_addr_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_addr_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_addr_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_addr_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_addr_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_addr_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_addr_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_addr_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_addr_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_addr_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_addr_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_addr_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_addr_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_addr_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_addr_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_addr_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_addr_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_addr_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_addr_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_addr_i[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_addr_i[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_addr_i[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_addr_i[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_addr_i[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_addr_i[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_addr_i[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_addr_i[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_addr_i[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_addr_i[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_rdata_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_rdata_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_rdata_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_rdata_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_rdata_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_rdata_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_rdata_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_rdata_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_rdata_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_rdata_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_rdata_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_rdata_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_rdata_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_rdata_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_rdata_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_rdata_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_rdata_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_rdata_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_rdata_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_rdata_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_rdata_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_rdata_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_rdata_i[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_rdata_i[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_rdata_i[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_rdata_i[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_rdata_i[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_rdata_i[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_rdata_i[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_rdata_i[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_rdata_i[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_rdata_i[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "verilog/ibex_fetch_fifo.v", 30, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "in_err_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "verilog/ibex_fetch_fifo.v", 33, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_valid_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "verilog/ibex_fetch_fifo.v", 34, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_ready_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_addr_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_addr_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_addr_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_addr_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_addr_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_addr_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_addr_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_addr_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_addr_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_addr_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_addr_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_addr_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_addr_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_addr_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_addr_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_addr_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_addr_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_addr_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_addr_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_addr_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_addr_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_addr_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_addr_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_addr_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_addr_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_addr_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_addr_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_addr_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_addr_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_addr_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_addr_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_addr_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_rdata_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_rdata_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_rdata_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_rdata_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_rdata_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_rdata_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_rdata_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_rdata_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_rdata_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_rdata_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_rdata_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_rdata_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_rdata_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_rdata_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_rdata_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_rdata_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_rdata_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_rdata_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_rdata_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_rdata_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_rdata_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_rdata_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_rdata_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_rdata_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_rdata_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_rdata_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_rdata_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_rdata_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_rdata_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_rdata_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_rdata_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_rdata_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "verilog/ibex_fetch_fifo.v", 37, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_err_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "verilog/ibex_fetch_fifo.v", 38, 32, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "out_err_plus2_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[0][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[0][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[0][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[0][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[0][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[0][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[0][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[0][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[0][8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[0][9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[0][10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[0][11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[0][12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[0][13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[0][14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[0][15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[0][16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[0][17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[0][18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[0][19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[0][20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[0][21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[0][22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[0][23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[0][24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[0][25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[0][26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[0][27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[0][28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[0][29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[0][30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[0][31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[1][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[1][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[1][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[1][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[1][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[1][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[1][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[1][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[1][8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[1][9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[1][10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[1][11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[1][12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[1][13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[1][14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[1][15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[1][16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[1][17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[1][18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[1][19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[1][20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[1][21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[1][22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[1][23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[1][24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[1][25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[1][26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[1][27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[1][28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[1][29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[1][30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[1][31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[2][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[2][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[2][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[2][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[2][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[2][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[2][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[2][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[2][8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[2][9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[2][10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[2][11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[2][12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[2][13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[2][14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[2][15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[2][16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[2][17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[2][18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[2][19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[2][20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[2][21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[2][22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[2][23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[2][24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[2][25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[2][26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[2][27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[2][28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[2][29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[2][30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_d[2][31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[0][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[0][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[0][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[0][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[0][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[0][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[0][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[0][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[0][8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[0][9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[0][10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[0][11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[0][12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[0][13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[0][14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[0][15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[0][16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[0][17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[0][18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[0][19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[0][20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[0][21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[0][22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[0][23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[0][24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[0][25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[0][26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[0][27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[0][28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[0][29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[0][30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[0][31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[1][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[1][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[1][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[1][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[1][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[1][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[1][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[1][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[1][8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[1][9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[1][10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[1][11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[1][12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[1][13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[1][14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[1][15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[1][16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[1][17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[1][18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[1][19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[1][20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[1][21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[1][22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[1][23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[1][24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[1][25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[1][26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[1][27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[1][28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[1][29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[1][30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[1][31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[2][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[2][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[2][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[2][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[303]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[2][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[304]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[2][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[305]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[2][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[306]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[2][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[2][8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[308]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[2][9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[309]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[2][10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[310]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[2][11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[311]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[2][12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[312]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[2][13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[313]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[2][14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[314]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[2][15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[315]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[2][16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[316]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[2][17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[317]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[2][18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[318]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[2][19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[319]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[2][20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[320]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[2][21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[321]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[2][22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[322]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[2][23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[323]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[2][24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[324]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[2][25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[325]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[2][26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[326]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[2][27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[2][28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[2][29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[2][30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_q[2][31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[331]), first, "verilog/ibex_fetch_fifo.v", 45, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "err_d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[332]), first, "verilog/ibex_fetch_fifo.v", 45, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "err_d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[333]), first, "verilog/ibex_fetch_fifo.v", 45, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "err_d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[334]), first, "verilog/ibex_fetch_fifo.v", 45, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "err_q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[335]), first, "verilog/ibex_fetch_fifo.v", 45, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "err_q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[336]), first, "verilog/ibex_fetch_fifo.v", 45, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "err_q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[337]), first, "verilog/ibex_fetch_fifo.v", 46, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "valid_d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[338]), first, "verilog/ibex_fetch_fifo.v", 46, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "valid_d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[339]), first, "verilog/ibex_fetch_fifo.v", 46, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "valid_d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[340]), first, "verilog/ibex_fetch_fifo.v", 46, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "valid_q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[341]), first, "verilog/ibex_fetch_fifo.v", 46, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "valid_q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[342]), first, "verilog/ibex_fetch_fifo.v", 46, 41, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "valid_q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[343]), first, "verilog/ibex_fetch_fifo.v", 47, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "lowest_free_entry[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[344]), first, "verilog/ibex_fetch_fifo.v", 47, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "lowest_free_entry[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[345]), first, "verilog/ibex_fetch_fifo.v", 47, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "lowest_free_entry[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[346]), first, "verilog/ibex_fetch_fifo.v", 48, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "valid_pushed[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[347]), first, "verilog/ibex_fetch_fifo.v", 48, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "valid_pushed[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[348]), first, "verilog/ibex_fetch_fifo.v", 48, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "valid_pushed[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[349]), first, "verilog/ibex_fetch_fifo.v", 48, 44, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "valid_popped[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[350]), first, "verilog/ibex_fetch_fifo.v", 48, 44, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "valid_popped[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[351]), first, "verilog/ibex_fetch_fifo.v", 48, 44, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "valid_popped[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[352]), first, "verilog/ibex_fetch_fifo.v", 49, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "entry_en[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "verilog/ibex_fetch_fifo.v", 49, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "entry_en[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[354]), first, "verilog/ibex_fetch_fifo.v", 49, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "entry_en[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[355]), first, "verilog/ibex_fetch_fifo.v", 51, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "pop_fifo", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[358]), first, "verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[359]), first, "verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[360]), first, "verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[361]), first, "verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[362]), first, "verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[363]), first, "verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[364]), first, "verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[365]), first, "verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[366]), first, "verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[367]), first, "verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[368]), first, "verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[369]), first, "verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[370]), first, "verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[371]), first, "verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[372]), first, "verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[373]), first, "verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[374]), first, "verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[375]), first, "verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[376]), first, "verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[377]), first, "verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[378]), first, "verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[379]), first, "verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[380]), first, "verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[381]), first, "verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[382]), first, "verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[383]), first, "verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[384]), first, "verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[385]), first, "verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[386]), first, "verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[387]), first, "verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[388]), first, "verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_unaligned[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[389]), first, "verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_unaligned[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[390]), first, "verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_unaligned[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[391]), first, "verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_unaligned[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[392]), first, "verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_unaligned[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[393]), first, "verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_unaligned[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[394]), first, "verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_unaligned[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[395]), first, "verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_unaligned[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[396]), first, "verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_unaligned[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[397]), first, "verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_unaligned[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[398]), first, "verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_unaligned[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[399]), first, "verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_unaligned[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[400]), first, "verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_unaligned[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[401]), first, "verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_unaligned[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[402]), first, "verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_unaligned[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[403]), first, "verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_unaligned[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[404]), first, "verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_unaligned[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[405]), first, "verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_unaligned[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[406]), first, "verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_unaligned[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[407]), first, "verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_unaligned[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[408]), first, "verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_unaligned[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[409]), first, "verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_unaligned[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[410]), first, "verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_unaligned[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[411]), first, "verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_unaligned[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[412]), first, "verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_unaligned[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[413]), first, "verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_unaligned[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[414]), first, "verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_unaligned[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[415]), first, "verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_unaligned[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[416]), first, "verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_unaligned[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[417]), first, "verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_unaligned[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[418]), first, "verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_unaligned[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[419]), first, "verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "rdata_unaligned[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[420]), first, "verilog/ibex_fetch_fifo.v", 53, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "err", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[421]), first, "verilog/ibex_fetch_fifo.v", 53, 37, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "err_unaligned", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[422]), first, "verilog/ibex_fetch_fifo.v", 53, 52, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "err_plus2", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[423]), first, "verilog/ibex_fetch_fifo.v", 54, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "valid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[424]), first, "verilog/ibex_fetch_fifo.v", 54, 37, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "valid_unaligned", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[425]), first, "verilog/ibex_fetch_fifo.v", 56, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "aligned_is_compressed", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[426]), first, "verilog/ibex_fetch_fifo.v", 56, 53, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "unaligned_is_compressed", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[427]), first, "verilog/ibex_fetch_fifo.v", 58, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "addr_incr_two", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[428]), first, "verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_next[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[429]), first, "verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_next[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[430]), first, "verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_next[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[431]), first, "verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_next[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[432]), first, "verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_next[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[433]), first, "verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_next[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[434]), first, "verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_next[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[435]), first, "verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_next[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[436]), first, "verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_next[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[437]), first, "verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_next[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[438]), first, "verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_next[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[439]), first, "verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_next[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[440]), first, "verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_next[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[441]), first, "verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_next[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[442]), first, "verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_next[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[443]), first, "verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_next[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[444]), first, "verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_next[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[445]), first, "verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_next[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[446]), first, "verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_next[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[447]), first, "verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_next[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[448]), first, "verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_next[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[449]), first, "verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_next[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[450]), first, "verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_next[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[451]), first, "verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_next[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[452]), first, "verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_next[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[453]), first, "verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_next[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[454]), first, "verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_next[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[455]), first, "verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_next[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[456]), first, "verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_next[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[457]), first, "verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_next[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[458]), first, "verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_next[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[459]), first, "verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[460]), first, "verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[461]), first, "verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_d[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[462]), first, "verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_d[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[463]), first, "verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_d[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[464]), first, "verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_d[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[465]), first, "verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_d[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[466]), first, "verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_d[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[467]), first, "verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_d[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[468]), first, "verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_d[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[469]), first, "verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_d[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[470]), first, "verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_d[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[471]), first, "verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_d[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[472]), first, "verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_d[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[473]), first, "verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_d[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[474]), first, "verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_d[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[475]), first, "verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_d[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[476]), first, "verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_d[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[477]), first, "verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_d[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[478]), first, "verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_d[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[479]), first, "verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_d[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[480]), first, "verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_d[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[481]), first, "verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_d[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[482]), first, "verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_d[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[483]), first, "verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_d[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[484]), first, "verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_d[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[485]), first, "verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_d[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[486]), first, "verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_d[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[487]), first, "verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_d[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[488]), first, "verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_d[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[489]), first, "verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_d[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[490]), first, "verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[491]), first, "verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[492]), first, "verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_q[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[493]), first, "verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_q[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[494]), first, "verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_q[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[495]), first, "verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_q[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[496]), first, "verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_q[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[497]), first, "verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_q[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[498]), first, "verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_q[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[499]), first, "verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_q[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[500]), first, "verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_q[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[501]), first, "verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_q[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[502]), first, "verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_q[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[503]), first, "verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_q[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[504]), first, "verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_q[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[505]), first, "verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_q[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[506]), first, "verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_q[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[507]), first, "verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_q[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[508]), first, "verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_q[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[509]), first, "verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_q[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[510]), first, "verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_q[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_q[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[512]), first, "verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_q[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[513]), first, "verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_q[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[514]), first, "verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_q[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[515]), first, "verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_q[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[516]), first, "verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_q[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[517]), first, "verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_q[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[518]), first, "verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_q[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[519]), first, "verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_q[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_q[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[521]), first, "verilog/ibex_fetch_fifo.v", 61, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "instr_addr_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "verilog/ibex_fetch_fifo.v", 62, 30, ".ibex_fetch_fifo", "v_toggle/ibex_fetch_fifo", "unused_addr_in", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[522]), first, "verilog/ibex_fetch_fifo.v", 120, 8, ".ibex_fetch_fifo", "v_branch/ibex_fetch_fifo", "if", "120-121");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[523]), first, "verilog/ibex_fetch_fifo.v", 120, 9, ".ibex_fetch_fifo", "v_branch/ibex_fetch_fifo", "else", "122-123");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[524]), first, "verilog/ibex_fetch_fifo.v", 114, 6, ".ibex_fetch_fifo", "v_branch/ibex_fetch_fifo", "if", "114,116-118");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[525]), first, "verilog/ibex_fetch_fifo.v", 114, 7, ".ibex_fetch_fifo", "v_branch/ibex_fetch_fifo", "else", "125,127-130");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[526]), first, "verilog/ibex_fetch_fifo.v", 113, 4, ".ibex_fetch_fifo", "v_line/ibex_fetch_fifo", "block", "113");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[527]), first, "verilog/ibex_fetch_fifo.v", 162, 8, ".ibex_fetch_fifo", "v_branch/ibex_fetch_fifo", "if", "162-163");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[528]), first, "verilog/ibex_fetch_fifo.v", 162, 9, ".ibex_fetch_fifo", "v_branch/ibex_fetch_fifo", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[529]), first, "verilog/ibex_fetch_fifo.v", 161, 6, ".ibex_fetch_fifo", "v_line/ibex_fetch_fifo", "block", "161");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[530]), first, "verilog/ibex_fetch_fifo.v", 229, 6, ".ibex_fetch_fifo", "v_branch/ibex_fetch_fifo", "if", "229-230");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[531]), first, "verilog/ibex_fetch_fifo.v", 229, 7, ".ibex_fetch_fifo", "v_branch/ibex_fetch_fifo", "else", "231-232");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[532]), first, "verilog/ibex_fetch_fifo.v", 228, 4, ".ibex_fetch_fifo", "v_line/ibex_fetch_fifo", "block", "228");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[533]), first, "verilog/ibex_fetch_fifo.v", 249, 10, ".ibex_fetch_fifo", "v_branch/ibex_fetch_fifo", "if", "236,249-251");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[534]), first, "verilog/ibex_fetch_fifo.v", 249, 11, ".ibex_fetch_fifo", "v_branch/ibex_fetch_fifo", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[535]), first, "verilog/ibex_fetch_fifo.v", 248, 8, ".ibex_fetch_fifo", "v_line/ibex_fetch_fifo", "block", "248");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[536]), first, "verilog/ibex_fetch_fifo.v", 249, 10, ".ibex_fetch_fifo", "v_branch/ibex_fetch_fifo", "if", "236,249-251");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[537]), first, "verilog/ibex_fetch_fifo.v", 249, 11, ".ibex_fetch_fifo", "v_branch/ibex_fetch_fifo", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[538]), first, "verilog/ibex_fetch_fifo.v", 248, 8, ".ibex_fetch_fifo", "v_line/ibex_fetch_fifo", "block", "248");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[539]), first, "verilog/ibex_fetch_fifo.v", 249, 10, ".ibex_fetch_fifo", "v_branch/ibex_fetch_fifo", "if", "236,249-251");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[540]), first, "verilog/ibex_fetch_fifo.v", 249, 11, ".ibex_fetch_fifo", "v_branch/ibex_fetch_fifo", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[541]), first, "verilog/ibex_fetch_fifo.v", 248, 8, ".ibex_fetch_fifo", "v_line/ibex_fetch_fifo", "block", "248");
}
