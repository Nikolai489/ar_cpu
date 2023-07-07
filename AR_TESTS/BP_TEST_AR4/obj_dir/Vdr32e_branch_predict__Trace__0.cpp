// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdr32e_branch_predict__Syms.h"


void Vdr32e_branch_predict___024root__trace_chg_sub_0(Vdr32e_branch_predict___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdr32e_branch_predict___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_branch_predict___024root__trace_chg_top_0\n"); );
    // Init
    Vdr32e_branch_predict___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdr32e_branch_predict___024root*>(voidSelf);
    Vdr32e_branch_predict__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdr32e_branch_predict___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vdr32e_branch_predict___024root__trace_chg_sub_0(Vdr32e_branch_predict___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_branch_predict__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_branch_predict___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->dr32e_branch_predict__DOT__imm_j_type),32);
        bufp->chgIData(oldp+1,(vlSelf->dr32e_branch_predict__DOT__imm_b_type),32);
        bufp->chgIData(oldp+2,(vlSelf->dr32e_branch_predict__DOT__imm_cj_type),32);
        bufp->chgIData(oldp+3,(vlSelf->dr32e_branch_predict__DOT__imm_cb_type),32);
        bufp->chgIData(oldp+4,(vlSelf->dr32e_branch_predict__DOT__branch_imm),32);
        bufp->chgBit(oldp+5,(vlSelf->dr32e_branch_predict__DOT__instr_cj));
        bufp->chgBit(oldp+6,(vlSelf->dr32e_branch_predict__DOT__instr_cb));
        bufp->chgBit(oldp+7,(vlSelf->dr32e_branch_predict__DOT__instr_b_taken));
    }
    bufp->chgBit(oldp+8,(vlSelf->clk_i));
    bufp->chgBit(oldp+9,(vlSelf->rst_ni));
    bufp->chgIData(oldp+10,(vlSelf->fetch_rdata_i),32);
    bufp->chgIData(oldp+11,(vlSelf->fetch_pc_i),32);
    bufp->chgBit(oldp+12,(vlSelf->fetch_valid_i));
    bufp->chgBit(oldp+13,(vlSelf->predict_branch_taken_o));
    bufp->chgIData(oldp+14,(vlSelf->predict_branch_pc_o),32);
    bufp->chgBit(oldp+15,((0x6fU == (0x7fU & vlSelf->fetch_rdata_i))));
    bufp->chgBit(oldp+16,((0x63U == (0x7fU & vlSelf->fetch_rdata_i))));
}

void Vdr32e_branch_predict___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_branch_predict___024root__trace_cleanup\n"); );
    // Init
    Vdr32e_branch_predict___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdr32e_branch_predict___024root*>(voidSelf);
    Vdr32e_branch_predict__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
