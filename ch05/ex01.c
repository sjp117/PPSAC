// A program that takes 2 integer arguments, and returns the larger of the two

#include <stdio.h>

void max_2_int(int val1, int val2);

int main(int argc, char *argv[])
{
    // Initialize variables
    int userInt1, userInt2;
    int outputInt;

    // Ask for user input
    printf("Enter two integers to get the larger of the two: ");
    scanf_s("%d %d", &userInt1, &userInt2);

    // Get the larger of the two inputs
    max_2_int(userInt1, userInt2);

    return 0;
}

void max_2_int(int val1, int val2)
{
    int difference = val1 - val2;

    if (val1 > val2)
    {
        printf("%d is the larger value.\n", val1);
    }
    else if (val1 < val2)
    {
        printf("%d is the larger value.\n", val2);
    }
    else
    {
        printf("The two values are equal.\n");
    }
}