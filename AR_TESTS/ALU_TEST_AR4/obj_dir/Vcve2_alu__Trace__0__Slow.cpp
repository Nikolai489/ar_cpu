// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcve2_alu__Syms.h"


VL_ATTR_COLD void Vcve2_alu___024root__trace_init_sub__TOP__0(Vcve2_alu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcve2_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_alu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+31,"operator_i", false,-1, 6,0);
    tracep->declBit(c+32,"clk_i", false,-1);
    tracep->declBus(c+33,"operand_a_i", false,-1, 31,0);
    tracep->declBus(c+34,"operand_b_i", false,-1, 31,0);
    tracep->declBit(c+35,"instr_first_cycle_i", false,-1);
    tracep->declQuad(c+36,"multdiv_operand_a_i", false,-1, 32,0);
    tracep->declQuad(c+38,"multdiv_operand_b_i", false,-1, 32,0);
    tracep->declBit(c+40,"multdiv_sel_i", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+41+i*1,"imd_val_q_i", true,(i+0), 31,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+43+i*1,"imd_val_d_o", true,(i+0), 31,0);
    }
    tracep->declBus(c+45,"imd_val_we_o", false,-1, 1,0);
    tracep->declBus(c+46,"adder_result_o", false,-1, 31,0);
    tracep->declQuad(c+47,"adder_result_ext_o", false,-1, 33,0);
    tracep->declBus(c+49,"result_o", false,-1, 31,0);
    tracep->declBit(c+50,"comparison_result_o", false,-1);
    tracep->declBit(c+51,"is_equal_result_o", false,-1);
    tracep->pushNamePrefix("cve2_alu ");
    tracep->declBus(c+57,"RV32B", false,-1, 31,0);
    tracep->declBus(c+31,"operator_i", false,-1, 6,0);
    tracep->declBit(c+32,"clk_i", false,-1);
    tracep->declBus(c+33,"operand_a_i", false,-1, 31,0);
    tracep->declBus(c+34,"operand_b_i", false,-1, 31,0);
    tracep->declBit(c+35,"instr_first_cycle_i", false,-1);
    tracep->declQuad(c+36,"multdiv_operand_a_i", false,-1, 32,0);
    tracep->declQuad(c+38,"multdiv_operand_b_i", false,-1, 32,0);
    tracep->declBit(c+40,"multdiv_sel_i", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+41+i*1,"imd_val_q_i", true,(i+0), 31,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+43+i*1,"imd_val_d_o", true,(i+0), 31,0);
    }
    tracep->declBus(c+45,"imd_val_we_o", false,-1, 1,0);
    tracep->declBus(c+46,"adder_result_o", false,-1, 31,0);
    tracep->declQuad(c+47,"adder_result_ext_o", false,-1, 33,0);
    tracep->declBus(c+49,"result_o", false,-1, 31,0);
    tracep->declBit(c+50,"comparison_result_o", false,-1);
    tracep->declBit(c+51,"is_equal_result_o", false,-1);
    tracep->declBit(c+32,"unused", false,-1);
    tracep->declBus(c+2,"operand_a_rev", false,-1, 31,0);
    tracep->declQuad(c+52,"operand_b_neg", false,-1, 32,0);
    tracep->declBit(c+58,"adder_op_a_shift1", false,-1);
    tracep->declBit(c+58,"adder_op_a_shift2", false,-1);
    tracep->declBit(c+58,"adder_op_a_shift3", false,-1);
    tracep->declBit(c+3,"adder_op_b_negate", false,-1);
    tracep->declQuad(c+4,"adder_in_a", false,-1, 32,0);
    tracep->declQuad(c+6,"adder_in_b", false,-1, 32,0);
    tracep->declBus(c+46,"adder_result", false,-1, 31,0);
    tracep->declBit(c+51,"is_equal", false,-1);
    tracep->declBit(c+8,"is_greater_equal", false,-1);
    tracep->declBit(c+9,"cmp_signed", false,-1);
    tracep->declBit(c+10,"cmp_result", false,-1);
    tracep->declBit(c+11,"shift_left", false,-1);
    tracep->declBit(c+58,"shift_ones", false,-1);
    tracep->declBit(c+54,"shift_arith", false,-1);
    tracep->declBit(c+58,"shift_funnel", false,-1);
    tracep->declBit(c+58,"shift_sbmode", false,-1);
    tracep->declBus(c+12,"shift_amt", false,-1, 5,0);
    tracep->declBus(c+55,"shift_amt_compl", false,-1, 5,0);
    tracep->declBus(c+13,"shift_operand", false,-1, 31,0);
    tracep->declQuad(c+14,"shift_result_ext_signed", false,-1, 32,0);
    tracep->declQuad(c+16,"shift_result_ext", false,-1, 32,0);
    tracep->declBit(c+18,"unused_shift_result_ext", false,-1);
    tracep->declBus(c+19,"shift_result", false,-1, 31,0);
    tracep->declBus(c+20,"shift_result_rev", false,-1, 31,0);
    tracep->declBit(c+58,"bfp_op", false,-1);
    tracep->declBus(c+21,"bfp_len", false,-1, 4,0);
    tracep->declBus(c+56,"bfp_off", false,-1, 4,0);
    tracep->declBus(c+59,"bfp_mask", false,-1, 31,0);
    tracep->declBus(c+59,"bfp_mask_rev", false,-1, 31,0);
    tracep->declBus(c+59,"bfp_result", false,-1, 31,0);
    tracep->declBit(c+22,"bwlogic_or", false,-1);
    tracep->declBit(c+23,"bwlogic_and", false,-1);
    tracep->declBus(c+24,"bwlogic_operand_b", false,-1, 31,0);
    tracep->declBus(c+25,"bwlogic_or_result", false,-1, 31,0);
    tracep->declBus(c+26,"bwlogic_and_result", false,-1, 31,0);
    tracep->declBus(c+27,"bwlogic_xor_result", false,-1, 31,0);
    tracep->declBus(c+28,"bwlogic_result", false,-1, 31,0);
    tracep->declBit(c+1,"bwlogic_op_b_negate", false,-1);
    tracep->declBus(c+60,"bitcnt_result", false,-1, 5,0);
    tracep->declBus(c+59,"minmax_result", false,-1, 31,0);
    tracep->declBus(c+59,"pack_result", false,-1, 31,0);
    tracep->declBus(c+59,"sext_result", false,-1, 31,0);
    tracep->declBus(c+59,"singlebit_result", false,-1, 31,0);
    tracep->declBus(c+59,"rev_result", false,-1, 31,0);
    tracep->declBus(c+59,"shuffle_result", false,-1, 31,0);
    tracep->declBus(c+59,"xperm_result", false,-1, 31,0);
    tracep->declBus(c+59,"butterfly_result", false,-1, 31,0);
    tracep->declBus(c+59,"invbutterfly_result", false,-1, 31,0);
    tracep->declBus(c+59,"clmul_result", false,-1, 31,0);
    tracep->declBus(c+59,"multicycle_result", false,-1, 31,0);
    tracep->declBit(c+58,"unused_shift_amt_compl", false,-1);
    tracep->pushNamePrefix("g_no_alu_rvb ");
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+29+i*1,"unused_imd_val_q", true,(i+0), 31,0);
    }
    tracep->declBus(c+59,"unused_butterfly_result", false,-1, 31,0);
    tracep->declBus(c+59,"unused_invbutterfly_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gen_rev_bfp_mask ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gen_rev_operand_a ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+61,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vcve2_alu___024root__trace_init_sub__TOP__cve2_pkg__0(Vcve2_alu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcve2_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_alu___024root__trace_init_sub__TOP__cve2_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+62,"PMP_MAX_REGIONS", false,-1, 31,0);
    tracep->declBus(c+63,"PMP_CFG_W", false,-1, 31,0);
    tracep->declBus(c+64,"PMP_I", false,-1, 31,0);
    tracep->declBus(c+65,"PMP_I2", false,-1, 31,0);
    tracep->declBus(c+66,"PMP_D", false,-1, 31,0);
    tracep->declBus(c+67,"CSR_OFF_PMP_CFG", false,-1, 11,0);
    tracep->declBus(c+68,"CSR_OFF_PMP_ADDR", false,-1, 11,0);
    tracep->declBus(c+69,"CSR_MSTATUS_MIE_BIT", false,-1, 31,0);
    tracep->declBus(c+70,"CSR_MSTATUS_MPIE_BIT", false,-1, 31,0);
    tracep->declBus(c+71,"CSR_MSTATUS_MPP_BIT_LOW", false,-1, 31,0);
    tracep->declBus(c+72,"CSR_MSTATUS_MPP_BIT_HIGH", false,-1, 31,0);
    tracep->declBus(c+73,"CSR_MSTATUS_MPRV_BIT", false,-1, 31,0);
    tracep->declBus(c+74,"CSR_MSTATUS_TW_BIT", false,-1, 31,0);
    tracep->declBus(c+75,"CSR_MISA_MXL", false,-1, 1,0);
    tracep->declBus(c+69,"CSR_MSIX_BIT", false,-1, 31,0);
    tracep->declBus(c+70,"CSR_MTIX_BIT", false,-1, 31,0);
    tracep->declBus(c+71,"CSR_MEIX_BIT", false,-1, 31,0);
    tracep->declBus(c+62,"CSR_MFIX_BIT_LOW", false,-1, 31,0);
    tracep->declBus(c+76,"CSR_MFIX_BIT_HIGH", false,-1, 31,0);
    tracep->declBus(c+64,"CSR_MSECCFG_MML_BIT", false,-1, 31,0);
    tracep->declBus(c+65,"CSR_MSECCFG_MMWP_BIT", false,-1, 31,0);
    tracep->declBus(c+66,"CSR_MSECCFG_RLB_BIT", false,-1, 31,0);
    tracep->declBus(c+59,"CSR_MVENDORID_VALUE", false,-1, 31,0);
    tracep->declBus(c+77,"CSR_MARCHID_VALUE", false,-1, 31,0);
    tracep->declBus(c+59,"CSR_MIMPID_VALUE", false,-1, 31,0);
    tracep->declBus(c+59,"CSR_MCONFIGPTR_VALUE", false,-1, 31,0);
}

