// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdr32e_dec__Syms.h"


VL_ATTR_COLD void Vdr32e_dec___024root__trace_init_sub__TOP__0(Vdr32e_dec___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_dec___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+8,"clk_i", false,-1);
    tracep->declBit(c+9,"rst_ni", false,-1);
    tracep->declBit(c+10,"illegal_insn_o", false,-1);
    tracep->declBit(c+11,"ebrk_insn_o", false,-1);
    tracep->declBit(c+12,"mret_insn_o", false,-1);
    tracep->declBit(c+13,"dret_insn_o", false,-1);
    tracep->declBit(c+14,"ecall_insn_o", false,-1);
    tracep->declBit(c+15,"wfi_insn_o", false,-1);
    tracep->declBit(c+16,"jump_set_o", false,-1);
    tracep->declBit(c+17,"branch_taken_i", false,-1);
    tracep->declBit(c+18,"icache_inval_o", false,-1);
    tracep->declBit(c+19,"instr_first_cycle_i", false,-1);
    tracep->declBus(c+20,"instr_rdata_i", false,-1, 31,0);
    tracep->declBus(c+21,"instr_rdata_alu_i", false,-1, 31,0);
    tracep->declBit(c+22,"illegal_c_insn_i", false,-1);
    tracep->declBit(c+23,"imm_a_mux_sel_o", false,-1);
    tracep->declBus(c+24,"imm_b_mux_sel_o", false,-1, 2,0);
    tracep->declBus(c+25,"bt_a_mux_sel_o", false,-1, 1,0);
    tracep->declBus(c+26,"bt_b_mux_sel_o", false,-1, 2,0);
    tracep->declBus(c+27,"imm_i_type_o", false,-1, 31,0);
    tracep->declBus(c+28,"imm_s_type_o", false,-1, 31,0);
    tracep->declBus(c+29,"imm_b_type_o", false,-1, 31,0);
    tracep->declBus(c+30,"imm_u_type_o", false,-1, 31,0);
    tracep->declBus(c+31,"imm_j_type_o", false,-1, 31,0);
    tracep->declBus(c+32,"zimm_rs1_type_o", false,-1, 31,0);
    tracep->declBit(c+33,"rf_wdata_sel_o", false,-1);
    tracep->declBit(c+34,"rf_we_o", false,-1);
    tracep->declBus(c+35,"rf_raddr_a_o", false,-1, 4,0);
    tracep->declBus(c+36,"rf_raddr_b_o", false,-1, 4,0);
    tracep->declBus(c+37,"rf_waddr_o", false,-1, 4,0);
    tracep->declBit(c+38,"rf_ren_a_o", false,-1);
    tracep->declBit(c+39,"rf_ren_b_o", false,-1);
    tracep->declBus(c+40,"alu_operator_o", false,-1, 6,0);
    tracep->declBus(c+41,"alu_op_a_mux_sel_o", false,-1, 1,0);
    tracep->declBit(c+42,"alu_op_b_mux_sel_o", false,-1);
    tracep->declBit(c+43,"alu_multicycle_o", false,-1);
    tracep->declBit(c+44,"mult_en_o", false,-1);
    tracep->declBit(c+45,"div_en_o", false,-1);
    tracep->declBit(c+46,"mult_sel_o", false,-1);
    tracep->declBit(c+47,"div_sel_o", false,-1);
    tracep->declBus(c+48,"multdiv_operator_o", false,-1, 1,0);
    tracep->declBus(c+49,"multdiv_signed_mode_o", false,-1, 1,0);
    tracep->declBit(c+50,"csr_access_o", false,-1);
    tracep->declBus(c+51,"csr_op_o", false,-1, 1,0);
    tracep->declBit(c+52,"data_req_o", false,-1);
    tracep->declBit(c+53,"data_we_o", false,-1);
    tracep->declBus(c+54,"data_type_o", false,-1, 1,0);
    tracep->declBit(c+55,"data_sign_extension_o", false,-1);
    tracep->declBit(c+56,"jump_in_dec_o", false,-1);
    tracep->declBit(c+57,"branch_in_dec_o", false,-1);
    tracep->pushNamePrefix("dr32e_dec ");
    tracep->declBit(c+60,"RV32E", false,-1);
    tracep->declBus(c+61,"RV32M", false,-1, 31,0);
    tracep->declBus(c+62,"RV32B", false,-1, 31,0);
    tracep->declBit(c+60,"BranchTargetALU", false,-1);
    tracep->declBit(c+8,"clk_i", false,-1);
    tracep->declBit(c+9,"rst_ni", false,-1);
    tracep->declBit(c+10,"illegal_insn_o", false,-1);
    tracep->declBit(c+11,"ebrk_insn_o", false,-1);
    tracep->declBit(c+12,"mret_insn_o", false,-1);
    tracep->declBit(c+13,"dret_insn_o", false,-1);
    tracep->declBit(c+14,"ecall_insn_o", false,-1);
    tracep->declBit(c+15,"wfi_insn_o", false,-1);
    tracep->declBit(c+16,"jump_set_o", false,-1);
    tracep->declBit(c+17,"branch_taken_i", false,-1);
    tracep->declBit(c+18,"icache_inval_o", false,-1);
    tracep->declBit(c+19,"instr_first_cycle_i", false,-1);
    tracep->declBus(c+20,"instr_rdata_i", false,-1, 31,0);
    tracep->declBus(c+21,"instr_rdata_alu_i", false,-1, 31,0);
    tracep->declBit(c+22,"illegal_c_insn_i", false,-1);
    tracep->declBit(c+23,"imm_a_mux_sel_o", false,-1);
    tracep->declBus(c+24,"imm_b_mux_sel_o", false,-1, 2,0);
    tracep->declBus(c+25,"bt_a_mux_sel_o", false,-1, 1,0);
    tracep->declBus(c+26,"bt_b_mux_sel_o", false,-1, 2,0);
    tracep->declBus(c+27,"imm_i_type_o", false,-1, 31,0);
    tracep->declBus(c+28,"imm_s_type_o", false,-1, 31,0);
    tracep->declBus(c+29,"imm_b_type_o", false,-1, 31,0);
    tracep->declBus(c+30,"imm_u_type_o", false,-1, 31,0);
    tracep->declBus(c+31,"imm_j_type_o", false,-1, 31,0);
    tracep->declBus(c+32,"zimm_rs1_type_o", false,-1, 31,0);
    tracep->declBit(c+33,"rf_wdata_sel_o", false,-1);
    tracep->declBit(c+34,"rf_we_o", false,-1);
    tracep->declBus(c+35,"rf_raddr_a_o", false,-1, 4,0);
    tracep->declBus(c+36,"rf_raddr_b_o", false,-1, 4,0);
    tracep->declBus(c+37,"rf_waddr_o", false,-1, 4,0);
    tracep->declBit(c+38,"rf_ren_a_o", false,-1);
    tracep->declBit(c+39,"rf_ren_b_o", false,-1);
    tracep->declBus(c+40,"alu_operator_o", false,-1, 6,0);
    tracep->declBus(c+41,"alu_op_a_mux_sel_o", false,-1, 1,0);
    tracep->declBit(c+42,"alu_op_b_mux_sel_o", false,-1);
    tracep->declBit(c+43,"alu_multicycle_o", false,-1);
    tracep->declBit(c+44,"mult_en_o", false,-1);
    tracep->declBit(c+45,"div_en_o", false,-1);
    tracep->declBit(c+46,"mult_sel_o", false,-1);
    tracep->declBit(c+47,"div_sel_o", false,-1);
    tracep->declBus(c+48,"multdiv_operator_o", false,-1, 1,0);
    tracep->declBus(c+49,"multdiv_signed_mode_o", false,-1, 1,0);
    tracep->declBit(c+50,"csr_access_o", false,-1);
    tracep->declBus(c+51,"csr_op_o", false,-1, 1,0);
    tracep->declBit(c+52,"data_req_o", false,-1);
    tracep->declBit(c+53,"data_we_o", false,-1);
    tracep->declBus(c+54,"data_type_o", false,-1, 1,0);
    tracep->declBit(c+55,"data_sign_extension_o", false,-1);
    tracep->declBit(c+56,"jump_in_dec_o", false,-1);
    tracep->declBit(c+57,"branch_in_dec_o", false,-1);
    tracep->declBit(c+1,"illegal_insn", false,-1);
    tracep->declBit(c+63,"illegal_reg_rv32e", false,-1);
    tracep->declBit(c+2,"csr_illegal", false,-1);
    tracep->declBit(c+3,"rf_we", false,-1);
    tracep->declBus(c+20,"instr", false,-1, 31,0);
    tracep->declBus(c+21,"instr_alu", false,-1, 31,0);
    tracep->declBus(c+4,"unused_instr_alu", false,-1, 9,0);
    tracep->declBus(c+58,"instr_rs1", false,-1, 4,0);
    tracep->declBus(c+36,"instr_rs2", false,-1, 4,0);
    tracep->declBus(c+59,"instr_rs3", false,-1, 4,0);
    tracep->declBus(c+37,"instr_rd", false,-1, 4,0);
    tracep->declBit(c+63,"use_rs3_d", false,-1);
    tracep->declBit(c+63,"use_rs3_q", false,-1);
    tracep->declBus(c+5,"csr_op", false,-1, 1,0);
    tracep->declBus(c+6,"opcode", false,-1, 6,0);
    tracep->declBus(c+7,"opcode_alu", false,-1, 6,0);
    tracep->pushNamePrefix("gen_no_rs3_flop ");
    tracep->declBit(c+8,"unused_clk", false,-1);
    tracep->declBit(c+9,"unused_rst_n", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vdr32e_dec___024root__trace_init_sub__TOP__dr32e_pkg__0(Vdr32e_dec___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_dec___024root__trace_init_sub__TOP__dr32e_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+64,"ExcCauseIrqSoftwareM", false,-1, 6,0);
    tracep->declBus(c+65,"ExcCauseIrqTimerM", false,-1, 6,0);
    tracep->declBus(c+66,"ExcCauseIrqExternalM", false,-1, 6,0);
    tracep->declBus(c+67,"ExcCauseIrqNm", false,-1, 6,0);
    tracep->declBus(c+68,"ExcCauseInsnAddrMisa", false,-1, 6,0);
    tracep->declBus(c+69,"ExcCauseInstrAccessFault", false,-1, 6,0);
    tracep->declBus(c+70,"ExcCauseIllegalInsn", false,-1, 6,0);
    tracep->declBus(c+71,"ExcCauseBreakpoint", false,-1, 6,0);
    tracep->declBus(c+72,"ExcCauseLoadAccessFault", false,-1, 6,0);
    tracep->declBus(c+73,"ExcCauseStoreAccessFault", false,-1, 6,0);
    tracep->declBus(c+74,"ExcCauseEcallUMode", false,-1, 6,0);
    tracep->declBus(c+75,"ExcCauseEcallMMode", false,-1, 6,0);
    tracep->declBus(c+76,"ADDR_W", false,-1, 31,0);
    tracep->declBus(c+76,"BUS_SIZE", false,-1, 31,0);
    tracep->declBus(c+77,"BUS_BYTES", false,-1, 31,0);
    tracep->declBus(c+78,"BUS_W", false,-1, 31,0);
    tracep->declBus(c+79,"IC_SIZE_BYTES", false,-1, 31,0);
    tracep->declBus(c+78,"IC_NUM_WAYS", false,-1, 31,0);
    tracep->declBus(c+80,"IC_LINE_SIZE", false,-1, 31,0);
    tracep->declBus(c+81,"IC_LINE_BYTES", false,-1, 31,0);
    tracep->declBus(c+82,"IC_LINE_W", false,-1, 31,0);
    tracep->declBus(c+83,"IC_NUM_LINES", false,-1, 31,0);
    tracep->declBus(c+78,"IC_LINE_BEATS", false,-1, 31,0);
    tracep->declBus(c+84,"IC_LINE_BEATS_W", false,-1, 31,0);
    tracep->declBus(c+81,"IC_INDEX_W", false,-1, 31,0);
    tracep->declBus(c+85,"IC_INDEX_HI", false,-1, 31,0);
    tracep->declBus(c+86,"IC_TAG_SIZE", false,-1, 31,0);
    tracep->declBus(c+78,"IC_OUTPUT_BEATS", false,-1, 31,0);
    tracep->declBus(c+87,"SCRAMBLE_KEY_W", false,-1, 31,0);
    tracep->declBus(c+80,"SCRAMBLE_NONCE_W", false,-1, 31,0);
    tracep->declBus(c+88,"PMP_MAX_REGIONS", false,-1, 31,0);
    tracep->declBus(c+81,"PMP_CFG_W", false,-1, 31,0);
    tracep->declBus(c+89,"PMP_I", false,-1, 31,0);
    tracep->declBus(c+84,"PMP_I2", false,-1, 31,0);
    tracep->declBus(c+78,"PMP_D", false,-1, 31,0);
    tracep->declBus(c+90,"CSR_OFF_PMP_CFG", false,-1, 11,0);
    tracep->declBus(c+91,"CSR_OFF_PMP_ADDR", false,-1, 11,0);
    tracep->declBus(c+82,"CSR_MSTATUS_MIE_BIT", false,-1, 31,0);
    tracep->declBus(c+92,"CSR_MSTATUS_MPIE_BIT", false,-1, 31,0);
    tracep->declBus(c+93,"CSR_MSTATUS_MPP_BIT_LOW", false,-1, 31,0);
    tracep->declBus(c+94,"CSR_MSTATUS_MPP_BIT_HIGH", false,-1, 31,0);
    tracep->declBus(c+95,"CSR_MSTATUS_MPRV_BIT", false,-1, 31,0);
    tracep->declBus(c+96,"CSR_MSTATUS_TW_BIT", false,-1, 31,0);
    tracep->declBus(c+97,"CSR_MISA_MXL", false,-1, 1,0);
    tracep->declBus(c+82,"CSR_MSIX_BIT", false,-1, 31,0);
    tracep->declBus(c+92,"CSR_MTIX_BIT", false,-1, 31,0);
    tracep->declBus(c+93,"CSR_MEIX_BIT", false,-1, 31,0);
    tracep->declBus(c+88,"CSR_MFIX_BIT_LOW", false,-1, 31,0);
    tracep->declBus(c+98,"CSR_MFIX_BIT_HIGH", false,-1, 31,0);
    tracep->declBus(c+89,"CSR_MSECCFG_MML_BIT", false,-1, 31,0);
    tracep->declBus(c+84,"CSR_MSECCFG_MMWP_BIT", false,-1, 31,0);
    tracep->declBus(c+78,"CSR_MSECCFG_RLB_BIT", false,-1, 31,0);
    tracep->declBus(c+99,"CSR_MVENDORID_VALUE", false,-1, 31,0);
    tracep->declBus(c+100,"CSR_MARCHID_VALUE", false,-1, 31,0);
    tracep->declBus(c+99,"CSR_MIMPID_VALUE", false,-1, 31,0);
    tracep->declBus(c+99,"CSR_MCONFIGPTR_VALUE", false,-1, 31,0);
    tracep->declBus(c+101,"LfsrWidth", false,-1, 31,0);
    tracep->declBus(c+102,"RndCnstLfsrSeedDefault", false,-1, 31,0);
    tracep->declArray(c+103,"RndCnstLfsrPermDefault", false,-1, 159,0);
    tracep->declArray(c+108,"RndCnstIbexKeyDefault", false,-1, 127,0);
    tracep->declQuad(c+112,"RndCnstIbexNonceDefault", false,-1, 63,0);
    tracep->declBus(c+114,"IbexMuBiOn", false,-1, 3,0);
    tracep->declBus(c+115,"IbexMuBiOff", false,-1, 3,0);
}

