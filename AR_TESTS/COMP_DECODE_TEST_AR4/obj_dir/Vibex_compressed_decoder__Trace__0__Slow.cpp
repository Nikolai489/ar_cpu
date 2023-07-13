// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vibex_compressed_decoder__Syms.h"


VL_ATTR_COLD void Vibex_compressed_decoder___024root__trace_init_sub__TOP__0(Vibex_compressed_decoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_compressed_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_compressed_decoder___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk_i", false,-1);
    tracep->declBit(c+2,"rst_ni", false,-1);
    tracep->declBit(c+3,"valid_i", false,-1);
    tracep->declBus(c+4,"instr_i", false,-1, 31,0);
    tracep->declBus(c+5,"enum_dpi", false,-1, 15,0);
    tracep->declBus(c+6,"instr_o", false,-1, 31,0);
    tracep->declBit(c+7,"is_compressed_o", false,-1);
    tracep->declBit(c+8,"illegal_instr_o", false,-1);
    tracep->pushNamePrefix("ibex_compressed_decoder ");
    tracep->declBit(c+1,"clk_i", false,-1);
    tracep->declBit(c+2,"rst_ni", false,-1);
    tracep->declBit(c+3,"valid_i", false,-1);
    tracep->declBus(c+4,"instr_i", false,-1, 31,0);
    tracep->declBus(c+5,"enum_dpi", false,-1, 15,0);
    tracep->declBus(c+6,"instr_o", false,-1, 31,0);
    tracep->declBit(c+7,"is_compressed_o", false,-1);
    tracep->declBit(c+8,"illegal_instr_o", false,-1);
    tracep->declBus(c+9,"unused_signals", false,-1, 16,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vibex_compressed_decoder___024root__trace_init_top(Vibex_compressed_decoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_compressed_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_compressed_decoder___024root__trace_init_top\n"); );
    // Body
    Vibex_compressed_decoder___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vibex_compressed_decoder___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vibex_compressed_decoder___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vibex_compressed_decoder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vibex_compressed_decoder___024root__trace_register(Vibex_compressed_decoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_compressed_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_compressed_decoder___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vibex_compressed_decoder___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vibex_compressed_decoder___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vibex_compressed_decoder___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vibex_compressed_decoder___024root__trace_full_sub_0(Vibex_compressed_decoder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vibex_compressed_decoder___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_compressed_decoder___024root__trace_full_top_0\n"); );
    // Init
    Vibex_compressed_decoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vibex_compressed_decoder___024root*>(voidSelf);
    Vibex_compressed_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vibex_compressed_decoder___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vibex_compressed_decoder___024root__trace_full_sub_0(Vibex_compressed_decoder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_compressed_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_compressed_decoder___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk_i));
    bufp->fullBit(oldp+2,(vlSelf->rst_ni));
    bufp->fullBit(oldp+3,(vlSelf->valid_i));
    bufp->fullIData(oldp+4,(vlSelf->instr_i),32);
    bufp->fullSData(oldp+5,(vlSelf->enum_dpi),16);
    bufp->fullIData(oldp+6,(vlSelf->instr_o),32);
    bufp->fullBit(oldp+7,(vlSelf->is_compressed_o));
    bufp->fullBit(oldp+8,(vlSelf->illegal_instr_o));
    bufp->fullIData(oldp+9,(vlSelf->ibex_compressed_decoder__DOT__unused_signals),17);
}
