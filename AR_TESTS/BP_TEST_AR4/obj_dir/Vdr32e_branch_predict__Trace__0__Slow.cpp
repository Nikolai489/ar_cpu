// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdr32e_branch_predict__Syms.h"


VL_ATTR_COLD void Vdr32e_branch_predict___024root__trace_init_sub__TOP__0(Vdr32e_branch_predict___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_branch_predict__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_branch_predict___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+9,"clk_i", false,-1);
    tracep->declBit(c+10,"rst_ni", false,-1);
    tracep->declBus(c+11,"fetch_rdata_i", false,-1, 31,0);
    tracep->declBus(c+12,"fetch_pc_i", false,-1, 31,0);
    tracep->declBit(c+13,"fetch_valid_i", false,-1);
    tracep->declBit(c+14,"predict_branch_taken_o", false,-1);
    tracep->declBus(c+15,"predict_branch_pc_o", false,-1, 31,0);
    tracep->pushNamePrefix("dr32e_branch_predict ");
    tracep->declBit(c+9,"clk_i", false,-1);
    tracep->declBit(c+10,"rst_ni", false,-1);
    tracep->declBus(c+11,"fetch_rdata_i", false,-1, 31,0);
    tracep->declBus(c+12,"fetch_pc_i", false,-1, 31,0);
    tracep->declBit(c+13,"fetch_valid_i", false,-1);
    tracep->declBit(c+14,"predict_branch_taken_o", false,-1);
    tracep->declBus(c+15,"predict_branch_pc_o", false,-1, 31,0);
    tracep->declBus(c+1,"imm_j_type", false,-1, 31,0);
    tracep->declBus(c+2,"imm_b_type", false,-1, 31,0);
    tracep->declBus(c+3,"imm_cj_type", false,-1, 31,0);
    tracep->declBus(c+4,"imm_cb_type", false,-1, 31,0);
    tracep->declBus(c+5,"branch_imm", false,-1, 31,0);
    tracep->declBus(c+11,"instr", false,-1, 31,0);
    tracep->declBit(c+16,"instr_j", false,-1);
    tracep->declBit(c+17,"instr_b", false,-1);
    tracep->declBit(c+6,"instr_cj", false,-1);
    tracep->declBit(c+7,"instr_cb", false,-1);
    tracep->declBit(c+8,"instr_b_taken", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vdr32e_branch_predict___024root__trace_init_sub__TOP__dr32e_pkg__0(Vdr32e_branch_predict___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_branch_predict__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_branch_predict___024root__trace_init_sub__TOP__dr32e_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+18,"ExcCauseIrqSoftwareM", false,-1, 6,0);
    tracep->declBus(c+19,"ExcCauseIrqTimerM", false,-1, 6,0);
    tracep->declBus(c+20,"ExcCauseIrqExternalM", false,-1, 6,0);
    tracep->declBus(c+21,"ExcCauseIrqNm", false,-1, 6,0);
    tracep->declBus(c+22,"ExcCauseInsnAddrMisa", false,-1, 6,0);
    tracep->declBus(c+23,"ExcCauseInstrAccessFault", false,-1, 6,0);
    tracep->declBus(c+24,"ExcCauseIllegalInsn", false,-1, 6,0);
    tracep->declBus(c+25,"ExcCauseBreakpoint", false,-1, 6,0);
    tracep->declBus(c+26,"ExcCauseLoadAccessFault", false,-1, 6,0);
    tracep->declBus(c+27,"ExcCauseStoreAccessFault", false,-1, 6,0);
    tracep->declBus(c+28,"ExcCauseEcallUMode", false,-1, 6,0);
    tracep->declBus(c+29,"ExcCauseEcallMMode", false,-1, 6,0);
    tracep->declBus(c+30,"ADDR_W", false,-1, 31,0);
    tracep->declBus(c+30,"BUS_SIZE", false,-1, 31,0);
    tracep->declBus(c+31,"BUS_BYTES", false,-1, 31,0);
    tracep->declBus(c+32,"BUS_W", false,-1, 31,0);
    tracep->declBus(c+33,"IC_SIZE_BYTES", false,-1, 31,0);
    tracep->declBus(c+32,"IC_NUM_WAYS", false,-1, 31,0);
    tracep->declBus(c+34,"IC_LINE_SIZE", false,-1, 31,0);
    tracep->declBus(c+35,"IC_LINE_BYTES", false,-1, 31,0);
    tracep->declBus(c+36,"IC_LINE_W", false,-1, 31,0);
    tracep->declBus(c+37,"IC_NUM_LINES", false,-1, 31,0);
    tracep->declBus(c+32,"IC_LINE_BEATS", false,-1, 31,0);
    tracep->declBus(c+38,"IC_LINE_BEATS_W", false,-1, 31,0);
    tracep->declBus(c+35,"IC_INDEX_W", false,-1, 31,0);
    tracep->declBus(c+39,"IC_INDEX_HI", false,-1, 31,0);
    tracep->declBus(c+40,"IC_TAG_SIZE", false,-1, 31,0);
    tracep->declBus(c+32,"IC_OUTPUT_BEATS", false,-1, 31,0);
    tracep->declBus(c+41,"SCRAMBLE_KEY_W", false,-1, 31,0);
    tracep->declBus(c+34,"SCRAMBLE_NONCE_W", false,-1, 31,0);
    tracep->declBus(c+42,"PMP_MAX_REGIONS", false,-1, 31,0);
    tracep->declBus(c+35,"PMP_CFG_W", false,-1, 31,0);
    tracep->declBus(c+43,"PMP_I", false,-1, 31,0);
    tracep->declBus(c+38,"PMP_I2", false,-1, 31,0);
    tracep->declBus(c+32,"PMP_D", false,-1, 31,0);
    tracep->declBus(c+44,"CSR_OFF_PMP_CFG", false,-1, 11,0);
    tracep->declBus(c+45,"CSR_OFF_PMP_ADDR", false,-1, 11,0);
    tracep->declBus(c+36,"CSR_MSTATUS_MIE_BIT", false,-1, 31,0);
    tracep->declBus(c+46,"CSR_MSTATUS_MPIE_BIT", false,-1, 31,0);
    tracep->declBus(c+47,"CSR_MSTATUS_MPP_BIT_LOW", false,-1, 31,0);
    tracep->declBus(c+48,"CSR_MSTATUS_MPP_BIT_HIGH", false,-1, 31,0);
    tracep->declBus(c+49,"CSR_MSTATUS_MPRV_BIT", false,-1, 31,0);
    tracep->declBus(c+50,"CSR_MSTATUS_TW_BIT", false,-1, 31,0);
    tracep->declBus(c+51,"CSR_MISA_MXL", false,-1, 1,0);
    tracep->declBus(c+36,"CSR_MSIX_BIT", false,-1, 31,0);
    tracep->declBus(c+46,"CSR_MTIX_BIT", false,-1, 31,0);
    tracep->declBus(c+47,"CSR_MEIX_BIT", false,-1, 31,0);
    tracep->declBus(c+42,"CSR_MFIX_BIT_LOW", false,-1, 31,0);
    tracep->declBus(c+52,"CSR_MFIX_BIT_HIGH", false,-1, 31,0);
    tracep->declBus(c+43,"CSR_MSECCFG_MML_BIT", false,-1, 31,0);
    tracep->declBus(c+38,"CSR_MSECCFG_MMWP_BIT", false,-1, 31,0);
    tracep->declBus(c+32,"CSR_MSECCFG_RLB_BIT", false,-1, 31,0);
    tracep->declBus(c+53,"CSR_MVENDORID_VALUE", false,-1, 31,0);
    tracep->declBus(c+54,"CSR_MARCHID_VALUE", false,-1, 31,0);
    tracep->declBus(c+53,"CSR_MIMPID_VALUE", false,-1, 31,0);
    tracep->declBus(c+53,"CSR_MCONFIGPTR_VALUE", false,-1, 31,0);
    tracep->declBus(c+55,"LfsrWidth", false,-1, 31,0);
    tracep->declBus(c+56,"RndCnstLfsrSeedDefault", false,-1, 31,0);
    tracep->declArray(c+57,"RndCnstLfsrPermDefault", false,-1, 159,0);
    tracep->declArray(c+62,"RndCnstIbexKeyDefault", false,-1, 127,0);
    tracep->declQuad(c+66,"RndCnstIbexNonceDefault", false,-1, 63,0);
    tracep->declBus(c+68,"IbexMuBiOn", false,-1, 3,0);
    tracep->declBus(c+69,"IbexMuBiOff", false,-1, 3,0);
}

