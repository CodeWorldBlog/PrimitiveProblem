//
//  CountSetBit.c
//  Algorithms
//
//  Created by Saurav Nagpal on 02/01/25.
//

#include "CountSetBit.h"

//Mark: Brute Force Approach
int setCountBit(int number) {
    // Initialising a variable to count the 0.
    int count = 0;
    while (number) {
        if((number&1)>0){
            ++count;
        }
        // Right shift the value of number
        number >>= 1;
    }
    return count;
}

//Mark: Binary Number system Approach
int setCountBitBinaryMethod(int number) {
    // Initialising a variable count to 0.
      int count = 0;
      // Iterating over all the bits. Considering Int size 32 bit
      for(int bitIndex = 0 ; bitIndex < 32 ; bitIndex++){
          if(number & (1<<bitIndex)){
              ++count;
          }
      }
      return count;
}
