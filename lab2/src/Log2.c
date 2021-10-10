#include "../include/Log2.h"
#include <stdio.h>

/*
 * Просто делим число до тех пор пока не ловим случай когда остак не будет =
 */
int CalculateLog2(int n) {
    int pow = 0;

    if (n <= 0) {
        return OUT_OF_SCOPE;
    }

    while (n != 1) {
        //printf("Current pow: %d \nCurrent n: %d\n\n", pow, n);
        int rem = n % 2;
        n = n / 2;

        if (rem == 0) {
            pow++;
        } else {
            return NOT_POWER_OF_2;
        }
    }

    return pow;
}