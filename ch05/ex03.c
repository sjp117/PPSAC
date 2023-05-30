// A program that takes two integers, where the second must be positive.
// It raises the first integers to the power of the second integer.

#include <stdio.h>

int int_pow(int value, int power);

int main(int argc, char *argv[])
{
    // Initialize variables
    int value, power;
    int output;

    // Ask for arguments
    printf("Enter two integers: ");
    scanf_s("%d %d", &value, &power);

    output = int_pow(value, power);

    printf("%d raised to the power of %d is: %d", value, power, output);

    return 0;
}

int int_pow(int value, int power)
{
    int output = value;

    if (power == 1)
    {
        return output;
    }
    else
    {
        for (int i = 2; i <= power; i++)
        {
            output *= value;
        }
        return output;
    }
}