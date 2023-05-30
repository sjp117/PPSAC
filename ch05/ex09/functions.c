#include <stdio.h>

#define LIMIT 10000

int isperfect(int n)
{
    // Evaluates if n is a perfect number
    int sum = 1;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    if (sum == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int nextperfect(int n)
{
    // Returns the perfect number that comes after n
    for (int i = n + 1; i < LIMIT; i++)
    {
        if (isperfect(i))
        {
            return i;
        }
    }
    return 0;
}

void allperfect()
{
    // Display all perfect number
    for (int i = 1; i < LIMIT; i++)
    {
        if (isperfect(i))
        {
            printf("%d ", i);
        }
    }
    printf("are perfect numbers less than %d.\n", LIMIT);
}