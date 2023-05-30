#include <stdio.h>

double sum_sequence(int n);
double factorial(int n);
double series(int n);

int main(int argc, char *argv[])
{
    int userInput;

    // Get user input
    printf("Enter an integer: ");
    scanf_s("%d", &userInput);

    printf("The sums of sequence of %d is: %0.2lf", userInput, sum_sequence(userInput));
}

double sum_sequence(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return (series(n) / factorial(n)) + sum_sequence(n - 1);
    }
}

double factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

double series(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + series(n - 1);
    }
}