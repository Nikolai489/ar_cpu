#include "dr32e_dec_tbf.h"

#include "Vdr32e_dec.h"
//#include "Vdr32e_dec___024unit.h"
#include "Vdr32e_dec_dr32e_pkg.h"
#include "../testb.h"

DECInMonitor::DECInMonitor(TESTB<Vdr32e_dec> *dut, DECScoreboard *scb) {
  this->dut = dut;
  this->scb = scb;
}

void DECInMonitor::monitor() {
  DECInTxn *tx = new DECInTxn();
  tx->instr = dut->m_core->instr_rdata_i;
  scb->writeIn(tx);
}

DECOutMonitor::DECOutMonitor(TESTB<Vdr32e_dec> *dut, DECScoreboard *scb) {
  this->dut = dut;
  this->scb = scb;
}

void DECOutMonitor::monitor() {
  DECOutTxn *tx = new DECOutTxn();
  tx->illegal_instr = dut->m_core->illegal_insn_o;
  tx->jump_set = dut->m_core->jump_in_dec_o;
  tx->branch_instr = dut->m_core->branch_in_dec_o;
  tx->wfi_instr = dut->m_core->wfi_insn_o;
  tx->ecall_instr = dut->m_core->ecall_insn_o;
  tx->ebreak_instr = dut->m_core->ebrk_insn_o;
  tx->debug_instr = dut->m_core->dret_insn_o;
  tx->mret_instr = dut->m_core->mret_insn_o;
  tx->csr_access = dut->m_core->csr_access_o;
  tx->csr_op = dut->m_core->csr_op_o;
  tx->store_instr = dut->m_core->data_we_o;
  tx->imm_i = dut->m_core->imm_i_type_o;
  tx->imm_b = dut->m_core->imm_b_type_o;
  tx->imm_u = dut->m_core->imm_u_type_o;
  tx->imm_j = dut->m_core->imm_j_type_o;
  tx->imm_s = dut->m_core->imm_s_type_o;
  tx->data_req = dut->m_core->data_req_o;
  tx->data_type = dut->m_core->data_type_o;
  tx->data_we = dut->m_core->data_we_o;
  tx->data_sign_ext = dut->m_core->data_sign_extension_o;
  tx->imm_a_sel_o = dut->m_core->imm_a_mux_sel_o;
  tx->imm_b_sel_o = dut->m_core->imm_b_mux_sel_o;
  tx->bt_a_sel = dut->m_core->bt_a_mux_sel_o;
  tx->bt_b_sel = dut->m_core->bt_b_mux_sel_o;
  tx->op_a_sel_o = dut->m_core->alu_op_a_mux_sel_o;
  tx->op_b_sel_o = dut->m_core->alu_op_b_mux_sel_o;
  tx->op_o = dut->m_core->alu_operator_o;
  tx->rf_ra = dut->m_core->rf_raddr_a_o;
  tx->rf_rb = dut->m_core->rf_raddr_b_o;
  tx->rf_we = dut->m_core->rf_we_o;
  scb->writeOut(tx);
}