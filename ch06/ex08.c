#include <stdio.h>

void int_divide(int numerator, int denominator, int *quotient, int *remainder);

int main(int argc, char *argv[])
{
    // Define variables
    int numerator, denominator, quotient, remainder;
    int *pquotient, *premainder;

    pquotient = &quotient;
    premainder = &remainder;

    // Get input
    printf("Enter two integers to divide: ");
    scanf_s("%d %d", &numerator, &denominator);

    int_divide(numerator, denominator, pquotient, premainder);

    printf("The quotient is: %d\nThe remainder is: %d", quotient, remainder);

    return 0;
}

void int_divide(int numerator, int denominator, int *quotient, int *remainder)
{
    *quotient = numerator / denominator;
    *remainder = numerator % denominator;
}