VL_ATTR_COLD void Vcve2_alu___024root__trace_init_top(Vcve2_alu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcve2_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_alu___024root__trace_init_top\n"); );
    // Body
    Vcve2_alu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("cve2_pkg ");
    Vcve2_alu___024root__trace_init_sub__TOP__cve2_pkg__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vcve2_alu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcve2_alu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcve2_alu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcve2_alu___024root__trace_register(Vcve2_alu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcve2_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_alu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcve2_alu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcve2_alu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcve2_alu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcve2_alu___024root__trace_full_sub_0(Vcve2_alu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcve2_alu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_alu___024root__trace_full_top_0\n"); );
    // Init
    Vcve2_alu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcve2_alu___024root*>(voidSelf);
    Vcve2_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcve2_alu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcve2_alu___024root__trace_full_sub_0(Vcve2_alu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcve2_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_alu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->cve2_alu__DOT__bwlogic_op_b_negate));
    bufp->fullIData(oldp+2,(vlSelf->cve2_alu__DOT__operand_a_rev),32);
    bufp->fullBit(oldp+3,(vlSelf->cve2_alu__DOT__adder_op_b_negate));
    bufp->fullQData(oldp+4,(vlSelf->cve2_alu__DOT__adder_in_a),33);
    bufp->fullQData(oldp+6,(vlSelf->cve2_alu__DOT__adder_in_b),33);
    bufp->fullBit(oldp+8,(vlSelf->cve2_alu__DOT__is_greater_equal));
    bufp->fullBit(oldp+9,(vlSelf->cve2_alu__DOT__cmp_signed));
    bufp->fullBit(oldp+10,(vlSelf->cve2_alu__DOT__cmp_result));
    bufp->fullBit(oldp+11,(vlSelf->cve2_alu__DOT__shift_left));
    bufp->fullCData(oldp+12,(vlSelf->cve2_alu__DOT__shift_amt),6);
    bufp->fullIData(oldp+13,(vlSelf->cve2_alu__DOT__shift_operand),32);
    bufp->fullQData(oldp+14,(vlSelf->cve2_alu__DOT__shift_result_ext_signed),33);
    bufp->fullQData(oldp+16,(vlSelf->cve2_alu__DOT__shift_result_ext),33);
    bufp->fullBit(oldp+18,(vlSelf->cve2_alu__DOT__unused_shift_result_ext));
    bufp->fullIData(oldp+19,(vlSelf->cve2_alu__DOT__shift_result),32);
    bufp->fullIData(oldp+20,(vlSelf->cve2_alu__DOT__shift_result_rev),32);
    bufp->fullCData(oldp+21,(vlSelf->cve2_alu__DOT__bfp_len),5);
    bufp->fullBit(oldp+22,(vlSelf->cve2_alu__DOT__bwlogic_or));
    bufp->fullBit(oldp+23,(vlSelf->cve2_alu__DOT__bwlogic_and));
    bufp->fullIData(oldp+24,(vlSelf->cve2_alu__DOT__bwlogic_operand_b),32);
    bufp->fullIData(oldp+25,(vlSelf->cve2_alu__DOT__bwlogic_or_result),32);
    bufp->fullIData(oldp+26,(vlSelf->cve2_alu__DOT__bwlogic_and_result),32);
    bufp->fullIData(oldp+27,(vlSelf->cve2_alu__DOT__bwlogic_xor_result),32);
    bufp->fullIData(oldp+28,(vlSelf->cve2_alu__DOT__bwlogic_result),32);
    bufp->fullIData(oldp+29,(vlSelf->cve2_alu__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[0]),32);
    bufp->fullIData(oldp+30,(vlSelf->cve2_alu__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[1]),32);
    bufp->fullCData(oldp+31,(vlSelf->operator_i),7);
    bufp->fullBit(oldp+32,(vlSelf->clk_i));
    bufp->fullIData(oldp+33,(vlSelf->operand_a_i),32);
    bufp->fullIData(oldp+34,(vlSelf->operand_b_i),32);
    bufp->fullBit(oldp+35,(vlSelf->instr_first_cycle_i));
    bufp->fullQData(oldp+36,(vlSelf->multdiv_operand_a_i),33);
    bufp->fullQData(oldp+38,(vlSelf->multdiv_operand_b_i),33);
    bufp->fullBit(oldp+40,(vlSelf->multdiv_sel_i));
    bufp->fullIData(oldp+41,(vlSelf->imd_val_q_i[0]),32);
    bufp->fullIData(oldp+42,(vlSelf->imd_val_q_i[1]),32);
    bufp->fullIData(oldp+43,(vlSelf->imd_val_d_o[0]),32);
    bufp->fullIData(oldp+44,(vlSelf->imd_val_d_o[1]),32);
    bufp->fullCData(oldp+45,(vlSelf->imd_val_we_o),2);
    bufp->fullIData(oldp+46,(vlSelf->adder_result_o),32);
    bufp->fullQData(oldp+47,(vlSelf->adder_result_ext_o),34);
    bufp->fullIData(oldp+49,(vlSelf->result_o),32);
    bufp->fullBit(oldp+50,(vlSelf->comparison_result_o));
    bufp->fullBit(oldp+51,(vlSelf->is_equal_result_o));
    bufp->fullQData(oldp+52,((0x1ffffffffULL & (~ ((QData)((IData)(vlSelf->operand_b_i)) 
                                                   << 1U)))),33);
    bufp->fullBit(oldp+54,((8U == (IData)(vlSelf->operator_i))));
    bufp->fullCData(oldp+55,((0x1fU & vlSelf->operand_b_i)),6);
    bufp->fullCData(oldp+56,((0x1fU & (vlSelf->operand_b_i 
                                       >> 0x10U))),5);
    bufp->fullIData(oldp+57,(0U),32);
    bufp->fullBit(oldp+58,(0U));
    bufp->fullIData(oldp+59,(0U),32);
    bufp->fullCData(oldp+60,(0U),6);
    bufp->fullIData(oldp+61,(0x20U),32);
    bufp->fullIData(oldp+62,(0x10U),32);
    bufp->fullIData(oldp+63,(8U),32);
    bufp->fullIData(oldp+64,(0U),32);
    bufp->fullIData(oldp+65,(1U),32);
    bufp->fullIData(oldp+66,(2U),32);
    bufp->fullSData(oldp+67,(0x3a0U),12);
    bufp->fullSData(oldp+68,(0x3b0U),12);
    bufp->fullIData(oldp+69,(3U),32);
    bufp->fullIData(oldp+70,(7U),32);
    bufp->fullIData(oldp+71,(0xbU),32);
    bufp->fullIData(oldp+72,(0xcU),32);
    bufp->fullIData(oldp+73,(0x11U),32);
    bufp->fullIData(oldp+74,(0x15U),32);
    bufp->fullCData(oldp+75,(1U),2);
    bufp->fullIData(oldp+76,(0x1eU),32);
    bufp->fullIData(oldp+77,(0x16U),32);
}
