#include <stdio.h>

int n_choose_k(int n, int k);
int factorial(int n);

int main(int argc, char *argv[])
{
    int n, k, output;

    printf("This program returns the number of ways to select k item subset of n distinct items.\n");
    printf("Enter two integers: ");
    scanf_s("%d %d", &n, &k);

    output = n_choose_k(n, k);
    printf("%d", output);

    return 0;
}

int n_choose_k(int n, int k)
{
    int output;

    output = factorial(n) / (factorial(n - k) * factorial(k));

    return output;
}

int factorial(int n)
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