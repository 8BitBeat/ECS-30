//Chris Chan
#include <stdio.h>
#include <stdlib.h>
void read_file(FILE*inp, int vote[][4]);
void sort(int vote[][4],char names[]);
void show_table(int vote[][4],char names[]);
void declare_winner(int vote[][4], char names[]);
int main(int argc, char *argv[])
{
  FILE *inp = fopen(argv[1],"r");
  int vote[6][4];
  char names[4]={'A', 'B', 'C', 'D'};

  read_file(inp, vote);
  sort(vote, names);
  show_table(vote, names);
  declare_winner(vote, names);
  return 0;
}//main

void read_file(FILE*inp, int vote[][4])
{
  int i, j, useless;
  for(i=0; i<6; i++)
  {
    fscanf(inp,"%d", &useless);
    for(j=0; j<4; j++)
    fscanf(inp,"%d", &vote[i][j]);
  }//for i
  fclose(inp);
}// read_file

void sort(int vote[][4], char names[])
{
  int i, j, k, l, total, temp[5][1], temp2[1];
  for(j = 0; j<4; j++)
  {
    total = 0;
    for(i=0; i<5; i++)
      total = total + vote[i][j];
    vote[i][j] = total;
  }//for


  for(j = 1;j<4;j++)
  {  
    for(i=0; i<6; i++)  
    temp[i][0] = vote[i][j]; 
    for(k=j-1; k>=0 && vote[5][k] < temp[5][0]; k--)
    {
      temp2[0]=names[k+1];
      names[k+1] = names[k];
      names[k]=temp2[0];
      for(l=0; l<6; l++)
        {
          vote[l][k+1]=vote[l][k];
          vote[l][k] = temp[l][0];
        } //for 
    }//for
  }//for    
}//sort

void show_table(int vote[][4], char names[])
{

  printf("           Candidate  Candidate  Candidate  Candidate\n");
  printf("Precinct       %c          %c          %c          %c          \n",
           names[0],names[1],names[2],names[3]);
 printf("   1         %4d       %4d       %4d       %4d\n",vote[0][0],
          vote[0][1], vote[0][2], vote[0][3]);
  printf("   2         %4d       %4d       %4d       %4d\n",vote[1][0],
           vote[1][1], vote[1][2], vote[1][3]);
  printf("   3         %4d       %4d       %4d       %4d\n",vote[2][0],
           vote[2][1], vote[2][2], vote[2][3]);
  printf("   4         %4d       %4d       %4d       %4d\n",vote[3][0],
           vote[3][1], vote[3][2], vote[3][3]);
  printf("   5         %4d       %4d       %4d       %4d\n",vote[4][0],
           vote[4][1], vote[4][2], vote[4][3]);

  printf("Total:       %4d       %4d       %4d       %4d\n",
         vote[5][0],vote[5][1], vote[5][2], vote[5][3]);
}//show_table

void declare_winner(int vote[][4], char names[])
{
  int total_votes = 0;
  double outcome;
  
  total_votes = vote[5][0] + vote[5][1] + vote[5][2] + vote[5][3];
  outcome = 0.5 * total_votes;
  if(vote[5][0] > outcome)//if
  printf("\nCandidate %c is the winner.\n", names[0]);
  else
    printf("\nCandidates %c and %c will have a runoff.\n", names[0], names[1]);
}// declare winner