VL_ATTR_COLD void Vdr32e_branch_predict___024root__trace_init_top(Vdr32e_branch_predict___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_branch_predict__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_branch_predict___024root__trace_init_top\n"); );
    // Body
    Vdr32e_branch_predict___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("dr32e_pkg ");
    Vdr32e_branch_predict___024root__trace_init_sub__TOP__dr32e_pkg__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vdr32e_branch_predict___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdr32e_branch_predict___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdr32e_branch_predict___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdr32e_branch_predict___024root__trace_register(Vdr32e_branch_predict___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_branch_predict__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_branch_predict___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vdr32e_branch_predict___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vdr32e_branch_predict___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vdr32e_branch_predict___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdr32e_branch_predict___024root__trace_full_sub_0(Vdr32e_branch_predict___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdr32e_branch_predict___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_branch_predict___024root__trace_full_top_0\n"); );
    // Init
    Vdr32e_branch_predict___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdr32e_branch_predict___024root*>(voidSelf);
    Vdr32e_branch_predict__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdr32e_branch_predict___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdr32e_branch_predict___024root__trace_full_sub_0(Vdr32e_branch_predict___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_branch_predict__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_branch_predict___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<5>/*159:0*/ __Vtemp_h0a0ed2f2__0;
    VlWide<4>/*127:0*/ __Vtemp_h5b9ef509__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->dr32e_branch_predict__DOT__imm_j_type),32);
    bufp->fullIData(oldp+2,(vlSelf->dr32e_branch_predict__DOT__imm_b_type),32);
    bufp->fullIData(oldp+3,(vlSelf->dr32e_branch_predict__DOT__imm_cj_type),32);
    bufp->fullIData(oldp+4,(vlSelf->dr32e_branch_predict__DOT__imm_cb_type),32);
    bufp->fullIData(oldp+5,(vlSelf->dr32e_branch_predict__DOT__branch_imm),32);
    bufp->fullBit(oldp+6,(vlSelf->dr32e_branch_predict__DOT__instr_cj));
    bufp->fullBit(oldp+7,(vlSelf->dr32e_branch_predict__DOT__instr_cb));
    bufp->fullBit(oldp+8,(vlSelf->dr32e_branch_predict__DOT__instr_b_taken));
    bufp->fullBit(oldp+9,(vlSelf->clk_i));
    bufp->fullBit(oldp+10,(vlSelf->rst_ni));
    bufp->fullIData(oldp+11,(vlSelf->fetch_rdata_i),32);
    bufp->fullIData(oldp+12,(vlSelf->fetch_pc_i),32);
    bufp->fullBit(oldp+13,(vlSelf->fetch_valid_i));
    bufp->fullBit(oldp+14,(vlSelf->predict_branch_taken_o));
    bufp->fullIData(oldp+15,(vlSelf->predict_branch_pc_o),32);
    bufp->fullBit(oldp+16,((0x6fU == (0x7fU & vlSelf->fetch_rdata_i))));
    bufp->fullBit(oldp+17,((0x63U == (0x7fU & vlSelf->fetch_rdata_i))));
    bufp->fullCData(oldp+18,(0x23U),7);
    bufp->fullCData(oldp+19,(0x27U),7);
    bufp->fullCData(oldp+20,(0x2bU),7);
    bufp->fullCData(oldp+21,(0x3fU),7);
    bufp->fullCData(oldp+22,(0U),7);
    bufp->fullCData(oldp+23,(1U),7);
    bufp->fullCData(oldp+24,(2U),7);
    bufp->fullCData(oldp+25,(3U),7);
    bufp->fullCData(oldp+26,(5U),7);
    bufp->fullCData(oldp+27,(7U),7);
    bufp->fullCData(oldp+28,(8U),7);
    bufp->fullCData(oldp+29,(0xbU),7);
    bufp->fullIData(oldp+30,(0x20U),32);
    bufp->fullIData(oldp+31,(4U),32);
    bufp->fullIData(oldp+32,(2U),32);
    bufp->fullIData(oldp+33,(0x1000U),32);
    bufp->fullIData(oldp+34,(0x40U),32);
    bufp->fullIData(oldp+35,(8U),32);
    bufp->fullIData(oldp+36,(3U),32);
    bufp->fullIData(oldp+37,(0x100U),32);
    bufp->fullIData(oldp+38,(1U),32);
    bufp->fullIData(oldp+39,(0xaU),32);
    bufp->fullIData(oldp+40,(0x16U),32);
    bufp->fullIData(oldp+41,(0x80U),32);
    bufp->fullIData(oldp+42,(0x10U),32);
    bufp->fullIData(oldp+43,(0U),32);
    bufp->fullSData(oldp+44,(0x3a0U),12);
    bufp->fullSData(oldp+45,(0x3b0U),12);
    bufp->fullIData(oldp+46,(7U),32);
    bufp->fullIData(oldp+47,(0xbU),32);
    bufp->fullIData(oldp+48,(0xcU),32);
    bufp->fullIData(oldp+49,(0x11U),32);
    bufp->fullIData(oldp+50,(0x15U),32);
    bufp->fullCData(oldp+51,(1U),2);
    bufp->fullIData(oldp+52,(0x1eU),32);
    bufp->fullIData(oldp+53,(0U),32);
    bufp->fullIData(oldp+54,(0x16U),32);
    bufp->fullIData(oldp+55,(0x20U),32);
    bufp->fullIData(oldp+56,(0xac533bf4U),32);
    __Vtemp_h0a0ed2f2__0[0U] = 0x78a8daedU;
    __Vtemp_h0a0ed2f2__0[1U] = 0xc04fa438U;
    __Vtemp_h0a0ed2f2__0[2U] = 0x2e958152U;
    __Vtemp_h0a0ed2f2__0[3U] = 0x467fd1b1U;
    __Vtemp_h0a0ed2f2__0[4U] = 0x1e35ecbaU;
    bufp->fullWData(oldp+57,(__Vtemp_h0a0ed2f2__0),160);
    __Vtemp_h5b9ef509__0[0U] = 0xcc113298U;
    __Vtemp_h5b9ef509__0[1U] = 0x12286bb3U;
    __Vtemp_h5b9ef509__0[2U] = 0xe3040d5eU;
    __Vtemp_h5b9ef509__0[3U] = 0x14e8cecaU;
    bufp->fullWData(oldp+62,(__Vtemp_h5b9ef509__0),128);
    bufp->fullQData(oldp+66,(0xf79780bc735f3843ULL),64);
    bufp->fullCData(oldp+68,(5U),4);
    bufp->fullCData(oldp+69,(0xaU),4);
}
