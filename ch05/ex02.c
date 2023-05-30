// A program that takes 4 integer arguments, and returns the larger of the four

#include <stdio.h>

int max_2_int(int val1, int val2);
int max_4_int(int val1, int val2, int val3, int val4);

int main(int argc, char *argv[])
{
    // Initialize variables
    int userInt1, userInt2, userInt3, userInt4;
    int outputInt;

    // Ask for user input
    printf("Enter four integers to get the larger of them: ");
    scanf_s("%d %d %d %d", &userInt1, &userInt2, &userInt3, &userInt4);

    // Get the larger of the two inputs
    outputInt = max_4_int(userInt1, userInt2, userInt3, userInt4);

    printf("%d\n", outputInt);

    return 0;
}

int max_2_int(int val1, int val2)
{
    // Test of equal value
    if (val1 == val2)
    {
        return val1;
    }

    // Test for larger
    if (val1 > val2)
    {
        return val1;
    }
    else
    {
        return val2;
    }
}

int max_4_int(int val1, int val2, int val3, int val4)
{
    int maxVal1, maxVal2;

    maxVal1 = max_2_int(val1, val2);
    maxVal2 = max_2_int(val3, val4);

    return max_2_int(maxVal1, maxVal2);
}