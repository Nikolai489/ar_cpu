#include "cve2_dec_tbf.h"

#include "Vcve2_dec.h"
#include "Vcve2_dec___024unit.h"
#include "Vcve2_dec_cve2_pkg.h"
#include "testb.h"

DECInMonitor::DECInMonitor(TESTB<Vcve2_dec> *dut, DECScoreboard *scb) {
  this->dut = dut;
  this->scb = scb;
}

void DECInMonitor::monitor() {
  DECInTxn *tx = new DECInTxn();
  tx->instr = dut->m_core->instr_rdata_i;
  scb->writeIn(tx);
}

DECOutMonitor::DECOutMonitor(TESTB<Vcve2_dec> *dut, DECScoreboard *scb) {
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
  tx->store_instr = dut->m_core->data_we_o;
  scb->writeOut(tx);
}