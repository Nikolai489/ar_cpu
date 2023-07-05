#include "Vdr32e_alu.h"
// #include "Vdr32e_alu___024unit.h"
#include "Vdr32e_alu_dr32e_pkg.h"
#include "dr32e_alu_tbf.h"
#include "../testb.h"

ALUDriver::ALUDriver(TESTB<Vdr32e_alu> *dut) {
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
