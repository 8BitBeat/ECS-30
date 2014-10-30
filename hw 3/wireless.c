#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MINUTES 600
#define CENTS_PER_DOLLAR 100
#define FLAT_RATE 3999
#define EXTRA_MINUTE_COST 40
#define TAX_RATE 0.0525

int main()
{
  int weekday, night, weekend, totalmins, extramin;
  double average, pre_tax_bill, tax, totalbill;

  printf("Please enter the number of weekday minutes, night minutes: ");
  scanf("%d %d", &weekday, &night);
  printf("Please enter the number of weekend minutes: ");
  scanf("%d", &weekend);
  printf("\nWeekday minutes: %d, night minutes: %d, weekend minutes: %d",
  weekday, night, weekend);

  extramin = weekday - MINUTES;
  totalmins = weekday + night + weekend;

  if(weekday<=600)//if user inputs <= 600 mins
  {
    pre_tax_bill = ((double)FLAT_RATE/CENTS_PER_DOLLAR);
    average = floor(((double)FLAT_RATE/ totalmins + 0.5))/CENTS_PER_DOLLAR;
  }
  else//calculates with extra min costs
  {
    pre_tax_bill = (((double)FLAT_RATE + EXTRA_MINUTE_COST * extramin)/
                    CENTS_PER_DOLLAR);
    average = floor((((double)FLAT_RATE + EXTRA_MINUTE_COST * extramin)/
                     (totalmins))+0.5)/CENTS_PER_DOLLAR;
  }

  printf("\nAverage minute cost: $%.2lf", average);
  printf("\n\nPretax bill: $%6.2lf", pre_tax_bill);

  tax = floor(TAX_RATE *(((double)FLAT_RATE + EXTRA_MINUTE_COST * extramin))+0.5)/CENTS_PER_DOLLAR;

  printf("\nTaxes:       $%6.2lf", tax);

  totalbill = pre_tax_bill + tax;

  printf("\nTotal bill:  $%6.2lf\n", totalbill);

  return 0;
}


