#include "dr32e_lsu_tbf.h"

#include "Vdr32e_lsu.h"
//#include "Vdr32e_lsu___024unit.h"
//#include "Vdr32e_lsu_dr32e_pkg.h"
#include "../testb.h"
int32_t prev_rdata, prev_wdata, prev_addr;
int offset;

void LSUScoreboard::writeIn(LSUInTxn *tx) {
  in_q.push_back(tx);
}

void LSUScoreboard::writeOut(LSUOutTxn *tx) {
  if (in_q.empty()) {
    printf("Fatal error in LSU Scoreboard: empty transaction queue");
    exit(1);
  }
  LSUInTxn *in;
  in = in_q.front();
  in_q.pop_front();
  //printf("Data: %x \t %x \n", in->wdata, tx->wdata_o);
  if(prev_rdata != 0){
    if(prev_rdata == tx->rdata_o){
      printf(ANSI_COLOR_GREEN "LSU SCOREBOARD: Read Data MATCH \t Data In : %x \t Data Out : %x\n" ANSI_COLOR_RESET, prev_rdata, tx->rdata_o);
    }
    else
      printf(ANSI_COLOR_RED "LSU SCOREBOARD: Read Data MISMATCH \t Data In : %x \t Data Out : %x\n" ANSI_COLOR_RESET, prev_rdata, tx->rdata_o);
    if(prev_addr != 0){
      if((prev_addr & 0xFFFFFFFC) == tx->addr_o)
        printf(ANSI_COLOR_GREEN "\t\t Address WORD ALIGNED \t Addr : %x\n\n" ANSI_COLOR_RESET, tx->addr_o);
      else
        printf(ANSI_COLOR_RED "\t\t Address WORD MISALIGNED \t Addr : %x\n\n" ANSI_COLOR_RESET, prev_addr & 0xFFFFFFFC);
      }
  }
  if(in->wdata != 0)
    offset = in->adder_result & 0x3;
  if(prev_wdata != 0){
    switch(offset){
      case 0: 
        break;
      case 1:
        prev_wdata = ((prev_wdata & 0xFFFFFF) << 8) | ((prev_wdata & 0xFF000000) >> 24);
        break;
      case 2:
        prev_wdata = ((prev_wdata & 0xFFFF) << 16) | ((prev_wdata & 0xFFFF0000) >> 16);
        break;
      case 3:
        prev_wdata = ((prev_wdata & 0xFF) << 24) | ((prev_wdata & 0xFFFFFF00) >> 8);
        break;
    }
    if(prev_wdata == tx->wdata_o)
      printf(ANSI_COLOR_GREEN "LSU SCOREBOARD: Write Data MATCH \t Write_Data In : %x \t Write_Data Out : %x \n" ANSI_COLOR_RESET, prev_wdata, tx->wdata_o);
    else
      printf(ANSI_COLOR_RED "LSU SCOREBOARD: Write Data MISMATCH \t Write_Data In : %x \t Write_Data Out : %x \n" ANSI_COLOR_RESET, prev_wdata, tx->wdata_o);
    if(prev_addr != 0){
      if((prev_addr & 0xFFFFFFFC) == tx->addr_o)
        printf(ANSI_COLOR_GREEN "\t\t Address WORD ALIGNED \t Addr : %x\n\n" ANSI_COLOR_RESET, tx->addr_o);
      else
        printf(ANSI_COLOR_RED "\t\t Address WORD MISALIGNED \t Addr : %x\n\n" ANSI_COLOR_RESET, prev_addr & 0xFFFFFFFC);
      }
  }
  prev_rdata = in->rdata;
  prev_wdata = in->wdata;
  prev_addr = in->adder_result;
  delete in;
  delete tx;
}
