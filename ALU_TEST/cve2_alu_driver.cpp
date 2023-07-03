#include "cve2_alu_tbf.h"

#include "Vcve2_alu.h"
#include "Vcve2_alu___024unit.h"
#include "Vcve2_alu_cve2_pkg.h"
#include "testb.h"

ALUDriver::ALUDriver(TESTB<Vcve2_alu> *dut) {
  this->dut = dut;
}

void ALUDriver::drive(ALUInTxn *tx) {
  if (tx != NULL) {
    dut->m_core->operand_a_i = tx->a;
    dut->m_core->operand_b_i = tx->b;
    dut->m_core->instr_first_cycle_i = (tx->first_cycle) ? 1 : 0;
    dut->m_core->operator_i = tx->op;
  }
}
