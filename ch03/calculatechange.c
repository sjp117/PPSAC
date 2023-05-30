#include <stdio.h>

int getChange(int ammount, int changes[]);

int main(int argc, char *argv[])
{
    int cents[6] = {1, 2, 5, 10, 20, 50};

    int userCents;
    int output;

    printf("Enter anount in cents: ");
    scanf_s("%d", &userCents);

    printf("The coins required to make %d cents are: \n", userCents);
    getChange(userCents, cents);

    return 0;
}

int getChange(int ammount, int changes[])
{
    if (ammount >= changes[5])
    {
        ammount -= changes[5];
        printf("%d", changes[5]);
        if (ammount > 0)
        {
            printf(", ");
        }
        return getChange(ammount, changes);
    }
    else if (ammount >= changes[4])
    {
        ammount -= changes[4];
        printf("%d", changes[4]);
        if (ammount > 0)
        {
            printf(", ");
        }
        return getChange(ammount, changes);
    }
    else if (ammount >= changes[3])
    {
        ammount -= changes[3];
        printf("%d", changes[3]);
        if (ammount > 0)
        {
            printf(", ");
        }
        return getChange(ammount, changes);
    }
    else if (ammount >= changes[2])
    {
        ammount -= changes[2];
        printf("%d", changes[2]);
        if (ammount > 0)
        {
            printf(", ");
        }
        return getChange(ammount, changes);
    }
    else if (ammount >= changes[1])
    {
        ammount -= changes[1];
        printf("%d", changes[1]);
        if (ammount > 0)
        {
            printf(", ");
        }
        return getChange(ammount, changes);
    }
    else if (ammount >= changes[0])
    {
        ammount -= changes[0];
        printf("%d", changes[0]);
        if (ammount > 0)
        {
            printf(", ");
        }
        return getChange(ammount, changes);
    }
    return 0;
}