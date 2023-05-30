#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(int argc, char *argv[])
{
    double r, area, perimeter, elapsed_hour;
    int start_hour, start_min, start_sec,
        finish_hour, finish_min, finish_sec;
    
    // Write assignment statements that calculate:

    // a. the area of a sqare of edge length r.
    area = r * r;

    // b. the perimeter of a square of edge length r.
    perimeter = r * 4.0;

    // c. the area of a circle of radius r.
    double circarea = M_PI * (r * r);

    // d. perimeter of a circle of radius r.
    double circperimeter = 2.0 * M_PI * r;

    // e. the time elapsed hours between the start time and
    //    finishing time of some event, assuming that the two
    //    times are within the same day.
    elapsed_hour = finish_hour - start_hour;
}