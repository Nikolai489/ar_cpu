// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vibex_fetch_fifo__Syms.h"


void Vibex_fetch_fifo___024root__trace_chg_sub_0(Vibex_fetch_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vibex_fetch_fifo___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_fetch_fifo___024root__trace_chg_top_0\n"); );
    // Init
    Vibex_fetch_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vibex_fetch_fifo___024root*>(voidSelf);
    Vibex_fetch_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vibex_fetch_fifo___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vibex_fetch_fifo___024root__trace_chg_sub_0(Vibex_fetch_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_fetch_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_fetch_fifo___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgWData(oldp+0,(vlSelf->ibex_fetch_fifo__DOT__rdata_d),96);
        bufp->chgCData(oldp+3,(vlSelf->ibex_fetch_fifo__DOT__err_d),3);
        bufp->chgCData(oldp+4,(vlSelf->ibex_fetch_fifo__DOT__valid_d),3);
        bufp->chgCData(oldp+5,(vlSelf->ibex_fetch_fifo__DOT__valid_popped),3);
        bufp->chgCData(oldp+6,(vlSelf->ibex_fetch_fifo__DOT__entry_en),3);
        bufp->chgBit(oldp+7,(vlSelf->ibex_fetch_fifo__DOT__pop_fifo));
        bufp->chgIData(oldp+8,(vlSelf->ibex_fetch_fifo__DOT__rdata),32);
        bufp->chgIData(oldp+9,(vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned),32);
        bufp->chgBit(oldp+10,(vlSelf->ibex_fetch_fifo__DOT__err));
        bufp->chgBit(oldp+11,(vlSelf->ibex_fetch_fifo__DOT__err_unaligned));
        bufp->chgBit(oldp+12,(vlSelf->ibex_fetch_fifo__DOT__err_plus2));
        bufp->chgBit(oldp+13,(vlSelf->ibex_fetch_fifo__DOT__aligned_is_compressed));
        bufp->chgBit(oldp+14,(vlSelf->ibex_fetch_fifo__DOT__unaligned_is_compressed));
        bufp->chgBit(oldp+15,(vlSelf->ibex_fetch_fifo__DOT__addr_incr_two));
        bufp->chgIData(oldp+16,(vlSelf->ibex_fetch_fifo__DOT__instr_addr_next),31);
        bufp->chgIData(oldp+17,(vlSelf->ibex_fetch_fifo__DOT__instr_addr_d),31);
        bufp->chgBit(oldp+18,(vlSelf->ibex_fetch_fifo__DOT__instr_addr_en));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgWData(oldp+19,(vlSelf->ibex_fetch_fifo__DOT__rdata_q),96);
        bufp->chgCData(oldp+22,(vlSelf->ibex_fetch_fifo__DOT__err_q),3);
        bufp->chgIData(oldp+23,(vlSelf->ibex_fetch_fifo__DOT__instr_addr_q),31);
    }
    bufp->chgBit(oldp+24,(vlSelf->clk_i));
    bufp->chgBit(oldp+25,(vlSelf->rst_ni));
    bufp->chgBit(oldp+26,(vlSelf->clear_i));
    bufp->chgCData(oldp+27,(vlSelf->busy_o),2);
    bufp->chgBit(oldp+28,(vlSelf->in_valid_i));
    bufp->chgIData(oldp+29,(vlSelf->in_addr_i),32);
    bufp->chgIData(oldp+30,(vlSelf->in_rdata_i),32);
    bufp->chgBit(oldp+31,(vlSelf->in_err_i));
    bufp->chgBit(oldp+32,(vlSelf->out_valid_o));
    bufp->chgBit(oldp+33,(vlSelf->out_ready_i));
    bufp->chgIData(oldp+34,(vlSelf->out_addr_o),32);
    bufp->chgIData(oldp+35,(vlSelf->out_rdata_o),32);
    bufp->chgBit(oldp+36,(vlSelf->out_err_o));
    bufp->chgBit(oldp+37,(vlSelf->out_err_plus2_o));
    bufp->chgCData(oldp+38,(vlSelf->ibex_fetch_fifo__DOT__valid_q),3);
    bufp->chgCData(oldp+39,(vlSelf->ibex_fetch_fifo__DOT__lowest_free_entry),3);
    bufp->chgCData(oldp+40,(vlSelf->ibex_fetch_fifo__DOT__valid_pushed),3);
    bufp->chgBit(oldp+41,(vlSelf->ibex_fetch_fifo__DOT__valid));
    bufp->chgBit(oldp+42,(vlSelf->ibex_fetch_fifo__DOT__valid_unaligned));
    bufp->chgBit(oldp+43,((1U & vlSelf->in_addr_i)));
}

void Vibex_fetch_fifo___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_fetch_fifo___024root__trace_cleanup\n"); );
    // Init
    Vibex_fetch_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vibex_fetch_fifo___024root*>(voidSelf);
    Vibex_fetch_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
