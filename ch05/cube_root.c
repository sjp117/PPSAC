// A program that calculates an approximate cube root.

#include <stdio.h>
#include <math.h>

#define LOWBOUND 1E-6
#define HIGHBOUND 1E6
#define INIT_VAL 1.0
#define N_ITER 25
#define THRESHOLD 1E-4

// Initialize function to return roots using Newton Raphson method
double cube_root_rec(double input, double approximation);
double cube_root_loop(double input, double approximation);

int main(int argc, char *argv[])
{
    
    // Initialize input and result variables
    double input, approx;

    approx = INIT_VAL;

    // Get the user input
    printf("Enter a value between %.0e and %.0e to get its cube root: ", LOWBOUND, HIGHBOUND);
    scanf_s("%lf", &input);

    // Get the cube root of the input
    approx = cube_root_rec(input, approx);
    // approx = cube_root_loop(input, approx);

    // Display the result
    printf("The cube root of %lf is: %.6lf\n", input, approx);

    return 0;
}

double cube_root_rec(double input, double approximation)
{
    // Compute new approximation
    double newApprox = ((2.0 * approximation) + (input / (approximation * approximation))) / 3.0;

    // Find the absolute difference in between new approximations
    double delta = fabs(approximation - newApprox);

    // Once the new approximation is below a threshold, return it
    if (delta <= THRESHOLD)
    {
        return newApprox;
    }
    else
    {
        // If the difference is not small enough, do the function with new approximation
        return cube_root_rec(input, newApprox);
        
    }
}

double cube_root_loop(double input, double approximation)
{
    for (int i = 0; i <= N_ITER; i++)
    {
        approximation = ((2.0 * approximation) + (input / (approximation * approximation))) / 3.0;
    }

    return approximation;
}