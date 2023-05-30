#include <float.h>
#include <limits.h>
#include <stdio.h>

int main()
{
    printf("IntMax: %d\nIntMin: %d\n%lf\n%lf\n%lf\n%lf\n",
        INT_MAX, INT_MIN, FLT_MAX, FLT_MIN, DBL_MAX, DBL_MIN);
}