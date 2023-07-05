#include "cve2_dec_tbf.h"
#include "Vcve2_dec.h"
#include "Vcve2_dec___024unit.h"
#include "Vcve2_dec_cve2_pkg.h"
#include "testb.h"
#define TIMEUNIT 20
DECSequencer::DECSequencer() {}

DECInTxn *DECSequencer::generateTxn() {
  DECInTxn *tx = new DECInTxn();
  uint32_t seqData[12] = {ILLEGAL, JUMP, BRANCH, WFI, ECALL, EBREAK, DEBUG, MRET, CSR, STORE, UTYPE, ITYPE};
  vluint64_t cycle_num = main_time__ / TIMEUNIT;
  tx->instr = seqData[cycle_num];
  return tx;
}