//Chris Chan
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int side1, side2, hyp, mfirst, nsecond;


    printf("Please enter two integers with the first larger than the second > ");
    scanf("%d %d", &mfirst, &nsecond);


    side1 = (mfirst * mfirst) - (nsecond * nsecond);
    side2 = (2* mfirst * nsecond);
    hyp = (mfirst * mfirst) + (nsecond * nsecond);

    printf("The Pythagorean triple of %d and %d is %d, %d, and %d.\n", mfirst, nsecond, side1, side2, hyp);

    return 0;
}
