#include "cve2_alu_tbf.h"

#include "Vcve2_alu.h"
#include "Vcve2_alu___024unit.h"
#include "Vcve2_alu_cve2_pkg.h"
#include "testb.h"

ALUSequencer::ALUSequencer() {}

ALUInTxn *ALUSequencer::generateTxn() {
  ALUInTxn *tx = new ALUInTxn();
  // ! Randomize to 5 enum values only
  tx->op = ALUInTxn::Operation(rand() % 5);
  tx->a = rand() % 100000000;
  tx->b = rand() % 210987097;
  return tx;
}