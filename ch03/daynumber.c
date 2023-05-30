#include <stdio.h>

int isLeapYear(int year);
int getLastDate(int month, int year);
int isDateValid(int day, int month, int year);
int getDateNumber(int day, int month, int year);

int main(int argc, char *argv[])
{
    int dd, mm, yyyy, ndays;

    printf("Enter date in format dd/mm/yyy: ");
    scanf_s("%2d/%2d/%d", &dd, &mm, &yyyy);

    if (!isDateValid(dd, mm, yyyy))
    {
        return 0;
    }

    ndays = getDateNumber(dd, mm, yyyy);

    printf("%02d/%02d/%d is day number %d in the year.\n", dd, mm, yyyy, ndays);

    return 0;
}

int isLeapYear(int year)
{
    if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int getLastDate(int month, int year)
{
    int lastDate;

    switch (month)
    {
        case 2:
            if (isLeapYear(year))
            {
                return 29;
            }
            else
            {
                return 28;
            }
        case 4:
        case 6:
        case 9:
        case 11: return 30;
        default: return 31;
    }
}

int isDateValid(int day, int month, int year)
{
    int dateCheck, monthCheck, yearCheck;

    if (day > getLastDate(month, year) || day < 1)
    {
        printf("Invalid day.\n");
        dateCheck = 0;
    }
    else
    {
        dateCheck = 1;
    }

    if (month > 12 || month < 1)
    {
        printf("Invalid month.\n");
        monthCheck = 0;
    }
    else
    {
        monthCheck = 1;
    }

    if (year < 1)
    {
        printf("Invalid Year.\n");
        yearCheck = 0;
    }

    return dateCheck && monthCheck && yearCheck;
}

int getDateNumber(int day, int month, int year)
{
    int ndays = day;

    if (month > 1)
    {
        ndays += getDateNumber(getLastDate(month - 1, year), month - 1, year);
    }

    return ndays;
}