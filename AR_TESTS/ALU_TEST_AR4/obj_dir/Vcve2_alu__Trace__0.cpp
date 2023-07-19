// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcve2_alu__Syms.h"


void Vcve2_alu___024root__trace_chg_sub_0(Vcve2_alu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcve2_alu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_alu___024root__trace_chg_top_0\n"); );
    // Init
    Vcve2_alu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcve2_alu___024root*>(voidSelf);
    Vcve2_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcve2_alu___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vcve2_alu___024root__trace_chg_sub_0(Vcve2_alu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcve2_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_alu___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSelf->cve2_alu__DOT__bwlogic_op_b_negate));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+1,(vlSelf->cve2_alu__DOT__operand_a_rev),32);
        bufp->chgBit(oldp+2,(vlSelf->cve2_alu__DOT__adder_op_b_negate));
        bufp->chgQData(oldp+3,(vlSelf->cve2_alu__DOT__adder_in_a),33);
        bufp->chgQData(oldp+5,(vlSelf->cve2_alu__DOT__adder_in_b),33);
        bufp->chgBit(oldp+7,(vlSelf->cve2_alu__DOT__is_greater_equal));
        bufp->chgBit(oldp+8,(vlSelf->cve2_alu__DOT__cmp_signed));
        bufp->chgBit(oldp+9,(vlSelf->cve2_alu__DOT__cmp_result));
        bufp->chgBit(oldp+10,(vlSelf->cve2_alu__DOT__shift_left));
        bufp->chgCData(oldp+11,(vlSelf->cve2_alu__DOT__shift_amt),6);
        bufp->chgIData(oldp+12,(vlSelf->cve2_alu__DOT__shift_operand),32);
        bufp->chgQData(oldp+13,(vlSelf->cve2_alu__DOT__shift_result_ext_signed),33);
        bufp->chgQData(oldp+15,(vlSelf->cve2_alu__DOT__shift_result_ext),33);
        bufp->chgBit(oldp+17,(vlSelf->cve2_alu__DOT__unused_shift_result_ext));
        bufp->chgIData(oldp+18,(vlSelf->cve2_alu__DOT__shift_result),32);
        bufp->chgIData(oldp+19,(vlSelf->cve2_alu__DOT__shift_result_rev),32);
        bufp->chgCData(oldp+20,(vlSelf->cve2_alu__DOT__bfp_len),5);
        bufp->chgBit(oldp+21,(vlSelf->cve2_alu__DOT__bwlogic_or));
        bufp->chgBit(oldp+22,(vlSelf->cve2_alu__DOT__bwlogic_and));
        bufp->chgIData(oldp+23,(vlSelf->cve2_alu__DOT__bwlogic_operand_b),32);
        bufp->chgIData(oldp+24,(vlSelf->cve2_alu__DOT__bwlogic_or_result),32);
        bufp->chgIData(oldp+25,(vlSelf->cve2_alu__DOT__bwlogic_and_result),32);
        bufp->chgIData(oldp+26,(vlSelf->cve2_alu__DOT__bwlogic_xor_result),32);
        bufp->chgIData(oldp+27,(vlSelf->cve2_alu__DOT__bwlogic_result),32);
        bufp->chgIData(oldp+28,(vlSelf->cve2_alu__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[0]),32);
        bufp->chgIData(oldp+29,(vlSelf->cve2_alu__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[1]),32);
    }
    bufp->chgCData(oldp+30,(vlSelf->operator_i),7);
    bufp->chgBit(oldp+31,(vlSelf->clk_i));
    bufp->chgIData(oldp+32,(vlSelf->operand_a_i),32);
    bufp->chgIData(oldp+33,(vlSelf->operand_b_i),32);
    bufp->chgBit(oldp+34,(vlSelf->instr_first_cycle_i));
    bufp->chgQData(oldp+35,(vlSelf->multdiv_operand_a_i),33);
    bufp->chgQData(oldp+37,(vlSelf->multdiv_operand_b_i),33);
    bufp->chgBit(oldp+39,(vlSelf->multdiv_sel_i));
    bufp->chgIData(oldp+40,(vlSelf->imd_val_q_i[0]),32);
    bufp->chgIData(oldp+41,(vlSelf->imd_val_q_i[1]),32);
    bufp->chgIData(oldp+42,(vlSelf->imd_val_d_o[0]),32);
    bufp->chgIData(oldp+43,(vlSelf->imd_val_d_o[1]),32);
    bufp->chgCData(oldp+44,(vlSelf->imd_val_we_o),2);
    bufp->chgIData(oldp+45,(vlSelf->adder_result_o),32);
    bufp->chgQData(oldp+46,(vlSelf->adder_result_ext_o),34);
    bufp->chgIData(oldp+48,(vlSelf->result_o),32);
    bufp->chgBit(oldp+49,(vlSelf->comparison_result_o));
    bufp->chgBit(oldp+50,(vlSelf->is_equal_result_o));
    bufp->chgQData(oldp+51,((0x1ffffffffULL & (~ ((QData)((IData)(vlSelf->operand_b_i)) 
                                                  << 1U)))),33);
    bufp->chgBit(oldp+53,((8U == (IData)(vlSelf->operator_i))));
    bufp->chgCData(oldp+54,((0x1fU & vlSelf->operand_b_i)),6);
    bufp->chgCData(oldp+55,((0x1fU & (vlSelf->operand_b_i 
                                      >> 0x10U))),5);
}

void Vcve2_alu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_alu___024root__trace_cleanup\n"); );
    // Init
    Vcve2_alu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcve2_alu___024root*>(voidSelf);
    Vcve2_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
