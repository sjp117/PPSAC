// Modify figure 7.3 so that array of values is sorted into decreasing order.

#include <stdio.h>

void int_swap(int *p1, int *p2);
void sort_dec(int *array, int length);

int main(int argc, char *argv[])
{
    int length;
    int input;

    printf("Enter array length: ");
    scanf_s("%d", &length);

    int numArray[length];
    int *parray;

    parray = numArray;

    for (int i = 0; i < length; i++)
    {
        scanf_s("%d", &numArray[i]);
    }

    printf("\nYou entered %d values.\nBefore:\t", length);

    for (int i = 0; i < length; i++)
    {
        printf("%3d", numArray[i]);
        if (i != length - 1)
        {
            printf(", ");
        }
    }

    printf("\n");

    sort_dec(parray, length);

    printf("After:\t");

    for (int i = 0; i < length; i++)
    {
        printf("%3d", numArray[i]);
        if (i != length - 1)
        {
            printf(", ");
        }
    }
}

void sort_dec(int *array, int length)
{
    int temp1 = 0;
    for (int j = 0; j < length - 1; j ++)
    {
        for (int i = 1; i < length; i++)
        {
            if (array[i] > array[i-1])
            {
                temp1 = array[i];
                array[i] = array[i-1];
                array[i-1] = temp1;
            }
        }
    }
}