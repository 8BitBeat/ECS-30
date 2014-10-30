#include <stdio.h>
#include <stdlib.h>

int main()
{
  int pollutant, odometer;
  double grams;

  printf("(1) Carbon monoxide\n(2) Hydrocarbons\n(3) Nitrogen oxides\n(4) "
  "Nonmethane hydrocarbons\n");
  printf("Enter pollutant number>> ");
  scanf("%d", &pollutant);
  printf("Enter number of grams emitted per mile>> ");
  scanf("%lf", &grams);
  printf("Enter odometer reading>> ");
  scanf("%d", &odometer);
  if(odometer <= 50000)//if odometer is less than or equal to 50000
  {
    if(pollutant == 1)//if  pollutant is carbon monoxide
    {
      if(grams <=3.4)//if carbon monoxide doesn't exceed permitted level
        printf("Emissions do not exceed permitted level of 3.40 grams/mile.\n");
        else//else carbon monoxide exceeds permitted level
          printf("Emissions exceed permitted level of 3.40 grams/mile.\n");
    }

    else//if pollutant is hydrocarbons
      if(pollutant == 2)
      {
        if(grams <=0.31)//if hydrocarbons doesn't exceed permitted level
          printf("Emissions do not exceed permitted level of 0.31 grams/mile."
          "\n");
        else//else hrdrocarbons exceeds permitted level
          printf("Emissions exceed permitted level of 0.31 grams/mile.\n");
        }

      else//if pollutant is nitrogen oxide
        if(pollutant == 3)
        {
          if(grams <=0.4)//if nitrogen oxides doesn't exceed permitted level
            printf("Emissions do not exceed permitted level of 0.40 grams/mile."
            "\n");
          else//else nitrogen oxides exceeds permitted level
            printf("Emissions exceed permitted level of 0.40 grams/mile.\n");
        }

        else//if pollutant is nitrogen oxide
          if(pollutant == 4)
          {
            if(grams <=0.25)//if nonmethane hydrocarbons doesn't exceed
            //permitted level
              printf("Emissions do not exceed permitted level of 0.25 grams/mil"
              "e.\n");
            else//else nonmethane hydrocarbons exceeds permitted level
              printf("Emissions exceed permitted level of 0.25 grams/mile.\n");
          }
  }

  else
    if(odometer > 50000)//if odometer greater than 50000
    {
      if(pollutant == 1)//if  pollutant is carbon monoxide
      {
        if(grams <=4.2)//if carbon monoxide doesn't exceed permitted level
          printf("Emissions do not exceed permitted level of 4.2 grams/mile."
          "\n");
          else//else carbon monoxide exceeds permitted level
            printf("Emissions exceed permitted level of 4.2 grams/mile.\n");
    }

      else//if pollutant is hydrocarbons
        if(pollutant == 2)
        {
          if(grams <=0.39)//if hydrocarbons doesn't exceed permitted level
            printf("Emissions do not exceed permitted level of 0.39 grams/mile."
            "\n");
          else//else hrdrocarbons exceeds permitted level
            printf("Emissions exceed permitted level of 0.39 grams/mile.\n");
        }

        else//if pollutant is nitrogen oxide
          if(pollutant == 3)
          {
            if(grams <=0.5)//if nitrogen oxides doesn't exceed permitted level
              printf("Emissions do not exceed permitted level of 0.50 grams/mile."
              "\n");
            else//else nitrogen oxides exceeds permitted level
              printf("Emissions exceed permitted level of 0.50 grams/mile.\n");
          }

          else//if pollutant is nitrogen oxide
            if(pollutant == 4)
            {
              if(grams <=0.31)//if nonmethane hydrocarbons doesn't exceed
              //permitted level
                printf("Emissions do not exceed permitted level of 0.31 grams/"
                "mile.\n");
              else//else nonmethane hydrocarbons exceeds permitted level
                printf("Emissions exceed permitted level of 0.31 grams/mile."
                "\n");
            }
    }
return 0;}













