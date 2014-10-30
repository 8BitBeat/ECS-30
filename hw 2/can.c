#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void instructions();
double surfacearea(double r, double h);

int main()
{
  int quantity;
  double radius, height, cost, totalcost;
  int i = 1;

  instructions();

  FILE *cans;
  cans = fopen("cans.txt", "r");

  while(fscanf(cans, "%lf %lf %lf %d", &radius, &height, &cost, &quantity)        != EOF)
  {
    totalcost= surfacearea(radius, height) * cost * quantity;
    printf("Each can #%d has surface area %8.3lf, and the run will cost $%.2lf."    "\n", i, surfacearea(radius, height), totalcost);
        i++;
    }//while
  return 0;
}//main

void instructions()
{
  printf("This program calculates the cost of materials for three open-top cy"    "lindrical\ncontainers.  It reads the radius, height, cost per square centi"     "meter, and \nquantity for each container from the file cans.txt.  Each li"     "ne in cans.txt has \nthe format: radius height cost_per_sq_cm quantity.\n"     "\n");
}//instructions

double surfacearea (double r, double h)
{
  return M_PI * r * r + (2 * M_PI * r * h);
}//surface area


