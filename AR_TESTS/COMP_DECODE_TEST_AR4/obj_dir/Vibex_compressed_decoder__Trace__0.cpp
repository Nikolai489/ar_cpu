// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vibex_compressed_decoder__Syms.h"


void Vibex_compressed_decoder___024root__trace_chg_sub_0(Vibex_compressed_decoder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vibex_compressed_decoder___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_compressed_decoder___024root__trace_chg_top_0\n"); );
    // Init
    Vibex_compressed_decoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vibex_compressed_decoder___024root*>(voidSelf);
    Vibex_compressed_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vibex_compressed_decoder___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vibex_compressed_decoder___024root__trace_chg_sub_0(Vibex_compressed_decoder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_compressed_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_compressed_decoder___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk_i));
    bufp->chgBit(oldp+1,(vlSelf->rst_ni));
    bufp->chgBit(oldp+2,(vlSelf->valid_i));
    bufp->chgIData(oldp+3,(vlSelf->instr_i),32);
    bufp->chgSData(oldp+4,(vlSelf->enum_dpi),16);
    bufp->chgIData(oldp+5,(vlSelf->instr_o),32);
    bufp->chgBit(oldp+6,(vlSelf->is_compressed_o));
    bufp->chgBit(oldp+7,(vlSelf->illegal_instr_o));
    bufp->chgIData(oldp+8,(vlSelf->ibex_compressed_decoder__DOT__unused_signals),17);
}

void Vibex_compressed_decoder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_compressed_decoder___024root__trace_cleanup\n"); );
    // Init
    Vibex_compressed_decoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vibex_compressed_decoder___024root*>(voidSelf);
    Vibex_compressed_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
