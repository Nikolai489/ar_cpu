#include "cve2_alu_tbf.h"

#include "Vcve2_alu.h"
#include "Vcve2_alu___024unit.h"
#include "Vcve2_alu_cve2_pkg.h"
#include "testb.h"

ALUInMonitor::ALUInMonitor(TESTB<Vcve2_alu> *dut, ALUScoreboard *scb) {
  this->dut = dut;
  this->scb = scb;
}

void ALUInMonitor::monitor() {
  // TODO: Monitor at half clock cycle
  ALUInTxn *tx = new ALUInTxn();
  tx->op = ALUInTxn::Operation(dut->m_core->operator_i);
  tx->a = dut->m_core->operand_a_i;
  tx->b = dut->m_core->operand_b_i;

  scb->writeIn(tx);
}

ALUOutMonitor::ALUOutMonitor(TESTB<Vcve2_alu> *dut, ALUScoreboard *scb) {
  this->dut = dut;
  this->scb = scb;
}

void ALUOutMonitor::monitor() {
  // TODO: Monitor at half clock cycle
  ALUOutTxn *tx = new ALUOutTxn();
  tx->result = dut->m_core->result_o;
  tx->comparison_result = dut->m_core->comparison_result_o;
  tx->is_equal_result = dut->m_core->is_equal_result_o;

  scb->writeOut(tx);
}