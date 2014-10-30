//Chris Chan
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char grade;
    float minaverage, currentaverage, percent, score;
    printf("Enter desired grade> ");
    scanf("%c", &grade);

    printf("Enter minimum average required> ");
    scanf("%f", &minaverage);

    printf("Enter current average in course> ");
    scanf("%f", &currentaverage);

    printf("Enter how much the final counts\nas a percentage of the course grade> ");
    scanf("%f", &percent);

    score = (minaverage - currentaverage*(1-(percent/100)))/(percent/100);

    printf("\nYou need a score of %2.2f on the final to get a %c.\n", score, grade);
    return 0;
}
