#include "cve2_alu_tbf.h"

int getRandomValue(){
  int arr[16] = {0, 1, 2, 3, 4, 8, 9, 10, 25, 26, 27, 28, 29, 30, 43, 44};
  int index = rand() % 16;
  return arr[index];
}

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
  tx->op = ALUInTxn::Operation(getRandomValue());
  if(tx->op == ALUInTxn::Operation::ALU_SLTU || tx->op == ALUInTxn::Operation::ALU_GEU || tx->op == ALUInTxn::Operation::ALU_LTU){
    tx->a = genUnsignedRandom() % UNSIGNED_CEIL;
    tx->b = genUnsignedRandom() % UNSIGNED_CEIL;
  }
  else{
    tx->a = genSignedRandom() % SIGNED_CEIL;
    tx->b = genSignedRandom() % SIGNED_CEIL;
  }
  return tx;
}
