#include "../include/GCD.h"
#include <stdio.h>

/*
 * НОД для целых чисел с учетом их знака
 */
int CalculateGCD(int a, int b) {
    a = (a > 0) ? a : -a;
    b = (b > 0) ? b : -b;

    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }

    return a;
}

int CalculateGCDRecursively(int a, int b) {
    a = (a > 0) ? a : -a;
    b = (b > 0) ? b : -b;

    if (b != 0) {
        return CalculateGCDRecursively(b, a % b);
    } else {
        return a;
    }
}