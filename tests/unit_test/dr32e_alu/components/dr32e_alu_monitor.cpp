#include "Vdr32e_alu.h"
// #include "Vdr32e_alu___024unit.h"
#include "../testb.h"
#include "Vdr32e_alu_dr32e_pkg.h"
#include "dr32e_alu_tbf.h"

ALUInMonitor::ALUInMonitor(TESTB<Vdr32e_alu> *dut, ALUScoreboard *scb) {
  this->dut = dut;
  this->scb = scb;
}

void ALUInMonitor::monitor() {
  ALUInTxn *tx = new ALUInTxn();
  tx->op = ALUInTxn::Operation(dut->m_core->operator_i);
  tx->a = dut->m_core->operand_a_i;
  tx->b = dut->m_core->operand_b_i;

  scb->writeIn(tx);
}

ALUOutMonitor::ALUOutMonitor(TESTB<Vdr32e_alu> *dut, ALUScoreboard *scb) {
  this->dut = dut;
  this->scb = scb;
}

void ALUOutMonitor::monitor() {
  ALUOutTxn *tx = new ALUOutTxn();
  tx->result = dut->m_core->result_o;
  tx->comparison_result = dut->m_core->comparison_result_o;
  tx->is_equal_result = dut->m_core->is_equal_result_o;

  scb->writeOut(tx);
}
