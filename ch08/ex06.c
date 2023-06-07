/*
    - Car race consists of 100 laps.
    - There are as many as 30 cars.
    - Each lap takes between 0 and 999.999 seconds.

    - Record lap times for each car.
    - Each lap, record a note string that is 40 char at most.
    - Associate each car with driver name string; max 50 char long.
    - Integer serial number.
    - Number of laps completed.
    - Total race time.
    - Overall position (integer rank, -1 for "did not finish").
*/

#include <stdio.h>
#include <string.h>

#define MAX_LAP_NUMBER 100
#define CARS_COUNT 30
#define LAP_MIN_TIME 0.0
#define LAP_MAX_TIME 999.999
#define LAP_NOTE_LENGTH 40
#define DRIVER_NAME_LENGTH 50

typedef struct {
    int serialNumber;
    char driverName[DRIVER_NAME_LENGTH];
    int overallPosition;
    int lapCompletedNumber;
    double lapTime[MAX_LAP_NUMBER];
    char lapNotes[MAX_LAP_NUMBER][LAP_NOTE_LENGTH];
    double totalRaceTime;
} car_t;

typedef struct {
    car_t car[CARS_COUNT];
} race_t;

int main(int argc, char *argv[])
{
    car_t race[CARS_COUNT];

    race[0].serialNumber = 1;
    strcpy_s(race[0].driverName, sizeof race[0].driverName, "Bob");
    race[0].overallPosition = 1;
    race[0].lapCompletedNumber = 1;
    race[0].lapTime[0] = 123.45;
    strcpy_s(race[0].lapNotes[0], sizeof race[0].lapNotes[0], "Did finish the lap");
    race[0].totalRaceTime = race[0].lapTime[0];

    printf("Serial number of first car: %d\n", race[0].serialNumber);
    printf("Driver's name of first car: %s\n", race[0].driverName);
    printf("Overall position of first car: %d\n", race[0].overallPosition);
    printf("Laps completed of first car: %d\n", race[0].lapCompletedNumber);
    printf("Lap time of first car: %0.3lf\n", race[0].lapTime[0]);
    printf("Lap note of first car: %s\n", race[0].lapNotes[0]);
    printf("Total time of first car: %0.3lf\n", race[0].totalRaceTime);

    return 0;
}