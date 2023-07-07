#include "Vdr32e_branch_predict.h"
// #include "Vdr32e_branch_predict___024unit.h"
#include "../testb.h"
#include "Vdr32e_branch_predict_dr32e_pkg.h"
#include "dr32e_branch_predict_tbf.h"

void BPScoreboard::writeIn(BPInTxn *tx) {
  in_q.push_back(tx);
}

void BPScoreboard::writeOut(BPOutTxn *tx) {
  uint32_t imm_b, imm_j, branch_imm, opcode;
  int branch_instr, jump_instr;

  if (in_q.empty()) {
    printf("Fatal error in BP Scoreboard: empty transaction queue");
    exit(1);
  }

  BPInTxn *in;
  in = in_q.front();
  in_q.pop_front();

  branch_instr = 0;
  jump_instr = 0;
  opcode = in->instr & 0x7F;
  imm_b =
        ((in->instr & 0x80000000) ? 0xFFFF7000 : 0x0) |     
        ((in->instr & 0x40000000) >> 20) |     
        ((in->instr & 0x00000080) << 4) |      
        ((in->instr & 0x3E000000) >> 20) |     
        ((in->instr & 0x00000F00) >> 7) |      
        0x00000000;
  imm_j =
        ((in->instr & 0x80000000) ? 0xFFF00000 : 0x0) |
        ((in->instr & 0x000FF000)) |
        ((in->instr & 0x00100000) >> 9) |
        ((in->instr & 0x7FE00000) >> 20) |
        0x00000000;

  if(opcode == BRANCH){
    branch_instr = 1;
    branch_imm = imm_b;
  }
  else{
    jump_instr = 1;
    branch_imm = imm_j;
  }
  if(tx->branch_taken == (in->valid & (jump_instr | (branch_instr & (imm_b & 0x80000000))))){
    if(tx->branch_taken)
      printf(ANSI_COLOR_GREEN "BP SCOREBOARD : Branch prediction MATCH \t EXPECTED : TAKEN \t ACTUAL: TAKEN \t INSTR : %x\n" ANSI_COLOR_RESET,in->instr);
    else
      printf(ANSI_COLOR_GREEN "BP SCOREBOARD : Branch prediction MATCH \t EXPECTED : NOT TAKEN \t ACTUAL: NOT TAKEN \t INSTR : %x\n" ANSI_COLOR_RESET,in->instr);
  }
  else{
    if(tx->branch_taken)
      printf(ANSI_COLOR_RED "BP SCOREBOARD : Branch prediction MISMATCH \t EXPECTED : NOT TAKEN \t ACTUAL: TAKEN \t INSTR : %x\n" ANSI_COLOR_RESET,in->instr);
    else
    if(tx->branch_taken)
      printf(ANSI_COLOR_RED "BP SCOREBOARD : Branch prediction MISMATCH \t EXPECTED : TAKEN \t ACTUAL: NOT TAKEN \t INSTR : %x\n" ANSI_COLOR_RESET,in->instr);
  }
  if(tx->branch_pc == in->pc + branch_imm)
    printf(ANSI_COLOR_GREEN "\t\tTarget PC MATCH \t EXPECTED : %x \t ACTUAL : %x\n\n" ANSI_COLOR_RESET, tx->branch_pc, in->pc + branch_imm);
  else
    printf(ANSI_COLOR_RED "\t\tTarget PC MISMATCH \t EXPECTED : %x \t ACTUAL : %x\n\n" ANSI_COLOR_RESET, tx->branch_pc, in->pc + branch_imm);
  
  delete in;
  delete tx;
}
