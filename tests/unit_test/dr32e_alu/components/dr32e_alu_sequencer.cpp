#include "Vdr32e_alu.h"
// #include "Vdr32e_alu___024unit.h"
#include <chrono>
#include <ctime>

#include "../testb.h"
#include "Vdr32e_alu_dr32e_pkg.h"
#include "dr32e_alu_tbf.h"

int getRandomValue() {
  int arr[16] = {0, 1, 2, 3, 4, 8, 9, 10, 25, 26, 27, 28, 29, 30, 43, 44};
  int index = rand() % 16;
  return arr[index];
}

int32_t genSignedRandom() {
  return rand();
}

uint32_t genUnsignedRandom() {
  return static_cast<unsigned int>(rand());
}

ALUSequencer::ALUSequencer() {}

ALUInTxn *ALUSequencer::generateTxn() {
  ALUInTxn *tx = new ALUInTxn();
  std::srand(static_cast<unsigned>(std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::high_resolution_clock::now().time_since_epoch()).count()));

  srand(rand());
  tx->op = ALUInTxn::Operation(getRandomValue() % 16);
  if (tx->op == ALUInTxn::Operation::sltu || tx->op == ALUInTxn::Operation::geu || tx->op == ALUInTxn::Operation::ltu) {
    tx->a = genUnsignedRandom() % UNSIGNED_CEIL;
    tx->b = genUnsignedRandom() % UNSIGNED_CEIL;
  } else {
    tx->a = genSignedRandom() % SIGNED_CEIL;
    tx->b = genSignedRandom() % SIGNED_CEIL;
  }
  return tx;
}
