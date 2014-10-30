#include <stdio.h>
#include <stdlib.h>

void quadrant(double xcoor, double ycoor);

int main()
{
    double x, y;

    printf("Please enter the x and y coordinates: ");
    scanf("%lf %lf", &x, &y);
    quadrant(x, y);

    return 0;
}//main

void quadrant(double xcoor, double ycoor)
{
  if(xcoor > 0.0)
  {
    if(ycoor > 0.0)
      {
         printf("(%.1lf, %.1lf) is in quadrant I\n", xcoor, ycoor);
      }//if (ycoor>0), quadrant I

   else 
     if(ycoor < 0.0)
       {
          printf("(%.1lf, %.1lf) is in quadrant IV\n", xcoor, ycoor);
        }//if (ycoor>0), quadrant IV

   else
       {
          printf("(%.1lf, %.1lf) is on the x axis\n", xcoor, ycoor);
       }//else, when y = 0, x axis
  }//determines quadrant if x is positive

  else 
    if(xcoor < 0.0)
    {
      if(ycoor > 0.0)
        {
          printf("(%.1lf, %.1lf) is in quadrant II\n", xcoor, ycoor);
        }//if (ycoor>0), quadrant II

      else 
	  if(ycoor < 0.0)
           {
              printf("(%.1lf, %.1lf) is in quadrant III\n", xcoor, ycoor);
            }//if (ycoor>0), quadrant III

         else
           {
              printf("(%.1lf, %.1lf) is on the x axis\n", xcoor, ycoor);
           }//else, when y = 0, x axis
    }//determines quadrant if x is negative

    else
    {
        printf("(%.1lf, %.1lf) is on the y axis\n", xcoor, ycoor);
    }//else on y axis


} // void quadrant, determines which quadrant we're in


