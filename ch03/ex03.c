#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    // solve quadratic equation
    double a, b, c, d;

    // roots
    double root[2];

    printf("Enter numbers for...\n");
    printf("a: ");
    scanf_s("%lf", &a);
    printf("b: ");
    scanf_s("%lf", &b);
    printf("c: ");
    scanf_s("%lf", &c);

    d = (b * b) - (4.0 * a * c);

    if (d < 0.0 || a == 0.0 || b == 0.0)
    {
        printf("There is no root.\n");
        return 0;
    }

    root[0] = (-b + sqrt(d)) / (2.0 * a);
    root[1] = (-b - sqrt(d)) / (2.0 * a);

    printf("The roots are: %.2lf, and %.2lf", root[0], root[1]);

    return 0;
}