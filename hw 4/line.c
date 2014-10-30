//Chris Chan
#include <stdio.h>
#include <stdlib.h>

int get_problem();
void get2_pt(int *x1, int *y1, int *x2, int *y2);
void slope_intcpt_from2_pt(int x1, int y1, int x2, int y2, double *slope,
                        double *y_int);
void display2_pt(int x1, int y1, int x2, int y2);
void display_slope_intcpt(double slope, double y_int);
void get_pt_slope(double *slope, int *x1, int *y1);
void display_pt_slope(double slope, int x1, int y1);
void intcpt_from_pt_slope(double slope, int x1, int y1, double *y_int);

int main()
{
  int input;
  int x1, y1, x2, y2;
  double slope, y_int;
  char conversion;

  do
  {
    int get_problem();
    input = get_problem();
    switch(input)
    {
      case 1:
      {
        get2_pt(&x1, &y1, &x2, &y2);
        slope_intcpt_from2_pt(x1, y1, x2, y2, &slope, &y_int);
        display2_pt(x1, y1, x2, y2);
        break;
      }//case getpt

      case 2:
      {
        get_pt_slope(&slope, &x1, &y1);
        display_pt_slope(slope, x1, y1);
        intcpt_from_pt_slope(slope, x1, y1, &y_int);
        break;
      }//case pt_slope
    }//switch

    display_slope_intcpt(slope, y_int);
    printf("\nDo another conversion (Y or N)=> ");
    scanf(" %c",&conversion);
    printf("\n");
  }//do
  while(conversion == 'Y');

  return 0;
}//main

int get_problem()
{
  int input;

  printf("Select the form that you would like to convert to slope-intercept"
         " form:\n");
  printf("1) Two-point form (you know two points on the line)\n");
  printf("2) Point-slope form (you know the line's slope and one point)\n");
  printf("=> ");
  scanf("%d", &input);

  return input;
}//int get_problem()

void get2_pt(int *x1, int *y1, int *x2, int *y2)
{
  printf("\nEnter the x-y coordinates of the first point separated by a"
         " space=> ");
  scanf("%d %d", x1, y1);
  printf("Enter the x-y coordinates of the second point separated by a"
         " space=> ");
  scanf("%d %d", x2, y2);
}//void get2_pt()

void slope_intcpt_from2_pt(int x1, int y1, int x2, int y2, double *slope,
                           double *y_int)
{
  *slope = (double)(y2-y1)/(x2-x1);
  *y_int = (double)y1 - *slope * (double)x1;
}//slope_intcpt_from2_pt

void display2_pt(int x1, int y1, int x2, int y2)
{
  printf("\nTwo-point form\n");
  printf("      (%.2lf - %.2lf)", (double)y2, (double)y1);
  printf("\n  m = --------------");
  printf("\n      (%.2lf - %.2lf)", (double)x2, (double)x1);
}// display2_pt

void display_slope_intcpt(double slope, double y_int)
{
  printf("\n\nSlope-intercept form\n");
  if(y_int < 0)
  {
    y_int = -1 * y_int;
    printf("  y = %.2lfx - %.2lf\n", slope, y_int);
  }//if y is less than 0
  else
  printf("  y = %.2lfx + %.2lf\n", slope, y_int);
}//display_slope_intcpt

void get_pt_slope(double *slope, int *x1, int *y1)
{
  printf("\nEnter the slope=> ");
  scanf("%lf", slope);
  printf("Enter the x-y coordinates of the point separated by a space=> ");
  scanf("%d %d", x1, y1);
}//void get_pt_slope

void display_pt_slope(double slope, int x1, int y1)
{
  printf("\nPoint-slope form");
  printf("\n  y - %.2lf = %.2lf(x - %.2lf)", (double) y1,(double) slope,(double)
          x1);
}//display_pt_slope

void intcpt_from_pt_slope(double slope, int x1, int y1, double *y_int)
{
  *y_int = (double) y1 - (double)slope*x1;
}//intcpt_from_pt_slope

