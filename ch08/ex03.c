// program that calculates the perimeter of a polygon with less than 100 vertices.

#include <stdio.h>
#include <math.h>

#define MAX_VERTICES 100

typedef struct {
    int x, y;
} vector_t;

typedef struct {
    int n_points;
    vector_t vertices[MAX_VERTICES];
} polygon_t;

double distance(vector_t p1, vector_t p2);
double perimeter(polygon_t *polygon);

int main(int argc, char *argv[])
{
    // Initialize varaibles
    int n_vertices;
    double output;

    polygon_t polygon;

    // Ask for how many vertices.
    printf("Enter number of vertices: ");
    scanf_s("%d", &n_vertices);

    polygon.n_points = n_vertices;

    // Ask for coordinates
    for (int i = 0; i < n_vertices; i ++)
    {
        printf("Point %d: ", i + 1);
        scanf_s("%d %d", &polygon.vertices[i].x, &polygon.vertices[i].y);
    }

    // Compute perimeter
    output = perimeter(&polygon);

    // Display perimeter
    printf("Perimeter of the polygon is: %0.2lf.\n", output);

    return 0;
}

double distance(vector_t p1, vector_t p2)
{
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

double perimeter(polygon_t *polygon)
{
    double sum = 0;

    for (int i = 0; i < polygon->n_points; i ++)
    {
        if (i == polygon->n_points - 1)
        {
            sum += distance(polygon->vertices[i], polygon->vertices[0]);
        }
        else
        {
            sum += distance(polygon->vertices[i], polygon->vertices[i+1]);
        }
    }
    return sum;
}