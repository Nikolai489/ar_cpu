// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vibex_fetch_fifo__Syms.h"


VL_ATTR_COLD void Vibex_fetch_fifo___024root__trace_init_sub__TOP__0(Vibex_fetch_fifo___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_fetch_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_fetch_fifo___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+25,"clk_i", false,-1);
    tracep->declBit(c+26,"rst_ni", false,-1);
    tracep->declBit(c+27,"clear_i", false,-1);
    tracep->declBus(c+28,"busy_o", false,-1, 1,0);
    tracep->declBit(c+29,"in_valid_i", false,-1);
    tracep->declBus(c+30,"in_addr_i", false,-1, 31,0);
    tracep->declBus(c+31,"in_rdata_i", false,-1, 31,0);
    tracep->declBit(c+32,"in_err_i", false,-1);
    tracep->declBit(c+33,"out_valid_o", false,-1);
    tracep->declBit(c+34,"out_ready_i", false,-1);
    tracep->declBus(c+35,"out_addr_o", false,-1, 31,0);
    tracep->declBus(c+36,"out_rdata_o", false,-1, 31,0);
    tracep->declBit(c+37,"out_err_o", false,-1);
    tracep->declBit(c+38,"out_err_plus2_o", false,-1);
    tracep->pushNamePrefix("ibex_fetch_fifo ");
    tracep->declBus(c+45,"NUM_REQS", false,-1, 31,0);
    tracep->declBit(c+46,"ResetAll", false,-1);
    tracep->declBit(c+25,"clk_i", false,-1);
    tracep->declBit(c+26,"rst_ni", false,-1);
    tracep->declBit(c+27,"clear_i", false,-1);
    tracep->declBus(c+28,"busy_o", false,-1, 1,0);
    tracep->declBit(c+29,"in_valid_i", false,-1);
    tracep->declBus(c+30,"in_addr_i", false,-1, 31,0);
    tracep->declBus(c+31,"in_rdata_i", false,-1, 31,0);
    tracep->declBit(c+32,"in_err_i", false,-1);
    tracep->declBit(c+33,"out_valid_o", false,-1);
    tracep->declBit(c+34,"out_ready_i", false,-1);
    tracep->declBus(c+35,"out_addr_o", false,-1, 31,0);
    tracep->declBus(c+36,"out_rdata_o", false,-1, 31,0);
    tracep->declBit(c+37,"out_err_o", false,-1);
    tracep->declBit(c+38,"out_err_plus2_o", false,-1);
    tracep->declBus(c+47,"DEPTH", false,-1, 31,0);
    tracep->declArray(c+1,"rdata_d", false,-1, 95,0);
    tracep->declArray(c+20,"rdata_q", false,-1, 95,0);
    tracep->declBus(c+4,"err_d", false,-1, 2,0);
    tracep->declBus(c+23,"err_q", false,-1, 2,0);
    tracep->declBus(c+5,"valid_d", false,-1, 2,0);
    tracep->declBus(c+39,"valid_q", false,-1, 2,0);
    tracep->declBus(c+40,"lowest_free_entry", false,-1, 2,0);
    tracep->declBus(c+41,"valid_pushed", false,-1, 2,0);
    tracep->declBus(c+6,"valid_popped", false,-1, 2,0);
    tracep->declBus(c+7,"entry_en", false,-1, 2,0);
    tracep->declBit(c+8,"pop_fifo", false,-1);
    tracep->declBus(c+9,"rdata", false,-1, 31,0);
    tracep->declBus(c+10,"rdata_unaligned", false,-1, 31,0);
    tracep->declBit(c+11,"err", false,-1);
    tracep->declBit(c+12,"err_unaligned", false,-1);
    tracep->declBit(c+13,"err_plus2", false,-1);
    tracep->declBit(c+42,"valid", false,-1);
    tracep->declBit(c+43,"valid_unaligned", false,-1);
    tracep->declBit(c+14,"aligned_is_compressed", false,-1);
    tracep->declBit(c+15,"unaligned_is_compressed", false,-1);
    tracep->declBit(c+16,"addr_incr_two", false,-1);
    tracep->declBus(c+17,"instr_addr_next", false,-1, 31,1);
    tracep->declBus(c+18,"instr_addr_d", false,-1, 31,1);
    tracep->declBus(c+24,"instr_addr_q", false,-1, 31,1);
    tracep->declBit(c+19,"instr_addr_en", false,-1);
    tracep->declBit(c+44,"unused_addr_in", false,-1);
    tracep->pushNamePrefix("g_fifo_next ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_fifo_regs ");
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vibex_fetch_fifo___024root__trace_init_top(Vibex_fetch_fifo___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_fetch_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_fetch_fifo___024root__trace_init_top\n"); );
    // Body
    Vibex_fetch_fifo___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vibex_fetch_fifo___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vibex_fetch_fifo___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vibex_fetch_fifo___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vibex_fetch_fifo___024root__trace_register(Vibex_fetch_fifo___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_fetch_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_fetch_fifo___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vibex_fetch_fifo___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vibex_fetch_fifo___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vibex_fetch_fifo___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vibex_fetch_fifo___024root__trace_full_sub_0(Vibex_fetch_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vibex_fetch_fifo___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_fetch_fifo___024root__trace_full_top_0\n"); );
    // Init
    Vibex_fetch_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vibex_fetch_fifo___024root*>(voidSelf);
    Vibex_fetch_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vibex_fetch_fifo___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vibex_fetch_fifo___024root__trace_full_sub_0(Vibex_fetch_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_fetch_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_fetch_fifo___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullWData(oldp+1,(vlSelf->ibex_fetch_fifo__DOT__rdata_d),96);
    bufp->fullCData(oldp+4,(vlSelf->ibex_fetch_fifo__DOT__err_d),3);
    bufp->fullCData(oldp+5,(vlSelf->ibex_fetch_fifo__DOT__valid_d),3);
    bufp->fullCData(oldp+6,(vlSelf->ibex_fetch_fifo__DOT__valid_popped),3);
    bufp->fullCData(oldp+7,(vlSelf->ibex_fetch_fifo__DOT__entry_en),3);
    bufp->fullBit(oldp+8,(vlSelf->ibex_fetch_fifo__DOT__pop_fifo));
    bufp->fullIData(oldp+9,(vlSelf->ibex_fetch_fifo__DOT__rdata),32);
    bufp->fullIData(oldp+10,(vlSelf->ibex_fetch_fifo__DOT__rdata_unaligned),32);
    bufp->fullBit(oldp+11,(vlSelf->ibex_fetch_fifo__DOT__err));
    bufp->fullBit(oldp+12,(vlSelf->ibex_fetch_fifo__DOT__err_unaligned));
    bufp->fullBit(oldp+13,(vlSelf->ibex_fetch_fifo__DOT__err_plus2));
    bufp->fullBit(oldp+14,(vlSelf->ibex_fetch_fifo__DOT__aligned_is_compressed));
    bufp->fullBit(oldp+15,(vlSelf->ibex_fetch_fifo__DOT__unaligned_is_compressed));
    bufp->fullBit(oldp+16,(vlSelf->ibex_fetch_fifo__DOT__addr_incr_two));
    bufp->fullIData(oldp+17,(vlSelf->ibex_fetch_fifo__DOT__instr_addr_next),31);
    bufp->fullIData(oldp+18,(vlSelf->ibex_fetch_fifo__DOT__instr_addr_d),31);
    bufp->fullBit(oldp+19,(vlSelf->ibex_fetch_fifo__DOT__instr_addr_en));
    bufp->fullWData(oldp+20,(vlSelf->ibex_fetch_fifo__DOT__rdata_q),96);
    bufp->fullCData(oldp+23,(vlSelf->ibex_fetch_fifo__DOT__err_q),3);
    bufp->fullIData(oldp+24,(vlSelf->ibex_fetch_fifo__DOT__instr_addr_q),31);
    bufp->fullBit(oldp+25,(vlSelf->clk_i));
    bufp->fullBit(oldp+26,(vlSelf->rst_ni));
    bufp->fullBit(oldp+27,(vlSelf->clear_i));
    bufp->fullCData(oldp+28,(vlSelf->busy_o),2);
    bufp->fullBit(oldp+29,(vlSelf->in_valid_i));
    bufp->fullIData(oldp+30,(vlSelf->in_addr_i),32);
    bufp->fullIData(oldp+31,(vlSelf->in_rdata_i),32);
    bufp->fullBit(oldp+32,(vlSelf->in_err_i));
    bufp->fullBit(oldp+33,(vlSelf->out_valid_o));
    bufp->fullBit(oldp+34,(vlSelf->out_ready_i));
    bufp->fullIData(oldp+35,(vlSelf->out_addr_o),32);
    bufp->fullIData(oldp+36,(vlSelf->out_rdata_o),32);
    bufp->fullBit(oldp+37,(vlSelf->out_err_o));
    bufp->fullBit(oldp+38,(vlSelf->out_err_plus2_o));
    bufp->fullCData(oldp+39,(vlSelf->ibex_fetch_fifo__DOT__valid_q),3);
    bufp->fullCData(oldp+40,(vlSelf->ibex_fetch_fifo__DOT__lowest_free_entry),3);
    bufp->fullCData(oldp+41,(vlSelf->ibex_fetch_fifo__DOT__valid_pushed),3);
    bufp->fullBit(oldp+42,(vlSelf->ibex_fetch_fifo__DOT__valid));
    bufp->fullBit(oldp+43,(vlSelf->ibex_fetch_fifo__DOT__valid_unaligned));
    bufp->fullBit(oldp+44,((1U & vlSelf->in_addr_i)));
    bufp->fullIData(oldp+45,(2U),32);
    bufp->fullBit(oldp+46,(0U));
    bufp->fullIData(oldp+47,(3U),32);
}
