//Chris Chan
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int velocity, distance;
    double accel, time;
    printf("Please enter the takeoff speed of the jet in km/hr > ");
    scanf("%d", &velocity);
    printf("Please enter the catapult distance in meters > ");
    scanf("%d", &distance);

    time = (7.2 * distance)/(velocity);
    accel = (velocity) / (3.6 * time);

    printf("The jet would accelerate at %4.2lf m/s^2 for %4.2lf seconds.\n", accel, time);

    return 0;
}
