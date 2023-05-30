/*  Write a program that shows how, for interest rates of 2, 3, 4, 5, 6, and 7 percent,
    a regular savings amount of $100 per month grows over periods of 1 to 7 years.
*/

#include <stdio.h>
#include <locale.h>

#define SAVINGS 100.0
#define YEARS 8

int main(int argc, char *argv[])
{
    // Initialize constants
    const double rates[6] = {1.02, 1.03, 1.04, 1.05, 1.06, 1.07};
    const int ratesLength = sizeof(rates) / sizeof(rates[0]);
    const int dataLenth = YEARS * 12;

    // Declare 2D data array
    double data[ratesLength][dataLenth];

    // Compute balance and fill data

    // Iterate over the different rates
    for (int i = 0; i < ratesLength; i++)
    {
        double savings = 0.0;   // set savings balance to zero

        // Iterate over each month
        for (int j = 0; j < dataLenth; j++)
        {
            savings += SAVINGS;     // add savings to balance

            // for first month, skip without computing interets rate
            if (j == 0)
            {
                continue;
            }
            // for rest, compute interest rate
            else
            {
                savings = savings * rates[i];   // latest balance multiplied by the interest rate
                data[i][j] = savings;   // enter the savings into data array.
            }
        }
    }
    
    // Display annual data as table

    printf("Monthly savings of $%.0f, with monthly compound interest\n", SAVINGS);
    printf("Annual Rate%5s%10s%10s%10s%10s%10s%10s\n",
         "|", ".02", ".03", ".04", ".05", ".06", ".07");

    for (int j = 12; j < dataLenth; j += 12)
    {
        printf("After %d years  |", (j / 12));

        for (int i = 0; i < ratesLength; i++)
        {
            printf("%10.2lf", data[i][j]);
        }
        printf("\n");
    }
}