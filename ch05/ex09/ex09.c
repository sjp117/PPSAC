// Program to get perfect numbers.
// Split to multiple files.

#include <stdio.h>

int isperfect(int n);
int nextperfect(int n);
void allperfect();

int main(int argc, char *argv[])
{
    // Initialize variables
    int input, output;

    // Ask for input
    printf("Enter a number to check if it is perfect: ");
    scanf_s("%d", &input);

    // Evaluate if number is perfect
    output = isperfect(input);
    if (output == 1)
    {
        printf("%d is a perfect number.\n", input);
    }
    else
    {
        printf("%d is not a perfect number.\n", input);
    }

    // Find the next perfect number
    output = nextperfect(input);
    printf("The next perfect number is: %d\n", output);

    // Display all perfect number
    allperfect();

    return 0;
}

