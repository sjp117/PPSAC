#include <stdio.h>

int main(int argc, char *argv[])
{
    double inputTemp, outputTemp;
    char type;

    printf("Enter temperature: ");
    scanf_s("%lf%c", &inputTemp, &type);

    switch (type)
    {
        case 'F':
            outputTemp = (inputTemp - 32.0) * (5.0 / 9.0);
            printf("The temperature %.1lf%c converts to %.1lfC", 
                inputTemp, type, outputTemp);
            break;
        case 'C':
            outputTemp = (inputTemp / (5.0 / 9.0)) + 32.0;
            printf("The temperature %.1lf%c converts to %.1lfF", 
                inputTemp, type, outputTemp);
            break;
        default: break;
    }
    return 0;
}