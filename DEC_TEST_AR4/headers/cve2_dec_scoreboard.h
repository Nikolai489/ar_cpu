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
        printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: Illegal instruction successfully detected\t\t Input Instruction -> 0x%x\n" ANSI_COLOR_RESET, in->instr);
        if(tx->rf_ra == 0x1F && tx->rf_rb == 0x1F && tx->rf_we == 0)
          printf(ANSI_COLOR_GREEN "\t\tRF Signals MATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rf_we : %d\n\n" ANSI_COLOR_RESET, tx->rf_ra, tx->rf_rb, tx->rf_we);
        else
          printf(ANSI_COLOR_RED "\t\tRF Signals MISMATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rf_we : %d\n\n" ANSI_COLOR_RESET, tx->rf_ra, tx->rf_rb, tx->rf_we);
      } else {
        printf(ANSI_COLOR_RED "DEC SCOREBOARD: Failed to detect an illegal instruction\t\t Input Instruction -> 0x%x\n\n" ANSI_COLOR_RESET, in->instr);
      }
      break;
    case JUMP:
      if (tx->jump_set) {
        printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: Jump instruction successfully detected\t\t Input Instruction -> 0x%x\n" ANSI_COLOR_RESET, in->instr);
          if(tx->rf_ra == 0x0 && tx->rf_rb == 0x19 && tx->rf_we == 1)
          printf(ANSI_COLOR_GREEN "\t\tRF Signals MATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rf_we : %d\n" ANSI_COLOR_RESET, tx->rf_ra, tx->rf_rb, tx->rf_we);
          else
          printf(ANSI_COLOR_RED "\t\tRF Signals MISMATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rf_we : %d\n" ANSI_COLOR_RESET, tx->rf_ra, tx->rf_rb, tx->rf_we);
          if(tx->imm_j == ((in->instr & 0x80000000) >> 11) | ((in->instr & 0xFFF00000) >> 20))
            printf(ANSI_COLOR_GREEN "\t\tJump immediate values MATCH\t\t IMM_J -> 0x%x\n "  ANSI_COLOR_RESET, tx->imm_j);
          else
            printf(ANSI_COLOR_RED "\t\tJump immediate values MISMATCH\t\t IMM_J -> 0x%x\n"  ANSI_COLOR_RESET, tx->imm_j);
          if(tx->imm_b_sel_o == Vcve2_dec_cve2_pkg::imm_b_sel_e::IMM_B_INCR_PC &&
              tx->op_a_sel_o == Vcve2_dec_cve2_pkg::op_a_sel_e::OP_A_CURRPC && 
              tx->op_b_sel_o == Vcve2_dec_cve2_pkg::op_b_sel_e::OP_B_IMM &&
              tx->op_o == Vcve2_dec_cve2_pkg::alu_op_e::ALU_ADD){
            printf(ANSI_COLOR_GREEN "\t\tALU signals MATCH \t imm_b_sel : %d  op_a_sel : %d  op_b_sel : %d  op :%d\n\n"  ANSI_COLOR_RESET,
                  tx->imm_b_sel_o, tx->op_a_sel_o, tx->op_b_sel_o, tx->op_o);
          }
          else{
            printf(ANSI_COLOR_RED "\t\tALU signals MISMATCH \t imm_b_sel : %d  op_a_sel : %d  op_b_sel : %d  op :%d\n\n"  ANSI_COLOR_RESET,
                  tx->imm_b_sel_o, tx->op_a_sel_o, tx->op_b_sel_o, tx->op_o);
          }
      } else {
        printf(ANSI_COLOR_RED "DEC SCOREBOARD: Failed to detect a jump instruction\t\t Input Instruction -> 0x%x\n\n" ANSI_COLOR_RESET, in->instr);
      }
      break;
    case BRANCH:
      if (tx->branch_instr) {
        printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: Branch instruction successfully detected\t\t Input Instruction -> 0x%x\n" ANSI_COLOR_RESET, in->instr);
        if(tx->rf_ra == 0x0 && tx->rf_rb == 0x0 && tx->rf_we == 0)
          printf(ANSI_COLOR_GREEN "\t\tRF Signals MATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rf_we : %d\n" ANSI_COLOR_RESET, tx->rf_ra, tx->rf_rb, tx->rf_we);
        else
          printf(ANSI_COLOR_RED "\t\tRF Signals MISMATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rf_we : %d\n" ANSI_COLOR_RESET, tx->rf_ra, tx->rf_rb, tx->rf_we);
        if(tx->imm_b == ((in->instr & 0x80000000) >> 12) |
                                ((in->instr & 0x80) << 4) |
                                ((in->instr & 0x7E000000) >> 20) |
                                ((in->instr & 0xF00) >> 7) |
                                0x0)
          printf(ANSI_COLOR_GREEN "\t\tBranch immediate values MATCH\t\t IMM_B -> 0x%x\n"  ANSI_COLOR_RESET, tx->imm_b);
        else
          printf(ANSI_COLOR_RED "\t\tBranch immediate values MISMATCH\t\t IMM_B -> 0x%x\n"  ANSI_COLOR_RESET, tx->imm_b);
        if(tx->imm_b_sel_o == Vcve2_dec_cve2_pkg::imm_b_sel_e::IMM_B_INCR_PC &&
              tx->op_a_sel_o == Vcve2_dec_cve2_pkg::op_a_sel_e::OP_A_CURRPC && 
              tx->op_b_sel_o == Vcve2_dec_cve2_pkg::op_b_sel_e::OP_B_IMM &&
              tx->op_o == Vcve2_dec_cve2_pkg::alu_op_e::ALU_ADD){
            printf(ANSI_COLOR_GREEN "\t\tALU signals MATCH \t imm_b_sel : %d  op_a_sel : %d  op_b_sel : %d  op :%d\n\n"  ANSI_COLOR_RESET,
                  tx->imm_b_sel_o, tx->op_a_sel_o, tx->op_b_sel_o, tx->op_o);
          }
          else{
            printf(ANSI_COLOR_RED "\t\tALU signals MISMATCH \t imm_b_sel : %d  op_a_sel : %d  op_b_sel : %d  op :%d\n\n"  ANSI_COLOR_RESET,
                  tx->imm_b_sel_o, tx->op_a_sel_o, tx->op_b_sel_o, tx->op_o);
          }
      } else {
        printf(ANSI_COLOR_RED "DEC SCOREBOARD: Failed to detect a branch instruction\t\t Input Instruction -> 0x%x\n\n" ANSI_COLOR_RESET, in->instr);
      }
      break;
    case WFI:
      if (tx->wfi_instr) {
        printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: WFI instruction successfully detected\t\t Input Instruction -> 0x%x\n" ANSI_COLOR_RESET, in->instr);
        if(tx->rf_ra == 0x0 && tx->rf_rb == 0x5 && tx->rf_we == 0)
          printf(ANSI_COLOR_GREEN "\t\tRF Signals MATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rf_we : %d\n\n" ANSI_COLOR_RESET, tx->rf_ra, tx->rf_rb, tx->rf_we);
        else
          printf(ANSI_COLOR_RED "\t\tRF Signals MISMATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rf_we : %d\n\n" ANSI_COLOR_RESET, tx->rf_ra, tx->rf_rb, tx->rf_we);
      } else {
        printf(ANSI_COLOR_RED "DEC SCOREBOARD: Failed to detect a WFI instruction\t\t Input Instruction -> 0x%x\n\n" ANSI_COLOR_RESET, in->instr);
      }
      break;
    case ECALL:
      if (tx->ecall_instr) {
        printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: Syscall instruction successfully detected\t\t Input Instruction -> 0x%x\n" ANSI_COLOR_RESET, in->instr);
        if(tx->rf_ra == 0x0 && tx->rf_rb == 0x0 && tx->rf_we == 0)
          printf(ANSI_COLOR_GREEN "\t\tRF Signals MATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rf_we : %d\n\n" ANSI_COLOR_RESET, tx->rf_ra, tx->rf_rb, tx->rf_we);
        else
          printf(ANSI_COLOR_RED "\t\tRF Signals MISMATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rf_we : %d\n\n" ANSI_COLOR_RESET, tx->rf_ra, tx->rf_rb, tx->rf_we);
      } else {
        printf(ANSI_COLOR_RED "DEC SCOREBOARD: Failed to detect a syscall instruction\t\t Input Instruction -> 0x%x\n\n" ANSI_COLOR_RESET, in->instr);
      }
      break;
    case EBREAK:
      if (tx->ebreak_instr) {
        printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: Trap instruction successfully detected\t\t Input Instruction -> 0x%x\n" ANSI_COLOR_RESET, in->instr);
        if(tx->rf_ra == 0x0 && tx->rf_rb == 0x1 && tx->rf_we == 0)
          printf(ANSI_COLOR_GREEN "\t\tRF Signals MATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rf_we : %d\n\n" ANSI_COLOR_RESET, tx->rf_ra, tx->rf_rb, tx->rf_we);
        else
          printf(ANSI_COLOR_RED "\t\tRF Signals MISMATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rf_we : %d\n\n" ANSI_COLOR_RESET, tx->rf_ra, tx->rf_rb, tx->rf_we);
      } else {
        printf(ANSI_COLOR_RED "DEC SCOREBOARD: Failed to detect a trap instruction\t\t Input Instruction -> 0x%x\n\n" ANSI_COLOR_RESET, in->instr);
      }
      break;
    case DEBUG:
      if (tx->debug_instr) {
        printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: Debug instruction successfully detected\t\t Input Instruction -> 0x%x\n" ANSI_COLOR_RESET, in->instr);
        if(tx->rf_ra == 0x0 && tx->rf_rb == 0x12 && tx->rf_we == 0)
          printf(ANSI_COLOR_GREEN "\t\tRF Signals MATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rf_we : %d\n\n" ANSI_COLOR_RESET, tx->rf_ra, tx->rf_rb, tx->rf_we);
        else
          printf(ANSI_COLOR_RED "\t\tRF Signals MISMATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rf_we : %d\n\n" ANSI_COLOR_RESET, tx->rf_ra, tx->rf_rb, tx->rf_we);
      } else {
        printf(ANSI_COLOR_RED "DEC SCOREBOARD: Failed to detect a debug type instruction\t\t Input Instruction -> 0x%x\n\n" ANSI_COLOR_RESET, in->instr);
      }
      break;
    case MRET:
      if (tx->mret_instr) {
        printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: Return from exception successfully detected\t\t Input Instruction -> 0x%x\n" ANSI_COLOR_RESET, in->instr);
        if(tx->rf_ra == 0x0 && tx->rf_rb == 0x2 && tx->rf_we == 0)
          printf(ANSI_COLOR_GREEN "\t\tRF Signals MATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rf_we : %d\n\n" ANSI_COLOR_RESET, tx->rf_ra, tx->rf_rb, tx->rf_we);
        else
          printf(ANSI_COLOR_RED "\t\tRF Signals MISMATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rf_we : %d\n\n" ANSI_COLOR_RESET, tx->rf_ra, tx->rf_rb, tx->rf_we);
      } else {
        printf(ANSI_COLOR_RED "DEC SCOREBOARD: Failed to detect a return from exception\t\t Input Instruction -> 0x%x\n\n" ANSI_COLOR_RESET, in->instr);
      }
      break;
    case CSR:
      if (tx->csr_access) {
        printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: CSR access successfully detected\t\t Input Instruction -> 0x%x\n" ANSI_COLOR_RESET, in->instr);
        if(tx->rf_ra == 0x1 && tx->rf_rb == 0x0 && tx->rf_we == 1)
          printf(ANSI_COLOR_GREEN "\t\tRF Signals MATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rf_we : %d\n" ANSI_COLOR_RESET, tx->rf_ra, tx->rf_rb, tx->rf_we);
        else
          printf(ANSI_COLOR_RED "\t\tRF Signals MISMATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rf_we : %d\n" ANSI_COLOR_RESET, tx->rf_ra, tx->rf_rb, tx->rf_we);
        if(tx->csr_op == Vcve2_dec_cve2_pkg::csr_op_e::CSR_OP_SET)
          printf(ANSI_COLOR_GREEN "\t\tCSR OP set correctly \t csr_op: %d\n\n" ANSI_COLOR_RESET, tx->csr_op);
        else
          printf(ANSI_COLOR_RED "\t\tCSR OP set incorrectly \t csr_op: %d\n\n" ANSI_COLOR_RESET, tx->csr_op);
      } else {
        printf(ANSI_COLOR_RED "DEC SCOREBOARD: Failed to detect CSR access\t\t Input Instruction -> 0x%x\n\n" ANSI_COLOR_RESET, in->instr);
      }
      break;
    case STORE:
      if (tx->store_instr) {
        printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: Store instruction successfully detected\t\t Input Instruction -> 0x%x\n" ANSI_COLOR_RESET, in->instr);
        if(tx->rf_ra == 0x3 && tx->rf_rb == 0x0 && tx->rf_we == 0)
          printf(ANSI_COLOR_GREEN "\t\tRF Signals MATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rf_we : %d\n" ANSI_COLOR_RESET, tx->rf_ra, tx->rf_rb, tx->rf_we);
        else
          printf(ANSI_COLOR_RED "\t\tRF Signals MISMATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rf_we : %d\n" ANSI_COLOR_RESET, tx->rf_ra, tx->rf_rb, tx->rf_we);
        if(tx->imm_s == ((in->instr & 0x80000000) >> 11) |
                                ((in->instr & 0xFE00000) >> 20) |
                                ((in->instr & 0xF80) >> 7))
          printf(ANSI_COLOR_GREEN "\t\tStore immediate values MATCH\t\t IMM_S -> 0x%x\n"  ANSI_COLOR_RESET, tx->imm_s);
        else
          printf(ANSI_COLOR_RED "\t\tStore immediate values MISMATCH\t\t IMM_S -> 0x%x\n"  ANSI_COLOR_RESET, tx->imm_s);
        if(tx->data_req == 1 && tx->data_type == 2 && tx->data_we == 1 && tx->data_sign_ext == 0)
          printf(ANSI_COLOR_GREEN "\t\tData Signals MATCH\t data_req : %d data_type : %d data_we : %d data_sign_ext : %d\n\n"  ANSI_COLOR_RESET,
                 tx->data_req, tx->data_type, tx->data_we, tx->data_sign_ext);
        else
          printf(ANSI_COLOR_RED "\t\tData Signals MISMATCH\t data_req : %d data_type : %d data_we : %d data_sign_ext : %d\n\n"  ANSI_COLOR_RESET,
                 tx->data_req, tx->data_type, tx->data_we, tx->data_sign_ext);
      } else {
        printf(ANSI_COLOR_RED "DEC SCOREBOARD: Failed to detect a store instruction\t\t Input Instruction -> 0x%x\n\n" ANSI_COLOR_RESET, in->instr);
      }
      break;
      case UTYPE:
        if(tx->imm_u == (in->instr & 0xFFFFF000) | 0x0){
          printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: U-TYPE immediate values MATCH\t\t IMM_U -> 0x%x\n"  ANSI_COLOR_RESET, tx->imm_u);
          if(tx->rf_ra == 0x0 && tx->rf_rb == 0x3 && tx->rf_we == 1)
          printf(ANSI_COLOR_GREEN "\t\tRF Signals MATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rf_we : %d\n" ANSI_COLOR_RESET, tx->rf_ra, tx->rf_rb, tx->rf_we);
          else
          printf(ANSI_COLOR_RED "\t\tRF Signals MISMATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rf_we : %d\n" ANSI_COLOR_RESET, tx->rf_ra, tx->rf_rb, tx->rf_we);
          if(tx->imm_a_sel_o == Vcve2_dec_cve2_pkg::imm_a_sel_e::IMM_A_ZERO &&
             tx->imm_b_sel_o == Vcve2_dec_cve2_pkg::imm_b_sel_e::IMM_B_U &&
             tx->op_a_sel_o == Vcve2_dec_cve2_pkg::op_a_sel_e::OP_A_IMM && 
             tx->op_b_sel_o == Vcve2_dec_cve2_pkg::op_b_sel_e::OP_B_IMM &&
             tx->op_o == Vcve2_dec_cve2_pkg::alu_op_e::ALU_ADD){
            printf(ANSI_COLOR_GREEN "\t\tALU signals MATCH \t imm_a_sel : %d  imm_b_sel : %d  op_a_sel : %d  op_b_sel : %d  op :%d\n\n"  ANSI_COLOR_RESET,
                   tx->imm_a_sel_o, tx->imm_b_sel_o, tx->op_a_sel_o, tx->op_b_sel_o, tx->op_o);
          }
          else{
            printf(ANSI_COLOR_RED "\t\tALU signals MISMATCH \t imm_a_sel : %d  imm_b_sel : %d  op_a_sel : %d  op_b_sel : %d  op :%d\n\n"  ANSI_COLOR_RESET,
                   tx->imm_a_sel_o, tx->imm_b_sel_o, tx->op_a_sel_o, tx->op_b_sel_o, tx->op_o);
          }
        }
        else
          printf(ANSI_COLOR_RED "DEC SCOREBOARD: U-TYPE immediate values MISMATCH\t\t IMM_U -> 0x%x \t %x\n\n"  ANSI_COLOR_RESET, tx->imm_u, ((in->instr & 0xFFFFF000) >> 12));
      break;
      case ITYPE:
        if(tx->imm_i == ((in->instr & 0x80000000) >> 11) |
                                ((in->instr & 0xFFF00000) >> 20)){
          printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: I-TYPE immediate values MATCH\t\t IMM_I -> 0x%x\n"  ANSI_COLOR_RESET, tx->imm_i);
          if(tx->rf_ra == 0x1 && tx->rf_rb == 0x0 && tx->rf_we == 1)
          printf(ANSI_COLOR_GREEN "\t\tRF Signals MATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rf_we : %d\n" ANSI_COLOR_RESET, tx->rf_ra, tx->rf_rb, tx->rf_we);
        else
          printf(ANSI_COLOR_RED "\t\tRF Signals MISMATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rf_we : %d\n" ANSI_COLOR_RESET, tx->rf_ra, tx->rf_rb, tx->rf_we);
          if(tx->imm_a_sel_o == Vcve2_dec_cve2_pkg::imm_a_sel_e::IMM_A_ZERO &&
             tx->imm_b_sel_o == Vcve2_dec_cve2_pkg::imm_b_sel_e::IMM_B_I &&
             tx->op_a_sel_o == Vcve2_dec_cve2_pkg::op_a_sel_e::OP_A_REG_A && 
             tx->op_b_sel_o == Vcve2_dec_cve2_pkg::op_b_sel_e::OP_B_IMM &&
             tx->op_o == Vcve2_dec_cve2_pkg::alu_op_e::ALU_XOR){
            printf(ANSI_COLOR_GREEN "\t\tALU signals MATCH \t imm_a_sel : %d  imm_b_sel : %d  op_a_sel : %d  op_b_sel : %d  op :%d\n\n"  ANSI_COLOR_RESET,
                   tx->imm_a_sel_o, tx->imm_b_sel_o, tx->op_a_sel_o, tx->op_b_sel_o, tx->op_o);
          }
          else{
            printf(ANSI_COLOR_RED "\t\tALU signals MISMATCH \t imm_a_sel : %d  imm_b_sel : %d  op_a_sel : %d  op_b_sel : %d  op :%d\n\n"  ANSI_COLOR_RESET,
                   tx->imm_a_sel_o, tx->imm_b_sel_o, tx->op_a_sel_o, tx->op_b_sel_o, tx->op_o);
          }
        }
        else
          printf(ANSI_COLOR_RED "DEC SCOREBOARD: I-TYPE immediate values MISMATCH\t\t IMM_I -> 0x%x\n\n"  ANSI_COLOR_RESET, tx->imm_i);
      break;
  }



  delete in;
  delete tx;
}
