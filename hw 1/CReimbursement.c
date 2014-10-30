//Chris Chan
#include <stdio.h>
#define RATE .35
int main()
{
    float beginning;
    float ending;
    float reimbursement;
    float distance;

    printf("MILEAGE REIMBURSEMENT CALCULATOR\nEnter beginning odometer reading=> ");
    scanf("%f",&beginning);
    printf("Enter ending odometer reading=> ");
    scanf("%f",&ending);

    distance = ending - beginning;
    reimbursement = RATE*distance;

    printf("You traveled %3.1f miles. At $.35 per mile,\nyour reimbursement is $	%6.2f.\n",distance,reimbursement);
    return 0;
}
