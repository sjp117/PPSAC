// Write a function that reads integers until it obtains one in the range given by two arguments.
// When a suitable value is read, it stores that value using its third argument, and returns the
// predefined constant READ_OK. If no suitable value is located, the predefined constant
// READ_ERROR should be returned.

#include <stdio.h>

#define READ_OK 1
#define READ_ERROR 0
#define READ_LIMIT 10000

int readInt(int min, int max, int *value);

int main(int argc, char *argv[])
{
    // Define user inputs
    int usermin, usermax, intHit, *pint;
    pint = &intHit;

    // Get user inputs
    printf("Enter two integers, a lower and an upper limit (less than %d): ", READ_LIMIT);
    scanf_s("%d %d", &usermin, &usermax);

    // Count until the int between range is found
    if (readInt(usermin, usermax, pint))
    {
        printf("%d was found.\n", intHit);
    }
    else
    {
        printf("No number was found.\n");
    }
    return 0;
}

int readInt(int min, int max, int *value)
{
    int count = 0;

    while (count < READ_LIMIT)
    {
        printf("%d\n", count);
        if (count >= min && count <= max)
        {
            *value = count;
            return READ_OK;
        }
        else
        {
            count ++;
        }
    }
    return READ_ERROR;
}