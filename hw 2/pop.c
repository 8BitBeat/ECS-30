//Chris Chan
#include <stdio.h>
#include <stdlib.h>
#define I_YEAR 1990
#define I_POP 52.966
#define G_RATE 2.184

double population(int y);

int main()
{
  int year;

  printf("Enter a year after 1990> ");
  scanf("%d", &year);

  FILE*pop;
  pop = fopen("CHRISpop.txt", "w");
  fprintf(pop, "Predicted Gotham City population for %d (in thousands): %.3lf\n"  , year, population(year));

    return 0;
}//main

double population(int y)
{
  double predict;
  predict = I_POP + (G_RATE *(y - I_YEAR));
  return predict;
}//double population}
