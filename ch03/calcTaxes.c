#include <stdio.h>

int main(int argc, char *argv[])
{
    double income;
    double tax;
    double med;

    printf("Enter your income: ");
    scanf_s("%lf", &income);

    if (income > 18200 && income <= 37000)
    {
        tax = income * 0.19;
    }
    else if (income > 37000 && income <= 80000)
    {
        tax = income * 0.325;
    }
    else if (income > 80000 && income <= 180000)
    {
        tax = income * 0.37;
    }
    else if (income > 180000)
    {
        tax = income * 0.45;
    }
    else
    {
        tax = 0.0;
    }

    med = income * 0.015;

    printf("Income tax is: %.2lf\n", tax);
    printf("Medicare levy is: %.2lf\n", med);
}