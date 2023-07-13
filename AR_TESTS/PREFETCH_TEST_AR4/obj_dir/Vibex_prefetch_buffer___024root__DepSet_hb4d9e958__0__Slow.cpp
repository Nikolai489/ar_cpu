// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_prefetch_buffer.h for the primary calling header

#include "verilated.h"

#include "Vibex_prefetch_buffer__Syms.h"
#include "Vibex_prefetch_buffer__Syms.h"
#include "Vibex_prefetch_buffer___024root.h"

VL_ATTR_COLD void Vibex_prefetch_buffer___024root___eval_initial__TOP(Vibex_prefetch_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_prefetch_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_prefetch_buffer___024root___eval_initial__TOP\n"); );
    // Body
    vlSymsp->__Vcoverage[720].fetch_add(1, std::memory_order_relaxed);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_prefetch_buffer___024root___dump_triggers__stl(Vibex_prefetch_buffer___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vibex_prefetch_buffer___024root___eval_triggers__stl(Vibex_prefetch_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_prefetch_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_prefetch_buffer___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vibex_prefetch_buffer___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vibex_prefetch_buffer___024root___stl_sequent__TOP__0(Vibex_prefetch_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_prefetch_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_prefetch_buffer___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ ibex_prefetch_buffer__DOT____VdfgTmp_he9a9b48f__0;
    ibex_prefetch_buffer__DOT____VdfgTmp_he9a9b48f__0 = 0;
    CData/*0:0*/ ibex_prefetch_buffer__DOT____VdfgTmp_h33c6185a__0;
    ibex_prefetch_buffer__DOT____VdfgTmp_h33c6185a__0 = 0;
    CData/*0:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_hd659e1ce__0;
    ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_hd659e1ce__0 = 0;
    CData/*0:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_he8fd8a81__0;
    ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_he8fd8a81__0 = 0;
    CData/*0:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_hb697a1d4__0;
    ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_hb697a1d4__0 = 0;
    CData/*0:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h420cf615__0;
    ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h420cf615__0 = 0;
    // Body
    if ((1U & (~ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q))) {
        vlSymsp->__Vcoverage[719].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->clk_i) ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__clk_i))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__clk_i 
            = vlSelf->clk_i;
    }
    if (((IData)(vlSelf->rst_ni) ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rst_ni))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rst_ni 
            = vlSelf->rst_ni;
    }
    if (((IData)(vlSelf->req_i) ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__req_i))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__req_i 
            = vlSelf->req_i;
    }
    if (((IData)(vlSelf->branch_i) ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__branch_i))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__branch_i 
            = vlSelf->branch_i;
    }
    if (((IData)(vlSelf->ready_i) ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__ready_i))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__ready_i 
            = vlSelf->ready_i;
    }
    if (((IData)(vlSelf->instr_gnt_i) ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_gnt_i))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_gnt_i 
            = vlSelf->instr_gnt_i;
    }
    if (((IData)(vlSelf->instr_err_i) ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_err_i))) {
        vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_err_i 
            = vlSelf->instr_err_i;
    }
    if (((IData)(vlSelf->instr_rvalid_i) ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rvalid_i))) {
        vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rvalid_i 
            = vlSelf->instr_rvalid_i;
    }
    if (((IData)(vlSelf->ibex_prefetch_buffer__DOT__valid_req_q) 
         ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__valid_req_q))) {
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__valid_req_q 
            = vlSelf->ibex_prefetch_buffer__DOT__valid_req_q;
    }
    if (((IData)(vlSelf->ibex_prefetch_buffer__DOT__discard_req_q) 
         ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__discard_req_q))) {
        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__discard_req_q 
            = vlSelf->ibex_prefetch_buffer__DOT__discard_req_q;
    }
    if ((1U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_q) 
               ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_q)))) {
        vlSymsp->__Vcoverage[536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_q 
            = ((6U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_q)) 
               | (1U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_q)));
    }
    if ((1U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_q) 
               ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_outstanding_q)))) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_outstanding_q 
            = ((2U & (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_outstanding_q)) 
               | (1U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_q)));
    }
    if ((2U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_q) 
               ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_outstanding_q)))) {
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_outstanding_q 
            = ((1U & (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_outstanding_q)) 
               | (2U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_q)));
    }
    if ((1U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__branch_discard_q) 
               ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__branch_discard_q)))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__branch_discard_q 
            = ((2U & (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__branch_discard_q)) 
               | (1U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__branch_discard_q)));
    }
    if ((2U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__branch_discard_q) 
               ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__branch_discard_q)))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__branch_discard_q 
            = ((1U & (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__branch_discard_q)) 
               | (2U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__branch_discard_q)));
    }
    if ((1U & (((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_q) 
                >> 1U) ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fifo_busy)))) {
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fifo_busy 
            = ((2U & (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fifo_busy)) 
               | (1U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_q) 
                        >> 1U)));
    }
    if ((IData)((((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_q) 
                  >> 2U) ^ ((IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fifo_busy) 
                            >> 1U)))) {
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fifo_busy 
            = ((1U & (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fifo_busy)) 
               | (2U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_q) 
                        >> 1U)));
    }
    if ((1U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_q) 
               ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__err_q)))) {
        vlSymsp->__Vcoverage[530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__err_q 
            = ((6U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__err_q)) 
               | (1U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_q)));
    }
    if ((2U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_q) 
               ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__err_q)))) {
        vlSymsp->__Vcoverage[531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__err_q 
            = ((5U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__err_q)) 
               | (2U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_q)));
    }
    if ((4U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_q) 
               ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__err_q)))) {
        vlSymsp->__Vcoverage[532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__err_q 
            = ((3U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__err_q)) 
               | (4U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_q)));
    }
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_d 
        = (((IData)(vlSelf->instr_err_i) << 2U) | (
                                                   (2U 
                                                    & (((4U 
                                                         & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_q))
                                                         ? 
                                                        ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_q) 
                                                         >> 2U)
                                                         : (IData)(vlSelf->instr_err_i)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((2U 
                                                          & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_q))
                                                          ? 
                                                         ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_q) 
                                                          >> 1U)
                                                          : (IData)(vlSelf->instr_err_i)))));
    if ((1U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q 
            = ((0x7ffffffeU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q) 
               | (1U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q));
    }
    if ((2U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q 
            = ((0x7ffffffdU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q) 
               | (2U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q));
    }
    if ((4U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q 
            = ((0x7ffffffbU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q) 
               | (4U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q));
    }
    if ((8U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q 
            = ((0x7ffffff7U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q) 
               | (8U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q));
    }
    if ((0x10U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q 
            = ((0x7fffffefU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q) 
               | (0x10U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q));
    }
    if ((0x20U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q 
            = ((0x7fffffdfU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q) 
               | (0x20U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q));
    }
    if ((0x40U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q 
            = ((0x7fffffbfU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q) 
               | (0x40U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q));
    }
    if ((0x80U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q 
            = ((0x7fffff7fU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q) 
               | (0x80U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q));
    }
    if ((0x100U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q 
            = ((0x7ffffeffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q) 
               | (0x100U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q));
    }
    if ((0x200U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q 
            = ((0x7ffffdffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q) 
               | (0x200U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q));
    }
    if ((0x400U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q 
            = ((0x7ffffbffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q) 
               | (0x400U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q));
    }
    if ((0x800U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q 
            = ((0x7ffff7ffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q) 
               | (0x800U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q));
    }
    if ((0x1000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q 
            = ((0x7fffefffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q) 
               | (0x1000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q));
    }
    if ((0x2000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q 
            = ((0x7fffdfffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q) 
               | (0x2000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q));
    }
    if ((0x4000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q 
            = ((0x7fffbfffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q) 
               | (0x4000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q));
    }
    if ((0x8000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q 
            = ((0x7fff7fffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q) 
               | (0x8000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q));
    }
    if ((0x10000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q 
            = ((0x7ffeffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q) 
               | (0x10000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q));
    }
    if ((0x20000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q 
            = ((0x7ffdffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q) 
               | (0x20000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q));
    }
    if ((0x40000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q 
            = ((0x7ffbffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q) 
               | (0x40000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q));
    }
    if ((0x80000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q 
            = ((0x7ff7ffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q) 
               | (0x80000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q));
    }
    if ((0x100000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q 
            = ((0x7fefffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q) 
               | (0x100000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q));
    }
    if ((0x200000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q 
            = ((0x7fdfffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q) 
               | (0x200000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q));
    }
    if ((0x400000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q 
            = ((0x7fbfffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q) 
               | (0x400000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q));
    }
    if ((0x800000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q 
            = ((0x7f7fffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q) 
               | (0x800000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q));
    }
    if ((0x1000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q 
            = ((0x7effffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q) 
               | (0x1000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q));
    }
    if ((0x2000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q 
            = ((0x7dffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q) 
               | (0x2000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q));
    }
    if ((0x4000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q 
            = ((0x7bffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q) 
               | (0x4000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q));
    }
    if ((0x8000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q 
            = ((0x77ffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q) 
               | (0x8000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q));
    }
    if ((0x10000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q 
                        ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q 
            = ((0x6fffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q) 
               | (0x10000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q));
    }
    if ((0x20000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q 
                        ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q 
            = ((0x5fffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q) 
               | (0x20000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q));
    }
    if ((0x40000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q 
                        ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q))) {
        vlSymsp->__Vcoverage[714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q 
            = ((0x3fffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q) 
               | (0x40000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q));
    }
    if ((1U & (vlSelf->addr_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i 
            = ((0xfffffffeU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i) 
               | (1U & vlSelf->addr_i));
    }
    if ((2U & (vlSelf->addr_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i 
            = ((0xfffffffdU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i) 
               | (2U & vlSelf->addr_i));
    }
    if ((4U & (vlSelf->addr_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i 
            = ((0xfffffffbU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i) 
               | (4U & vlSelf->addr_i));
    }
    if ((8U & (vlSelf->addr_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i 
            = ((0xfffffff7U & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i) 
               | (8U & vlSelf->addr_i));
    }
    if ((0x10U & (vlSelf->addr_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i 
            = ((0xffffffefU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i) 
               | (0x10U & vlSelf->addr_i));
    }
    if ((0x20U & (vlSelf->addr_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i 
            = ((0xffffffdfU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i) 
               | (0x20U & vlSelf->addr_i));
    }
    if ((0x40U & (vlSelf->addr_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i 
            = ((0xffffffbfU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i) 
               | (0x40U & vlSelf->addr_i));
    }
    if ((0x80U & (vlSelf->addr_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i 
            = ((0xffffff7fU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i) 
               | (0x80U & vlSelf->addr_i));
    }
    if ((0x100U & (vlSelf->addr_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i 
            = ((0xfffffeffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i) 
               | (0x100U & vlSelf->addr_i));
    }
    if ((0x200U & (vlSelf->addr_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i 
            = ((0xfffffdffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i) 
               | (0x200U & vlSelf->addr_i));
    }
    if ((0x400U & (vlSelf->addr_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i 
            = ((0xfffffbffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i) 
               | (0x400U & vlSelf->addr_i));
    }
    if ((0x800U & (vlSelf->addr_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i 
            = ((0xfffff7ffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i) 
               | (0x800U & vlSelf->addr_i));
    }
    if ((0x1000U & (vlSelf->addr_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i 
            = ((0xffffefffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i) 
               | (0x1000U & vlSelf->addr_i));
    }
    if ((0x2000U & (vlSelf->addr_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i 
            = ((0xffffdfffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i) 
               | (0x2000U & vlSelf->addr_i));
    }
    if ((0x4000U & (vlSelf->addr_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i 
            = ((0xffffbfffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i) 
               | (0x4000U & vlSelf->addr_i));
    }
    if ((0x8000U & (vlSelf->addr_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i 
            = ((0xffff7fffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i) 
               | (0x8000U & vlSelf->addr_i));
    }
    if ((0x10000U & (vlSelf->addr_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i 
            = ((0xfffeffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i) 
               | (0x10000U & vlSelf->addr_i));
    }
    if ((0x20000U & (vlSelf->addr_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i 
            = ((0xfffdffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i) 
               | (0x20000U & vlSelf->addr_i));
    }
    if ((0x40000U & (vlSelf->addr_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i 
            = ((0xfffbffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i) 
               | (0x40000U & vlSelf->addr_i));
    }
    if ((0x80000U & (vlSelf->addr_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i 
            = ((0xfff7ffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i) 
               | (0x80000U & vlSelf->addr_i));
    }
    if ((0x100000U & (vlSelf->addr_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i 
            = ((0xffefffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i) 
               | (0x100000U & vlSelf->addr_i));
    }
    if ((0x200000U & (vlSelf->addr_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i 
            = ((0xffdfffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i) 
               | (0x200000U & vlSelf->addr_i));
    }
    if ((0x400000U & (vlSelf->addr_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i 
            = ((0xffbfffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i) 
               | (0x400000U & vlSelf->addr_i));
    }
    if ((0x800000U & (vlSelf->addr_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i 
            = ((0xff7fffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i) 
               | (0x800000U & vlSelf->addr_i));
    }
    if ((0x1000000U & (vlSelf->addr_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i 
            = ((0xfeffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i) 
               | (0x1000000U & vlSelf->addr_i));
    }
    if ((0x2000000U & (vlSelf->addr_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i 
            = ((0xfdffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i) 
               | (0x2000000U & vlSelf->addr_i));
    }
    if ((0x4000000U & (vlSelf->addr_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i 
            = ((0xfbffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i) 
               | (0x4000000U & vlSelf->addr_i));
    }
    if ((0x8000000U & (vlSelf->addr_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i 
            = ((0xf7ffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i) 
               | (0x8000000U & vlSelf->addr_i));
    }
    if ((0x10000000U & (vlSelf->addr_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i 
            = ((0xefffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i) 
               | (0x10000000U & vlSelf->addr_i));
    }
    if ((0x20000000U & (vlSelf->addr_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i 
            = ((0xdfffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i) 
               | (0x20000000U & vlSelf->addr_i));
    }
    if ((0x40000000U & (vlSelf->addr_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i 
            = ((0xbfffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i) 
               | (0x40000000U & vlSelf->addr_i));
    }
    if (((vlSelf->addr_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i 
            = ((0x7fffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_i) 
               | (0x80000000U & vlSelf->addr_i));
    }
    if ((1U & (vlSelf->instr_rdata_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i 
            = ((0xfffffffeU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i) 
               | (1U & vlSelf->instr_rdata_i));
    }
    if ((2U & (vlSelf->instr_rdata_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i 
            = ((0xfffffffdU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i) 
               | (2U & vlSelf->instr_rdata_i));
    }
    if ((4U & (vlSelf->instr_rdata_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i 
            = ((0xfffffffbU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i) 
               | (4U & vlSelf->instr_rdata_i));
    }
    if ((8U & (vlSelf->instr_rdata_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i 
            = ((0xfffffff7U & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i) 
               | (8U & vlSelf->instr_rdata_i));
    }
    if ((0x10U & (vlSelf->instr_rdata_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i 
            = ((0xffffffefU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i) 
               | (0x10U & vlSelf->instr_rdata_i));
    }
    if ((0x20U & (vlSelf->instr_rdata_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i 
            = ((0xffffffdfU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i) 
               | (0x20U & vlSelf->instr_rdata_i));
    }
    if ((0x40U & (vlSelf->instr_rdata_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i 
            = ((0xffffffbfU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i) 
               | (0x40U & vlSelf->instr_rdata_i));
    }
    if ((0x80U & (vlSelf->instr_rdata_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i 
            = ((0xffffff7fU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i) 
               | (0x80U & vlSelf->instr_rdata_i));
    }
    if ((0x100U & (vlSelf->instr_rdata_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i 
            = ((0xfffffeffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i) 
               | (0x100U & vlSelf->instr_rdata_i));
    }
    if ((0x200U & (vlSelf->instr_rdata_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i 
            = ((0xfffffdffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i) 
               | (0x200U & vlSelf->instr_rdata_i));
    }
    if ((0x400U & (vlSelf->instr_rdata_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i 
            = ((0xfffffbffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i) 
               | (0x400U & vlSelf->instr_rdata_i));
    }
    if ((0x800U & (vlSelf->instr_rdata_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i 
            = ((0xfffff7ffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i) 
               | (0x800U & vlSelf->instr_rdata_i));
    }
    if ((0x1000U & (vlSelf->instr_rdata_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i 
            = ((0xffffefffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i) 
               | (0x1000U & vlSelf->instr_rdata_i));
    }
    if ((0x2000U & (vlSelf->instr_rdata_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i 
            = ((0xffffdfffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i) 
               | (0x2000U & vlSelf->instr_rdata_i));
    }
    if ((0x4000U & (vlSelf->instr_rdata_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i 
            = ((0xffffbfffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i) 
               | (0x4000U & vlSelf->instr_rdata_i));
    }
    if ((0x8000U & (vlSelf->instr_rdata_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i 
            = ((0xffff7fffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i) 
               | (0x8000U & vlSelf->instr_rdata_i));
    }
    if ((0x10000U & (vlSelf->instr_rdata_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i 
            = ((0xfffeffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i) 
               | (0x10000U & vlSelf->instr_rdata_i));
    }
    if ((0x20000U & (vlSelf->instr_rdata_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i 
            = ((0xfffdffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i) 
               | (0x20000U & vlSelf->instr_rdata_i));
    }
    if ((0x40000U & (vlSelf->instr_rdata_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i 
            = ((0xfffbffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i) 
               | (0x40000U & vlSelf->instr_rdata_i));
    }
    if ((0x80000U & (vlSelf->instr_rdata_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i 
            = ((0xfff7ffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i) 
               | (0x80000U & vlSelf->instr_rdata_i));
    }
    if ((0x100000U & (vlSelf->instr_rdata_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i 
            = ((0xffefffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i) 
               | (0x100000U & vlSelf->instr_rdata_i));
    }
    if ((0x200000U & (vlSelf->instr_rdata_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i 
            = ((0xffdfffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i) 
               | (0x200000U & vlSelf->instr_rdata_i));
    }
    if ((0x400000U & (vlSelf->instr_rdata_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i 
            = ((0xffbfffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i) 
               | (0x400000U & vlSelf->instr_rdata_i));
    }
    if ((0x800000U & (vlSelf->instr_rdata_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i 
            = ((0xff7fffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i) 
               | (0x800000U & vlSelf->instr_rdata_i));
    }
    if ((0x1000000U & (vlSelf->instr_rdata_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i 
            = ((0xfeffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i) 
               | (0x1000000U & vlSelf->instr_rdata_i));
    }
    if ((0x2000000U & (vlSelf->instr_rdata_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i 
            = ((0xfdffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i) 
               | (0x2000000U & vlSelf->instr_rdata_i));
    }
    if ((0x4000000U & (vlSelf->instr_rdata_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i 
            = ((0xfbffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i) 
               | (0x4000000U & vlSelf->instr_rdata_i));
    }
    if ((0x8000000U & (vlSelf->instr_rdata_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i 
            = ((0xf7ffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i) 
               | (0x8000000U & vlSelf->instr_rdata_i));
    }
    if ((0x10000000U & (vlSelf->instr_rdata_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i 
            = ((0xefffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i) 
               | (0x10000000U & vlSelf->instr_rdata_i));
    }
    if ((0x20000000U & (vlSelf->instr_rdata_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i 
            = ((0xdfffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i) 
               | (0x20000000U & vlSelf->instr_rdata_i));
    }
    if ((0x40000000U & (vlSelf->instr_rdata_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i))) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i 
            = ((0xbfffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i) 
               | (0x40000000U & vlSelf->instr_rdata_i));
    }
    if (((vlSelf->instr_rdata_i ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i 
            = ((0x7fffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i) 
               | (0x80000000U & vlSelf->instr_rdata_i));
    }
    if ((1U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q 
               ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q 
            = ((0xfffffffeU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q) 
               | (1U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q));
    }
    if ((2U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q 
               ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q 
            = ((0xfffffffdU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q) 
               | (2U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q));
    }
    if ((4U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q 
               ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q 
            = ((0xfffffffbU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q) 
               | (4U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q));
    }
    if ((8U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q 
               ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q))) {
        vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q 
            = ((0xfffffff7U & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q) 
               | (8U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q));
    }
    if ((0x10U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q 
                  ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q))) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q 
            = ((0xffffffefU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q) 
               | (0x10U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q));
    }
    if ((0x20U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q 
                  ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q 
            = ((0xffffffdfU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q) 
               | (0x20U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q));
    }
    if ((0x40U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q 
                  ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q))) {
        vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q 
            = ((0xffffffbfU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q) 
               | (0x40U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q));
    }
    if ((0x80U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q 
                  ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q))) {
        vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q 
            = ((0xffffff7fU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q) 
               | (0x80U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q));
    }
    if ((0x100U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q 
                   ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q))) {
        vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q 
            = ((0xfffffeffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q) 
               | (0x100U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q));
    }
    if ((0x200U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q 
                   ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q))) {
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q 
            = ((0xfffffdffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q) 
               | (0x200U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q));
    }
    if ((0x400U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q 
                   ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q))) {
        vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q 
            = ((0xfffffbffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q) 
               | (0x400U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q));
    }
    if ((0x800U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q 
                   ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q))) {
        vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q 
            = ((0xfffff7ffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q) 
               | (0x800U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q));
    }
    if ((0x1000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q 
                    ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q))) {
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q 
            = ((0xffffefffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q) 
               | (0x1000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q));
    }
    if ((0x2000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q 
                    ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q))) {
        vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q 
            = ((0xffffdfffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q) 
               | (0x2000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q));
    }
    if ((0x4000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q 
                    ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q 
            = ((0xffffbfffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q) 
               | (0x4000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q));
    }
    if ((0x8000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q 
                    ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q))) {
        vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q 
            = ((0xffff7fffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q) 
               | (0x8000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q));
    }
    if ((0x10000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q 
                     ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q))) {
        vlSymsp->__Vcoverage[240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q 
            = ((0xfffeffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q) 
               | (0x10000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q));
    }
    if ((0x20000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q 
                     ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q))) {
        vlSymsp->__Vcoverage[241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q 
            = ((0xfffdffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q) 
               | (0x20000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q));
    }
    if ((0x40000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q 
                     ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q))) {
        vlSymsp->__Vcoverage[242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q 
            = ((0xfffbffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q) 
               | (0x40000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q));
    }
    if ((0x80000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q 
                     ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q))) {
        vlSymsp->__Vcoverage[243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q 
            = ((0xfff7ffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q) 
               | (0x80000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q));
    }
    if ((0x100000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q 
                      ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q))) {
        vlSymsp->__Vcoverage[244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q 
            = ((0xffefffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q) 
               | (0x100000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q));
    }
    if ((0x200000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q 
                      ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q))) {
        vlSymsp->__Vcoverage[245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q 
            = ((0xffdfffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q) 
               | (0x200000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q));
    }
    if ((0x400000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q 
                      ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q))) {
        vlSymsp->__Vcoverage[246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q 
            = ((0xffbfffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q) 
               | (0x400000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q));
    }
    if ((0x800000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q 
                      ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q))) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q 
            = ((0xff7fffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q) 
               | (0x800000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q));
    }
    if ((0x1000000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q 
                       ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q 
            = ((0xfeffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q) 
               | (0x1000000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q));
    }
    if ((0x2000000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q 
                       ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q))) {
        vlSymsp->__Vcoverage[249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q 
            = ((0xfdffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q) 
               | (0x2000000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q));
    }
    if ((0x4000000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q 
                       ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q))) {
        vlSymsp->__Vcoverage[250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q 
            = ((0xfbffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q) 
               | (0x4000000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q));
    }
    if ((0x8000000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q 
                       ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q))) {
        vlSymsp->__Vcoverage[251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q 
            = ((0xf7ffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q) 
               | (0x8000000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q));
    }
    if ((0x10000000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q 
                        ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q))) {
        vlSymsp->__Vcoverage[252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q 
            = ((0xefffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q) 
               | (0x10000000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q));
    }
    if ((0x20000000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q 
                        ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q))) {
        vlSymsp->__Vcoverage[253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q 
            = ((0xdfffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q) 
               | (0x20000000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q));
    }
    if ((0x40000000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q 
                        ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q 
            = ((0xbfffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q) 
               | (0x40000000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q));
    }
    if (((vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q 
          ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q 
            = ((0x7fffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q) 
               | (0x80000000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q));
    }
    if ((1U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q 
               ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q))) {
        vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q 
            = ((0xfffffffeU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q) 
               | (1U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q));
    }
    if ((2U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q 
               ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q))) {
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q 
            = ((0xfffffffdU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q) 
               | (2U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q));
    }
    if ((4U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q 
               ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q))) {
        vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q 
            = ((0xfffffffbU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q) 
               | (4U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q));
    }
    if ((8U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q 
               ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q))) {
        vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q 
            = ((0xfffffff7U & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q) 
               | (8U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q));
    }
    if ((0x10U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q 
                  ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q))) {
        vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q 
            = ((0xffffffefU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q) 
               | (0x10U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q));
    }
    if ((0x20U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q 
                  ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q))) {
        vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q 
            = ((0xffffffdfU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q) 
               | (0x20U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q));
    }
    if ((0x40U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q 
                  ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q))) {
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q 
            = ((0xffffffbfU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q) 
               | (0x40U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q));
    }
    if ((0x80U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q 
                  ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q))) {
        vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q 
            = ((0xffffff7fU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q) 
               | (0x80U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q));
    }
    if ((0x100U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q 
                   ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q))) {
        vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q 
            = ((0xfffffeffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q) 
               | (0x100U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q));
    }
    if ((0x200U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q 
                   ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q))) {
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q 
            = ((0xfffffdffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q) 
               | (0x200U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q));
    }
    if ((0x400U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q 
                   ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q))) {
        vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q 
            = ((0xfffffbffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q) 
               | (0x400U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q));
    }
    if ((0x800U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q 
                   ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q))) {
        vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q 
            = ((0xfffff7ffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q) 
               | (0x800U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q));
    }
    if ((0x1000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q 
                    ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q))) {
        vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q 
            = ((0xffffefffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q) 
               | (0x1000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q));
    }
    if ((0x2000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q 
                    ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q))) {
        vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q 
            = ((0xffffdfffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q) 
               | (0x2000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q));
    }
    if ((0x4000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q 
                    ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q))) {
        vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q 
            = ((0xffffbfffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q) 
               | (0x4000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q));
    }
    if ((0x8000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q 
                    ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q 
            = ((0xffff7fffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q) 
               | (0x8000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q));
    }
    if ((0x10000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q 
                     ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q 
            = ((0xfffeffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q) 
               | (0x10000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q));
    }
    if ((0x20000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q 
                     ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q))) {
        vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q 
            = ((0xfffdffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q) 
               | (0x20000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q));
    }
    if ((0x40000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q 
                     ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q))) {
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q 
            = ((0xfffbffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q) 
               | (0x40000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q));
    }
    if ((0x80000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q 
                     ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q))) {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q 
            = ((0xfff7ffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q) 
               | (0x80000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q));
    }
    if ((0x100000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q 
                      ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q))) {
        vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q 
            = ((0xffefffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q) 
               | (0x100000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q));
    }
    if ((0x200000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q 
                      ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q))) {
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q 
            = ((0xffdfffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q) 
               | (0x200000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q));
    }
    if ((0x400000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q 
                      ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q))) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q 
            = ((0xffbfffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q) 
               | (0x400000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q));
    }
    if ((0x800000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q 
                      ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q))) {
        vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q 
            = ((0xff7fffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q) 
               | (0x800000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q));
    }
    if ((0x1000000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q 
                       ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q))) {
        vlSymsp->__Vcoverage[313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q 
            = ((0xfeffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q) 
               | (0x1000000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q));
    }
    if ((0x2000000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q 
                       ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q))) {
        vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q 
            = ((0xfdffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q) 
               | (0x2000000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q));
    }
    if ((0x4000000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q 
                       ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q))) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q 
            = ((0xfbffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q) 
               | (0x4000000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q));
    }
    if ((0x8000000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q 
                       ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q))) {
        vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q 
            = ((0xf7ffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q) 
               | (0x8000000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q));
    }
    if ((0x10000000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q 
                        ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q))) {
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q 
            = ((0xefffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q) 
               | (0x10000000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q));
    }
    if ((0x20000000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q 
                        ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q))) {
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q 
            = ((0xdfffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q) 
               | (0x20000000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q));
    }
    if ((0x40000000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q 
                        ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q))) {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q 
            = ((0xbfffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q) 
               | (0x40000000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q));
    }
    if (((vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q 
          ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q 
            = ((0x7fffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q) 
               | (0x80000000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q));
    }
    vlSelf->ibex_prefetch_buffer__DOT__discard_req_d 
        = ((IData)(vlSelf->ibex_prefetch_buffer__DOT__valid_req_q) 
           & ((IData)(vlSelf->branch_i) | (IData)(vlSelf->ibex_prefetch_buffer__DOT__discard_req_q)));
    if ((1U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U] 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U] 
            = ((0xfffffffeU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]) 
               | (1U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U]));
    }
    if ((2U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U] 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U] 
            = ((0xfffffffdU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]) 
               | (2U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U]));
    }
    if ((4U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U] 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U] 
            = ((0xfffffffbU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]) 
               | (4U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U]));
    }
    if ((8U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U] 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U] 
            = ((0xfffffff7U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]) 
               | (8U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U]));
    }
    if ((0x10U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U] 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U] 
            = ((0xffffffefU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]) 
               | (0x10U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U]));
    }
    if ((0x20U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U] 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U] 
            = ((0xffffffdfU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]) 
               | (0x20U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U]));
    }
    if ((0x40U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U] 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U] 
            = ((0xffffffbfU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]) 
               | (0x40U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U]));
    }
    if ((0x80U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U] 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U] 
            = ((0xffffff7fU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]) 
               | (0x80U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U]));
    }
    if ((0x100U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U] 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U] 
            = ((0xfffffeffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]) 
               | (0x100U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U]));
    }
    if ((0x200U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U] 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U] 
            = ((0xfffffdffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]) 
               | (0x200U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U]));
    }
    if ((0x400U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U] 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U] 
            = ((0xfffffbffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]) 
               | (0x400U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U]));
    }
    if ((0x800U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U] 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U] 
            = ((0xfffff7ffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]) 
               | (0x800U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U]));
    }
    if ((0x1000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U] 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U] 
            = ((0xffffefffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]) 
               | (0x1000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U]));
    }
    if ((0x2000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U] 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U] 
            = ((0xffffdfffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]) 
               | (0x2000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U]));
    }
    if ((0x4000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U] 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U] 
            = ((0xffffbfffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]) 
               | (0x4000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U]));
    }
    if ((0x8000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U] 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U] 
            = ((0xffff7fffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]) 
               | (0x8000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U]));
    }
    if ((0x10000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U] 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U] 
            = ((0xfffeffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]) 
               | (0x10000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U]));
    }
    if ((0x20000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U] 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U] 
            = ((0xfffdffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]) 
               | (0x20000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U]));
    }
    if ((0x40000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U] 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U] 
            = ((0xfffbffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]) 
               | (0x40000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U]));
    }
    if ((0x80000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U] 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U] 
            = ((0xfff7ffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]) 
               | (0x80000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U]));
    }
    if ((0x100000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U] 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U] 
            = ((0xffefffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]) 
               | (0x100000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U]));
    }
    if ((0x200000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U] 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U] 
            = ((0xffdfffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]) 
               | (0x200000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U]));
    }
    if ((0x400000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U] 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U] 
            = ((0xffbfffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]) 
               | (0x400000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U]));
    }
    if ((0x800000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U] 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U] 
            = ((0xff7fffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]) 
               | (0x800000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U]));
    }
    if ((0x1000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U] 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U] 
            = ((0xfeffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]) 
               | (0x1000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U]));
    }
    if ((0x2000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U] 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U] 
            = ((0xfdffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]) 
               | (0x2000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U]));
    }
    if ((0x4000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U] 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U] 
            = ((0xfbffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]) 
               | (0x4000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U]));
    }
    if ((0x8000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U] 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U] 
            = ((0xf7ffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]) 
               | (0x8000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U]));
    }
    if ((0x10000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U] 
                        ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U] 
            = ((0xefffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]) 
               | (0x10000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U]));
    }
    if ((0x20000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U] 
                        ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U] 
            = ((0xdfffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]) 
               | (0x20000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U]));
    }
    if ((0x40000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U] 
                        ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U] 
            = ((0xbfffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]) 
               | (0x40000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U]));
    }
    if (((vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U] 
          ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U] 
            = ((0x7fffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[0U]) 
               | (0x80000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U]));
    }
    if ((1U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U] 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U] 
            = ((0xfffffffeU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]) 
               | (1U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U]));
    }
    if ((2U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U] 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U] 
            = ((0xfffffffdU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]) 
               | (2U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U]));
    }
    if ((4U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U] 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U] 
            = ((0xfffffffbU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]) 
               | (4U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U]));
    }
    if ((8U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U] 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U] 
            = ((0xfffffff7U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]) 
               | (8U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U]));
    }
    if ((0x10U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U] 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U] 
            = ((0xffffffefU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]) 
               | (0x10U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U]));
    }
    if ((0x20U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U] 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U] 
            = ((0xffffffdfU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]) 
               | (0x20U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U]));
    }
    if ((0x40U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U] 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U] 
            = ((0xffffffbfU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]) 
               | (0x40U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U]));
    }
    if ((0x80U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U] 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U] 
            = ((0xffffff7fU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]) 
               | (0x80U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U]));
    }
    if ((0x100U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U] 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U] 
            = ((0xfffffeffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]) 
               | (0x100U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U]));
    }
    if ((0x200U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U] 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U] 
            = ((0xfffffdffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]) 
               | (0x200U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U]));
    }
    if ((0x400U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U] 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U] 
            = ((0xfffffbffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]) 
               | (0x400U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U]));
    }
    if ((0x800U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U] 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U] 
            = ((0xfffff7ffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]) 
               | (0x800U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U]));
    }
    if ((0x1000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U] 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U] 
            = ((0xffffefffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]) 
               | (0x1000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U]));
    }
    if ((0x2000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U] 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U] 
            = ((0xffffdfffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]) 
               | (0x2000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U]));
    }
    if ((0x4000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U] 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U] 
            = ((0xffffbfffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]) 
               | (0x4000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U]));
    }
    if ((0x8000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U] 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U] 
            = ((0xffff7fffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]) 
               | (0x8000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U]));
    }
    if ((0x10000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U] 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U] 
            = ((0xfffeffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]) 
               | (0x10000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U]));
    }
    if ((0x20000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U] 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U] 
            = ((0xfffdffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]) 
               | (0x20000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U]));
    }
    if ((0x40000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U] 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U] 
            = ((0xfffbffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]) 
               | (0x40000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U]));
    }
    if ((0x80000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U] 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U] 
            = ((0xfff7ffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]) 
               | (0x80000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U]));
    }
    if ((0x100000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U] 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U] 
            = ((0xffefffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]) 
               | (0x100000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U]));
    }
    if ((0x200000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U] 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U] 
            = ((0xffdfffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]) 
               | (0x200000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U]));
    }
    if ((0x400000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U] 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U] 
            = ((0xffbfffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]) 
               | (0x400000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U]));
    }
    if ((0x800000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U] 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U] 
            = ((0xff7fffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]) 
               | (0x800000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U]));
    }
    if ((0x1000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U] 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U] 
            = ((0xfeffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]) 
               | (0x1000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U]));
    }
    if ((0x2000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U] 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U] 
            = ((0xfdffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]) 
               | (0x2000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U]));
    }
    if ((0x4000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U] 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U] 
            = ((0xfbffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]) 
               | (0x4000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U]));
    }
    if ((0x8000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U] 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U] 
            = ((0xf7ffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]) 
               | (0x8000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U]));
    }
    if ((0x10000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U] 
                        ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U] 
            = ((0xefffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]) 
               | (0x10000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U]));
    }
    if ((0x20000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U] 
                        ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U] 
            = ((0xdfffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]) 
               | (0x20000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U]));
    }
    if ((0x40000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U] 
                        ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]))) {
        vlSymsp->__Vcoverage[493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U] 
            = ((0xbfffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]) 
               | (0x40000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U]));
    }
    if (((vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U] 
          ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U] 
            = ((0x7fffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[1U]) 
               | (0x80000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U]));
    }
    if ((1U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U] 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U] 
            = ((0xfffffffeU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]) 
               | (1U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U]));
    }
    if ((2U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U] 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U] 
            = ((0xfffffffdU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]) 
               | (2U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U]));
    }
    if ((4U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U] 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U] 
            = ((0xfffffffbU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]) 
               | (4U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U]));
    }
    if ((8U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U] 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U] 
            = ((0xfffffff7U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]) 
               | (8U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U]));
    }
    if ((0x10U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U] 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U] 
            = ((0xffffffefU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]) 
               | (0x10U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U]));
    }
    if ((0x20U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U] 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U] 
            = ((0xffffffdfU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]) 
               | (0x20U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U]));
    }
    if ((0x40U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U] 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U] 
            = ((0xffffffbfU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]) 
               | (0x40U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U]));
    }
    if ((0x80U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U] 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U] 
            = ((0xffffff7fU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]) 
               | (0x80U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U]));
    }
    if ((0x100U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U] 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U] 
            = ((0xfffffeffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]) 
               | (0x100U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U]));
    }
    if ((0x200U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U] 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U] 
            = ((0xfffffdffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]) 
               | (0x200U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U]));
    }
    if ((0x400U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U] 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U] 
            = ((0xfffffbffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]) 
               | (0x400U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U]));
    }
    if ((0x800U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U] 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U] 
            = ((0xfffff7ffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]) 
               | (0x800U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U]));
    }
    if ((0x1000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U] 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U] 
            = ((0xffffefffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]) 
               | (0x1000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U]));
    }
    if ((0x2000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U] 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U] 
            = ((0xffffdfffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]) 
               | (0x2000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U]));
    }
    if ((0x4000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U] 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U] 
            = ((0xffffbfffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]) 
               | (0x4000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U]));
    }
    if ((0x8000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U] 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U] 
            = ((0xffff7fffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]) 
               | (0x8000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U]));
    }
    if ((0x10000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U] 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U] 
            = ((0xfffeffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]) 
               | (0x10000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U]));
    }
    if ((0x20000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U] 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U] 
            = ((0xfffdffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]) 
               | (0x20000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U]));
    }
    if ((0x40000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U] 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U] 
            = ((0xfffbffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]) 
               | (0x40000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U]));
    }
    if ((0x80000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U] 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U] 
            = ((0xfff7ffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]) 
               | (0x80000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U]));
    }
    if ((0x100000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U] 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U] 
            = ((0xffefffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]) 
               | (0x100000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U]));
    }
    if ((0x200000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U] 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U] 
            = ((0xffdfffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]) 
               | (0x200000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U]));
    }
    if ((0x400000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U] 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U] 
            = ((0xffbfffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]) 
               | (0x400000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U]));
    }
    if ((0x800000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U] 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U] 
            = ((0xff7fffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]) 
               | (0x800000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U]));
    }
    if ((0x1000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U] 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U] 
            = ((0xfeffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]) 
               | (0x1000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U]));
    }
    if ((0x2000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U] 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U] 
            = ((0xfdffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]) 
               | (0x2000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U]));
    }
    if ((0x4000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U] 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U] 
            = ((0xfbffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]) 
               | (0x4000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U]));
    }
    if ((0x8000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U] 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U] 
            = ((0xf7ffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]) 
               | (0x8000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U]));
    }
    if ((0x10000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U] 
                        ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U] 
            = ((0xefffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]) 
               | (0x10000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U]));
    }
    if ((0x20000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U] 
                        ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U] 
            = ((0xdfffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]) 
               | (0x20000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U]));
    }
    if ((0x40000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U] 
                        ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]))) {
        vlSymsp->__Vcoverage[525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U] 
            = ((0xbfffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]) 
               | (0x40000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U]));
    }
    if (((vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U] 
          ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U] 
            = ((0x7fffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q[2U]) 
               | (0x80000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U]));
    }
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h88eb07d9__0 
        = (IData)((2U == (6U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_q))));
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h18d2a020__0 
        = (IData)((1U == (3U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_q))));
    vlSelf->ibex_prefetch_buffer__DOT__fifo_valid = 
        ((~ (IData)(vlSelf->ibex_prefetch_buffer__DOT__branch_discard_q)) 
         & (IData)(vlSelf->instr_rvalid_i));
    vlSelf->addr_o = (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q 
                      << 1U);
    vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_rev 
        = ((2U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_q) 
                  << 1U)) | (1U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_q) 
                                   >> 1U)));
    vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d 
        = ((IData)(vlSelf->ibex_prefetch_buffer__DOT__valid_req_q)
            ? vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q
            : ((IData)(vlSelf->branch_i) ? vlSelf->addr_i
                : vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q));
    if ((1U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_q))) {
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err 
            = (1U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_q));
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
            = vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[0U];
    } else {
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err 
            = (1U & (IData)(vlSelf->instr_err_i));
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
            = vlSelf->instr_rdata_i;
    }
    if ((2U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_q))) {
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_plus2 
            = (1U & (IData)((2U == (3U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_q)))));
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U] 
            = vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U];
    } else {
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_plus2 
            = (1U & ((IData)(vlSelf->instr_err_i) & 
                     ((~ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_q)) 
                      & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_q))));
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U] 
            = vlSelf->instr_rdata_i;
    }
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U] 
        = (IData)((((QData)((IData)(vlSelf->instr_rdata_i)) 
                    << 0x20U) | (QData)((IData)(((4U 
                                                  & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_q))
                                                  ? 
                                                 vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U]
                                                  : vlSelf->instr_rdata_i)))));
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U] 
        = (IData)(((((QData)((IData)(vlSelf->instr_rdata_i)) 
                     << 0x20U) | (QData)((IData)(((4U 
                                                   & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_q))
                                                   ? 
                                                  vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[2U]
                                                   : vlSelf->instr_rdata_i)))) 
                   >> 0x20U));
    if (((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_plus2) 
         ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__err_plus2))) {
        vlSymsp->__Vcoverage[616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__err_plus2 
            = vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_plus2;
    }
    vlSelf->err_plus2_o = (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q 
                           & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_plus2));
    if ((1U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_d) 
               ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__err_d)))) {
        vlSymsp->__Vcoverage[527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__err_d 
            = ((6U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__err_d)) 
               | (1U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_d)));
    }
    if ((2U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_d) 
               ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__err_d)))) {
        vlSymsp->__Vcoverage[528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__err_d 
            = ((5U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__err_d)) 
               | (2U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_d)));
    }
    if ((4U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_d) 
               ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__err_d)))) {
        vlSymsp->__Vcoverage[529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__err_d 
            = ((3U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__err_d)) 
               | (4U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_d)));
    }
    if (((IData)(vlSelf->ibex_prefetch_buffer__DOT__discard_req_d) 
         ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__discard_req_d))) {
        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__discard_req_d 
            = vlSelf->ibex_prefetch_buffer__DOT__discard_req_d;
    }
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__lowest_free_entry 
        = (((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h88eb07d9__0) 
            << 2U) | (((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h18d2a020__0) 
                       << 1U) | (1U & (~ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_q)))));
    if (((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_valid) 
         ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fifo_valid))) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fifo_valid 
            = vlSelf->ibex_prefetch_buffer__DOT__fifo_valid;
    }
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h0de6124d__0 
        = ((~ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_q)) 
           & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_valid));
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h87bd3038__0 
        = ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_valid) 
           & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h88eb07d9__0));
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h379a9be1__0 
        = ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_valid) 
           & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h18d2a020__0));
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid 
        = (1U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_q) 
                 | (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_valid)));
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_unaligned 
        = (1U & (((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_q) 
                  >> 1U) | ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_q) 
                            & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_valid))));
    if ((1U & (vlSelf->addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o 
            = ((0xfffffffeU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o) 
               | (1U & vlSelf->addr_o));
    }
    if ((2U & (vlSelf->addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o 
            = ((0xfffffffdU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o) 
               | (2U & vlSelf->addr_o));
    }
    if ((4U & (vlSelf->addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o 
            = ((0xfffffffbU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o) 
               | (4U & vlSelf->addr_o));
    }
    if ((8U & (vlSelf->addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o 
            = ((0xfffffff7U & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o) 
               | (8U & vlSelf->addr_o));
    }
    if ((0x10U & (vlSelf->addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o 
            = ((0xffffffefU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o) 
               | (0x10U & vlSelf->addr_o));
    }
    if ((0x20U & (vlSelf->addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o 
            = ((0xffffffdfU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o) 
               | (0x20U & vlSelf->addr_o));
    }
    if ((0x40U & (vlSelf->addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o 
            = ((0xffffffbfU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o) 
               | (0x40U & vlSelf->addr_o));
    }
    if ((0x80U & (vlSelf->addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o 
            = ((0xffffff7fU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o) 
               | (0x80U & vlSelf->addr_o));
    }
    if ((0x100U & (vlSelf->addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o 
            = ((0xfffffeffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o) 
               | (0x100U & vlSelf->addr_o));
    }
    if ((0x200U & (vlSelf->addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o 
            = ((0xfffffdffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o) 
               | (0x200U & vlSelf->addr_o));
    }
    if ((0x400U & (vlSelf->addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o 
            = ((0xfffffbffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o) 
               | (0x400U & vlSelf->addr_o));
    }
    if ((0x800U & (vlSelf->addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o 
            = ((0xfffff7ffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o) 
               | (0x800U & vlSelf->addr_o));
    }
    if ((0x1000U & (vlSelf->addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o 
            = ((0xffffefffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o) 
               | (0x1000U & vlSelf->addr_o));
    }
    if ((0x2000U & (vlSelf->addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o 
            = ((0xffffdfffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o) 
               | (0x2000U & vlSelf->addr_o));
    }
    if ((0x4000U & (vlSelf->addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o 
            = ((0xffffbfffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o) 
               | (0x4000U & vlSelf->addr_o));
    }
    if ((0x8000U & (vlSelf->addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o 
            = ((0xffff7fffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o) 
               | (0x8000U & vlSelf->addr_o));
    }
    if ((0x10000U & (vlSelf->addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o 
            = ((0xfffeffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o) 
               | (0x10000U & vlSelf->addr_o));
    }
    if ((0x20000U & (vlSelf->addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o 
            = ((0xfffdffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o) 
               | (0x20000U & vlSelf->addr_o));
    }
    if ((0x40000U & (vlSelf->addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o 
            = ((0xfffbffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o) 
               | (0x40000U & vlSelf->addr_o));
    }
    if ((0x80000U & (vlSelf->addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o 
            = ((0xfff7ffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o) 
               | (0x80000U & vlSelf->addr_o));
    }
    if ((0x100000U & (vlSelf->addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o 
            = ((0xffefffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o) 
               | (0x100000U & vlSelf->addr_o));
    }
    if ((0x200000U & (vlSelf->addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o 
            = ((0xffdfffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o) 
               | (0x200000U & vlSelf->addr_o));
    }
    if ((0x400000U & (vlSelf->addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o 
            = ((0xffbfffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o) 
               | (0x400000U & vlSelf->addr_o));
    }
    if ((0x800000U & (vlSelf->addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o 
            = ((0xff7fffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o) 
               | (0x800000U & vlSelf->addr_o));
    }
    if ((0x1000000U & (vlSelf->addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o 
            = ((0xfeffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o) 
               | (0x1000000U & vlSelf->addr_o));
    }
    if ((0x2000000U & (vlSelf->addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o 
            = ((0xfdffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o) 
               | (0x2000000U & vlSelf->addr_o));
    }
    if ((0x4000000U & (vlSelf->addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o 
            = ((0xfbffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o) 
               | (0x4000000U & vlSelf->addr_o));
    }
    if ((0x8000000U & (vlSelf->addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o 
            = ((0xf7ffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o) 
               | (0x8000000U & vlSelf->addr_o));
    }
    if ((0x10000000U & (vlSelf->addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o 
            = ((0xefffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o) 
               | (0x10000000U & vlSelf->addr_o));
    }
    if ((0x20000000U & (vlSelf->addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o 
            = ((0xdfffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o) 
               | (0x20000000U & vlSelf->addr_o));
    }
    if ((0x40000000U & (vlSelf->addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o 
            = ((0xbfffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o) 
               | (0x40000000U & vlSelf->addr_o));
    }
    if (((vlSelf->addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o 
            = ((0x7fffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__addr_o) 
               | (0x80000000U & vlSelf->addr_o));
    }
    if ((1U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_rev) 
               ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_outstanding_rev)))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_outstanding_rev 
            = ((2U & (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_outstanding_rev)) 
               | (1U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_rev)));
    }
    if ((2U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_rev) 
               ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_outstanding_rev)))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_outstanding_rev 
            = ((1U & (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_outstanding_rev)) 
               | (2U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_rev)));
    }
    vlSelf->ibex_prefetch_buffer__DOT__fifo_ready = 
        (1U & (~ (IData)((3U == (3U & (((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_q) 
                                        >> 1U) | (IData)(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_rev)))))));
    if ((1U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d 
               ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d 
            = ((0xfffffffeU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d) 
               | (1U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d));
    }
    if ((2U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d 
               ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d 
            = ((0xfffffffdU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d) 
               | (2U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d));
    }
    if ((4U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d 
               ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d 
            = ((0xfffffffbU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d) 
               | (4U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d));
    }
    if ((8U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d 
               ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d 
            = ((0xfffffff7U & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d) 
               | (8U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d));
    }
    if ((0x10U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d 
                  ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d 
            = ((0xffffffefU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d) 
               | (0x10U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d));
    }
    if ((0x20U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d 
                  ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d 
            = ((0xffffffdfU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d) 
               | (0x20U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d));
    }
    if ((0x40U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d 
                  ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d 
            = ((0xffffffbfU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d) 
               | (0x40U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d));
    }
    if ((0x80U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d 
                  ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d))) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d 
            = ((0xffffff7fU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d) 
               | (0x80U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d));
    }
    if ((0x100U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d 
                   ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d))) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d 
            = ((0xfffffeffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d) 
               | (0x100U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d));
    }
    if ((0x200U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d 
                   ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d 
            = ((0xfffffdffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d) 
               | (0x200U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d));
    }
    if ((0x400U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d 
                   ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d 
            = ((0xfffffbffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d) 
               | (0x400U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d));
    }
    if ((0x800U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d 
                   ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d 
            = ((0xfffff7ffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d) 
               | (0x800U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d));
    }
    if ((0x1000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d 
                    ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d 
            = ((0xffffefffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d) 
               | (0x1000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d));
    }
    if ((0x2000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d 
                    ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d 
            = ((0xffffdfffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d) 
               | (0x2000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d));
    }
    if ((0x4000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d 
                    ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d 
            = ((0xffffbfffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d) 
               | (0x4000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d));
    }
    if ((0x8000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d 
                    ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d 
            = ((0xffff7fffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d) 
               | (0x8000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d));
    }
    if ((0x10000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d 
                     ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d 
            = ((0xfffeffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d) 
               | (0x10000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d));
    }
    if ((0x20000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d 
                     ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d 
            = ((0xfffdffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d) 
               | (0x20000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d));
    }
    if ((0x40000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d 
                     ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d))) {
        vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d 
            = ((0xfffbffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d) 
               | (0x40000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d));
    }
    if ((0x80000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d 
                     ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d))) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d 
            = ((0xfff7ffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d) 
               | (0x80000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d));
    }
    if ((0x100000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d 
                      ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d))) {
        vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d 
            = ((0xffefffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d) 
               | (0x100000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d));
    }
    if ((0x200000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d 
                      ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d))) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d 
            = ((0xffdfffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d) 
               | (0x200000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d));
    }
    if ((0x400000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d 
                      ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d))) {
        vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d 
            = ((0xffbfffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d) 
               | (0x400000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d));
    }
    if ((0x800000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d 
                      ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d))) {
        vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d 
            = ((0xff7fffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d) 
               | (0x800000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d));
    }
    if ((0x1000000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d 
                       ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d))) {
        vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d 
            = ((0xfeffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d) 
               | (0x1000000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d));
    }
    if ((0x2000000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d 
                       ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d))) {
        vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d 
            = ((0xfdffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d) 
               | (0x2000000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d));
    }
    if ((0x4000000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d 
                       ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d 
            = ((0xfbffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d) 
               | (0x4000000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d));
    }
    if ((0x8000000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d 
                       ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d 
            = ((0xf7ffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d) 
               | (0x8000000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d));
    }
    if ((0x10000000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d 
                        ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d 
            = ((0xefffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d) 
               | (0x10000000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d));
    }
    if ((0x20000000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d 
                        ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d 
            = ((0xdfffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d) 
               | (0x20000000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d));
    }
    if ((0x40000000U & (vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d 
                        ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d 
            = ((0xbfffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d) 
               | (0x40000000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d));
    }
    if (((vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d 
          ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d 
            = ((0x7fffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d) 
               | (0x80000000U & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d));
    }
    vlSelf->instr_addr_o = (0xfffffffcU & vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d);
    if (((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err) 
         ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__err))) {
        vlSymsp->__Vcoverage[614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__err 
            = vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err;
    }
    if ((1U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata 
            = ((0xfffffffeU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata) 
               | (1U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata));
    }
    if ((2U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata 
            = ((0xfffffffdU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata) 
               | (2U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata));
    }
    if ((4U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata 
            = ((0xfffffffbU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata) 
               | (4U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata));
    }
    if ((8U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata 
            = ((0xfffffff7U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata) 
               | (8U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata));
    }
    if ((0x10U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata 
            = ((0xffffffefU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata) 
               | (0x10U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata));
    }
    if ((0x20U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata 
            = ((0xffffffdfU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata) 
               | (0x20U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata));
    }
    if ((0x40U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata 
            = ((0xffffffbfU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata) 
               | (0x40U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata));
    }
    if ((0x80U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata 
            = ((0xffffff7fU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata) 
               | (0x80U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata));
    }
    if ((0x100U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata 
            = ((0xfffffeffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata) 
               | (0x100U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata));
    }
    if ((0x200U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata 
            = ((0xfffffdffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata) 
               | (0x200U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata));
    }
    if ((0x400U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata 
            = ((0xfffffbffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata) 
               | (0x400U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata));
    }
    if ((0x800U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata 
            = ((0xfffff7ffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata) 
               | (0x800U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata));
    }
    if ((0x1000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata 
            = ((0xffffefffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata) 
               | (0x1000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata));
    }
    if ((0x2000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata 
            = ((0xffffdfffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata) 
               | (0x2000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata));
    }
    if ((0x4000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata 
            = ((0xffffbfffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata) 
               | (0x4000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata));
    }
    if ((0x8000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata 
            = ((0xffff7fffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata) 
               | (0x8000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata));
    }
    if ((0x10000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata 
            = ((0xfffeffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata) 
               | (0x10000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata));
    }
    if ((0x20000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata 
            = ((0xfffdffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata) 
               | (0x20000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata));
    }
    if ((0x40000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata 
            = ((0xfffbffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata) 
               | (0x40000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata));
    }
    if ((0x80000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata 
            = ((0xfff7ffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata) 
               | (0x80000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata));
    }
    if ((0x100000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata 
            = ((0xffefffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata) 
               | (0x100000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata));
    }
    if ((0x200000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata 
            = ((0xffdfffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata) 
               | (0x200000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata));
    }
    if ((0x400000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata 
            = ((0xffbfffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata) 
               | (0x400000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata));
    }
    if ((0x800000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata 
            = ((0xff7fffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata) 
               | (0x800000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata));
    }
    if ((0x1000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata 
            = ((0xfeffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata) 
               | (0x1000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata));
    }
    if ((0x2000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata 
            = ((0xfdffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata) 
               | (0x2000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata));
    }
    if ((0x4000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata 
            = ((0xfbffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata) 
               | (0x4000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata));
    }
    if ((0x8000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata 
            = ((0xf7ffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata) 
               | (0x8000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata));
    }
    if ((0x10000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
                        ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata 
            = ((0xefffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata) 
               | (0x10000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata));
    }
    if ((0x20000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
                        ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata 
            = ((0xdfffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata) 
               | (0x20000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata));
    }
    if ((0x40000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
                        ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata))) {
        vlSymsp->__Vcoverage[580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata 
            = ((0xbfffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata) 
               | (0x40000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata));
    }
    if (((vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
          ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata 
            = ((0x7fffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata) 
               | (0x80000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata));
    }
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__aligned_is_compressed 
        = ((~ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err)) 
           & (3U != (3U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata)));
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__unaligned_is_compressed 
        = ((~ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err)) 
           & (3U != (3U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
                           >> 0x10U))));
    if ((2U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_q))) {
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned 
            = ((vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q[1U] 
                << 0x10U) | (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
                             >> 0x10U));
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_unaligned 
            = (1U & (((~ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__unaligned_is_compressed)) 
                      & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_q) 
                         >> 1U)) | (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_q)));
    } else {
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned 
            = ((vlSelf->instr_rdata_i << 0x10U) | (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata 
                                                   >> 0x10U));
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_unaligned 
            = (1U & (((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_q) 
                      & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_q)) 
                     | ((IData)(vlSelf->instr_err_i) 
                        & ((~ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_q)) 
                           | (~ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__unaligned_is_compressed))))));
    }
    if ((1U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q)) {
        vlSymsp->__Vcoverage[718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->rdata_o = vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned;
        if (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__unaligned_is_compressed) {
            vlSymsp->__Vcoverage[716].fetch_add(1, std::memory_order_relaxed);
            vlSelf->valid_o = vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid;
        } else {
            vlSelf->valid_o = vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_unaligned;
        }
        if ((1U & (~ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__unaligned_is_compressed)))) {
            vlSymsp->__Vcoverage[717].fetch_add(1, std::memory_order_relaxed);
        }
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__addr_incr_two 
            = vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__unaligned_is_compressed;
        vlSelf->err_o = vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_unaligned;
    } else {
        vlSelf->rdata_o = vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata;
        vlSelf->valid_o = vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid;
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__addr_incr_two 
            = vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__aligned_is_compressed;
        vlSelf->err_o = vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err;
    }
    if ((1U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U] 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U] 
            = ((0xfffffffeU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]) 
               | (1U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U]));
    }
    if ((2U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U] 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U] 
            = ((0xfffffffdU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]) 
               | (2U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U]));
    }
    if ((4U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U] 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U] 
            = ((0xfffffffbU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]) 
               | (4U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U]));
    }
    if ((8U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U] 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U] 
            = ((0xfffffff7U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]) 
               | (8U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U]));
    }
    if ((0x10U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U] 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U] 
            = ((0xffffffefU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]) 
               | (0x10U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U]));
    }
    if ((0x20U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U] 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U] 
            = ((0xffffffdfU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]) 
               | (0x20U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U]));
    }
    if ((0x40U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U] 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U] 
            = ((0xffffffbfU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]) 
               | (0x40U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U]));
    }
    if ((0x80U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U] 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U] 
            = ((0xffffff7fU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]) 
               | (0x80U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U]));
    }
    if ((0x100U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U] 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U] 
            = ((0xfffffeffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]) 
               | (0x100U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U]));
    }
    if ((0x200U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U] 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U] 
            = ((0xfffffdffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]) 
               | (0x200U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U]));
    }
    if ((0x400U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U] 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U] 
            = ((0xfffffbffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]) 
               | (0x400U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U]));
    }
    if ((0x800U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U] 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U] 
            = ((0xfffff7ffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]) 
               | (0x800U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U]));
    }
    if ((0x1000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U] 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U] 
            = ((0xffffefffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]) 
               | (0x1000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U]));
    }
    if ((0x2000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U] 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U] 
            = ((0xffffdfffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]) 
               | (0x2000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U]));
    }
    if ((0x4000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U] 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U] 
            = ((0xffffbfffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]) 
               | (0x4000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U]));
    }
    if ((0x8000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U] 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U] 
            = ((0xffff7fffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]) 
               | (0x8000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U]));
    }
    if ((0x10000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U] 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U] 
            = ((0xfffeffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]) 
               | (0x10000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U]));
    }
    if ((0x20000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U] 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U] 
            = ((0xfffdffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]) 
               | (0x20000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U]));
    }
    if ((0x40000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U] 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U] 
            = ((0xfffbffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]) 
               | (0x40000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U]));
    }
    if ((0x80000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U] 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U] 
            = ((0xfff7ffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]) 
               | (0x80000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U]));
    }
    if ((0x100000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U] 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U] 
            = ((0xffefffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]) 
               | (0x100000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U]));
    }
    if ((0x200000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U] 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U] 
            = ((0xffdfffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]) 
               | (0x200000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U]));
    }
    if ((0x400000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U] 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U] 
            = ((0xffbfffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]) 
               | (0x400000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U]));
    }
    if ((0x800000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U] 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U] 
            = ((0xff7fffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]) 
               | (0x800000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U]));
    }
    if ((0x1000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U] 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U] 
            = ((0xfeffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]) 
               | (0x1000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U]));
    }
    if ((0x2000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U] 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U] 
            = ((0xfdffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]) 
               | (0x2000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U]));
    }
    if ((0x4000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U] 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U] 
            = ((0xfbffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]) 
               | (0x4000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U]));
    }
    if ((0x8000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U] 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U] 
            = ((0xf7ffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]) 
               | (0x8000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U]));
    }
    if ((0x10000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U] 
                        ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U] 
            = ((0xefffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]) 
               | (0x10000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U]));
    }
    if ((0x20000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U] 
                        ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U] 
            = ((0xdfffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]) 
               | (0x20000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U]));
    }
    if ((0x40000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U] 
                        ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]))) {
        vlSymsp->__Vcoverage[365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U] 
            = ((0xbfffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]) 
               | (0x40000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U]));
    }
    if (((vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U] 
          ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U] 
            = ((0x7fffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[0U]) 
               | (0x80000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[0U]));
    }
    if ((1U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U] 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U] 
            = ((0xfffffffeU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]) 
               | (1U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U]));
    }
    if ((2U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U] 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U] 
            = ((0xfffffffdU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]) 
               | (2U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U]));
    }
    if ((4U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U] 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U] 
            = ((0xfffffffbU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]) 
               | (4U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U]));
    }
    if ((8U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U] 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U] 
            = ((0xfffffff7U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]) 
               | (8U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U]));
    }
    if ((0x10U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U] 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U] 
            = ((0xffffffefU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]) 
               | (0x10U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U]));
    }
    if ((0x20U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U] 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U] 
            = ((0xffffffdfU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]) 
               | (0x20U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U]));
    }
    if ((0x40U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U] 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U] 
            = ((0xffffffbfU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]) 
               | (0x40U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U]));
    }
    if ((0x80U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U] 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U] 
            = ((0xffffff7fU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]) 
               | (0x80U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U]));
    }
    if ((0x100U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U] 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U] 
            = ((0xfffffeffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]) 
               | (0x100U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U]));
    }
    if ((0x200U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U] 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U] 
            = ((0xfffffdffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]) 
               | (0x200U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U]));
    }
    if ((0x400U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U] 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U] 
            = ((0xfffffbffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]) 
               | (0x400U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U]));
    }
    if ((0x800U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U] 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U] 
            = ((0xfffff7ffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]) 
               | (0x800U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U]));
    }
    if ((0x1000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U] 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U] 
            = ((0xffffefffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]) 
               | (0x1000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U]));
    }
    if ((0x2000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U] 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U] 
            = ((0xffffdfffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]) 
               | (0x2000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U]));
    }
    if ((0x4000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U] 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U] 
            = ((0xffffbfffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]) 
               | (0x4000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U]));
    }
    if ((0x8000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U] 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U] 
            = ((0xffff7fffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]) 
               | (0x8000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U]));
    }
    if ((0x10000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U] 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U] 
            = ((0xfffeffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]) 
               | (0x10000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U]));
    }
    if ((0x20000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U] 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U] 
            = ((0xfffdffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]) 
               | (0x20000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U]));
    }
    if ((0x40000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U] 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U] 
            = ((0xfffbffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]) 
               | (0x40000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U]));
    }
    if ((0x80000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U] 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U] 
            = ((0xfff7ffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]) 
               | (0x80000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U]));
    }
    if ((0x100000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U] 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U] 
            = ((0xffefffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]) 
               | (0x100000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U]));
    }
    if ((0x200000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U] 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U] 
            = ((0xffdfffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]) 
               | (0x200000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U]));
    }
    if ((0x400000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U] 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U] 
            = ((0xffbfffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]) 
               | (0x400000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U]));
    }
    if ((0x800000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U] 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U] 
            = ((0xff7fffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]) 
               | (0x800000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U]));
    }
    if ((0x1000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U] 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U] 
            = ((0xfeffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]) 
               | (0x1000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U]));
    }
    if ((0x2000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U] 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U] 
            = ((0xfdffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]) 
               | (0x2000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U]));
    }
    if ((0x4000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U] 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U] 
            = ((0xfbffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]) 
               | (0x4000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U]));
    }
    if ((0x8000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U] 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U] 
            = ((0xf7ffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]) 
               | (0x8000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U]));
    }
    if ((0x10000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U] 
                        ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U] 
            = ((0xefffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]) 
               | (0x10000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U]));
    }
    if ((0x20000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U] 
                        ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U] 
            = ((0xdfffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]) 
               | (0x20000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U]));
    }
    if ((0x40000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U] 
                        ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]))) {
        vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U] 
            = ((0xbfffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]) 
               | (0x40000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U]));
    }
    if (((vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U] 
          ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U] 
            = ((0x7fffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[1U]) 
               | (0x80000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[1U]));
    }
    if ((1U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U] 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U] 
            = ((0xfffffffeU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]) 
               | (1U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U]));
    }
    if ((2U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U] 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U] 
            = ((0xfffffffdU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]) 
               | (2U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U]));
    }
    if ((4U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U] 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U] 
            = ((0xfffffffbU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]) 
               | (4U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U]));
    }
    if ((8U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U] 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U] 
            = ((0xfffffff7U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]) 
               | (8U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U]));
    }
    if ((0x10U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U] 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U] 
            = ((0xffffffefU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]) 
               | (0x10U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U]));
    }
    if ((0x20U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U] 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U] 
            = ((0xffffffdfU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]) 
               | (0x20U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U]));
    }
    if ((0x40U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U] 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U] 
            = ((0xffffffbfU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]) 
               | (0x40U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U]));
    }
    if ((0x80U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U] 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U] 
            = ((0xffffff7fU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]) 
               | (0x80U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U]));
    }
    if ((0x100U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U] 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U] 
            = ((0xfffffeffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]) 
               | (0x100U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U]));
    }
    if ((0x200U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U] 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U] 
            = ((0xfffffdffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]) 
               | (0x200U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U]));
    }
    if ((0x400U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U] 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U] 
            = ((0xfffffbffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]) 
               | (0x400U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U]));
    }
    if ((0x800U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U] 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U] 
            = ((0xfffff7ffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]) 
               | (0x800U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U]));
    }
    if ((0x1000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U] 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U] 
            = ((0xffffefffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]) 
               | (0x1000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U]));
    }
    if ((0x2000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U] 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U] 
            = ((0xffffdfffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]) 
               | (0x2000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U]));
    }
    if ((0x4000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U] 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U] 
            = ((0xffffbfffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]) 
               | (0x4000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U]));
    }
    if ((0x8000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U] 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U] 
            = ((0xffff7fffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]) 
               | (0x8000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U]));
    }
    if ((0x10000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U] 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U] 
            = ((0xfffeffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]) 
               | (0x10000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U]));
    }
    if ((0x20000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U] 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U] 
            = ((0xfffdffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]) 
               | (0x20000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U]));
    }
    if ((0x40000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U] 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U] 
            = ((0xfffbffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]) 
               | (0x40000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U]));
    }
    if ((0x80000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U] 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U] 
            = ((0xfff7ffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]) 
               | (0x80000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U]));
    }
    if ((0x100000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U] 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U] 
            = ((0xffefffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]) 
               | (0x100000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U]));
    }
    if ((0x200000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U] 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U] 
            = ((0xffdfffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]) 
               | (0x200000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U]));
    }
    if ((0x400000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U] 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U] 
            = ((0xffbfffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]) 
               | (0x400000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U]));
    }
    if ((0x800000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U] 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U] 
            = ((0xff7fffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]) 
               | (0x800000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U]));
    }
    if ((0x1000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U] 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U] 
            = ((0xfeffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]) 
               | (0x1000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U]));
    }
    if ((0x2000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U] 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U] 
            = ((0xfdffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]) 
               | (0x2000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U]));
    }
    if ((0x4000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U] 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U] 
            = ((0xfbffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]) 
               | (0x4000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U]));
    }
    if ((0x8000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U] 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U] 
            = ((0xf7ffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]) 
               | (0x8000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U]));
    }
    if ((0x10000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U] 
                        ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U] 
            = ((0xefffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]) 
               | (0x10000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U]));
    }
    if ((0x20000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U] 
                        ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U] 
            = ((0xdfffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]) 
               | (0x20000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U]));
    }
    if ((0x40000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U] 
                        ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]))) {
        vlSymsp->__Vcoverage[429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U] 
            = ((0xbfffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]) 
               | (0x40000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U]));
    }
    if (((vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U] 
          ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U] 
            = ((0x7fffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d[2U]) 
               | (0x80000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d[2U]));
    }
    if (((IData)(vlSelf->err_plus2_o) ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__err_plus2_o))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__err_plus2_o 
            = vlSelf->err_plus2_o;
    }
    if ((1U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__lowest_free_entry) 
               ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__lowest_free_entry)))) {
        vlSymsp->__Vcoverage[537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__lowest_free_entry 
            = ((6U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__lowest_free_entry)) 
               | (1U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__lowest_free_entry)));
    }
    if ((2U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__lowest_free_entry) 
               ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__lowest_free_entry)))) {
        vlSymsp->__Vcoverage[538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__lowest_free_entry 
            = ((5U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__lowest_free_entry)) 
               | (2U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__lowest_free_entry)));
    }
    if ((4U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__lowest_free_entry) 
               ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__lowest_free_entry)))) {
        vlSymsp->__Vcoverage[539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__lowest_free_entry 
            = ((3U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__lowest_free_entry)) 
               | (4U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__lowest_free_entry)));
    }
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h72c0dcf0__0 
        = (1U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h0de6124d__0) 
                 | (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_q)));
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h46f3913b__0 
        = (IData)((((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_q) 
                    >> 2U) | (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h87bd3038__0)));
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h11e4035a__0 
        = (1U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h379a9be1__0) 
                 | ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_q) 
                    >> 1U)));
    if (((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid) 
         ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid))) {
        vlSymsp->__Vcoverage[617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid 
            = vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid;
    }
    if (((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_unaligned) 
         ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_unaligned))) {
        vlSymsp->__Vcoverage[618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_unaligned 
            = vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_unaligned;
    }
    if (((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_ready) 
         ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fifo_ready))) {
        vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fifo_ready 
            = vlSelf->ibex_prefetch_buffer__DOT__fifo_ready;
    }
    vlSelf->ibex_prefetch_buffer__DOT__valid_new_req 
        = ((IData)(vlSelf->req_i) & ((~ ((IData)(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_q) 
                                         >> 1U)) & 
                                     ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_ready) 
                                      | (IData)(vlSelf->branch_i))));
    if ((1U & (vlSelf->instr_addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o 
            = ((0xfffffffeU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o) 
               | (1U & vlSelf->instr_addr_o));
    }
    if ((2U & (vlSelf->instr_addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o 
            = ((0xfffffffdU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o) 
               | (2U & vlSelf->instr_addr_o));
    }
    if ((4U & (vlSelf->instr_addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o 
            = ((0xfffffffbU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o) 
               | (4U & vlSelf->instr_addr_o));
    }
    if ((8U & (vlSelf->instr_addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o 
            = ((0xfffffff7U & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o) 
               | (8U & vlSelf->instr_addr_o));
    }
    if ((0x10U & (vlSelf->instr_addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o 
            = ((0xffffffefU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o) 
               | (0x10U & vlSelf->instr_addr_o));
    }
    if ((0x20U & (vlSelf->instr_addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o 
            = ((0xffffffdfU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o) 
               | (0x20U & vlSelf->instr_addr_o));
    }
    if ((0x40U & (vlSelf->instr_addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o 
            = ((0xffffffbfU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o) 
               | (0x40U & vlSelf->instr_addr_o));
    }
    if ((0x80U & (vlSelf->instr_addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o 
            = ((0xffffff7fU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o) 
               | (0x80U & vlSelf->instr_addr_o));
    }
    if ((0x100U & (vlSelf->instr_addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o 
            = ((0xfffffeffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o) 
               | (0x100U & vlSelf->instr_addr_o));
    }
    if ((0x200U & (vlSelf->instr_addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o 
            = ((0xfffffdffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o) 
               | (0x200U & vlSelf->instr_addr_o));
    }
    if ((0x400U & (vlSelf->instr_addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o 
            = ((0xfffffbffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o) 
               | (0x400U & vlSelf->instr_addr_o));
    }
    if ((0x800U & (vlSelf->instr_addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o))) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o 
            = ((0xfffff7ffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o) 
               | (0x800U & vlSelf->instr_addr_o));
    }
    if ((0x1000U & (vlSelf->instr_addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o 
            = ((0xffffefffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o) 
               | (0x1000U & vlSelf->instr_addr_o));
    }
    if ((0x2000U & (vlSelf->instr_addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o 
            = ((0xffffdfffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o) 
               | (0x2000U & vlSelf->instr_addr_o));
    }
    if ((0x4000U & (vlSelf->instr_addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o 
            = ((0xffffbfffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o) 
               | (0x4000U & vlSelf->instr_addr_o));
    }
    if ((0x8000U & (vlSelf->instr_addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o 
            = ((0xffff7fffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o) 
               | (0x8000U & vlSelf->instr_addr_o));
    }
    if ((0x10000U & (vlSelf->instr_addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o 
            = ((0xfffeffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o) 
               | (0x10000U & vlSelf->instr_addr_o));
    }
    if ((0x20000U & (vlSelf->instr_addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o 
            = ((0xfffdffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o) 
               | (0x20000U & vlSelf->instr_addr_o));
    }
    if ((0x40000U & (vlSelf->instr_addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o 
            = ((0xfffbffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o) 
               | (0x40000U & vlSelf->instr_addr_o));
    }
    if ((0x80000U & (vlSelf->instr_addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o 
            = ((0xfff7ffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o) 
               | (0x80000U & vlSelf->instr_addr_o));
    }
    if ((0x100000U & (vlSelf->instr_addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o 
            = ((0xffefffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o) 
               | (0x100000U & vlSelf->instr_addr_o));
    }
    if ((0x200000U & (vlSelf->instr_addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o 
            = ((0xffdfffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o) 
               | (0x200000U & vlSelf->instr_addr_o));
    }
    if ((0x400000U & (vlSelf->instr_addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o 
            = ((0xffbfffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o) 
               | (0x400000U & vlSelf->instr_addr_o));
    }
    if ((0x800000U & (vlSelf->instr_addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o 
            = ((0xff7fffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o) 
               | (0x800000U & vlSelf->instr_addr_o));
    }
    if ((0x1000000U & (vlSelf->instr_addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o 
            = ((0xfeffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o) 
               | (0x1000000U & vlSelf->instr_addr_o));
    }
    if ((0x2000000U & (vlSelf->instr_addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o 
            = ((0xfdffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o) 
               | (0x2000000U & vlSelf->instr_addr_o));
    }
    if ((0x4000000U & (vlSelf->instr_addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o 
            = ((0xfbffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o) 
               | (0x4000000U & vlSelf->instr_addr_o));
    }
    if ((0x8000000U & (vlSelf->instr_addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o 
            = ((0xf7ffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o) 
               | (0x8000000U & vlSelf->instr_addr_o));
    }
    if ((0x10000000U & (vlSelf->instr_addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o 
            = ((0xefffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o) 
               | (0x10000000U & vlSelf->instr_addr_o));
    }
    if ((0x20000000U & (vlSelf->instr_addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o 
            = ((0xdfffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o) 
               | (0x20000000U & vlSelf->instr_addr_o));
    }
    if ((0x40000000U & (vlSelf->instr_addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o))) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o 
            = ((0xbfffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o) 
               | (0x40000000U & vlSelf->instr_addr_o));
    }
    if (((vlSelf->instr_addr_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o 
            = ((0x7fffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o) 
               | (0x80000000U & vlSelf->instr_addr_o));
    }
    if ((1U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned 
            = ((0xfffffffeU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned) 
               | (1U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned));
    }
    if ((2U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned 
            = ((0xfffffffdU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned) 
               | (2U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned));
    }
    if ((4U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned 
            = ((0xfffffffbU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned) 
               | (4U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned));
    }
    if ((8U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned 
            = ((0xfffffff7U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned) 
               | (8U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned));
    }
    if ((0x10U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned 
            = ((0xffffffefU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned) 
               | (0x10U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned));
    }
    if ((0x20U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned 
            = ((0xffffffdfU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned) 
               | (0x20U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned));
    }
    if ((0x40U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned 
            = ((0xffffffbfU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned) 
               | (0x40U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned));
    }
    if ((0x80U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned 
            = ((0xffffff7fU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned) 
               | (0x80U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned));
    }
    if ((0x100U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned 
            = ((0xfffffeffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned) 
               | (0x100U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned));
    }
    if ((0x200U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned 
            = ((0xfffffdffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned) 
               | (0x200U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned));
    }
    if ((0x400U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned 
            = ((0xfffffbffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned) 
               | (0x400U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned));
    }
    if ((0x800U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned 
            = ((0xfffff7ffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned) 
               | (0x800U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned));
    }
    if ((0x1000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned 
            = ((0xffffefffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned) 
               | (0x1000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned));
    }
    if ((0x2000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned 
            = ((0xffffdfffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned) 
               | (0x2000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned));
    }
    if ((0x4000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned 
            = ((0xffffbfffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned) 
               | (0x4000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned));
    }
    if ((0x8000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned 
            = ((0xffff7fffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned) 
               | (0x8000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned));
    }
    if ((0x10000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned 
            = ((0xfffeffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned) 
               | (0x10000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned));
    }
    if ((0x20000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned 
            = ((0xfffdffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned) 
               | (0x20000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned));
    }
    if ((0x40000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned 
            = ((0xfffbffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned) 
               | (0x40000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned));
    }
    if ((0x80000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned 
            = ((0xfff7ffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned) 
               | (0x80000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned));
    }
    if ((0x100000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned 
            = ((0xffefffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned) 
               | (0x100000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned));
    }
    if ((0x200000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned 
            = ((0xffdfffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned) 
               | (0x200000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned));
    }
    if ((0x400000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned 
            = ((0xffbfffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned) 
               | (0x400000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned));
    }
    if ((0x800000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned 
            = ((0xff7fffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned) 
               | (0x800000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned));
    }
    if ((0x1000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned 
            = ((0xfeffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned) 
               | (0x1000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned));
    }
    if ((0x2000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned 
            = ((0xfdffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned) 
               | (0x2000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned));
    }
    if ((0x4000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned 
            = ((0xfbffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned) 
               | (0x4000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned));
    }
    if ((0x8000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned 
            = ((0xf7ffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned) 
               | (0x8000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned));
    }
    if ((0x10000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned 
                        ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned 
            = ((0xefffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned) 
               | (0x10000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned));
    }
    if ((0x20000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned 
                        ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned 
            = ((0xdfffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned) 
               | (0x20000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned));
    }
    if ((0x40000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned 
                        ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned))) {
        vlSymsp->__Vcoverage[612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned 
            = ((0xbfffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned) 
               | (0x40000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned));
    }
    if (((vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned 
          ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned 
            = ((0x7fffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned) 
               | (0x80000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned));
    }
    if (((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__aligned_is_compressed) 
         ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__aligned_is_compressed))) {
        vlSymsp->__Vcoverage[619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__aligned_is_compressed 
            = vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__aligned_is_compressed;
    }
    if (((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__unaligned_is_compressed) 
         ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__unaligned_is_compressed))) {
        vlSymsp->__Vcoverage[620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__unaligned_is_compressed 
            = vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__unaligned_is_compressed;
    }
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_pushed 
        = (((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h46f3913b__0) 
            << 2U) | (((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h11e4035a__0) 
                       << 1U) | (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h72c0dcf0__0)));
    if (((IData)(vlSelf->ibex_prefetch_buffer__DOT__valid_new_req) 
         ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__valid_new_req))) {
        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__valid_new_req 
            = vlSelf->ibex_prefetch_buffer__DOT__valid_new_req;
    }
    vlSelf->instr_req_o = ((IData)(vlSelf->ibex_prefetch_buffer__DOT__valid_req_q) 
                           | (IData)(vlSelf->ibex_prefetch_buffer__DOT__valid_new_req));
    vlSelf->ibex_prefetch_buffer__DOT____VdfgTmp_h6a6a3522__0 
        = ((~ (IData)(vlSelf->ibex_prefetch_buffer__DOT__valid_req_q)) 
           & (IData)(vlSelf->ibex_prefetch_buffer__DOT__valid_new_req));
    if ((1U & (vlSelf->rdata_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o 
            = ((0xfffffffeU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o) 
               | (1U & vlSelf->rdata_o));
    }
    if ((2U & (vlSelf->rdata_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o 
            = ((0xfffffffdU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o) 
               | (2U & vlSelf->rdata_o));
    }
    if ((4U & (vlSelf->rdata_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o 
            = ((0xfffffffbU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o) 
               | (4U & vlSelf->rdata_o));
    }
    if ((8U & (vlSelf->rdata_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o 
            = ((0xfffffff7U & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o) 
               | (8U & vlSelf->rdata_o));
    }
    if ((0x10U & (vlSelf->rdata_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o 
            = ((0xffffffefU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o) 
               | (0x10U & vlSelf->rdata_o));
    }
    if ((0x20U & (vlSelf->rdata_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o 
            = ((0xffffffdfU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o) 
               | (0x20U & vlSelf->rdata_o));
    }
    if ((0x40U & (vlSelf->rdata_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o 
            = ((0xffffffbfU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o) 
               | (0x40U & vlSelf->rdata_o));
    }
    if ((0x80U & (vlSelf->rdata_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o 
            = ((0xffffff7fU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o) 
               | (0x80U & vlSelf->rdata_o));
    }
    if ((0x100U & (vlSelf->rdata_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o 
            = ((0xfffffeffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o) 
               | (0x100U & vlSelf->rdata_o));
    }
    if ((0x200U & (vlSelf->rdata_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o 
            = ((0xfffffdffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o) 
               | (0x200U & vlSelf->rdata_o));
    }
    if ((0x400U & (vlSelf->rdata_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o 
            = ((0xfffffbffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o) 
               | (0x400U & vlSelf->rdata_o));
    }
    if ((0x800U & (vlSelf->rdata_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o 
            = ((0xfffff7ffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o) 
               | (0x800U & vlSelf->rdata_o));
    }
    if ((0x1000U & (vlSelf->rdata_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o 
            = ((0xffffefffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o) 
               | (0x1000U & vlSelf->rdata_o));
    }
    if ((0x2000U & (vlSelf->rdata_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o 
            = ((0xffffdfffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o) 
               | (0x2000U & vlSelf->rdata_o));
    }
    if ((0x4000U & (vlSelf->rdata_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o 
            = ((0xffffbfffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o) 
               | (0x4000U & vlSelf->rdata_o));
    }
    if ((0x8000U & (vlSelf->rdata_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o 
            = ((0xffff7fffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o) 
               | (0x8000U & vlSelf->rdata_o));
    }
    if ((0x10000U & (vlSelf->rdata_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o 
            = ((0xfffeffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o) 
               | (0x10000U & vlSelf->rdata_o));
    }
    if ((0x20000U & (vlSelf->rdata_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o 
            = ((0xfffdffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o) 
               | (0x20000U & vlSelf->rdata_o));
    }
    if ((0x40000U & (vlSelf->rdata_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o 
            = ((0xfffbffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o) 
               | (0x40000U & vlSelf->rdata_o));
    }
    if ((0x80000U & (vlSelf->rdata_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o 
            = ((0xfff7ffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o) 
               | (0x80000U & vlSelf->rdata_o));
    }
    if ((0x100000U & (vlSelf->rdata_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o 
            = ((0xffefffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o) 
               | (0x100000U & vlSelf->rdata_o));
    }
    if ((0x200000U & (vlSelf->rdata_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o 
            = ((0xffdfffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o) 
               | (0x200000U & vlSelf->rdata_o));
    }
    if ((0x400000U & (vlSelf->rdata_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o 
            = ((0xffbfffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o) 
               | (0x400000U & vlSelf->rdata_o));
    }
    if ((0x800000U & (vlSelf->rdata_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o 
            = ((0xff7fffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o) 
               | (0x800000U & vlSelf->rdata_o));
    }
    if ((0x1000000U & (vlSelf->rdata_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o 
            = ((0xfeffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o) 
               | (0x1000000U & vlSelf->rdata_o));
    }
    if ((0x2000000U & (vlSelf->rdata_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o 
            = ((0xfdffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o) 
               | (0x2000000U & vlSelf->rdata_o));
    }
    if ((0x4000000U & (vlSelf->rdata_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o 
            = ((0xfbffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o) 
               | (0x4000000U & vlSelf->rdata_o));
    }
    if ((0x8000000U & (vlSelf->rdata_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o 
            = ((0xf7ffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o) 
               | (0x8000000U & vlSelf->rdata_o));
    }
    if ((0x10000000U & (vlSelf->rdata_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o 
            = ((0xefffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o) 
               | (0x10000000U & vlSelf->rdata_o));
    }
    if ((0x20000000U & (vlSelf->rdata_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o 
            = ((0xdfffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o) 
               | (0x20000000U & vlSelf->rdata_o));
    }
    if ((0x40000000U & (vlSelf->rdata_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o 
            = ((0xbfffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o) 
               | (0x40000000U & vlSelf->rdata_o));
    }
    if (((vlSelf->rdata_o ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o 
            = ((0x7fffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_o) 
               | (0x80000000U & vlSelf->rdata_o));
    }
    if (((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_unaligned) 
         ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__err_unaligned))) {
        vlSymsp->__Vcoverage[615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__err_unaligned 
            = vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_unaligned;
    }
    if (((IData)(vlSelf->valid_o) ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__valid_o))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__valid_o 
            = vlSelf->valid_o;
    }
    ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_hd659e1ce__0 
        = ((IData)(vlSelf->ready_i) & (IData)(vlSelf->valid_o));
    if (((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__addr_incr_two) 
         ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__addr_incr_two))) {
        vlSymsp->__Vcoverage[621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__addr_incr_two 
            = vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__addr_incr_two;
    }
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next 
        = (0x7fffffffU & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q 
                          + ((2U & ((~ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__addr_incr_two)) 
                                    << 1U)) | (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__addr_incr_two))));
    if ((1U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_pushed) 
               ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_pushed)))) {
        vlSymsp->__Vcoverage[540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_pushed 
            = ((6U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_pushed)) 
               | (1U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_pushed)));
    }
    if ((2U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_pushed) 
               ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_pushed)))) {
        vlSymsp->__Vcoverage[541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_pushed 
            = ((5U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_pushed)) 
               | (2U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_pushed)));
    }
    if ((4U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_pushed) 
               ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_pushed)))) {
        vlSymsp->__Vcoverage[542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_pushed 
            = ((3U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_pushed)) 
               | (4U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_pushed)));
    }
    if (((IData)(vlSelf->instr_req_o) ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_req_o))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__instr_req_o 
            = vlSelf->instr_req_o;
    }
    vlSelf->busy_o = ((0U != (IData)(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_q)) 
                      | (IData)(vlSelf->instr_req_o));
    vlSelf->ibex_prefetch_buffer__DOT__valid_req_d 
        = ((~ (IData)(vlSelf->instr_gnt_i)) & (IData)(vlSelf->instr_req_o));
    ibex_prefetch_buffer__DOT____VdfgTmp_he9a9b48f__0 
        = ((IData)(vlSelf->instr_req_o) & (IData)(vlSelf->instr_gnt_i));
    vlSelf->ibex_prefetch_buffer__DOT__stored_addr_en 
        = ((~ (IData)(vlSelf->instr_gnt_i)) & (IData)(vlSelf->ibex_prefetch_buffer__DOT____VdfgTmp_h6a6a3522__0));
    vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_en 
        = ((IData)(vlSelf->branch_i) | (IData)(vlSelf->ibex_prefetch_buffer__DOT____VdfgTmp_h6a6a3522__0));
    vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d 
        = (((IData)(vlSelf->branch_i) ? vlSelf->addr_i
             : (0xfffffffcU & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q)) 
           + ((IData)(vlSelf->ibex_prefetch_buffer__DOT____VdfgTmp_h6a6a3522__0) 
              << 2U));
    if (((IData)(vlSelf->err_o) ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__err_o))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__err_o 
            = vlSelf->err_o;
    }
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_en 
        = ((IData)(vlSelf->branch_i) | (IData)(ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_hd659e1ce__0));
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__pop_fifo 
        = ((IData)(ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_hd659e1ce__0) 
           & ((~ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__aligned_is_compressed)) 
              | vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q));
    if ((1U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next 
            = ((0x7ffffffeU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next) 
               | (1U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next));
    }
    if ((2U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[623].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next 
            = ((0x7ffffffdU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next) 
               | (2U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next));
    }
    if ((4U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next 
            = ((0x7ffffffbU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next) 
               | (4U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next));
    }
    if ((8U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[625].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next 
            = ((0x7ffffff7U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next) 
               | (8U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next));
    }
    if ((0x10U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[626].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next 
            = ((0x7fffffefU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next) 
               | (0x10U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next));
    }
    if ((0x20U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next 
            = ((0x7fffffdfU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next) 
               | (0x20U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next));
    }
    if ((0x40U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next 
            = ((0x7fffffbfU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next) 
               | (0x40U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next));
    }
    if ((0x80U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next 
            = ((0x7fffff7fU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next) 
               | (0x80U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next));
    }
    if ((0x100U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next 
            = ((0x7ffffeffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next) 
               | (0x100U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next));
    }
    if ((0x200U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next 
            = ((0x7ffffdffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next) 
               | (0x200U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next));
    }
    if ((0x400U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next 
            = ((0x7ffffbffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next) 
               | (0x400U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next));
    }
    if ((0x800U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next 
            = ((0x7ffff7ffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next) 
               | (0x800U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next));
    }
    if ((0x1000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next 
            = ((0x7fffefffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next) 
               | (0x1000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next));
    }
    if ((0x2000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next 
            = ((0x7fffdfffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next) 
               | (0x2000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next));
    }
    if ((0x4000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next 
            = ((0x7fffbfffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next) 
               | (0x4000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next));
    }
    if ((0x8000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next 
            = ((0x7fff7fffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next) 
               | (0x8000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next));
    }
    if ((0x10000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next 
            = ((0x7ffeffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next) 
               | (0x10000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next));
    }
    if ((0x20000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next 
            = ((0x7ffdffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next) 
               | (0x20000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next));
    }
    if ((0x40000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next 
            = ((0x7ffbffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next) 
               | (0x40000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next));
    }
    if ((0x80000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next 
            = ((0x7ff7ffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next) 
               | (0x80000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next));
    }
    if ((0x100000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next 
            = ((0x7fefffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next) 
               | (0x100000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next));
    }
    if ((0x200000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next 
            = ((0x7fdfffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next) 
               | (0x200000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next));
    }
    if ((0x400000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next 
            = ((0x7fbfffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next) 
               | (0x400000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next));
    }
    if ((0x800000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next 
            = ((0x7f7fffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next) 
               | (0x800000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next));
    }
    if ((0x1000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next 
            = ((0x7effffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next) 
               | (0x1000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next));
    }
    if ((0x2000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next 
            = ((0x7dffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next) 
               | (0x2000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next));
    }
    if ((0x4000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next 
            = ((0x7bffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next) 
               | (0x4000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next));
    }
    if ((0x8000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next 
            = ((0x77ffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next) 
               | (0x8000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next));
    }
    if ((0x10000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next 
                        ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next 
            = ((0x6fffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next) 
               | (0x10000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next));
    }
    if ((0x20000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next 
                        ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next 
            = ((0x5fffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next) 
               | (0x20000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next));
    }
    if ((0x40000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next 
                        ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next))) {
        vlSymsp->__Vcoverage[652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next 
            = ((0x3fffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next) 
               | (0x40000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next));
    }
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d 
        = (0x7fffffffU & ((IData)(vlSelf->branch_i)
                           ? (vlSelf->addr_i >> 1U)
                           : vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next));
    if (((IData)(vlSelf->busy_o) ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__busy_o))) {
        vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__busy_o 
            = vlSelf->busy_o;
    }
    if (((IData)(vlSelf->ibex_prefetch_buffer__DOT__valid_req_d) 
         ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__valid_req_d))) {
        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__valid_req_d 
            = vlSelf->ibex_prefetch_buffer__DOT__valid_req_d;
    }
    vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_n 
        = ((2U & ((((IData)(ibex_prefetch_buffer__DOT____VdfgTmp_he9a9b48f__0) 
                    & (IData)(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_q)) 
                   << 1U) | (0xfffffffeU & (IData)(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_q)))) 
           | (1U & ((IData)(ibex_prefetch_buffer__DOT____VdfgTmp_he9a9b48f__0) 
                    | (IData)(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_q))));
    ibex_prefetch_buffer__DOT____VdfgTmp_h33c6185a__0 
        = ((IData)(ibex_prefetch_buffer__DOT____VdfgTmp_he9a9b48f__0) 
           & (IData)(vlSelf->ibex_prefetch_buffer__DOT__discard_req_d));
    if (((IData)(vlSelf->ibex_prefetch_buffer__DOT__stored_addr_en) 
         ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_en))) {
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_en 
            = vlSelf->ibex_prefetch_buffer__DOT__stored_addr_en;
    }
    if (((IData)(vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_en) 
         ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_en))) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_en 
            = vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_en;
    }
    if ((1U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d 
               ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d 
            = ((0xfffffffeU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d) 
               | (1U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d));
    }
    if ((2U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d 
               ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d))) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d 
            = ((0xfffffffdU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d) 
               | (2U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d));
    }
    if ((4U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d 
               ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d))) {
        vlSymsp->__Vcoverage[259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d 
            = ((0xfffffffbU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d) 
               | (4U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d));
    }
    if ((8U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d 
               ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d))) {
        vlSymsp->__Vcoverage[260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d 
            = ((0xfffffff7U & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d) 
               | (8U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d));
    }
    if ((0x10U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d 
                  ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d))) {
        vlSymsp->__Vcoverage[261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d 
            = ((0xffffffefU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d) 
               | (0x10U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d));
    }
    if ((0x20U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d 
                  ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d 
            = ((0xffffffdfU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d) 
               | (0x20U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d));
    }
    if ((0x40U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d 
                  ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d 
            = ((0xffffffbfU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d) 
               | (0x40U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d));
    }
    if ((0x80U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d 
                  ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d))) {
        vlSymsp->__Vcoverage[264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d 
            = ((0xffffff7fU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d) 
               | (0x80U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d));
    }
    if ((0x100U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d 
                   ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d))) {
        vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d 
            = ((0xfffffeffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d) 
               | (0x100U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d));
    }
    if ((0x200U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d 
                   ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d))) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d 
            = ((0xfffffdffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d) 
               | (0x200U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d));
    }
    if ((0x400U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d 
                   ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d 
            = ((0xfffffbffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d) 
               | (0x400U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d));
    }
    if ((0x800U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d 
                   ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d))) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d 
            = ((0xfffff7ffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d) 
               | (0x800U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d));
    }
    if ((0x1000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d 
                    ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d 
            = ((0xffffefffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d) 
               | (0x1000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d));
    }
    if ((0x2000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d 
                    ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d))) {
        vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d 
            = ((0xffffdfffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d) 
               | (0x2000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d));
    }
    if ((0x4000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d 
                    ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d))) {
        vlSymsp->__Vcoverage[271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d 
            = ((0xffffbfffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d) 
               | (0x4000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d));
    }
    if ((0x8000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d 
                    ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d))) {
        vlSymsp->__Vcoverage[272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d 
            = ((0xffff7fffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d) 
               | (0x8000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d));
    }
    if ((0x10000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d 
                     ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d))) {
        vlSymsp->__Vcoverage[273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d 
            = ((0xfffeffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d) 
               | (0x10000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d));
    }
    if ((0x20000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d 
                     ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d))) {
        vlSymsp->__Vcoverage[274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d 
            = ((0xfffdffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d) 
               | (0x20000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d));
    }
    if ((0x40000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d 
                     ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d))) {
        vlSymsp->__Vcoverage[275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d 
            = ((0xfffbffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d) 
               | (0x40000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d));
    }
    if ((0x80000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d 
                     ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d))) {
        vlSymsp->__Vcoverage[276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d 
            = ((0xfff7ffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d) 
               | (0x80000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d));
    }
    if ((0x100000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d 
                      ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d))) {
        vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d 
            = ((0xffefffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d) 
               | (0x100000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d));
    }
    if ((0x200000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d 
                      ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d))) {
        vlSymsp->__Vcoverage[278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d 
            = ((0xffdfffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d) 
               | (0x200000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d));
    }
    if ((0x400000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d 
                      ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d))) {
        vlSymsp->__Vcoverage[279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d 
            = ((0xffbfffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d) 
               | (0x400000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d));
    }
    if ((0x800000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d 
                      ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d))) {
        vlSymsp->__Vcoverage[280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d 
            = ((0xff7fffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d) 
               | (0x800000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d));
    }
    if ((0x1000000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d 
                       ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d))) {
        vlSymsp->__Vcoverage[281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d 
            = ((0xfeffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d) 
               | (0x1000000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d));
    }
    if ((0x2000000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d 
                       ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d))) {
        vlSymsp->__Vcoverage[282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d 
            = ((0xfdffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d) 
               | (0x2000000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d));
    }
    if ((0x4000000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d 
                       ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d))) {
        vlSymsp->__Vcoverage[283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d 
            = ((0xfbffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d) 
               | (0x4000000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d));
    }
    if ((0x8000000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d 
                       ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d))) {
        vlSymsp->__Vcoverage[284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d 
            = ((0xf7ffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d) 
               | (0x8000000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d));
    }
    if ((0x10000000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d 
                        ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d))) {
        vlSymsp->__Vcoverage[285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d 
            = ((0xefffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d) 
               | (0x10000000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d));
    }
    if ((0x20000000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d 
                        ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d))) {
        vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d 
            = ((0xdfffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d) 
               | (0x20000000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d));
    }
    if ((0x40000000U & (vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d 
                        ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d))) {
        vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d 
            = ((0xbfffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d) 
               | (0x40000000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d));
    }
    if (((vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d 
          ^ vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d 
            = ((0x7fffffffU & vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d) 
               | (0x80000000U & vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d));
    }
    if (((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_en) 
         ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_en))) {
        vlSymsp->__Vcoverage[715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_en 
            = vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_en;
    }
    if (((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__pop_fifo) 
         ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__pop_fifo))) {
        vlSymsp->__Vcoverage[549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__pop_fifo 
            = vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__pop_fifo;
    }
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__entry_en 
        = (((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h87bd3038__0) 
            << 2U) | (((((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h46f3913b__0) 
                         & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__pop_fifo)) 
                        | ((~ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__pop_fifo)) 
                           & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h379a9be1__0))) 
                       << 1U) | (((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h11e4035a__0) 
                                  & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__pop_fifo)) 
                                 | ((~ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__pop_fifo)) 
                                    & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h0de6124d__0)))));
    ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_he8fd8a81__0 
        = ((~ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__pop_fifo)) 
           & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h46f3913b__0));
    if (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__pop_fifo) {
        ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_hb697a1d4__0 
            = vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h46f3913b__0;
        ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h420cf615__0 
            = vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h11e4035a__0;
    } else {
        ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_hb697a1d4__0 
            = vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h11e4035a__0;
        ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h420cf615__0 
            = vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h72c0dcf0__0;
    }
    if ((1U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d 
            = ((0x7ffffffeU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d) 
               | (1U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d));
    }
    if ((2U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d 
            = ((0x7ffffffdU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d) 
               | (2U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d));
    }
    if ((4U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d 
            = ((0x7ffffffbU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d) 
               | (4U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d));
    }
    if ((8U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d 
               ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d 
            = ((0x7ffffff7U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d) 
               | (8U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d));
    }
    if ((0x10U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d 
            = ((0x7fffffefU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d) 
               | (0x10U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d));
    }
    if ((0x20U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d 
            = ((0x7fffffdfU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d) 
               | (0x20U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d));
    }
    if ((0x40U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d 
            = ((0x7fffffbfU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d) 
               | (0x40U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d));
    }
    if ((0x80U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d 
                  ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d 
            = ((0x7fffff7fU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d) 
               | (0x80U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d));
    }
    if ((0x100U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d 
            = ((0x7ffffeffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d) 
               | (0x100U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d));
    }
    if ((0x200U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d 
            = ((0x7ffffdffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d) 
               | (0x200U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d));
    }
    if ((0x400U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d 
            = ((0x7ffffbffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d) 
               | (0x400U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d));
    }
    if ((0x800U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d 
                   ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d 
            = ((0x7ffff7ffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d) 
               | (0x800U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d));
    }
    if ((0x1000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d 
            = ((0x7fffefffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d) 
               | (0x1000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d));
    }
    if ((0x2000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d 
            = ((0x7fffdfffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d) 
               | (0x2000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d));
    }
    if ((0x4000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d 
            = ((0x7fffbfffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d) 
               | (0x4000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d));
    }
    if ((0x8000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d 
                    ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d 
            = ((0x7fff7fffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d) 
               | (0x8000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d));
    }
    if ((0x10000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d 
            = ((0x7ffeffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d) 
               | (0x10000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d));
    }
    if ((0x20000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d 
            = ((0x7ffdffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d) 
               | (0x20000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d));
    }
    if ((0x40000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d 
            = ((0x7ffbffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d) 
               | (0x40000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d));
    }
    if ((0x80000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d 
                     ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d 
            = ((0x7ff7ffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d) 
               | (0x80000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d));
    }
    if ((0x100000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d 
            = ((0x7fefffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d) 
               | (0x100000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d));
    }
    if ((0x200000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d 
            = ((0x7fdfffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d) 
               | (0x200000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d));
    }
    if ((0x400000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d 
            = ((0x7fbfffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d) 
               | (0x400000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d));
    }
    if ((0x800000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d 
                      ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d 
            = ((0x7f7fffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d) 
               | (0x800000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d));
    }
    if ((0x1000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d 
            = ((0x7effffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d) 
               | (0x1000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d));
    }
    if ((0x2000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d 
            = ((0x7dffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d) 
               | (0x2000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d));
    }
    if ((0x4000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d 
            = ((0x7bffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d) 
               | (0x4000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d));
    }
    if ((0x8000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d 
                       ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d 
            = ((0x77ffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d) 
               | (0x8000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d));
    }
    if ((0x10000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d 
                        ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d 
            = ((0x6fffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d) 
               | (0x10000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d));
    }
    if ((0x20000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d 
                        ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d 
            = ((0x5fffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d) 
               | (0x20000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d));
    }
    if ((0x40000000U & (vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d 
                        ^ vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d))) {
        vlSymsp->__Vcoverage[683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d 
            = ((0x3fffffffU & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d) 
               | (0x40000000U & vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d));
    }
    if ((1U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_n) 
               ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_outstanding_n)))) {
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_outstanding_n 
            = ((2U & (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_outstanding_n)) 
               | (1U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_n)));
    }
    if ((2U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_n) 
               ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_outstanding_n)))) {
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_outstanding_n 
            = ((1U & (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_outstanding_n)) 
               | (2U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_n)));
    }
    vlSelf->ibex_prefetch_buffer__DOT__branch_discard_n 
        = ((2U & ((((IData)(ibex_prefetch_buffer__DOT____VdfgTmp_h33c6185a__0) 
                    & (IData)(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_q)) 
                   << 1U) | (0xfffffffeU & ((((IData)(vlSelf->branch_i) 
                                              << 1U) 
                                             & (IData)(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_q)) 
                                            | (IData)(vlSelf->ibex_prefetch_buffer__DOT__branch_discard_q))))) 
           | (1U & ((IData)(ibex_prefetch_buffer__DOT____VdfgTmp_h33c6185a__0) 
                    | (((IData)(vlSelf->branch_i) & (IData)(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_q)) 
                       | (IData)(vlSelf->ibex_prefetch_buffer__DOT__branch_discard_q)))));
    if (vlSelf->instr_rvalid_i) {
        vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_s 
            = (3U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_n) 
                     >> 1U));
        vlSelf->ibex_prefetch_buffer__DOT__branch_discard_s 
            = (3U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__branch_discard_n) 
                     >> 1U));
    } else {
        vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_s 
            = (3U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_n));
        vlSelf->ibex_prefetch_buffer__DOT__branch_discard_s 
            = (3U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__branch_discard_n));
    }
    if ((1U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__entry_en) 
               ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__entry_en)))) {
        vlSymsp->__Vcoverage[546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__entry_en 
            = ((6U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__entry_en)) 
               | (1U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__entry_en)));
    }
    if ((2U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__entry_en) 
               ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__entry_en)))) {
        vlSymsp->__Vcoverage[547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__entry_en 
            = ((5U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__entry_en)) 
               | (2U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__entry_en)));
    }
    if ((4U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__entry_en) 
               ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__entry_en)))) {
        vlSymsp->__Vcoverage[548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__entry_en 
            = ((3U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__entry_en)) 
               | (4U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__entry_en)));
    }
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_popped 
        = (((IData)(ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_he8fd8a81__0) 
            << 2U) | (((IData)(ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_hb697a1d4__0) 
                       << 1U) | (IData)(ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h420cf615__0)));
    vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_d 
        = ((((~ (IData)(vlSelf->branch_i)) & (IData)(ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_he8fd8a81__0)) 
            << 2U) | ((((~ (IData)(vlSelf->branch_i)) 
                        & (IData)(ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_hb697a1d4__0)) 
                       << 1U) | ((~ (IData)(vlSelf->branch_i)) 
                                 & (IData)(ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h420cf615__0))));
    if ((1U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_s) 
               ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_outstanding_s)))) {
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_outstanding_s 
            = ((2U & (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_outstanding_s)) 
               | (1U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_s)));
    }
    if ((2U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_s) 
               ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_outstanding_s)))) {
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_outstanding_s 
            = ((1U & (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__rdata_outstanding_s)) 
               | (2U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_s)));
    }
    if ((1U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__branch_discard_n) 
               ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__branch_discard_n)))) {
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__branch_discard_n 
            = ((2U & (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__branch_discard_n)) 
               | (1U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__branch_discard_n)));
    }
    if ((2U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__branch_discard_n) 
               ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__branch_discard_n)))) {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__branch_discard_n 
            = ((1U & (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__branch_discard_n)) 
               | (2U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__branch_discard_n)));
    }
    if ((1U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_popped) 
               ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_popped)))) {
        vlSymsp->__Vcoverage[543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_popped 
            = ((6U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_popped)) 
               | (1U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_popped)));
    }
    if ((2U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_popped) 
               ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_popped)))) {
        vlSymsp->__Vcoverage[544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_popped 
            = ((5U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_popped)) 
               | (2U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_popped)));
    }
    if ((4U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_popped) 
               ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_popped)))) {
        vlSymsp->__Vcoverage[545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_popped 
            = ((3U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_popped)) 
               | (4U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_popped)));
    }
    if ((1U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_d) 
               ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_d)))) {
        vlSymsp->__Vcoverage[533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_d 
            = ((6U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_d)) 
               | (1U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_d)));
    }
    if ((2U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_d) 
               ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_d)))) {
        vlSymsp->__Vcoverage[534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_d 
            = ((5U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_d)) 
               | (2U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_d)));
    }
    if ((4U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_d) 
               ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_d)))) {
        vlSymsp->__Vcoverage[535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_d 
            = ((3U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_d)) 
               | (4U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_d)));
    }
    if ((1U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__branch_discard_s) 
               ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__branch_discard_s)))) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__branch_discard_s 
            = ((2U & (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__branch_discard_s)) 
               | (1U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__branch_discard_s)));
    }
    if ((2U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__branch_discard_s) 
               ^ (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__branch_discard_s)))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__branch_discard_s 
            = ((1U & (IData)(vlSelf->ibex_prefetch_buffer__DOT____Vtogcov__branch_discard_s)) 
               | (2U & (IData)(vlSelf->ibex_prefetch_buffer__DOT__branch_discard_s)));
    }
}

VL_ATTR_COLD void Vibex_prefetch_buffer___024root___configure_coverage(Vibex_prefetch_buffer___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_prefetch_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_prefetch_buffer___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "verilog/ibex_prefetch_buffer.v", 19, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "clk_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "verilog/ibex_prefetch_buffer.v", 20, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rst_ni", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "verilog/ibex_prefetch_buffer.v", 22, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "req_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "verilog/ibex_prefetch_buffer.v", 24, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "branch_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "verilog/ibex_prefetch_buffer.v", 25, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "verilog/ibex_prefetch_buffer.v", 25, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "verilog/ibex_prefetch_buffer.v", 25, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "verilog/ibex_prefetch_buffer.v", 25, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "verilog/ibex_prefetch_buffer.v", 25, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "verilog/ibex_prefetch_buffer.v", 25, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "verilog/ibex_prefetch_buffer.v", 25, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "verilog/ibex_prefetch_buffer.v", 25, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "verilog/ibex_prefetch_buffer.v", 25, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "verilog/ibex_prefetch_buffer.v", 25, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "verilog/ibex_prefetch_buffer.v", 25, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "verilog/ibex_prefetch_buffer.v", 25, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "verilog/ibex_prefetch_buffer.v", 25, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "verilog/ibex_prefetch_buffer.v", 25, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "verilog/ibex_prefetch_buffer.v", 25, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "verilog/ibex_prefetch_buffer.v", 25, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "verilog/ibex_prefetch_buffer.v", 25, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "verilog/ibex_prefetch_buffer.v", 25, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "verilog/ibex_prefetch_buffer.v", 25, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "verilog/ibex_prefetch_buffer.v", 25, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "verilog/ibex_prefetch_buffer.v", 25, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "verilog/ibex_prefetch_buffer.v", 25, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "verilog/ibex_prefetch_buffer.v", 25, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_i[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "verilog/ibex_prefetch_buffer.v", 25, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_i[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "verilog/ibex_prefetch_buffer.v", 25, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_i[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "verilog/ibex_prefetch_buffer.v", 25, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_i[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "verilog/ibex_prefetch_buffer.v", 25, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_i[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "verilog/ibex_prefetch_buffer.v", 25, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_i[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "verilog/ibex_prefetch_buffer.v", 25, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_i[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "verilog/ibex_prefetch_buffer.v", 25, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_i[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "verilog/ibex_prefetch_buffer.v", 25, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_i[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "verilog/ibex_prefetch_buffer.v", 25, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_i[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "verilog/ibex_prefetch_buffer.v", 27, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "ready_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "verilog/ibex_prefetch_buffer.v", 28, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "valid_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "verilog/ibex_prefetch_buffer.v", 29, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "verilog/ibex_prefetch_buffer.v", 29, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "verilog/ibex_prefetch_buffer.v", 29, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "verilog/ibex_prefetch_buffer.v", 29, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "verilog/ibex_prefetch_buffer.v", 29, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "verilog/ibex_prefetch_buffer.v", 29, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "verilog/ibex_prefetch_buffer.v", 29, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "verilog/ibex_prefetch_buffer.v", 29, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "verilog/ibex_prefetch_buffer.v", 29, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "verilog/ibex_prefetch_buffer.v", 29, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "verilog/ibex_prefetch_buffer.v", 29, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "verilog/ibex_prefetch_buffer.v", 29, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "verilog/ibex_prefetch_buffer.v", 29, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "verilog/ibex_prefetch_buffer.v", 29, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "verilog/ibex_prefetch_buffer.v", 29, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "verilog/ibex_prefetch_buffer.v", 29, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "verilog/ibex_prefetch_buffer.v", 29, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "verilog/ibex_prefetch_buffer.v", 29, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "verilog/ibex_prefetch_buffer.v", 29, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "verilog/ibex_prefetch_buffer.v", 29, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "verilog/ibex_prefetch_buffer.v", 29, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "verilog/ibex_prefetch_buffer.v", 29, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "verilog/ibex_prefetch_buffer.v", 29, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "verilog/ibex_prefetch_buffer.v", 29, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "verilog/ibex_prefetch_buffer.v", 29, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "verilog/ibex_prefetch_buffer.v", 29, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "verilog/ibex_prefetch_buffer.v", 29, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "verilog/ibex_prefetch_buffer.v", 29, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "verilog/ibex_prefetch_buffer.v", 29, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "verilog/ibex_prefetch_buffer.v", 29, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "verilog/ibex_prefetch_buffer.v", 29, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "verilog/ibex_prefetch_buffer.v", 29, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "verilog/ibex_prefetch_buffer.v", 30, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "verilog/ibex_prefetch_buffer.v", 30, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "verilog/ibex_prefetch_buffer.v", 30, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "verilog/ibex_prefetch_buffer.v", 30, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "verilog/ibex_prefetch_buffer.v", 30, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "verilog/ibex_prefetch_buffer.v", 30, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "verilog/ibex_prefetch_buffer.v", 30, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "verilog/ibex_prefetch_buffer.v", 30, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "verilog/ibex_prefetch_buffer.v", 30, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "verilog/ibex_prefetch_buffer.v", 30, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "verilog/ibex_prefetch_buffer.v", 30, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "verilog/ibex_prefetch_buffer.v", 30, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "verilog/ibex_prefetch_buffer.v", 30, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "verilog/ibex_prefetch_buffer.v", 30, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "verilog/ibex_prefetch_buffer.v", 30, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "verilog/ibex_prefetch_buffer.v", 30, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "verilog/ibex_prefetch_buffer.v", 30, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "verilog/ibex_prefetch_buffer.v", 30, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "verilog/ibex_prefetch_buffer.v", 30, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "verilog/ibex_prefetch_buffer.v", 30, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "verilog/ibex_prefetch_buffer.v", 30, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "verilog/ibex_prefetch_buffer.v", 30, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "verilog/ibex_prefetch_buffer.v", 30, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "verilog/ibex_prefetch_buffer.v", 30, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "verilog/ibex_prefetch_buffer.v", 30, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "verilog/ibex_prefetch_buffer.v", 30, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "verilog/ibex_prefetch_buffer.v", 30, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "verilog/ibex_prefetch_buffer.v", 30, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "verilog/ibex_prefetch_buffer.v", 30, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "verilog/ibex_prefetch_buffer.v", 30, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "verilog/ibex_prefetch_buffer.v", 30, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "verilog/ibex_prefetch_buffer.v", 30, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "addr_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "verilog/ibex_prefetch_buffer.v", 31, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "err_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "verilog/ibex_prefetch_buffer.v", 32, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "err_plus2_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "verilog/ibex_prefetch_buffer.v", 35, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_req_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "verilog/ibex_prefetch_buffer.v", 36, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_gnt_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "verilog/ibex_prefetch_buffer.v", 37, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "verilog/ibex_prefetch_buffer.v", 37, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "verilog/ibex_prefetch_buffer.v", 37, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "verilog/ibex_prefetch_buffer.v", 37, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "verilog/ibex_prefetch_buffer.v", 37, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "verilog/ibex_prefetch_buffer.v", 37, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "verilog/ibex_prefetch_buffer.v", 37, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "verilog/ibex_prefetch_buffer.v", 37, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "verilog/ibex_prefetch_buffer.v", 37, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "verilog/ibex_prefetch_buffer.v", 37, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "verilog/ibex_prefetch_buffer.v", 37, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "verilog/ibex_prefetch_buffer.v", 37, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "verilog/ibex_prefetch_buffer.v", 37, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "verilog/ibex_prefetch_buffer.v", 37, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "verilog/ibex_prefetch_buffer.v", 37, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "verilog/ibex_prefetch_buffer.v", 37, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "verilog/ibex_prefetch_buffer.v", 37, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "verilog/ibex_prefetch_buffer.v", 37, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "verilog/ibex_prefetch_buffer.v", 37, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "verilog/ibex_prefetch_buffer.v", 37, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "verilog/ibex_prefetch_buffer.v", 37, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "verilog/ibex_prefetch_buffer.v", 37, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "verilog/ibex_prefetch_buffer.v", 37, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "verilog/ibex_prefetch_buffer.v", 37, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "verilog/ibex_prefetch_buffer.v", 37, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "verilog/ibex_prefetch_buffer.v", 37, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "verilog/ibex_prefetch_buffer.v", 37, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "verilog/ibex_prefetch_buffer.v", 37, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "verilog/ibex_prefetch_buffer.v", 37, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "verilog/ibex_prefetch_buffer.v", 37, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "verilog/ibex_prefetch_buffer.v", 37, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "verilog/ibex_prefetch_buffer.v", 37, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "verilog/ibex_prefetch_buffer.v", 38, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_rdata_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "verilog/ibex_prefetch_buffer.v", 38, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_rdata_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "verilog/ibex_prefetch_buffer.v", 38, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_rdata_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "verilog/ibex_prefetch_buffer.v", 38, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_rdata_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "verilog/ibex_prefetch_buffer.v", 38, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_rdata_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "verilog/ibex_prefetch_buffer.v", 38, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_rdata_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "verilog/ibex_prefetch_buffer.v", 38, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_rdata_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "verilog/ibex_prefetch_buffer.v", 38, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_rdata_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "verilog/ibex_prefetch_buffer.v", 38, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_rdata_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "verilog/ibex_prefetch_buffer.v", 38, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_rdata_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "verilog/ibex_prefetch_buffer.v", 38, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_rdata_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "verilog/ibex_prefetch_buffer.v", 38, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_rdata_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "verilog/ibex_prefetch_buffer.v", 38, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_rdata_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "verilog/ibex_prefetch_buffer.v", 38, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_rdata_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "verilog/ibex_prefetch_buffer.v", 38, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_rdata_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "verilog/ibex_prefetch_buffer.v", 38, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_rdata_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "verilog/ibex_prefetch_buffer.v", 38, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_rdata_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "verilog/ibex_prefetch_buffer.v", 38, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_rdata_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "verilog/ibex_prefetch_buffer.v", 38, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_rdata_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "verilog/ibex_prefetch_buffer.v", 38, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_rdata_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "verilog/ibex_prefetch_buffer.v", 38, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_rdata_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "verilog/ibex_prefetch_buffer.v", 38, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_rdata_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "verilog/ibex_prefetch_buffer.v", 38, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_rdata_i[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "verilog/ibex_prefetch_buffer.v", 38, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_rdata_i[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "verilog/ibex_prefetch_buffer.v", 38, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_rdata_i[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "verilog/ibex_prefetch_buffer.v", 38, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_rdata_i[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "verilog/ibex_prefetch_buffer.v", 38, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_rdata_i[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "verilog/ibex_prefetch_buffer.v", 38, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_rdata_i[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "verilog/ibex_prefetch_buffer.v", 38, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_rdata_i[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "verilog/ibex_prefetch_buffer.v", 38, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_rdata_i[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "verilog/ibex_prefetch_buffer.v", 38, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_rdata_i[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "verilog/ibex_prefetch_buffer.v", 38, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_rdata_i[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "verilog/ibex_prefetch_buffer.v", 39, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_err_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "verilog/ibex_prefetch_buffer.v", 40, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_rvalid_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "verilog/ibex_prefetch_buffer.v", 43, 25, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "busy_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "verilog/ibex_prefetch_buffer.v", 48, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "valid_new_req", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "verilog/ibex_prefetch_buffer.v", 48, 41, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "valid_req", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "verilog/ibex_prefetch_buffer.v", 49, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "valid_req_d", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "verilog/ibex_prefetch_buffer.v", 49, 39, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "valid_req_q", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "verilog/ibex_prefetch_buffer.v", 50, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "discard_req_d", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "verilog/ibex_prefetch_buffer.v", 50, 41, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "discard_req_q", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "verilog/ibex_prefetch_buffer.v", 51, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_outstanding_n[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "verilog/ibex_prefetch_buffer.v", 51, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_outstanding_n[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "verilog/ibex_prefetch_buffer.v", 51, 47, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_outstanding_s[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "verilog/ibex_prefetch_buffer.v", 51, 47, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_outstanding_s[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "verilog/ibex_prefetch_buffer.v", 51, 68, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_outstanding_q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "verilog/ibex_prefetch_buffer.v", 51, 68, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_outstanding_q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "verilog/ibex_prefetch_buffer.v", 52, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "branch_discard_n[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "verilog/ibex_prefetch_buffer.v", 52, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "branch_discard_n[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "verilog/ibex_prefetch_buffer.v", 52, 44, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "branch_discard_s[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "verilog/ibex_prefetch_buffer.v", 52, 44, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "branch_discard_s[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "verilog/ibex_prefetch_buffer.v", 52, 62, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "branch_discard_q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "verilog/ibex_prefetch_buffer.v", 52, 62, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "branch_discard_q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "verilog/ibex_prefetch_buffer.v", 53, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_outstanding_rev[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "verilog/ibex_prefetch_buffer.v", 53, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "rdata_outstanding_rev[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "verilog/ibex_prefetch_buffer.v", 55, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "verilog/ibex_prefetch_buffer.v", 55, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "verilog/ibex_prefetch_buffer.v", 55, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "verilog/ibex_prefetch_buffer.v", 55, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_d[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "verilog/ibex_prefetch_buffer.v", 55, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_d[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "verilog/ibex_prefetch_buffer.v", 55, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_d[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "verilog/ibex_prefetch_buffer.v", 55, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_d[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "verilog/ibex_prefetch_buffer.v", 55, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_d[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "verilog/ibex_prefetch_buffer.v", 55, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_d[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "verilog/ibex_prefetch_buffer.v", 55, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_d[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "verilog/ibex_prefetch_buffer.v", 55, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_d[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "verilog/ibex_prefetch_buffer.v", 55, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_d[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "verilog/ibex_prefetch_buffer.v", 55, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_d[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "verilog/ibex_prefetch_buffer.v", 55, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_d[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "verilog/ibex_prefetch_buffer.v", 55, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_d[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "verilog/ibex_prefetch_buffer.v", 55, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_d[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "verilog/ibex_prefetch_buffer.v", 55, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_d[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "verilog/ibex_prefetch_buffer.v", 55, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_d[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "verilog/ibex_prefetch_buffer.v", 55, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_d[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "verilog/ibex_prefetch_buffer.v", 55, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_d[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "verilog/ibex_prefetch_buffer.v", 55, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_d[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "verilog/ibex_prefetch_buffer.v", 55, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_d[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "verilog/ibex_prefetch_buffer.v", 55, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_d[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "verilog/ibex_prefetch_buffer.v", 55, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_d[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "verilog/ibex_prefetch_buffer.v", 55, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_d[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "verilog/ibex_prefetch_buffer.v", 55, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_d[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "verilog/ibex_prefetch_buffer.v", 55, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_d[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "verilog/ibex_prefetch_buffer.v", 55, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_d[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "verilog/ibex_prefetch_buffer.v", 55, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_d[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "verilog/ibex_prefetch_buffer.v", 55, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_d[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "verilog/ibex_prefetch_buffer.v", 55, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_d[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "verilog/ibex_prefetch_buffer.v", 55, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_d[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "verilog/ibex_prefetch_buffer.v", 55, 41, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "verilog/ibex_prefetch_buffer.v", 55, 41, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "verilog/ibex_prefetch_buffer.v", 55, 41, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "verilog/ibex_prefetch_buffer.v", 55, 41, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_q[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "verilog/ibex_prefetch_buffer.v", 55, 41, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_q[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "verilog/ibex_prefetch_buffer.v", 55, 41, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_q[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "verilog/ibex_prefetch_buffer.v", 55, 41, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_q[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "verilog/ibex_prefetch_buffer.v", 55, 41, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_q[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "verilog/ibex_prefetch_buffer.v", 55, 41, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_q[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "verilog/ibex_prefetch_buffer.v", 55, 41, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_q[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "verilog/ibex_prefetch_buffer.v", 55, 41, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_q[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "verilog/ibex_prefetch_buffer.v", 55, 41, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_q[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "verilog/ibex_prefetch_buffer.v", 55, 41, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_q[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "verilog/ibex_prefetch_buffer.v", 55, 41, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_q[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "verilog/ibex_prefetch_buffer.v", 55, 41, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_q[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "verilog/ibex_prefetch_buffer.v", 55, 41, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_q[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "verilog/ibex_prefetch_buffer.v", 55, 41, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_q[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "verilog/ibex_prefetch_buffer.v", 55, 41, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_q[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "verilog/ibex_prefetch_buffer.v", 55, 41, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_q[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "verilog/ibex_prefetch_buffer.v", 55, 41, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_q[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "verilog/ibex_prefetch_buffer.v", 55, 41, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_q[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "verilog/ibex_prefetch_buffer.v", 55, 41, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_q[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "verilog/ibex_prefetch_buffer.v", 55, 41, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_q[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "verilog/ibex_prefetch_buffer.v", 55, 41, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_q[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "verilog/ibex_prefetch_buffer.v", 55, 41, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_q[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "verilog/ibex_prefetch_buffer.v", 55, 41, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_q[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "verilog/ibex_prefetch_buffer.v", 55, 41, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_q[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "verilog/ibex_prefetch_buffer.v", 55, 41, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_q[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "verilog/ibex_prefetch_buffer.v", 55, 41, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_q[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "verilog/ibex_prefetch_buffer.v", 55, 41, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_q[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "verilog/ibex_prefetch_buffer.v", 55, 41, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_q[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "verilog/ibex_prefetch_buffer.v", 55, 41, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_q[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "verilog/ibex_prefetch_buffer.v", 56, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "stored_addr_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "verilog/ibex_prefetch_buffer.v", 57, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "verilog/ibex_prefetch_buffer.v", 57, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "verilog/ibex_prefetch_buffer.v", 57, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "verilog/ibex_prefetch_buffer.v", 57, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_d[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "verilog/ibex_prefetch_buffer.v", 57, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_d[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "verilog/ibex_prefetch_buffer.v", 57, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_d[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "verilog/ibex_prefetch_buffer.v", 57, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_d[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "verilog/ibex_prefetch_buffer.v", 57, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_d[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "verilog/ibex_prefetch_buffer.v", 57, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_d[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "verilog/ibex_prefetch_buffer.v", 57, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_d[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "verilog/ibex_prefetch_buffer.v", 57, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_d[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "verilog/ibex_prefetch_buffer.v", 57, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_d[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "verilog/ibex_prefetch_buffer.v", 57, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_d[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "verilog/ibex_prefetch_buffer.v", 57, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_d[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "verilog/ibex_prefetch_buffer.v", 57, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_d[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "verilog/ibex_prefetch_buffer.v", 57, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_d[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "verilog/ibex_prefetch_buffer.v", 57, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_d[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "verilog/ibex_prefetch_buffer.v", 57, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_d[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "verilog/ibex_prefetch_buffer.v", 57, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_d[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "verilog/ibex_prefetch_buffer.v", 57, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_d[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "verilog/ibex_prefetch_buffer.v", 57, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_d[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "verilog/ibex_prefetch_buffer.v", 57, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_d[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "verilog/ibex_prefetch_buffer.v", 57, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_d[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "verilog/ibex_prefetch_buffer.v", 57, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_d[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "verilog/ibex_prefetch_buffer.v", 57, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_d[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "verilog/ibex_prefetch_buffer.v", 57, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_d[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "verilog/ibex_prefetch_buffer.v", 57, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_d[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "verilog/ibex_prefetch_buffer.v", 57, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_d[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "verilog/ibex_prefetch_buffer.v", 57, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_d[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "verilog/ibex_prefetch_buffer.v", 57, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_d[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "verilog/ibex_prefetch_buffer.v", 57, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_d[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "verilog/ibex_prefetch_buffer.v", 57, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_d[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "verilog/ibex_prefetch_buffer.v", 57, 40, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "verilog/ibex_prefetch_buffer.v", 57, 40, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "verilog/ibex_prefetch_buffer.v", 57, 40, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "verilog/ibex_prefetch_buffer.v", 57, 40, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_q[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "verilog/ibex_prefetch_buffer.v", 57, 40, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_q[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "verilog/ibex_prefetch_buffer.v", 57, 40, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_q[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "verilog/ibex_prefetch_buffer.v", 57, 40, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_q[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "verilog/ibex_prefetch_buffer.v", 57, 40, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_q[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "verilog/ibex_prefetch_buffer.v", 57, 40, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_q[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "verilog/ibex_prefetch_buffer.v", 57, 40, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_q[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "verilog/ibex_prefetch_buffer.v", 57, 40, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_q[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "verilog/ibex_prefetch_buffer.v", 57, 40, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_q[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "verilog/ibex_prefetch_buffer.v", 57, 40, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_q[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "verilog/ibex_prefetch_buffer.v", 57, 40, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_q[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[303]), first, "verilog/ibex_prefetch_buffer.v", 57, 40, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_q[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[304]), first, "verilog/ibex_prefetch_buffer.v", 57, 40, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_q[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[305]), first, "verilog/ibex_prefetch_buffer.v", 57, 40, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_q[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[306]), first, "verilog/ibex_prefetch_buffer.v", 57, 40, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_q[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "verilog/ibex_prefetch_buffer.v", 57, 40, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_q[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[308]), first, "verilog/ibex_prefetch_buffer.v", 57, 40, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_q[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[309]), first, "verilog/ibex_prefetch_buffer.v", 57, 40, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_q[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[310]), first, "verilog/ibex_prefetch_buffer.v", 57, 40, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_q[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[311]), first, "verilog/ibex_prefetch_buffer.v", 57, 40, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_q[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[312]), first, "verilog/ibex_prefetch_buffer.v", 57, 40, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_q[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[313]), first, "verilog/ibex_prefetch_buffer.v", 57, 40, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_q[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[314]), first, "verilog/ibex_prefetch_buffer.v", 57, 40, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_q[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[315]), first, "verilog/ibex_prefetch_buffer.v", 57, 40, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_q[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[316]), first, "verilog/ibex_prefetch_buffer.v", 57, 40, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_q[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[317]), first, "verilog/ibex_prefetch_buffer.v", 57, 40, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_q[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[318]), first, "verilog/ibex_prefetch_buffer.v", 57, 40, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_q[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[319]), first, "verilog/ibex_prefetch_buffer.v", 57, 40, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_q[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[320]), first, "verilog/ibex_prefetch_buffer.v", 57, 40, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_q[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[321]), first, "verilog/ibex_prefetch_buffer.v", 58, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fetch_addr_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "verilog/ibex_prefetch_buffer.v", 59, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "verilog/ibex_prefetch_buffer.v", 59, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "verilog/ibex_prefetch_buffer.v", 59, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "verilog/ibex_prefetch_buffer.v", 59, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "verilog/ibex_prefetch_buffer.v", 59, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "verilog/ibex_prefetch_buffer.v", 59, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "verilog/ibex_prefetch_buffer.v", 59, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "verilog/ibex_prefetch_buffer.v", 59, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "verilog/ibex_prefetch_buffer.v", 59, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "verilog/ibex_prefetch_buffer.v", 59, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "verilog/ibex_prefetch_buffer.v", 59, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "verilog/ibex_prefetch_buffer.v", 59, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "verilog/ibex_prefetch_buffer.v", 59, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "verilog/ibex_prefetch_buffer.v", 59, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "verilog/ibex_prefetch_buffer.v", 59, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "verilog/ibex_prefetch_buffer.v", 59, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "verilog/ibex_prefetch_buffer.v", 59, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "verilog/ibex_prefetch_buffer.v", 59, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "verilog/ibex_prefetch_buffer.v", 59, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "verilog/ibex_prefetch_buffer.v", 59, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "verilog/ibex_prefetch_buffer.v", 59, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "verilog/ibex_prefetch_buffer.v", 59, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "verilog/ibex_prefetch_buffer.v", 59, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "verilog/ibex_prefetch_buffer.v", 59, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "verilog/ibex_prefetch_buffer.v", 59, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "verilog/ibex_prefetch_buffer.v", 59, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "verilog/ibex_prefetch_buffer.v", 59, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "verilog/ibex_prefetch_buffer.v", 59, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "verilog/ibex_prefetch_buffer.v", 59, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "verilog/ibex_prefetch_buffer.v", 59, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "verilog/ibex_prefetch_buffer.v", 59, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "verilog/ibex_prefetch_buffer.v", 59, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "verilog/ibex_prefetch_buffer.v", 59, 38, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_w_aligned[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "verilog/ibex_prefetch_buffer.v", 59, 38, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_w_aligned[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "verilog/ibex_prefetch_buffer.v", 59, 38, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_w_aligned[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "verilog/ibex_prefetch_buffer.v", 59, 38, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_w_aligned[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "verilog/ibex_prefetch_buffer.v", 59, 38, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_w_aligned[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "verilog/ibex_prefetch_buffer.v", 59, 38, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_w_aligned[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "verilog/ibex_prefetch_buffer.v", 59, 38, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_w_aligned[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "verilog/ibex_prefetch_buffer.v", 59, 38, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_w_aligned[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "verilog/ibex_prefetch_buffer.v", 59, 38, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_w_aligned[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "verilog/ibex_prefetch_buffer.v", 59, 38, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_w_aligned[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "verilog/ibex_prefetch_buffer.v", 59, 38, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_w_aligned[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "verilog/ibex_prefetch_buffer.v", 59, 38, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_w_aligned[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "verilog/ibex_prefetch_buffer.v", 59, 38, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_w_aligned[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "verilog/ibex_prefetch_buffer.v", 59, 38, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_w_aligned[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "verilog/ibex_prefetch_buffer.v", 59, 38, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_w_aligned[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "verilog/ibex_prefetch_buffer.v", 59, 38, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_w_aligned[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "verilog/ibex_prefetch_buffer.v", 59, 38, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_w_aligned[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "verilog/ibex_prefetch_buffer.v", 59, 38, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_w_aligned[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "verilog/ibex_prefetch_buffer.v", 59, 38, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_w_aligned[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "verilog/ibex_prefetch_buffer.v", 59, 38, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_w_aligned[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "verilog/ibex_prefetch_buffer.v", 59, 38, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_w_aligned[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "verilog/ibex_prefetch_buffer.v", 59, 38, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_w_aligned[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "verilog/ibex_prefetch_buffer.v", 59, 38, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_w_aligned[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "verilog/ibex_prefetch_buffer.v", 59, 38, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_w_aligned[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "verilog/ibex_prefetch_buffer.v", 59, 38, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_w_aligned[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "verilog/ibex_prefetch_buffer.v", 59, 38, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_w_aligned[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "verilog/ibex_prefetch_buffer.v", 59, 38, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_w_aligned[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "verilog/ibex_prefetch_buffer.v", 59, 38, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_w_aligned[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "verilog/ibex_prefetch_buffer.v", 59, 38, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_w_aligned[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "verilog/ibex_prefetch_buffer.v", 59, 38, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_w_aligned[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "verilog/ibex_prefetch_buffer.v", 59, 38, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_w_aligned[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "verilog/ibex_prefetch_buffer.v", 59, 38, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "instr_addr_w_aligned[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[322]), first, "verilog/ibex_prefetch_buffer.v", 61, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_valid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "verilog/ibex_prefetch_buffer.v", 62, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "verilog/ibex_prefetch_buffer.v", 62, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "verilog/ibex_prefetch_buffer.v", 62, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "verilog/ibex_prefetch_buffer.v", 62, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "verilog/ibex_prefetch_buffer.v", 62, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "verilog/ibex_prefetch_buffer.v", 62, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_addr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "verilog/ibex_prefetch_buffer.v", 62, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_addr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "verilog/ibex_prefetch_buffer.v", 62, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_addr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "verilog/ibex_prefetch_buffer.v", 62, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_addr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "verilog/ibex_prefetch_buffer.v", 62, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_addr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "verilog/ibex_prefetch_buffer.v", 62, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_addr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "verilog/ibex_prefetch_buffer.v", 62, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_addr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "verilog/ibex_prefetch_buffer.v", 62, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_addr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "verilog/ibex_prefetch_buffer.v", 62, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_addr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "verilog/ibex_prefetch_buffer.v", 62, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_addr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "verilog/ibex_prefetch_buffer.v", 62, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_addr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "verilog/ibex_prefetch_buffer.v", 62, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_addr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "verilog/ibex_prefetch_buffer.v", 62, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_addr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "verilog/ibex_prefetch_buffer.v", 62, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_addr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "verilog/ibex_prefetch_buffer.v", 62, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_addr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "verilog/ibex_prefetch_buffer.v", 62, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_addr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "verilog/ibex_prefetch_buffer.v", 62, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_addr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "verilog/ibex_prefetch_buffer.v", 62, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_addr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "verilog/ibex_prefetch_buffer.v", 62, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_addr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "verilog/ibex_prefetch_buffer.v", 62, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_addr[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "verilog/ibex_prefetch_buffer.v", 62, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_addr[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "verilog/ibex_prefetch_buffer.v", 62, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_addr[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "verilog/ibex_prefetch_buffer.v", 62, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_addr[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "verilog/ibex_prefetch_buffer.v", 62, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_addr[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "verilog/ibex_prefetch_buffer.v", 62, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_addr[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "verilog/ibex_prefetch_buffer.v", 62, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_addr[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "verilog/ibex_prefetch_buffer.v", 62, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_addr[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[323]), first, "verilog/ibex_prefetch_buffer.v", 63, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_ready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "verilog/ibex_prefetch_buffer.v", 64, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_clear", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[324]), first, "verilog/ibex_prefetch_buffer.v", 65, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_busy[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[325]), first, "verilog/ibex_prefetch_buffer.v", 65, 26, ".ibex_prefetch_buffer", "v_toggle/ibex_prefetch_buffer", "fifo_busy[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[326]), first, "verilog/ibex_prefetch_buffer.v", 164, 9, ".ibex_prefetch_buffer", "v_branch/ibex_prefetch_buffer", "if", "164-165");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "verilog/ibex_prefetch_buffer.v", 164, 10, ".ibex_prefetch_buffer", "v_branch/ibex_prefetch_buffer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "verilog/ibex_prefetch_buffer.v", 163, 7, ".ibex_prefetch_buffer", "v_line/ibex_prefetch_buffer", "block", "163");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "verilog/ibex_prefetch_buffer.v", 188, 9, ".ibex_prefetch_buffer", "v_branch/ibex_prefetch_buffer", "if", "188-189");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "verilog/ibex_prefetch_buffer.v", 188, 10, ".ibex_prefetch_buffer", "v_branch/ibex_prefetch_buffer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[331]), first, "verilog/ibex_prefetch_buffer.v", 187, 7, ".ibex_prefetch_buffer", "v_line/ibex_prefetch_buffer", "block", "187");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[332]), first, "verilog/ibex_prefetch_buffer.v", 248, 7, ".ibex_prefetch_buffer", "v_branch/ibex_prefetch_buffer", "if", "248-252");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[333]), first, "verilog/ibex_prefetch_buffer.v", 248, 8, ".ibex_prefetch_buffer", "v_branch/ibex_prefetch_buffer", "else", "253-257");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[334]), first, "verilog/ibex_prefetch_buffer.v", 247, 5, ".ibex_prefetch_buffer", "v_line/ibex_prefetch_buffer", "block", "247");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 19, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "clk_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 20, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rst_ni", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 23, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "clear_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[324]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 24, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "busy_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[325]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 24, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "busy_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[322]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 27, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_valid_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_addr_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_addr_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_addr_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_addr_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_addr_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_addr_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_addr_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_addr_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_addr_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_addr_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_addr_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_addr_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_addr_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_addr_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_addr_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_addr_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_addr_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_addr_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_addr_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_addr_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_addr_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_addr_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_addr_i[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_addr_i[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_addr_i[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_addr_i[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_addr_i[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_addr_i[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_addr_i[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_addr_i[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_addr_i[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 28, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_addr_i[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_rdata_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_rdata_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_rdata_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_rdata_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_rdata_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_rdata_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_rdata_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_rdata_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_rdata_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_rdata_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_rdata_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_rdata_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_rdata_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_rdata_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_rdata_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_rdata_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_rdata_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_rdata_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_rdata_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_rdata_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_rdata_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_rdata_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_rdata_i[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_rdata_i[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_rdata_i[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_rdata_i[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_rdata_i[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_rdata_i[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_rdata_i[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_rdata_i[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_rdata_i[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 29, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_rdata_i[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 30, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "in_err_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 33, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_valid_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 34, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_ready_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_addr_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_addr_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_addr_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_addr_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_addr_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_addr_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_addr_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_addr_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_addr_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_addr_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_addr_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_addr_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_addr_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_addr_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_addr_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_addr_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_addr_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_addr_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_addr_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_addr_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_addr_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_addr_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_addr_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_addr_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_addr_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_addr_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_addr_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_addr_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_addr_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_addr_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_addr_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 35, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_addr_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_rdata_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_rdata_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_rdata_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_rdata_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_rdata_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_rdata_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_rdata_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_rdata_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_rdata_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_rdata_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_rdata_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_rdata_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_rdata_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_rdata_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_rdata_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_rdata_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_rdata_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_rdata_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_rdata_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_rdata_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_rdata_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_rdata_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_rdata_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_rdata_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_rdata_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_rdata_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_rdata_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_rdata_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_rdata_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_rdata_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_rdata_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 36, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_rdata_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 37, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_err_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 38, 32, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "out_err_plus2_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[335]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[0][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[336]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[0][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[337]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[0][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[338]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[0][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[339]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[0][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[340]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[0][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[341]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[0][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[342]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[0][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[343]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[0][8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[344]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[0][9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[345]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[0][10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[346]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[0][11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[347]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[0][12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[348]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[0][13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[349]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[0][14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[350]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[0][15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[351]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[0][16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[352]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[0][17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[0][18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[354]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[0][19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[355]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[0][20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[0][21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[0][22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[358]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[0][23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[359]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[0][24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[360]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[0][25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[361]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[0][26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[362]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[0][27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[363]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[0][28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[364]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[0][29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[365]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[0][30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[366]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[0][31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[367]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[1][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[368]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[1][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[369]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[1][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[370]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[1][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[371]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[1][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[372]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[1][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[373]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[1][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[374]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[1][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[375]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[1][8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[376]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[1][9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[377]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[1][10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[378]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[1][11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[379]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[1][12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[380]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[1][13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[381]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[1][14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[382]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[1][15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[383]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[1][16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[384]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[1][17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[385]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[1][18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[386]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[1][19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[387]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[1][20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[388]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[1][21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[389]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[1][22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[390]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[1][23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[391]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[1][24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[392]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[1][25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[393]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[1][26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[394]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[1][27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[395]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[1][28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[396]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[1][29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[397]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[1][30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[398]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[1][31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[399]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[2][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[400]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[2][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[401]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[2][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[402]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[2][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[403]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[2][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[404]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[2][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[405]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[2][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[406]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[2][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[407]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[2][8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[408]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[2][9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[409]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[2][10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[410]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[2][11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[411]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[2][12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[412]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[2][13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[413]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[2][14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[414]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[2][15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[415]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[2][16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[416]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[2][17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[417]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[2][18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[418]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[2][19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[419]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[2][20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[420]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[2][21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[421]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[2][22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[422]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[2][23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[423]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[2][24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[424]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[2][25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[425]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[2][26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[426]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[2][27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[427]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[2][28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[428]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[2][29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[429]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[2][30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[430]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_d[2][31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[431]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[0][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[432]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[0][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[433]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[0][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[434]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[0][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[435]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[0][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[436]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[0][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[437]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[0][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[438]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[0][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[439]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[0][8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[440]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[0][9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[441]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[0][10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[442]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[0][11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[443]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[0][12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[444]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[0][13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[445]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[0][14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[446]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[0][15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[447]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[0][16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[448]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[0][17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[449]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[0][18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[450]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[0][19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[451]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[0][20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[452]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[0][21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[453]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[0][22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[454]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[0][23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[455]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[0][24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[456]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[0][25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[457]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[0][26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[458]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[0][27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[459]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[0][28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[460]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[0][29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[461]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[0][30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[462]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[0][31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[463]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[1][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[464]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[1][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[465]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[1][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[466]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[1][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[467]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[1][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[468]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[1][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[469]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[1][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[470]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[1][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[471]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[1][8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[472]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[1][9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[473]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[1][10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[474]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[1][11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[475]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[1][12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[476]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[1][13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[477]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[1][14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[478]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[1][15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[479]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[1][16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[480]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[1][17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[481]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[1][18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[482]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[1][19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[483]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[1][20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[484]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[1][21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[485]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[1][22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[486]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[1][23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[487]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[1][24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[488]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[1][25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[489]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[1][26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[490]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[1][27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[491]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[1][28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[492]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[1][29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[493]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[1][30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[494]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[1][31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[495]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[2][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[496]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[2][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[497]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[2][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[498]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[2][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[499]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[2][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[500]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[2][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[501]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[2][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[502]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[2][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[503]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[2][8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[504]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[2][9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[505]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[2][10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[506]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[2][11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[507]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[2][12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[508]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[2][13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[509]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[2][14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[510]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[2][15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[2][16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[512]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[2][17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[513]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[2][18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[514]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[2][19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[515]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[2][20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[516]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[2][21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[517]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[2][22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[518]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[2][23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[519]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[2][24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[2][25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[521]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[2][26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[522]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[2][27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[523]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[2][28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[524]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[2][29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[525]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[2][30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[526]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 44, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_q[2][31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[527]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 45, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "err_d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[528]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 45, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "err_d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[529]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 45, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "err_d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[530]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 45, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "err_q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[531]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 45, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "err_q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[532]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 45, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "err_q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[533]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 46, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "valid_d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[534]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 46, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "valid_d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[535]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 46, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "valid_d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[536]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 46, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "valid_q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[324]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 46, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "valid_q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[325]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 46, 41, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "valid_q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[537]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 47, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "lowest_free_entry[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[538]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 47, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "lowest_free_entry[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[539]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 47, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "lowest_free_entry[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[540]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 48, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "valid_pushed[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[541]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 48, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "valid_pushed[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[542]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 48, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "valid_pushed[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[543]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 48, 44, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "valid_popped[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[544]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 48, 44, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "valid_popped[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[545]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 48, 44, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "valid_popped[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[546]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 49, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "entry_en[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[547]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 49, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "entry_en[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[548]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 49, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "entry_en[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[549]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 51, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "pop_fifo", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[550]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[551]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[552]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[553]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[554]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[555]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[556]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[557]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[558]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[559]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[560]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[561]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[562]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[563]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[564]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[565]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[566]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[567]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[568]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[569]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[570]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[571]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[572]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[573]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[574]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[575]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[576]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[577]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[578]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[579]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[580]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[581]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[582]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_unaligned[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[583]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_unaligned[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[584]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_unaligned[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[585]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_unaligned[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[586]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_unaligned[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_unaligned[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[588]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_unaligned[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[589]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_unaligned[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[590]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_unaligned[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[591]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_unaligned[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[592]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_unaligned[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[593]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_unaligned[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[594]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_unaligned[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[595]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_unaligned[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[596]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_unaligned[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[597]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_unaligned[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[598]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_unaligned[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[599]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_unaligned[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[600]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_unaligned[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[601]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_unaligned[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[602]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_unaligned[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[603]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_unaligned[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[604]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_unaligned[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[605]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_unaligned[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[606]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_unaligned[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[607]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_unaligned[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[608]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_unaligned[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[609]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_unaligned[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[610]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_unaligned[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[611]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_unaligned[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[612]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_unaligned[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[613]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 52, 37, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "rdata_unaligned[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[614]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 53, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "err", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[615]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 53, 37, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "err_unaligned", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[616]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 53, 52, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "err_plus2", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[617]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 54, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "valid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[618]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 54, 37, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "valid_unaligned", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[619]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 56, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "aligned_is_compressed", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[620]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 56, 53, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "unaligned_is_compressed", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[621]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 58, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "addr_incr_two", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[622]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_next[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[623]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_next[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[624]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_next[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[625]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_next[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[626]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_next[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[627]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_next[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[628]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_next[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[629]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_next[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[630]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_next[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[631]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_next[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[632]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_next[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[633]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_next[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[634]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_next[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[635]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_next[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[636]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_next[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[637]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_next[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[638]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_next[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[639]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_next[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[640]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_next[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[641]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_next[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[642]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_next[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[643]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_next[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[644]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_next[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[645]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_next[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[646]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_next[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[647]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_next[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[648]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_next[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[649]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_next[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[650]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_next[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[651]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_next[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[652]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 59, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_next[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[653]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[654]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[655]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_d[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[656]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_d[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[657]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_d[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[658]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_d[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[659]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_d[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[660]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_d[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[661]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_d[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[662]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_d[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[663]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_d[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[664]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_d[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[665]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_d[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[666]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_d[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[667]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_d[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[668]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_d[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[669]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_d[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[670]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_d[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[671]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_d[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[672]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_d[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[673]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_d[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[674]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_d[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[675]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_d[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[676]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_d[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[677]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_d[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[678]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_d[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[679]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_d[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[680]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_d[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[681]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_d[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[682]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_d[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[683]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_d[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[684]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[685]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[686]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_q[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[687]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_q[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[688]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_q[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[689]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_q[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[690]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_q[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[691]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_q[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[692]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_q[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[693]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_q[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[694]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_q[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[695]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_q[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[696]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_q[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[697]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_q[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[698]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_q[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[699]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_q[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[700]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_q[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[701]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_q[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[702]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_q[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[703]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_q[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[704]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_q[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[705]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_q[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[706]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_q[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[707]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_q[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[708]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_q[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[709]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_q[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[710]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_q[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[711]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_q[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[712]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_q[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[713]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_q[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[714]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 60, 44, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_q[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[715]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 61, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "instr_addr_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 62, 30, ".ibex_prefetch_buffer.fifo_i", "v_toggle/ibex_fetch_fifo__N2_Rz1", "unused_addr_in", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[716]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 120, 8, ".ibex_prefetch_buffer.fifo_i", "v_branch/ibex_fetch_fifo__N2_Rz1", "if", "120-121");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[717]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 120, 9, ".ibex_prefetch_buffer.fifo_i", "v_branch/ibex_fetch_fifo__N2_Rz1", "else", "122-123");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[718]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 114, 6, ".ibex_prefetch_buffer.fifo_i", "v_branch/ibex_fetch_fifo__N2_Rz1", "if", "114,116-118");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[719]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 114, 7, ".ibex_prefetch_buffer.fifo_i", "v_branch/ibex_fetch_fifo__N2_Rz1", "else", "125,127-130");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[720]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 113, 4, ".ibex_prefetch_buffer.fifo_i", "v_line/ibex_fetch_fifo__N2_Rz1", "block", "113");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[721]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 162, 8, ".ibex_prefetch_buffer.fifo_i", "v_branch/ibex_fetch_fifo__N2_Rz1", "if", "162-163");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[722]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 162, 9, ".ibex_prefetch_buffer.fifo_i", "v_branch/ibex_fetch_fifo__N2_Rz1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[723]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 161, 6, ".ibex_prefetch_buffer.fifo_i", "v_line/ibex_fetch_fifo__N2_Rz1", "block", "161");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[724]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 229, 6, ".ibex_prefetch_buffer.fifo_i", "v_branch/ibex_fetch_fifo__N2_Rz1", "if", "229-230");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[725]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 229, 7, ".ibex_prefetch_buffer.fifo_i", "v_branch/ibex_fetch_fifo__N2_Rz1", "else", "231-232");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[726]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 228, 4, ".ibex_prefetch_buffer.fifo_i", "v_line/ibex_fetch_fifo__N2_Rz1", "block", "228");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[727]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 249, 10, ".ibex_prefetch_buffer.fifo_i", "v_branch/ibex_fetch_fifo__N2_Rz1", "if", "236,249-251");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[728]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 249, 11, ".ibex_prefetch_buffer.fifo_i", "v_branch/ibex_fetch_fifo__N2_Rz1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[729]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 248, 8, ".ibex_prefetch_buffer.fifo_i", "v_line/ibex_fetch_fifo__N2_Rz1", "block", "248");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[730]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 249, 10, ".ibex_prefetch_buffer.fifo_i", "v_branch/ibex_fetch_fifo__N2_Rz1", "if", "236,249-251");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[731]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 249, 11, ".ibex_prefetch_buffer.fifo_i", "v_branch/ibex_fetch_fifo__N2_Rz1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[732]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 248, 8, ".ibex_prefetch_buffer.fifo_i", "v_line/ibex_fetch_fifo__N2_Rz1", "block", "248");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[733]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 249, 10, ".ibex_prefetch_buffer.fifo_i", "v_branch/ibex_fetch_fifo__N2_Rz1", "if", "236,249-251");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[734]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 249, 11, ".ibex_prefetch_buffer.fifo_i", "v_branch/ibex_fetch_fifo__N2_Rz1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[735]), first, "/mnt/d/Analog_Rails/Testbenches/PREFETCH_TEST_AR4/verilog/ibex_fetch_fifo.v", 248, 8, ".ibex_prefetch_buffer.fifo_i", "v_line/ibex_fetch_fifo__N2_Rz1", "block", "248");
}
