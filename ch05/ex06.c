// Amicable pairs
// Numbers are amicalbe of the sum of their factors equal the other number.

#include <stdio.h>

int isFactor(int val1, int val2);
int sumFactors(int n);
int isAmicable(int val1, int val2);

int main(int argc, char *argv[])
{
    // Initialize integers
    int input1, input2;

    // Ask for two integers
    printf("Enter two integers: ");
    scanf_s("%d %d", &input1, &input2);

    // Evaluate pair
    if (isAmicable(input1, input2))
    {
        printf("%d and %d are amicable.\n", input1, input2);
    }
    else
    {
        printf("%d and %d are not amicable.\n", input1, input2);
    }

    return 0;
}

int isFactor(int val1, int val2)
{
    return val1 % val2 == 0;
}

int sumFactors(int n)
{
    int sum = 0;

    for (int i = n - 1; i >= 1; i --)
    {
        if (isFactor(n, i))
        {
            sum += i;
        }
    }

    return sum;
}

int isAmicable(int val1, int val2)
{
    return 
        sumFactors(val1) == val2 
        && 
        sumFactors(val2) == val1;
}