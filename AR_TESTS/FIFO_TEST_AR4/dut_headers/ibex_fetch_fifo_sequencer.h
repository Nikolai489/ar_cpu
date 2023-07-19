#include "ibex_fetch_fifo_tbf.h"

int getRandomValue(){
  int arr[16] = {0, 1, 2, 3, 4, 8, 9, 10, 25, 26, 27, 28, 29, 30, 43, 44};
  int index = rand() % 16;
  return arr[index];
}

int getRandomValue2 () {
  return rand() % 2;
}

int getRandomData () {
  return rand() % 1100;
}


int32_t genSignedRandom(){
  return rand();
}

uint32_t genUnsignedRandom(){
  return static_cast<unsigned int>(rand());
}

int32_t genRandomDivisibleBy4() {
  int32_t randomNumber;
  
  do {
    randomNumber = std::rand();  // Generate a random number
  } while (randomNumber % 4 != 0);  // Repeat until the number is divisible by 4

  return randomNumber;
}

FFSequencer::FFSequencer() {}

FFInTxn *FFSequencer::generateTxn() {
  FFInTxn *tx = new FFInTxn();

  if (main_time__ == 0) {
    tx -> rst = 1;
  }

  else if (main_time__ == 500) {
    tx -> rst = 1;
  }

  else if ((main_time__ % 30) == 0){
    tx -> clear = 0;
    tx -> in_err = 1;
    tx->in_valid = 0;
    tx->in_addr = genUnsignedRandom() % UNSIGNED_CEIL;
    tx->in_rdata = genRandomDivisibleBy4() % UNSIGNED_CEIL;
  }
  

  else if ((main_time__ % 70) == 0){
    tx -> clear = 1;  }

  else if ((main_time__ % 50) == 0){
    tx -> clear = 0;
    tx -> in_err = 0;
    tx->in_valid = 1;
    tx->in_addr = genRandomDivisibleBy4() % UNSIGNED_CEIL;
    tx->in_rdata = genRandomDivisibleBy4() % UNSIGNED_CEIL;
  }

  else if ((main_time__ % 100) == 0){
    tx -> clear = 1;
    tx -> in_err = 1;
    tx->in_valid = 0;
    tx->in_addr = genSignedRandom() % SIGNED_CEIL;
    tx->in_rdata = genRandomDivisibleBy4() % UNSIGNED_CEIL;
  }


  else{
    tx -> clear = 0;
    tx -> in_err = 0;
    tx->in_valid = 1;
    tx->in_addr = genSignedRandom() % SIGNED_CEIL;
    tx->in_rdata = getRandomData () % UNSIGNED_CEIL;
  }






















//     std::cout << "here at " << main_time__ << std::endl;    
//     if (main_time__ == 0) {
//       std::cout << "Time in if " << main_time__ << std::endl;
//       tx -> rst = 1;
//     }
  

//   if (main_time__ == 20){

//     // std::cout << "Time " << main_time__ << std::endl;
//     // tx -> rst = 1;
//     // std::cout << "RST" << std::endl;

//       tx -> in_err = 0;
//   //tx->in_valid = 1;
//   tx->in_addr = genUnsignedRandom() % UNSIGNED_CEIL;
//   tx->in_rdata = genUnsignedRandom() % UNSIGNED_CEIL;

//   }
  
//   if(main_time__ == 40){

//     //tx -> rst = getRandomValue2();
//   tx -> clear = 0;
//   tx -> in_err = 0;
//   //tx->in_valid = 1;
//   tx->in_addr = genUnsignedRandom() % UNSIGNED_CEIL;
//   tx->in_rdata = genUnsignedRandom() % UNSIGNED_CEIL;
//   }

//   if(main_time__ == 60){

//     //tx -> rst = getRandomValue2();
//   tx -> clear = 1;
//   //tx -> in_err = 0;
//  // tx->in_valid = 1;
//   //tx->in_addr = 3000;
//   //tx->in_rdata = genUnsignedRandom() % UNSIGNED_CEIL;
// }
//   if(main_time__ == 80){

//     //tx -> rst = getRandomValue2();
//   tx -> clear = 0;
//   tx -> in_err = 1;
//   //tx->in_valid = 1;
//   tx->in_addr = 4000;
//   tx->in_rdata = genUnsignedRandom() % UNSIGNED_CEIL;
// }
// if(main_time__ == 100){

//     //tx -> rst = getRandomValue2();
//   tx->out_ready = 1;
//   tx->in_valid = 1;
//   tx->in_addr = 1000;
//   tx->in_rdata = genUnsignedRandom() % UNSIGNED_CEIL;
  
// }
// if(main_time__ == 120){

//     //tx -> rst = getRandomValue2();
//   tx->out_ready = 1;
//    tx->in_valid = 1;

  
// }
// if(main_time__ == 140){

//     //tx -> rst = getRandomValue2();
//   tx->out_ready = 1;

  
// }
// if(main_time__ == 160){

//     //tx -> rst = getRandomValue2();
//   tx->out_ready = 1;

  
// }
// if(main_time__ == 180){

//     //tx -> rst = getRandomValue2();
//   tx->out_ready = 1;

  
// }
// if(main_time__ == 200){

//     //tx -> rst = getRandomValue2();
//   tx->out_ready = 1;

  
// }

  // tx -> rst = getRandomValue2();
  //tx -> clear = getRandomValue2();
  // tx -> in_err = getRandomValue2();
  // tx->out_ready = tx->in_valid = getRandomValue2();
  // tx->in_addr = genUnsignedRandom() % UNSIGNED_CEIL;
  // tx->in_rdata = genUnsignedRandom() % UNSIGNED_CEIL;



  // tx->in_addr = genUnsignedRandom() % UNSIGNED_CEIL;
  // tx->in_rdata = genUnsignedRandom() % UNSIGNED_CEIL;

  return tx;
}