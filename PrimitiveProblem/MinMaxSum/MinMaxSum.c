//
//  minMaxSum.c
//  PrimitiveProblem
//
//  Created by Saurav Nagpal on 06/01/25.
//

#include "minMaxSum.h"

void minMaxSum(int *integerArray, int arrayCount) {
    long minNumber = 0;
    long maxNumber = 0;
    long sum = 0;
    if (arrayCount <= 0) {
        printf("Invalid input");
    }
    
    minNumber = integerArray[0];
    maxNumber = minNumber;
    
    for(int index = 0; index < arrayCount; index++) {
        sum += integerArray[index];
        
        if (integerArray[index] < minNumber) {
            minNumber = integerArray[index];
        } else if (integerArray[index] > maxNumber) {
            maxNumber = integerArray[index];
        }
    }
    
    long minSum = (sum - maxNumber);
    long maxSum = (sum - minNumber);
    
    printf("%lu %lu", minSum, maxSum);
}
