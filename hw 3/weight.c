#include <stdio.h>
#include <stdlib.h>

int main()
{
  int wt_lb, ht_in;
  double bmi;

  printf("Please enter your weight in whole pounds: ");
  scanf("%d", &wt_lb);
  printf("Please enter your height in whole inches: ");
  scanf("%d", &ht_in);

  bmi = (703 * (double) wt_lb)/(ht_in * ht_in);

  if(bmi < 18.5)
  {
    printf("You have a BMI of %.1lf, and your weight status is underweight.\n",     bmi);
  } //if

  else
    if(bmi >= 18.5 && bmi <= 24.9)
    {
      printf("You have a BMI of %.1lf, and your weight status is normal.\n", bmi      );
    } //else if

    else 
      if(bmi >= 25.0 && bmi <= 29.9)
      {
        printf("You have a BMI of %.1lf, and your weight status is overweight."         "\n", bmi);
      } //else if

      else
      {
        printf("You have a BMI of %.1lf, and your weight status is obese.\n",           bmi);
      } //else

    return 0;
}//main
