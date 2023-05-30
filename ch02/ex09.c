#include <stdio.h>

int main(int argc, char *argv[])
{
    double farh;
    double celc;

    printf("Enter temperature in F: ");
    scanf_s("%lf", &farh);

    celc = (farh - 32.0) * (5.0 / 9.0);

    printf("Temperature in C: %.2lf", celc);
}