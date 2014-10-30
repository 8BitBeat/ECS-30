//Chris Chan
#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main()
{
    int yardL, yardW, houseL, houseW;
    int yardA, houseA,yard;
    int min, seconds;


    printf("Please enter the length and width of the yard > ");
    scanf("%d %d", &yardL, &yardW);
    printf("Please enter the length and width of the house > ");
    scanf("%d %d", &houseL, &houseW);

    yardA = yardL * yardW;
    houseA = houseL * houseW;
    yard = yardA - houseA;
    min = yard/120;
    seconds =  (yard%120)/2;


    printf("%d square feet will take %d minutes and %d seconds to cut.\n", yard, min, seconds);


    return 0;
}
