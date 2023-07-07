// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdr32e_dec__Syms.h"


void Vdr32e_dec___024root__trace_chg_sub_0(Vdr32e_dec___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdr32e_dec___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_dec___024root__trace_chg_top_0\n"); );
    // Init
    Vdr32e_dec___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdr32e_dec___024root*>(voidSelf);
    Vdr32e_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdr32e_dec___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vdr32e_dec___024root__trace_chg_sub_0(Vdr32e_dec___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_dec___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->dr32e_dec__DOT__illegal_insn));
        bufp->chgBit(oldp+1,(vlSelf->dr32e_dec__DOT__csr_illegal));
        bufp->chgBit(oldp+2,(vlSelf->dr32e_dec__DOT__rf_we));
        bufp->chgSData(oldp+3,(vlSelf->dr32e_dec__DOT__unused_instr_alu),10);
        bufp->chgCData(oldp+4,(vlSelf->dr32e_dec__DOT__csr_op),2);
        bufp->chgCData(oldp+5,(vlSelf->dr32e_dec__DOT__opcode),7);
        bufp->chgCData(oldp+6,(vlSelf->dr32e_dec__DOT__opcode_alu),7);
    }
    bufp->chgBit(oldp+7,(vlSelf->clk_i));
    bufp->chgBit(oldp+8,(vlSelf->rst_ni));
    bufp->chgBit(oldp+9,(vlSelf->illegal_insn_o));
    bufp->chgBit(oldp+10,(vlSelf->ebrk_insn_o));
    bufp->chgBit(oldp+11,(vlSelf->mret_insn_o));
    bufp->chgBit(oldp+12,(vlSelf->dret_insn_o));
    bufp->chgBit(oldp+13,(vlSelf->ecall_insn_o));
    bufp->chgBit(oldp+14,(vlSelf->wfi_insn_o));
    bufp->chgBit(oldp+15,(vlSelf->jump_set_o));
    bufp->chgBit(oldp+16,(vlSelf->branch_taken_i));
    bufp->chgBit(oldp+17,(vlSelf->icache_inval_o));
    bufp->chgBit(oldp+18,(vlSelf->instr_first_cycle_i));
    bufp->chgIData(oldp+19,(vlSelf->instr_rdata_i),32);
    bufp->chgIData(oldp+20,(vlSelf->instr_rdata_alu_i),32);
    bufp->chgBit(oldp+21,(vlSelf->illegal_c_insn_i));
    bufp->chgBit(oldp+22,(vlSelf->imm_a_mux_sel_o));
    bufp->chgCData(oldp+23,(vlSelf->imm_b_mux_sel_o),3);
    bufp->chgCData(oldp+24,(vlSelf->bt_a_mux_sel_o),2);
    bufp->chgCData(oldp+25,(vlSelf->bt_b_mux_sel_o),3);
    bufp->chgIData(oldp+26,(vlSelf->imm_i_type_o),32);
    bufp->chgIData(oldp+27,(vlSelf->imm_s_type_o),32);
    bufp->chgIData(oldp+28,(vlSelf->imm_b_type_o),32);
    bufp->chgIData(oldp+29,(vlSelf->imm_u_type_o),32);
    bufp->chgIData(oldp+30,(vlSelf->imm_j_type_o),32);
    bufp->chgIData(oldp+31,(vlSelf->zimm_rs1_type_o),32);
    bufp->chgBit(oldp+32,(vlSelf->rf_wdata_sel_o));
    bufp->chgBit(oldp+33,(vlSelf->rf_we_o));
    bufp->chgCData(oldp+34,(vlSelf->rf_raddr_a_o),5);
    bufp->chgCData(oldp+35,(vlSelf->rf_raddr_b_o),5);
    bufp->chgCData(oldp+36,(vlSelf->rf_waddr_o),5);
    bufp->chgBit(oldp+37,(vlSelf->rf_ren_a_o));
    bufp->chgBit(oldp+38,(vlSelf->rf_ren_b_o));
    bufp->chgCData(oldp+39,(vlSelf->alu_operator_o),7);
    bufp->chgCData(oldp+40,(vlSelf->alu_op_a_mux_sel_o),2);
    bufp->chgBit(oldp+41,(vlSelf->alu_op_b_mux_sel_o));
    bufp->chgBit(oldp+42,(vlSelf->alu_multicycle_o));
    bufp->chgBit(oldp+43,(vlSelf->mult_en_o));
    bufp->chgBit(oldp+44,(vlSelf->div_en_o));
    bufp->chgBit(oldp+45,(vlSelf->mult_sel_o));
    bufp->chgBit(oldp+46,(vlSelf->div_sel_o));
    bufp->chgCData(oldp+47,(vlSelf->multdiv_operator_o),2);
    bufp->chgCData(oldp+48,(vlSelf->multdiv_signed_mode_o),2);
    bufp->chgBit(oldp+49,(vlSelf->csr_access_o));
    bufp->chgCData(oldp+50,(vlSelf->csr_op_o),2);
    bufp->chgBit(oldp+51,(vlSelf->data_req_o));
    bufp->chgBit(oldp+52,(vlSelf->data_we_o));
    bufp->chgCData(oldp+53,(vlSelf->data_type_o),2);
    bufp->chgBit(oldp+54,(vlSelf->data_sign_extension_o));
    bufp->chgBit(oldp+55,(vlSelf->jump_in_dec_o));
    bufp->chgBit(oldp+56,(vlSelf->branch_in_dec_o));
    bufp->chgCData(oldp+57,((0x1fU & (vlSelf->instr_rdata_i 
                                      >> 0xfU))),5);
    bufp->chgCData(oldp+58,((vlSelf->instr_rdata_i 
                             >> 0x1bU)),5);
}

void Vdr32e_dec___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_dec___024root__trace_cleanup\n"); );
    // Init
    Vdr32e_dec___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdr32e_dec___024root*>(voidSelf);
    Vdr32e_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
