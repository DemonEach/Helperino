#include <stdio.h>
#include "../include/Log2.h"

int main()
{
    printf("Log2: %d\n", CalculateLog2(32));
    printf("Log2: %d\n", CalculateLog2(31));
    printf("Log2: %d\n", CalculateLog2(33));
    printf("Log2: %d\n", CalculateLog2(-1));
    printf("Log2: %d\n", CalculateLog2(1));
    return 0;
}