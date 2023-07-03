#include "cve2_alu_tbf.h"

#include "Vcve2_alu.h"
#include "Vcve2_alu___024unit.h"
#include "Vcve2_alu_cve2_pkg.h"
#include "testb.h"

int32_t genSignedRandom(){
  return rand();
}

uint32_t genUnsignedRandom(){
  return static_cast<unsigned int>(rand());
}

ALUSequencer::ALUSequencer() {}

ALUInTxn *ALUSequencer::generateTxn() {
  ALUInTxn *tx = new ALUInTxn();
  // ! Randomize to 5 enum values only
  tx->op = ALUInTxn::Operation(rand() % 5);
  if(tx->op == ALUInTxn::Operation::sltu || tx->op == ALUInTxn::Operation::geu || tx->op == ALUInTxn::Operation::ltu){
    tx->a = genUnsignedRandom() % UNSIGNED_CEIL;
    tx->b = genUnsignedRandom() % UNSIGNED_CEIL;
  }
  else{
    tx->a = genSignedRandom() % SIGNED_CEIL;
    tx->b = genSignedRandom() % SIGNED_CEIL;
  }
  return tx;
}