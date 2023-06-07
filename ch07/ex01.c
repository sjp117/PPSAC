// A function that returns true if the element A[0] to A[n-1] are all zero,
// false if any of them are non-zero.

#include <stdio.h>

int all_zero(int A[], int n);

int main(int argc, char *argv[])
{
    int length;
    int input;

    printf("Enter array length: ");
    scanf_s("%d", &length);

    int numArray[length];

    for (int i = 0; i < length; i++)
    {
        scanf_s("%d", &numArray[i]);
    }

    printf("\nYou entered: ");

    for (int i = 0; i < length; i++)
    {
        printf("%d", numArray[i]);
        if (i != length - 1)
        {
            printf(", ");
        }
    }

    printf("\n");

    if (all_zero(numArray, length))
    {
        printf("All elements are zero.\n");
    }
    else
    {
        printf("Not all elements are zero.\n");
    }

    
}

int all_zero(int A[], int n)
{
    int zeroCount = 0;
    
    for (int i = 0; i < n; i ++)
    {
        if (A[i] == 0)
        {
            zeroCount ++;
        }
        if (zeroCount == n)
        {
            return 1;
        }
    }
    return 0;
}