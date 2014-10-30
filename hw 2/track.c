//Chris Chan
#include <stdio.h>
#include <stdlib.h>
#define MILE 5280
#define KILOMETER 3282.0

void instructions();

int main()
{
    int min;
    double sec, time;
    double fps, mps;

    instructions();
    printf("Minutes for the runner: ");
    scanf("%d", &min);
    printf("Seconds for the runner: ");
    scanf("%lf", &sec);


    time = (60 * min) + sec;
    fps = (MILE/time);
    mps = (MILE/KILOMETER *1000)/time;

    printf("That is %4.1lf feet per second, and %4.2lf meters per second.\n",       fps, mps);


    return 0;
}//main

void instructions()
{
    printf("This program will ask for the minutes and seconds for the time it\n"    "took for a runner to run a mile.  The program will then calculate\nthe fee"    "t per second and meters per second for that runner.\n\n");
}//void instructions

