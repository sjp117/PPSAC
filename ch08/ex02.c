// Define a structure vector_t that stores 2D coordinates.
// Write a function that returns the Euclidean distance between p1 and p2.

#include <stdio.h>
#include <math.h>

typedef struct {
    int x, y;
} vector_t;

double distance(vector_t p1, vector_t p2);

int main(int argc, char *argv[])
{
    // Define points
    vector_t p1, p2;
    double dist;

    printf("Enter coordinates for p1: ");
    scanf_s("%d %d", &p1.x, &p1.y);

    printf("Enter coordinates for p2: ");
    scanf_s("%d %d", &p2.x, &p2.y);

    dist = distance(p1, p2);

    printf("The distance between the points are: %0.2lf.\n", dist);

    return 0;
}

double distance(vector_t p1, vector_t p2)
{
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}