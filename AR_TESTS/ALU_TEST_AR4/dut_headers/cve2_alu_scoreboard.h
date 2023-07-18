#include "cve2_alu_tbf.h"

ALUScoreboard::ALUScoreboard() {
  error_count_ = 0;
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

printf(ANSI_COLOR_TIME "Time: %ld %s\n" ANSI_COLOR_RESET,main_time__,TIME_UNIT);



  switch (in->op) {
    case ALUInTxn::ALU_ADD:
      if ((in->a + in->b) != tx->result) {
        printf(ANSI_COLOR_RED "ALU SCOREBOARD: ADD MISMATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a + in->b, tx->result);
        error_count_++;
      } else {
        printf(ANSI_COLOR_GREEN "ALU SCOREBOARD: ADD PASSED\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a + in->b, tx->result);
      }
      break;

    case ALUInTxn::ALU_SUB:
      if ((in->a - in->b) != tx->result) {
        printf(ANSI_COLOR_RED "ALU SCOREBOARD: SUB MISMATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a - in->b, tx->result);
        error_count_++;
      } else {
        printf(ANSI_COLOR_GREEN "ALU SCOREBOARD: SUB PASSED\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a - in->b, tx->result);
      }
      break;

    case ALUInTxn::ALU_XOR:
      if ((in->a ^ in->b) != tx->result) {
        printf(ANSI_COLOR_RED "ALU SCOREBOARD: XOR MISMATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a ^ in->b, tx->result);
        error_count_++;
      } else {
        printf(ANSI_COLOR_GREEN "ALU SCOREBOARD: XOR PASSED\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a ^ in->b, tx->result);
      }
      break;

    case ALUInTxn::ALU_OR:
      if ((in->a | in->b) != tx->result) {
        printf(ANSI_COLOR_RED "ALU SCOREBOARD: OR MISMATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a | in->b, tx->result);
        error_count_++;
      } else {
        printf(ANSI_COLOR_GREEN "ALU SCOREBOARD: OR PASSED\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a | in->b, tx->result);
      }
      break;

    case ALUInTxn::ALU_AND:
      if ((in->a & in->b) != tx->result) {
        printf(ANSI_COLOR_RED "ALU SCOREBOARD: AND MISMATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a & in->b, tx->result);
        error_count_++;
      } else {
        printf(ANSI_COLOR_GREEN "ALU SCOREBOARD: AND PASSED\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a & in->b, tx->result);
      }
      break;

    case ALUInTxn::ALU_SRA:
      if ((in->a >> in->b) != tx->result) {
        printf(ANSI_COLOR_RED "ALU SCOREBOARD: SRA MISMATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a >> in->b, tx->result);
        error_count_++;
      } else {
        printf(ANSI_COLOR_GREEN "ALU SCOREBOARD: SRA PASSED\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a >> in->b, tx->result);
      }
      break;

    case ALUInTxn::ALU_SRL:
      if ((((uint32_t)in->a) >> in->b) != tx->result) {
        printf(ANSI_COLOR_RED "ALU SCOREBOARD: SRL MISMATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, ((uint32_t)in->a) >> in->b, tx->result);
        error_count_++;
      } else {
        printf(ANSI_COLOR_GREEN "ALU SCOREBOARD: SRL PASSED\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, ((uint32_t)in->a) >> in->b, tx->result);
      }
      break;

    case ALUInTxn::ALU_SLL:
      if ((in->a << in->b) != tx->result) {
        printf(ANSI_COLOR_RED "ALU SCOREBOARD: SLL MISMATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a << in->b, tx->result);
        error_count_++;
      } else {
        printf(ANSI_COLOR_GREEN "ALU SCOREBOARD: SLL PASSED\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a << in->b, tx->result);
      }
      break;

    case ALUInTxn::ALU_LT:
      if ((in->a < in->b) != tx->comparison_result) {
        printf(ANSI_COLOR_RED "ALU SCOREBOARD: LT MISMATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a < in->b, tx->comparison_result);
        error_count_++;
      } else {
        printf(ANSI_COLOR_GREEN "ALU SCOREBOARD: LT PASSED\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a < in->b, tx->comparison_result);
      }
      break;

    case ALUInTxn::ALU_LTU:
      if ((((uint32_t)in->a) < ((uint32_t)in->b)) != tx->comparison_result) {
        printf(ANSI_COLOR_RED "ALU SCOREBOARD: LTU MISMATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, ((uint32_t)in->a) < ((uint32_t)in->b), tx->comparison_result);
        error_count_++;
      } else {
        printf(ANSI_COLOR_GREEN "ALU SCOREBOARD: LTU PASSED\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, ((uint32_t)in->a) < ((uint32_t)in->b), tx->comparison_result);
      }
      break;

    case ALUInTxn::ALU_EQ:
      if ((in->a == in->b) != tx->is_equal_result) {
        printf(ANSI_COLOR_RED "ALU SCOREBOARD: EQ MISMATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a == in->b, tx->is_equal_result);
        error_count_++;
      } else {
        printf(ANSI_COLOR_GREEN "ALU SCOREBOARD: EQ PASSED\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a == in->b, tx->is_equal_result);
      }
      break;

    case ALUInTxn::ALU_NE:
      if ((in->a != in->b) == tx->is_equal_result) {
        printf(ANSI_COLOR_RED "ALU SCOREBOARD: NEQ MISMATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a != in->b, tx->is_equal_result);
        error_count_++;
      } else {
        printf(ANSI_COLOR_GREEN "ALU SCOREBOARD: NEQ PASSED\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a != in->b, tx->is_equal_result);
      }
      break;

    case ALUInTxn::ALU_GE:
      if ((in->a >= in->b) != tx->comparison_result) {
        printf(ANSI_COLOR_RED "ALU SCOREBOARD: GE MISMATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a >= in->b, tx->comparison_result);
        error_count_++;
      } else {
        printf(ANSI_COLOR_GREEN "ALU SCOREBOARD: GE PASSED\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a >= in->b, tx->comparison_result);
      }
      break;

    case ALUInTxn::ALU_GEU:
      if ((((uint32_t)in->a) >= ((uint32_t)in->b)) != tx->comparison_result) {
        printf(ANSI_COLOR_RED "ALU SCOREBOARD: GEU MISMATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, ((uint32_t)in->a) >= ((uint32_t)in->b), tx->comparison_result);
        error_count_++;
      } else {
        printf(ANSI_COLOR_GREEN "ALU SCOREBOARD: GEU PASSED\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, ((uint32_t)in->a) >= ((uint32_t)in->b), tx->comparison_result);
      }
      break;

    case ALUInTxn::ALU_SLT:
      if(in->a < in->b != tx->comparison_result){
        printf(ANSI_COLOR_RED "ALU SCOREBOARD: SLT MISMATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a < in->b, tx->comparison_result);
        error_count_++;
      }
      else{
        printf(ANSI_COLOR_GREEN "ALU SCOREBOARD: SLT MATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a < in->b, tx->comparison_result);
      }
    break;
    case ALUInTxn::ALU_SLTU:
      if(((uint32_t)in->a) < ((uint32_t)in->b) != tx->comparison_result){
        printf(ANSI_COLOR_RED "ALU SCOREBOARD: SLTU MISMATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, ((uint32_t)in->a) < ((uint32_t)in->b), tx->comparison_result);
        error_count_++;
      }
      else{
        printf(ANSI_COLOR_GREEN "ALU SCOREBOARD: SLTU MATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, ((uint32_t)in->a) < ((uint32_t)in->b), tx->comparison_result);
      }
    break;
}

  //printf((error_count_ > 0) ? ANSI_COLOR_GREEN : ANSI_COLOR_RED) "ALU SCOREBOARD: '%d' Errors Found\n\n" ANSI_COLOR_RESET, error_count_);
  if(main_stop_time__ - 9 == main_time__){
    if(error_count_ > 0)
    {
      printf(ANSI_COLOR_RED "ALU SCOREBOARD: '%d' Errors Found\n\n" ANSI_COLOR_RESET, error_count_);
    }
    else
    {
      printf(ANSI_COLOR_GREEN "ALU SCOREBOARD: '%d' Errors Found\n\n" ANSI_COLOR_RESET, error_count_);
    }
  }


  delete in;
  delete tx;
}
