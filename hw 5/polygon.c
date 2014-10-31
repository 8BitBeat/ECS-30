//Chris Chan
#include <stdio.h>
#include <math.h>
#define MAX_SIZE 20


int get_corners( FILE*inp, double x[], double y[],int size);
void output_corners(FILE*outp, const double x[], const double y[],int j);
double polygon_area(const double x[], const double y[], int j);

int main(int argc, char*argv[])
{
  double x[MAX_SIZE], y[MAX_SIZE],area;
  int actual_size;
  FILE*inp = fopen(argv[1],"r");
  actual_size = get_corners(inp,x,y,MAX_SIZE);
  FILE*outp = fopen(argv[2],"w");
  output_corners(outp,x,y,actual_size);
  area = polygon_area(x,y,actual_size);
  printf("The area is %.1lf.\n", area);
  return 0;

}//main

int get_corners(FILE*inp,double x[],double y[],int size)
{
  int i=0;//array element
  int j;//number of coordinates
  int input_status;

  input_status = fscanf(inp,"%lf%lf",&x[i],&y[i]);

  while(i<size && input_status!= EOF)
  {
    j = i+1;
    ++i;
    input_status = fscanf(inp, "%lf%lf",&x[i],&y[i]);
  }//while

  fclose(inp);
  return j;
}//get_corners

void output_corners(FILE*outp, const double x[], const double y[], int j)
{
  int i;//array element
  for(i=0; i<j; ++i)
    fprintf(outp,"%4.1lf %4.1lf\n",x[i],y[i]);
  fclose(outp);
}//output_corners
double polygon_area(const double x[], const double y[], int j)
{
  double product,a;
  double sum=0;
  int i;

  for(i=0; i<(j-2); ++i)
  {
    product = (x[i+1]+x[i])*(y[i+1]-y[i]);
    sum += product;
  }//for
    a= .5*fabs(sum);
  return a;
}//polygon_area
