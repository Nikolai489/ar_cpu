// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vibex_prefetch_buffer__Syms.h"


void Vibex_prefetch_buffer___024root__trace_chg_sub_0(Vibex_prefetch_buffer___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vibex_prefetch_buffer___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_prefetch_buffer___024root__trace_chg_top_0\n"); );
    // Init
    Vibex_prefetch_buffer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vibex_prefetch_buffer___024root*>(voidSelf);
    Vibex_prefetch_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vibex_prefetch_buffer___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vibex_prefetch_buffer___024root__trace_chg_sub_0(Vibex_prefetch_buffer___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_prefetch_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_prefetch_buffer___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+0,(vlSelf->ibex_prefetch_buffer__DOT__valid_new_req));
        bufp->chgBit(oldp+1,(vlSelf->ibex_prefetch_buffer__DOT__valid_req_d));
        bufp->chgBit(oldp+2,(vlSelf->ibex_prefetch_buffer__DOT__discard_req_d));
        bufp->chgCData(oldp+3,(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_n),2);
        bufp->chgCData(oldp+4,(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_s),2);
        bufp->chgCData(oldp+5,(vlSelf->ibex_prefetch_buffer__DOT__branch_discard_n),2);
        bufp->chgCData(oldp+6,(vlSelf->ibex_prefetch_buffer__DOT__branch_discard_s),2);
        bufp->chgBit(oldp+7,(vlSelf->ibex_prefetch_buffer__DOT__stored_addr_en));
        bufp->chgBit(oldp+8,(vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_en));
        bufp->chgBit(oldp+9,(vlSelf->ibex_prefetch_buffer__DOT__fifo_valid));
        bufp->chgCData(oldp+10,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_pushed),3);
        bufp->chgBit(oldp+11,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid));
        bufp->chgBit(oldp+12,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_unaligned));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+13,(vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d),32);
        bufp->chgIData(oldp+14,(vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d),32);
        bufp->chgWData(oldp+15,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d),96);
        bufp->chgCData(oldp+18,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_d),3);
        bufp->chgCData(oldp+19,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_d),3);
        bufp->chgCData(oldp+20,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_popped),3);
        bufp->chgCData(oldp+21,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__entry_en),3);
        bufp->chgBit(oldp+22,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__pop_fifo));
        bufp->chgIData(oldp+23,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata),32);
        bufp->chgIData(oldp+24,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned),32);
        bufp->chgBit(oldp+25,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err));
        bufp->chgBit(oldp+26,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_unaligned));
        bufp->chgBit(oldp+27,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_plus2));
        bufp->chgBit(oldp+28,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__aligned_is_compressed));
        bufp->chgBit(oldp+29,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__unaligned_is_compressed));
        bufp->chgBit(oldp+30,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__addr_incr_two));
        bufp->chgIData(oldp+31,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next),31);
        bufp->chgIData(oldp+32,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d),31);
        bufp->chgBit(oldp+33,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_en));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+34,(vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q),32);
        bufp->chgIData(oldp+35,(vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q),32);
        bufp->chgWData(oldp+36,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q),96);
        bufp->chgCData(oldp+39,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_q),3);
        bufp->chgIData(oldp+40,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q),31);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+41,(vlSelf->ibex_prefetch_buffer__DOT__valid_req_q));
        bufp->chgBit(oldp+42,(vlSelf->ibex_prefetch_buffer__DOT__discard_req_q));
        bufp->chgCData(oldp+43,(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_q),2);
        bufp->chgCData(oldp+44,(vlSelf->ibex_prefetch_buffer__DOT__branch_discard_q),2);
        bufp->chgCData(oldp+45,(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_rev),2);
        bufp->chgBit(oldp+46,(vlSelf->ibex_prefetch_buffer__DOT__fifo_ready));
        bufp->chgCData(oldp+47,((3U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_q) 
                                       >> 1U))),2);
        bufp->chgCData(oldp+48,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_q),3);
        bufp->chgCData(oldp+49,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__lowest_free_entry),3);
    }
    bufp->chgBit(oldp+50,(vlSelf->clk_i));
    bufp->chgBit(oldp+51,(vlSelf->rst_ni));
    bufp->chgBit(oldp+52,(vlSelf->req_i));
    bufp->chgBit(oldp+53,(vlSelf->branch_i));
    bufp->chgIData(oldp+54,(vlSelf->addr_i),32);
    bufp->chgBit(oldp+55,(vlSelf->ready_i));
    bufp->chgBit(oldp+56,(vlSelf->valid_o));
    bufp->chgIData(oldp+57,(vlSelf->rdata_o),32);
    bufp->chgIData(oldp+58,(vlSelf->addr_o),32);
    bufp->chgBit(oldp+59,(vlSelf->err_o));
    bufp->chgBit(oldp+60,(vlSelf->err_plus2_o));
    bufp->chgBit(oldp+61,(vlSelf->instr_req_o));
    bufp->chgBit(oldp+62,(vlSelf->instr_gnt_i));
    bufp->chgIData(oldp+63,(vlSelf->instr_addr_o),32);
    bufp->chgIData(oldp+64,(vlSelf->instr_rdata_i),32);
    bufp->chgBit(oldp+65,(vlSelf->instr_err_i));
    bufp->chgBit(oldp+66,(vlSelf->instr_rvalid_i));
    bufp->chgBit(oldp+67,(vlSelf->busy_o));
    bufp->chgBit(oldp+68,((1U & vlSelf->addr_i)));
}

void Vibex_prefetch_buffer___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_prefetch_buffer___024root__trace_cleanup\n"); );
    // Init
    Vibex_prefetch_buffer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vibex_prefetch_buffer___024root*>(voidSelf);
    Vibex_prefetch_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
