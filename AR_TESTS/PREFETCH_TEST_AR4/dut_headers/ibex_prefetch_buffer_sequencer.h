#include "ibex_prefetch_buffer_tbf.h"

int getRandomValue()
{
  int arr[16] = {0, 1, 2, 3, 4, 8, 9, 10, 25, 26, 27, 28, 29, 30, 43, 44};
  int index = rand() % 16;
  return arr[index];
}

int getRandomValue2()
{
  return rand() % 2;
}

int getRandom()
{
  return rand() % 65535;
}

int32_t genSignedRandom()
{
  return rand();
}

int32_t genRandomDivisibleBy4()
{
  int32_t randomNumber;

  do
  {
    randomNumber = std::rand();    // Generate a random number
  } while (randomNumber % 4 != 0); // Repeat until the number is divisible by 4

  return randomNumber;
}

uint32_t genUnsignedRandom()
{
  return static_cast<unsigned int>(rand());
}

uint32_t genUnsignedRandomDivisibleBy4()
{
  uint32_t randomNumber;

  do
  {
    randomNumber = static_cast<uint32_t>(std::rand()); // Generate a random number
  } while (randomNumber % 4 != 0);                     // Repeat until the number is divisible by 4

  return randomNumber;
}

PBSequencer::PBSequencer() {}

PBInTxn *PBSequencer::generateTxn()
{
  PBInTxn *tx = new PBInTxn();
  if (main_time__ == 0)
  {
    tx->rst = 1;
  }

  else if ((main_time__ % 110) == 0)
  {
    tx->branch = 1;
    tx->addr = genUnsignedRandomDivisibleBy4() % UNSIGNED_CEIL;
    tx->req = 1;
    tx->ready = 1;
    tx->instr_rvalid = 1;
    tx->instr_grant = 1;
    tx->instr_rdata = getRandom();
  }

  else if ((main_time__ % 90) == 0)
  {
    tx->req = 1;
  }

  else if ((main_time__ % 70) == 0)
  {
    tx->branch = 1;
    tx->addr = genUnsignedRandomDivisibleBy4() % UNSIGNED_CEIL;
  }

  else if ((main_time__ % 50) == 0)
  {

    tx->rst = 1;
    tx->req = 1;
    tx->ready = 1;
    tx->instr_rvalid = 1;
    tx->instr_grant = 1;
    tx->addr = genUnsignedRandomDivisibleBy4() % UNSIGNED_CEIL;
  }

  else
  {
    tx->req = 1;
    tx->ready = 1;
    tx->instr_rvalid = 1;
    tx->instr_grant = 1;
    tx->instr_rdata = getRandom();
  }

  return tx;
}