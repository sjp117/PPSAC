// Write a function that orders its three arguments so that the numerically smaller value is placed
// into the underlying varaible corresponding to the first argument pointer.

#include <stdio.h>

void int_swap(int *p1, int *p2);
void int_sort2(int *p1, int *p2);
void int_sort3(int *p1, int *p2, int *p3);

int main(int argc, char *argv[])
{
    // Define variables
    int val1, val2, val3, *pval1, *pval2, *pval3;

    // Link pointers
    pval1 = &val1;
    pval2 = &val2;
    pval3 = &val3;

    // Ask for input
    printf("Enter three integers: ");
    scanf_s("%d %d %d", &val1, &val2, &val3);

    int_sort3(pval1, pval2, pval3);

    printf("%d, %d, %d\n", val1, val2, val3);

    return 0;
}

void int_swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void int_sort2(int *p1, int *p2)
{
    if (*p1 > *p2)
    {
        int_swap(p1, p2);
    }
}

void int_sort3(int *p1, int *p2, int *p3)
{
    int_sort2(p1, p2);
    int_sort2(p1, p3);
    int_sort2(p2, p3);
}