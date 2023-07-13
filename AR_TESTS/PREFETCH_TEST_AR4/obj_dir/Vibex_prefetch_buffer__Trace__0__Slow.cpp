// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vibex_prefetch_buffer__Syms.h"


VL_ATTR_COLD void Vibex_prefetch_buffer___024root__trace_init_sub__TOP__0(Vibex_prefetch_buffer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_prefetch_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_prefetch_buffer___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+51,"clk_i", false,-1);
    tracep->declBit(c+52,"rst_ni", false,-1);
    tracep->declBit(c+53,"req_i", false,-1);
    tracep->declBit(c+54,"branch_i", false,-1);
    tracep->declBus(c+55,"addr_i", false,-1, 31,0);
    tracep->declBit(c+56,"ready_i", false,-1);
    tracep->declBit(c+57,"valid_o", false,-1);
    tracep->declBus(c+58,"rdata_o", false,-1, 31,0);
    tracep->declBus(c+59,"addr_o", false,-1, 31,0);
    tracep->declBit(c+60,"err_o", false,-1);
    tracep->declBit(c+61,"err_plus2_o", false,-1);
    tracep->declBit(c+62,"instr_req_o", false,-1);
    tracep->declBit(c+63,"instr_gnt_i", false,-1);
    tracep->declBus(c+64,"instr_addr_o", false,-1, 31,0);
    tracep->declBus(c+65,"instr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+66,"instr_err_i", false,-1);
    tracep->declBit(c+67,"instr_rvalid_i", false,-1);
    tracep->declBit(c+68,"busy_o", false,-1);
    tracep->pushNamePrefix("ibex_prefetch_buffer ");
    tracep->declBit(c+70,"ResetAll", false,-1);
    tracep->declBit(c+51,"clk_i", false,-1);
    tracep->declBit(c+52,"rst_ni", false,-1);
    tracep->declBit(c+53,"req_i", false,-1);
    tracep->declBit(c+54,"branch_i", false,-1);
    tracep->declBus(c+55,"addr_i", false,-1, 31,0);
    tracep->declBit(c+56,"ready_i", false,-1);
    tracep->declBit(c+57,"valid_o", false,-1);
    tracep->declBus(c+58,"rdata_o", false,-1, 31,0);
    tracep->declBus(c+59,"addr_o", false,-1, 31,0);
    tracep->declBit(c+60,"err_o", false,-1);
    tracep->declBit(c+61,"err_plus2_o", false,-1);
    tracep->declBit(c+62,"instr_req_o", false,-1);
    tracep->declBit(c+63,"instr_gnt_i", false,-1);
    tracep->declBus(c+64,"instr_addr_o", false,-1, 31,0);
    tracep->declBus(c+65,"instr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+66,"instr_err_i", false,-1);
    tracep->declBit(c+67,"instr_rvalid_i", false,-1);
    tracep->declBit(c+68,"busy_o", false,-1);
    tracep->declBus(c+71,"NUM_REQS", false,-1, 31,0);
    tracep->declBit(c+1,"valid_new_req", false,-1);
    tracep->declBit(c+62,"valid_req", false,-1);
    tracep->declBit(c+2,"valid_req_d", false,-1);
    tracep->declBit(c+42,"valid_req_q", false,-1);
    tracep->declBit(c+3,"discard_req_d", false,-1);
    tracep->declBit(c+43,"discard_req_q", false,-1);
    tracep->declBus(c+4,"rdata_outstanding_n", false,-1, 1,0);
    tracep->declBus(c+5,"rdata_outstanding_s", false,-1, 1,0);
    tracep->declBus(c+44,"rdata_outstanding_q", false,-1, 1,0);
    tracep->declBus(c+6,"branch_discard_n", false,-1, 1,0);
    tracep->declBus(c+7,"branch_discard_s", false,-1, 1,0);
    tracep->declBus(c+45,"branch_discard_q", false,-1, 1,0);
    tracep->declBus(c+46,"rdata_outstanding_rev", false,-1, 1,0);
    tracep->declBus(c+14,"stored_addr_d", false,-1, 31,0);
    tracep->declBus(c+35,"stored_addr_q", false,-1, 31,0);
    tracep->declBit(c+8,"stored_addr_en", false,-1);
    tracep->declBus(c+15,"fetch_addr_d", false,-1, 31,0);
    tracep->declBus(c+36,"fetch_addr_q", false,-1, 31,0);
    tracep->declBit(c+9,"fetch_addr_en", false,-1);
    tracep->declBus(c+14,"instr_addr", false,-1, 31,0);
    tracep->declBus(c+64,"instr_addr_w_aligned", false,-1, 31,0);
    tracep->declBit(c+10,"fifo_valid", false,-1);
    tracep->declBus(c+55,"fifo_addr", false,-1, 31,0);
    tracep->declBit(c+47,"fifo_ready", false,-1);
    tracep->declBit(c+54,"fifo_clear", false,-1);
    tracep->declBus(c+48,"fifo_busy", false,-1, 1,0);
    tracep->pushNamePrefix("fifo_i ");
    tracep->declBus(c+71,"NUM_REQS", false,-1, 31,0);
    tracep->declBit(c+70,"ResetAll", false,-1);
    tracep->declBit(c+51,"clk_i", false,-1);
    tracep->declBit(c+52,"rst_ni", false,-1);
    tracep->declBit(c+54,"clear_i", false,-1);
    tracep->declBus(c+48,"busy_o", false,-1, 1,0);
    tracep->declBit(c+10,"in_valid_i", false,-1);
    tracep->declBus(c+55,"in_addr_i", false,-1, 31,0);
    tracep->declBus(c+65,"in_rdata_i", false,-1, 31,0);
    tracep->declBit(c+66,"in_err_i", false,-1);
    tracep->declBit(c+57,"out_valid_o", false,-1);
    tracep->declBit(c+56,"out_ready_i", false,-1);
    tracep->declBus(c+59,"out_addr_o", false,-1, 31,0);
    tracep->declBus(c+58,"out_rdata_o", false,-1, 31,0);
    tracep->declBit(c+60,"out_err_o", false,-1);
    tracep->declBit(c+61,"out_err_plus2_o", false,-1);
    tracep->declBus(c+72,"DEPTH", false,-1, 31,0);
    tracep->declArray(c+16,"rdata_d", false,-1, 95,0);
    tracep->declArray(c+37,"rdata_q", false,-1, 95,0);
    tracep->declBus(c+19,"err_d", false,-1, 2,0);
    tracep->declBus(c+40,"err_q", false,-1, 2,0);
    tracep->declBus(c+20,"valid_d", false,-1, 2,0);
    tracep->declBus(c+49,"valid_q", false,-1, 2,0);
    tracep->declBus(c+50,"lowest_free_entry", false,-1, 2,0);
    tracep->declBus(c+11,"valid_pushed", false,-1, 2,0);
    tracep->declBus(c+21,"valid_popped", false,-1, 2,0);
    tracep->declBus(c+22,"entry_en", false,-1, 2,0);
    tracep->declBit(c+23,"pop_fifo", false,-1);
    tracep->declBus(c+24,"rdata", false,-1, 31,0);
    tracep->declBus(c+25,"rdata_unaligned", false,-1, 31,0);
    tracep->declBit(c+26,"err", false,-1);
    tracep->declBit(c+27,"err_unaligned", false,-1);
    tracep->declBit(c+28,"err_plus2", false,-1);
    tracep->declBit(c+12,"valid", false,-1);
    tracep->declBit(c+13,"valid_unaligned", false,-1);
    tracep->declBit(c+29,"aligned_is_compressed", false,-1);
    tracep->declBit(c+30,"unaligned_is_compressed", false,-1);
    tracep->declBit(c+31,"addr_incr_two", false,-1);
    tracep->declBus(c+32,"instr_addr_next", false,-1, 31,1);
    tracep->declBus(c+33,"instr_addr_d", false,-1, 31,1);
    tracep->declBus(c+41,"instr_addr_q", false,-1, 31,1);
    tracep->declBit(c+34,"instr_addr_en", false,-1);
    tracep->declBit(c+69,"unused_addr_in", false,-1);
    tracep->pushNamePrefix("g_fifo_next ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_fifo_regs ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_outstanding_reqs ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gen_rd_rev ");
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vibex_prefetch_buffer___024root__trace_init_top(Vibex_prefetch_buffer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_prefetch_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_prefetch_buffer___024root__trace_init_top\n"); );
    // Body
    Vibex_prefetch_buffer___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vibex_prefetch_buffer___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vibex_prefetch_buffer___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vibex_prefetch_buffer___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vibex_prefetch_buffer___024root__trace_register(Vibex_prefetch_buffer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_prefetch_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_prefetch_buffer___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vibex_prefetch_buffer___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vibex_prefetch_buffer___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vibex_prefetch_buffer___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vibex_prefetch_buffer___024root__trace_full_sub_0(Vibex_prefetch_buffer___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vibex_prefetch_buffer___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_prefetch_buffer___024root__trace_full_top_0\n"); );
    // Init
    Vibex_prefetch_buffer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vibex_prefetch_buffer___024root*>(voidSelf);
    Vibex_prefetch_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vibex_prefetch_buffer___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vibex_prefetch_buffer___024root__trace_full_sub_0(Vibex_prefetch_buffer___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_prefetch_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_prefetch_buffer___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ibex_prefetch_buffer__DOT__valid_new_req));
    bufp->fullBit(oldp+2,(vlSelf->ibex_prefetch_buffer__DOT__valid_req_d));
    bufp->fullBit(oldp+3,(vlSelf->ibex_prefetch_buffer__DOT__discard_req_d));
    bufp->fullCData(oldp+4,(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_n),2);
    bufp->fullCData(oldp+5,(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_s),2);
    bufp->fullCData(oldp+6,(vlSelf->ibex_prefetch_buffer__DOT__branch_discard_n),2);
    bufp->fullCData(oldp+7,(vlSelf->ibex_prefetch_buffer__DOT__branch_discard_s),2);
    bufp->fullBit(oldp+8,(vlSelf->ibex_prefetch_buffer__DOT__stored_addr_en));
    bufp->fullBit(oldp+9,(vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_en));
    bufp->fullBit(oldp+10,(vlSelf->ibex_prefetch_buffer__DOT__fifo_valid));
    bufp->fullCData(oldp+11,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_pushed),3);
    bufp->fullBit(oldp+12,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid));
    bufp->fullBit(oldp+13,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_unaligned));
    bufp->fullIData(oldp+14,(vlSelf->ibex_prefetch_buffer__DOT__stored_addr_d),32);
    bufp->fullIData(oldp+15,(vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_d),32);
    bufp->fullWData(oldp+16,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d),96);
    bufp->fullCData(oldp+19,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_d),3);
    bufp->fullCData(oldp+20,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_d),3);
    bufp->fullCData(oldp+21,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_popped),3);
    bufp->fullCData(oldp+22,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__entry_en),3);
    bufp->fullBit(oldp+23,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__pop_fifo));
    bufp->fullIData(oldp+24,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata),32);
    bufp->fullIData(oldp+25,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned),32);
    bufp->fullBit(oldp+26,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err));
    bufp->fullBit(oldp+27,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_unaligned));
    bufp->fullBit(oldp+28,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_plus2));
    bufp->fullBit(oldp+29,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__aligned_is_compressed));
    bufp->fullBit(oldp+30,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__unaligned_is_compressed));
    bufp->fullBit(oldp+31,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__addr_incr_two));
    bufp->fullIData(oldp+32,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next),31);
    bufp->fullIData(oldp+33,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d),31);
    bufp->fullBit(oldp+34,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_en));
    bufp->fullIData(oldp+35,(vlSelf->ibex_prefetch_buffer__DOT__stored_addr_q),32);
    bufp->fullIData(oldp+36,(vlSelf->ibex_prefetch_buffer__DOT__fetch_addr_q),32);
    bufp->fullWData(oldp+37,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q),96);
    bufp->fullCData(oldp+40,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__err_q),3);
    bufp->fullIData(oldp+41,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q),31);
    bufp->fullBit(oldp+42,(vlSelf->ibex_prefetch_buffer__DOT__valid_req_q));
    bufp->fullBit(oldp+43,(vlSelf->ibex_prefetch_buffer__DOT__discard_req_q));
    bufp->fullCData(oldp+44,(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_q),2);
    bufp->fullCData(oldp+45,(vlSelf->ibex_prefetch_buffer__DOT__branch_discard_q),2);
    bufp->fullCData(oldp+46,(vlSelf->ibex_prefetch_buffer__DOT__rdata_outstanding_rev),2);
    bufp->fullBit(oldp+47,(vlSelf->ibex_prefetch_buffer__DOT__fifo_ready));
    bufp->fullCData(oldp+48,((3U & ((IData)(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_q) 
                                    >> 1U))),2);
    bufp->fullCData(oldp+49,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_q),3);
    bufp->fullCData(oldp+50,(vlSelf->ibex_prefetch_buffer__DOT__fifo_i__DOT__lowest_free_entry),3);
    bufp->fullBit(oldp+51,(vlSelf->clk_i));
    bufp->fullBit(oldp+52,(vlSelf->rst_ni));
    bufp->fullBit(oldp+53,(vlSelf->req_i));
    bufp->fullBit(oldp+54,(vlSelf->branch_i));
    bufp->fullIData(oldp+55,(vlSelf->addr_i),32);
    bufp->fullBit(oldp+56,(vlSelf->ready_i));
    bufp->fullBit(oldp+57,(vlSelf->valid_o));
    bufp->fullIData(oldp+58,(vlSelf->rdata_o),32);
    bufp->fullIData(oldp+59,(vlSelf->addr_o),32);
    bufp->fullBit(oldp+60,(vlSelf->err_o));
    bufp->fullBit(oldp+61,(vlSelf->err_plus2_o));
    bufp->fullBit(oldp+62,(vlSelf->instr_req_o));
    bufp->fullBit(oldp+63,(vlSelf->instr_gnt_i));
    bufp->fullIData(oldp+64,(vlSelf->instr_addr_o),32);
    bufp->fullIData(oldp+65,(vlSelf->instr_rdata_i),32);
    bufp->fullBit(oldp+66,(vlSelf->instr_err_i));
    bufp->fullBit(oldp+67,(vlSelf->instr_rvalid_i));
    bufp->fullBit(oldp+68,(vlSelf->busy_o));
    bufp->fullBit(oldp+69,((1U & vlSelf->addr_i)));
    bufp->fullBit(oldp+70,(0U));
    bufp->fullIData(oldp+71,(2U),32);
    bufp->fullIData(oldp+72,(3U),32);
}
