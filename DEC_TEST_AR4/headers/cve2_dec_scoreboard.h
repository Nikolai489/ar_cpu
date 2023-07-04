#include "cve2_dec_tbf.h"

#include "Vcve2_dec.h"
#include "Vcve2_dec___024unit.h"
#include "Vcve2_dec_cve2_pkg.h"
#include "testb.h"

void DECScoreboard::writeIn(DECInTxn *tx) {
  in_q.push_back(tx);
}

void DECScoreboard::writeOut(DECOutTxn *tx) {
  if (in_q.empty()) {
    printf("Fatal error in DEC Scoreboard: empty transaction queue");
    exit(1);
  }

  DECInTxn *in;
  in = in_q.front();
  in_q.pop_front();

  /*switch (in->op) {
    case ALUInTxn::add:
      if ((in->a + in->b) != tx->result) {
        printf(ANSI_COLOR_RED "ALU SCOREBOARD: ADD MISMATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a + in->b, tx->result);
      } else {
        printf(ANSI_COLOR_GREEN "ALU SCOREBOARD: ADD PASSED\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->a + in->b, tx->result);
      }
      break;
  }*/

  switch (in->instr) {
    case ILLEGAL:
      if (tx->illegal_instr) {
        printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: Illegal instruction successfully detected\t\t Input Instruction -> 0x%x\n\n" ANSI_COLOR_RESET, in->instr);
      } else {
        printf(ANSI_COLOR_RED "DEC SCOREBOARD: Failed to detect an illegal instruction\t\t Input Instruction -> 0x%x\n\n" ANSI_COLOR_RESET, in->instr);
      }
      break;
    case JUMP:
      if (tx->jump_set) {
        printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: Jump instruction successfully detected\t\t Input Instruction -> 0x%x\n" ANSI_COLOR_RESET, in->instr);
        if(tx->imm_j == ((in->instr & 0x80000000) >> 11) | ((in->instr & 0xFFF00000) >> 20))
          printf(ANSI_COLOR_GREEN "\t\tJump immediate values MATCH\t\t IMM_J -> 0x%x\n\n "  ANSI_COLOR_RESET, tx->imm_j);
        else
          printf(ANSI_COLOR_RED "\t\tJump immediate values MISMATCH\t\t IMM_J -> 0x%x\n\n"  ANSI_COLOR_RESET, tx->imm_j);
      } else {
        printf(ANSI_COLOR_RED "DEC SCOREBOARD: Failed to detect a jump instruction\t\t Input Instruction -> 0x%x\n\n" ANSI_COLOR_RESET, in->instr);
      }
      break;
    case BRANCH:
      if (tx->branch_instr) {
        printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: Branch instruction successfully detected\t\t Input Instruction -> 0x%x\n" ANSI_COLOR_RESET, in->instr);
        if(tx->imm_b == ((in->instr & 0x80000000) >> 12) |
                                ((in->instr & 0x80) << 4) |
                                ((in->instr & 0x7E000000) >> 20) |
                                ((in->instr & 0xF00) >> 7) |
                                0x0)
          printf(ANSI_COLOR_GREEN "\t\tBranch immediate values MATCH\t\t IMM_B -> 0x%x\n\n"  ANSI_COLOR_RESET, tx->imm_b);
        else
          printf(ANSI_COLOR_RED "\t\tBranch immediate values MISMATCH\t\t IMM_B -> 0x%x\n\n"  ANSI_COLOR_RESET, tx->imm_b);
      } else {
        printf(ANSI_COLOR_RED "DEC SCOREBOARD: Failed to detect a branch instruction\t\t Input Instruction -> 0x%x\n\n" ANSI_COLOR_RESET, in->instr);
      }
      break;
    case WFI:
      if (tx->wfi_instr) {
        printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: WFI instruction successfully detected\t\t Input Instruction -> 0x%x\n\n" ANSI_COLOR_RESET, in->instr);
      } else {
        printf(ANSI_COLOR_RED "DEC SCOREBOARD: Failed to detect a WFI instruction\t\t Input Instruction -> 0x%x\n\n" ANSI_COLOR_RESET, in->instr);
      }
      break;
    case ECALL:
      if (tx->ecall_instr) {
        printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: Syscall instruction successfully detected\t\t Input Instruction -> 0x%x\n\n" ANSI_COLOR_RESET, in->instr);
      } else {
        printf(ANSI_COLOR_RED "DEC SCOREBOARD: Failed to detect a syscall instruction\t\t Input Instruction -> 0x%x\n\n" ANSI_COLOR_RESET, in->instr);
      }
      break;
    case EBREAK:
      if (tx->ebreak_instr) {
        printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: Trap instruction successfully detected\t\t Input Instruction -> 0x%x\n\n" ANSI_COLOR_RESET, in->instr);
      } else {
        printf(ANSI_COLOR_RED "DEC SCOREBOARD: Failed to detect a trap instruction\t\t Input Instruction -> 0x%x\n\n" ANSI_COLOR_RESET, in->instr);
      }
      break;
    case DEBUG:
      if (tx->debug_instr) {
        printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: Debug instruction successfully detected\t\t Input Instruction -> 0x%x\n\n" ANSI_COLOR_RESET, in->instr);
      } else {
        printf(ANSI_COLOR_RED "DEC SCOREBOARD: Failed to detect a debug type instruction\t\t Input Instruction -> 0x%x\n\n" ANSI_COLOR_RESET, in->instr);
      }
      break;
    case MRET:
      if (tx->mret_instr) {
        printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: Return from exception successfully detected\t\t Input Instruction -> 0x%x\n\n" ANSI_COLOR_RESET, in->instr);
      } else {
        printf(ANSI_COLOR_RED "DEC SCOREBOARD: Failed to detect a return from exception\t\t Input Instruction -> 0x%x\n\n" ANSI_COLOR_RESET, in->instr);
      }
      break;
    case CSR:
      if (tx->csr_access) {
        printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: CSR access successfully detected\t\t Input Instruction -> 0x%x\n\n" ANSI_COLOR_RESET, in->instr);
      } else {
        printf(ANSI_COLOR_RED "DEC SCOREBOARD: Failed to detect CSR access\t\t Input Instruction -> 0x%x\n\n" ANSI_COLOR_RESET, in->instr);
      }
      break;
    case STORE:
      if (tx->store_instr) {
        printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: Store instruction successfully detected\t\t Input Instruction -> 0x%x\n" ANSI_COLOR_RESET, in->instr);
        if(tx->imm_s == ((in->instr & 0x80000000) >> 11) |
                                ((in->instr & 0xFE00000) >> 20) |
                                ((in->instr & 0xF80) >> 7))
          printf(ANSI_COLOR_GREEN "\t\tStore immediate values MATCH\t\t IMM_S -> 0x%x\n\n"  ANSI_COLOR_RESET, tx->imm_s);
        else
          printf(ANSI_COLOR_RED "\t\tStore immediate values MISMATCH\t\t IMM_S -> 0x%x\n\n"  ANSI_COLOR_RESET, tx->imm_s);
      } else {
        printf(ANSI_COLOR_RED "DEC SCOREBOARD: Failed to detect a store instruction\t\t Input Instruction -> 0x%x\n\n" ANSI_COLOR_RESET, in->instr);
      }
      break;
      case UTYPE:
        if(tx->imm_u == ((in->instr & 0xFFFFF000) >> 12))
          printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: U-TYPE immediate values MATCH\t\t IMM_U -> 0x%x\n\n"  ANSI_COLOR_RESET, tx->imm_u);
        else
          printf(ANSI_COLOR_RED "DEC SCOREBOARD: U-TYPE immediate values MISMATCH\t\t IMM_U -> 0x%x \t %x\n\n"  ANSI_COLOR_RESET, tx->imm_u, ((in->instr & 0xFFFFF000) >> 12));
      break;
      case ITYPE:
        if(tx->imm_i == ((in->instr & 0x80000000) >> 11) |
                                ((in->instr & 0xFFF00000) >> 20))
          printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: I-TYPE immediate values MATCH\t\t IMM_I -> 0x%x\n\n"  ANSI_COLOR_RESET, tx->imm_i);
        else
          printf(ANSI_COLOR_RED "DEC SCOREBOARD: I-TYPE immediate values MISMATCH\t\t IMM_I -> 0x%x\n\n"  ANSI_COLOR_RESET, tx->imm_i);
      break;
  }



  delete in;
  delete tx;
}
