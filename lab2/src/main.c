#include <stdio.h>
#include "../include/Log2.h"

int main()
{
    int log_input;
    printf("Enter the number:");
    scanf("%d", &log_input);
    printf("Log2(%d): %d\n", log_input, CalculateLog2(log_input));
    return 0;
}