VL_ATTR_COLD void Vdr32e_dec___024root__trace_init_top(Vdr32e_dec___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_dec___024root__trace_init_top\n"); );
    // Body
    Vdr32e_dec___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("dr32e_pkg ");
    Vdr32e_dec___024root__trace_init_sub__TOP__dr32e_pkg__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vdr32e_dec___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdr32e_dec___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdr32e_dec___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdr32e_dec___024root__trace_register(Vdr32e_dec___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_dec___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vdr32e_dec___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vdr32e_dec___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vdr32e_dec___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdr32e_dec___024root__trace_full_sub_0(Vdr32e_dec___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdr32e_dec___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_dec___024root__trace_full_top_0\n"); );
    // Init
    Vdr32e_dec___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdr32e_dec___024root*>(voidSelf);
    Vdr32e_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdr32e_dec___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdr32e_dec___024root__trace_full_sub_0(Vdr32e_dec___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_dec___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<5>/*159:0*/ __Vtemp_h0a0ed2f2__0;
    VlWide<4>/*127:0*/ __Vtemp_h5b9ef509__0;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->dr32e_dec__DOT__illegal_insn));
    bufp->fullBit(oldp+2,(vlSelf->dr32e_dec__DOT__csr_illegal));
    bufp->fullBit(oldp+3,(vlSelf->dr32e_dec__DOT__rf_we));
    bufp->fullSData(oldp+4,(vlSelf->dr32e_dec__DOT__unused_instr_alu),10);
    bufp->fullCData(oldp+5,(vlSelf->dr32e_dec__DOT__csr_op),2);
    bufp->fullCData(oldp+6,(vlSelf->dr32e_dec__DOT__opcode),7);
    bufp->fullCData(oldp+7,(vlSelf->dr32e_dec__DOT__opcode_alu),7);
    bufp->fullBit(oldp+8,(vlSelf->clk_i));
    bufp->fullBit(oldp+9,(vlSelf->rst_ni));
    bufp->fullBit(oldp+10,(vlSelf->illegal_insn_o));
    bufp->fullBit(oldp+11,(vlSelf->ebrk_insn_o));
    bufp->fullBit(oldp+12,(vlSelf->mret_insn_o));
    bufp->fullBit(oldp+13,(vlSelf->dret_insn_o));
    bufp->fullBit(oldp+14,(vlSelf->ecall_insn_o));
    bufp->fullBit(oldp+15,(vlSelf->wfi_insn_o));
    bufp->fullBit(oldp+16,(vlSelf->jump_set_o));
    bufp->fullBit(oldp+17,(vlSelf->branch_taken_i));
    bufp->fullBit(oldp+18,(vlSelf->icache_inval_o));
    bufp->fullBit(oldp+19,(vlSelf->instr_first_cycle_i));
    bufp->fullIData(oldp+20,(vlSelf->instr_rdata_i),32);
    bufp->fullIData(oldp+21,(vlSelf->instr_rdata_alu_i),32);
    bufp->fullBit(oldp+22,(vlSelf->illegal_c_insn_i));
    bufp->fullBit(oldp+23,(vlSelf->imm_a_mux_sel_o));
    bufp->fullCData(oldp+24,(vlSelf->imm_b_mux_sel_o),3);
    bufp->fullCData(oldp+25,(vlSelf->bt_a_mux_sel_o),2);
    bufp->fullCData(oldp+26,(vlSelf->bt_b_mux_sel_o),3);
    bufp->fullIData(oldp+27,(vlSelf->imm_i_type_o),32);
    bufp->fullIData(oldp+28,(vlSelf->imm_s_type_o),32);
    bufp->fullIData(oldp+29,(vlSelf->imm_b_type_o),32);
    bufp->fullIData(oldp+30,(vlSelf->imm_u_type_o),32);
    bufp->fullIData(oldp+31,(vlSelf->imm_j_type_o),32);
    bufp->fullIData(oldp+32,(vlSelf->zimm_rs1_type_o),32);
    bufp->fullBit(oldp+33,(vlSelf->rf_wdata_sel_o));
    bufp->fullBit(oldp+34,(vlSelf->rf_we_o));
    bufp->fullCData(oldp+35,(vlSelf->rf_raddr_a_o),5);
    bufp->fullCData(oldp+36,(vlSelf->rf_raddr_b_o),5);
    bufp->fullCData(oldp+37,(vlSelf->rf_waddr_o),5);
    bufp->fullBit(oldp+38,(vlSelf->rf_ren_a_o));
    bufp->fullBit(oldp+39,(vlSelf->rf_ren_b_o));
    bufp->fullCData(oldp+40,(vlSelf->alu_operator_o),7);
    bufp->fullCData(oldp+41,(vlSelf->alu_op_a_mux_sel_o),2);
    bufp->fullBit(oldp+42,(vlSelf->alu_op_b_mux_sel_o));
    bufp->fullBit(oldp+43,(vlSelf->alu_multicycle_o));
    bufp->fullBit(oldp+44,(vlSelf->mult_en_o));
    bufp->fullBit(oldp+45,(vlSelf->div_en_o));
    bufp->fullBit(oldp+46,(vlSelf->mult_sel_o));
    bufp->fullBit(oldp+47,(vlSelf->div_sel_o));
    bufp->fullCData(oldp+48,(vlSelf->multdiv_operator_o),2);
    bufp->fullCData(oldp+49,(vlSelf->multdiv_signed_mode_o),2);
    bufp->fullBit(oldp+50,(vlSelf->csr_access_o));
    bufp->fullCData(oldp+51,(vlSelf->csr_op_o),2);
    bufp->fullBit(oldp+52,(vlSelf->data_req_o));
    bufp->fullBit(oldp+53,(vlSelf->data_we_o));
    bufp->fullCData(oldp+54,(vlSelf->data_type_o),2);
    bufp->fullBit(oldp+55,(vlSelf->data_sign_extension_o));
    bufp->fullBit(oldp+56,(vlSelf->jump_in_dec_o));
    bufp->fullBit(oldp+57,(vlSelf->branch_in_dec_o));
    bufp->fullCData(oldp+58,((0x1fU & (vlSelf->instr_rdata_i 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+59,((vlSelf->instr_rdata_i 
                              >> 0x1bU)),5);
    bufp->fullBit(oldp+60,(0U));
    bufp->fullIData(oldp+61,(2U),32);
    bufp->fullIData(oldp+62,(0U),32);
    bufp->fullBit(oldp+63,(0U));
    bufp->fullCData(oldp+64,(0x23U),7);
    bufp->fullCData(oldp+65,(0x27U),7);
    bufp->fullCData(oldp+66,(0x2bU),7);
    bufp->fullCData(oldp+67,(0x3fU),7);
    bufp->fullCData(oldp+68,(0U),7);
    bufp->fullCData(oldp+69,(1U),7);
    bufp->fullCData(oldp+70,(2U),7);
    bufp->fullCData(oldp+71,(3U),7);
    bufp->fullCData(oldp+72,(5U),7);
    bufp->fullCData(oldp+73,(7U),7);
    bufp->fullCData(oldp+74,(8U),7);
    bufp->fullCData(oldp+75,(0xbU),7);
    bufp->fullIData(oldp+76,(0x20U),32);
    bufp->fullIData(oldp+77,(4U),32);
    bufp->fullIData(oldp+78,(2U),32);
    bufp->fullIData(oldp+79,(0x1000U),32);
    bufp->fullIData(oldp+80,(0x40U),32);
    bufp->fullIData(oldp+81,(8U),32);
    bufp->fullIData(oldp+82,(3U),32);
    bufp->fullIData(oldp+83,(0x100U),32);
    bufp->fullIData(oldp+84,(1U),32);
    bufp->fullIData(oldp+85,(0xaU),32);
    bufp->fullIData(oldp+86,(0x16U),32);
    bufp->fullIData(oldp+87,(0x80U),32);
    bufp->fullIData(oldp+88,(0x10U),32);
    bufp->fullIData(oldp+89,(0U),32);
    bufp->fullSData(oldp+90,(0x3a0U),12);
    bufp->fullSData(oldp+91,(0x3b0U),12);
    bufp->fullIData(oldp+92,(7U),32);
    bufp->fullIData(oldp+93,(0xbU),32);
    bufp->fullIData(oldp+94,(0xcU),32);
    bufp->fullIData(oldp+95,(0x11U),32);
    bufp->fullIData(oldp+96,(0x15U),32);
    bufp->fullCData(oldp+97,(1U),2);
    bufp->fullIData(oldp+98,(0x1eU),32);
    bufp->fullIData(oldp+99,(0U),32);
    bufp->fullIData(oldp+100,(0x16U),32);
    bufp->fullIData(oldp+101,(0x20U),32);
    bufp->fullIData(oldp+102,(0xac533bf4U),32);
    __Vtemp_h0a0ed2f2__0[0U] = 0x78a8daedU;
    __Vtemp_h0a0ed2f2__0[1U] = 0xc04fa438U;
    __Vtemp_h0a0ed2f2__0[2U] = 0x2e958152U;
    __Vtemp_h0a0ed2f2__0[3U] = 0x467fd1b1U;
    __Vtemp_h0a0ed2f2__0[4U] = 0x1e35ecbaU;
    bufp->fullWData(oldp+103,(__Vtemp_h0a0ed2f2__0),160);
    __Vtemp_h5b9ef509__0[0U] = 0xcc113298U;
    __Vtemp_h5b9ef509__0[1U] = 0x12286bb3U;
    __Vtemp_h5b9ef509__0[2U] = 0xe3040d5eU;
    __Vtemp_h5b9ef509__0[3U] = 0x14e8cecaU;
    bufp->fullWData(oldp+108,(__Vtemp_h5b9ef509__0),128);
    bufp->fullQData(oldp+112,(0xf79780bc735f3843ULL),64);
    bufp->fullCData(oldp+114,(5U),4);
    bufp->fullCData(oldp+115,(0xaU),4);
}
