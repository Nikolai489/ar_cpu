#include "cve2_alu_tbf.h"

#include <stdlib.h>

#include <cstdlib>
#include <deque>
#include <iostream>
#include <memory>

#include "Vcve2_alu.h"
#include "Vcve2_alu___024unit.h"
#include "Vcve2_alu_cve2_pkg.h"
#include "testb.h"

int getRandomValue(){
  int arr[16] = {0, 1, 2, 3, 4, 8, 9, 10, 25, 26, 27, 28, 29, 30, 43, 44};
  int index = rand() % 16;
  return arr[index];
}
void ALUScoreboard::writeIn(ALUInTxn *tx) {
  in_q.push_back(tx);
}

void ALUScoreboard::writeOut(ALUOutTxn *tx) {
  if (in_q.empty()) {
    printf("Fatal error in ALU Scoreboard: empty transaction queue");
    exit(1);
  }

  ALUInTxn *in;
  in = in_q.front();
  in_q.pop_front();

  // TODO: Fix Scoreboard

  switch (in->op) {
    case ALUInTxn::add:
      if ((in->a + in->b) != tx->result) {
        printf(ANSI_COLOR_RED "ALU SCOREBOARD: ADD MISMATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a + in->b, tx->result);
      } else {
        printf(ANSI_COLOR_GREEN "ALU SCOREBOARD: ADD PASSED\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a + in->b, tx->result);
      }
      break;

    case ALUInTxn::sub:
      if ((in->a - in->b) != tx->result) {
        printf(ANSI_COLOR_RED "ALU SCOREBOARD: SUB MISMATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a - in->b, tx->result);
      } else {
        printf(ANSI_COLOR_GREEN "ALU SCOREBOARD: SUB PASSED\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a - in->b, tx->result);
      }
      break;

    case ALUInTxn::xorr:
      if ((in->a ^ in->b) != tx->result) {
        printf(ANSI_COLOR_RED "ALU SCOREBOARD: XOR MISMATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a ^ in->b, tx->result);
      } else {
        printf(ANSI_COLOR_GREEN "ALU SCOREBOARD: XOR PASSED\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a ^ in->b, tx->result);
      }
      break;

    case ALUInTxn::orr:
      if ((in->a | in->b) != tx->result) {
        printf(ANSI_COLOR_RED "ALU SCOREBOARD: OR MISMATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a | in->b, tx->result);
      } else {
        printf(ANSI_COLOR_GREEN "ALU SCOREBOARD: OR PASSED\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a | in->b, tx->result);
      }
      break;

    case ALUInTxn::andd:
      if ((in->a & in->b) != tx->result) {
        printf(ANSI_COLOR_RED "ALU SCOREBOARD: AND MISMATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a & in->b, tx->result);
      } else {
        printf(ANSI_COLOR_GREEN "ALU SCOREBOARD: AND PASSED\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a & in->b, tx->result);
      }
      break;

    case ALUInTxn::sra:
      if ((in->a >> in->b) != tx->result) {
        printf(ANSI_COLOR_RED "ALU SCOREBOARD: SRA MISMATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a >> in->b, tx->result);
      } else {
        printf(ANSI_COLOR_GREEN "ALU SCOREBOARD: SRA PASSED\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a >> in->b, tx->result);
      }
      break;

    case ALUInTxn::srl:
      if ((((uint32_t)in->a) >> in->b) != tx->result) {
        printf(ANSI_COLOR_RED "ALU SCOREBOARD: SRL MISMATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, ((uint32_t)in->a) >> in->b, tx->result);
      } else {
        printf(ANSI_COLOR_GREEN "ALU SCOREBOARD: SRL PASSED\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, ((uint32_t)in->a) >> in->b, tx->result);
      }
      break;

    case ALUInTxn::sll:
      if ((in->a << in->b) != tx->result) {
        printf(ANSI_COLOR_RED "ALU SCOREBOARD: SLL MISMATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a << in->b, tx->result);
      } else {
        printf(ANSI_COLOR_GREEN "ALU SCOREBOARD: SLL PASSED\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a << in->b, tx->result);
      }
      break;

    case ALUInTxn::lt:
      if ((in->a < in->b) != tx->comparison_result) {
        printf(ANSI_COLOR_RED "ALU SCOREBOARD: LT MISMATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a < in->b, tx->comparison_result);
      } else {
        printf(ANSI_COLOR_GREEN "ALU SCOREBOARD: LT PASSED\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a < in->b, tx->comparison_result);
      }
      break;

    case ALUInTxn::ltu:
      if ((((uint32_t)in->a) < ((uint32_t)in->b)) != tx->comparison_result) {
        printf(ANSI_COLOR_RED "ALU SCOREBOARD: LTU MISMATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, ((uint32_t)in->a) < ((uint32_t)in->b), tx->comparison_result);
      } else {
        printf(ANSI_COLOR_GREEN "ALU SCOREBOARD: LTU PASSED\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, ((uint32_t)in->a) < ((uint32_t)in->b), tx->comparison_result);
      }
      break;

    case ALUInTxn::eq:
      if ((in->a == in->b) != tx->is_equal_result) {
        printf(ANSI_COLOR_RED "ALU SCOREBOARD: EQ MISMATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a == in->b, tx->is_equal_result);
      } else {
        printf(ANSI_COLOR_GREEN "ALU SCOREBOARD: EQ PASSED\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a == in->b, tx->is_equal_result);
      }
      break;

    case ALUInTxn::ne:
      if ((in->a != in->b) != tx->is_equal_result) {
        printf(ANSI_COLOR_RED "ALU SCOREBOARD: NEQ MISMATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a != in->b, tx->is_equal_result);
      } else {
        printf(ANSI_COLOR_GREEN "ALU SCOREBOARD: NEQ PASSED\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a != in->b, tx->is_equal_result);
      }
      break;

    case ALUInTxn::ge:
      if ((in->a >= in->b) != tx->comparison_result) {
        printf(ANSI_COLOR_RED "ALU SCOREBOARD: GE MISMATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a >= in->b, tx->comparison_result);
      } else {
        printf(ANSI_COLOR_GREEN "ALU SCOREBOARD: GE PASSED\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a >= in->b, tx->comparison_result);
      }
      break;

    case ALUInTxn::geu:
      if ((((uint32_t)in->a) >= ((uint32_t)in->b)) != tx->comparison_result) {
        printf(ANSI_COLOR_RED "ALU SCOREBOARD: GEU MISMATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, ((uint32_t)in->a) >= ((uint32_t)in->b), tx->comparison_result);
      } else {
        printf(ANSI_COLOR_GREEN "ALU SCOREBOARD: GEU PASSED\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, ((uint32_t)in->a) >= ((uint32_t)in->b), tx->comparison_result);
      }
      break;

      // TODO: ADD SLT and SLTU testing
  }

  delete in;
  delete tx;
}

ALUDriver::ALUDriver(TESTB<Vcve2_alu> *dut) {
  this->dut = dut;
}

void ALUDriver::drive(ALUInTxn *tx) {
  // tx = nullptr;
  if (tx != NULL) {
    dut->m_core->operand_a_i = tx->a;
    dut->m_core->operand_b_i = tx->b;
    dut->m_core->instr_first_cycle_i = (tx->first_cycle) ? 1 : 0;
    dut->m_core->operator_i = tx->op;
  }
  if (tx != NULL) {
    // TODO: Fix null pointer bug
    // delete tx;
  }
}

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

ALUSequencer::ALUSequencer() {}

ALUInTxn *ALUSequencer::generateTxn() {
  ALUInTxn *tx = new ALUInTxn();
  // ! Randomize to 5 enum values only
  tx->op = ALUInTxn::Operation(getRandomValue());
  tx->a = rand() % 100000000;
  tx->b = rand() % 210987097;
  return tx;
}
