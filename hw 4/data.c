//Chris Chan
#include <stdio.h>
#include <math.h>

int main( int argc, char*argv[])
{
  int n;
  int input_status;
  double data, sum, square, sum_squares, average, standard_deviation;
  double smallest, largest;;
  sum = 0;
  sum_squares = 0;

  FILE*fp = fopen(argv[1],"r");

  fscanf(fp,"%d",&n);
  input_status = fscanf(fp,"%lf",&data);

  smallest = data;
  largest = data;

  while( input_status != EOF)
  {
    sum += data;
    square = data*data;
    sum_squares += square;

    input_status=fscanf(fp,"%lf",&data);
    if(data>largest)//if
      largest=data;
    else//else if
      if(data<smallest)
        smallest = data;
  }//while


  average = sum/n;
  standard_deviation = sqrt((sum_squares)/n - (average*average));

  printf("Smallest: %6.2lf\n",smallest);
  printf("Largest:  %6.2lf\n", largest);
  printf("Average:  %6.2lf\n",average);
  printf("Standard deviation: %6.3lf\n",standard_deviation);

  return 0;
}//main

