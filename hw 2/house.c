//Chris Chan
#include <stdio.h>
#include <stdlib.h>

void instructions();

int main()
{
    int ihc, afc;
    double tr, tc;

    instructions();
    printf("\n\nPlease enter the initial cost, fuel cost, and tax rate: ");
    scanf("%d %d %lf", &ihc, &afc, &tr);

    tc = (5 *(tr * ihc) + ihc + (5*(afc)));

    printf("The total cost is $%5.2lf.\n", tc);
    return 0;
}//main

void instructions()
{
    printf("This program determines the total cost of owning a home for five ye"    "ars.\nThe user will enter initial cost in whole dollars, annual fuel costs"    " in \nwhole dollars, and the annual tax rate as a real number.");
}//instructions
