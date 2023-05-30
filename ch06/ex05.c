// Write a function that orders its two arguments so that the numerically smaller value is placed
// into the underlying varaible corresponding to the first argument pointer.

#include <stdio.h>

void int_sort2(int *p1, int *p2);

int main(int argc, char *argv[])
{
    // Define variables
    int val1, val2, *pval1, *pval2;

    // Link pointers
    pval1 = &val1;
    pval2 = &val2;

    // Ask for input
    printf("Enter two integers: ");
    scanf_s("%d %d", &val1, &val2);

    int_sort2(pval1, pval2);

    printf("%d, %d\n", val1, val2);

    return 0;
}

void int_sort2(int *p1, int *p2)
{
    if (*p1 > *p2)
    {
        int temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }
}