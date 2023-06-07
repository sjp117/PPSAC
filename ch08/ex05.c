// Define structs for complex numbers

#include <stdio.h>

#define TWO_INPUTS 2

typedef struct {
    double real, imaginary;
} complex_t;

complex_t complex_add(complex_t v1, complex_t v2);
complex_t complex_mpy(complex_t v1, complex_t v2);

int main(int argc, char *argv[])
{
    // Initialize variables
    complex_t input[TWO_INPUTS];
    complex_t sum, product;

    // Ask for inputs
    printf("Enter two complex numbers (real then imaginary values)\n");

    for (int i = 0; i < TWO_INPUTS; i ++)
    {
        printf("Input #%d: ", i + 1);
        scanf_s("%lf %lf", &input[i].real, &input[i].imaginary);
    }

    // Sum the inputs
    sum = complex_add(input[0], input[1]);
    printf("The sum is: %0.2lf + %0.2lfi\n", sum.real, sum.imaginary);

    // Multiply the inputs
    product = complex_mpy(input[0], input[1]);
    printf("The product is: %0.2lf + %0.2lfi\n", product.real, product.imaginary);

    return 0;
}

complex_t complex_add(complex_t v1, complex_t v2)
{
    complex_t sum;

    sum.real = v1.real + v2.real;
    sum.imaginary = v1.imaginary + v2.imaginary;

    return sum;
}

complex_t complex_mpy(complex_t v1, complex_t v2)
{
    complex_t product;

    product.real = (v1.real * v2.real) - (v1.imaginary * v2.imaginary);
    product.imaginary = (v1.real * v2.imaginary) + (v1.imaginary * v2.real);

    return product;
}

