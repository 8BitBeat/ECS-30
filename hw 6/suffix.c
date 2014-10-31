//Chris Chan
#include <stdio.h>
#include <string.h>
void suffix(const char w1[],const char w2[],char common[]);
int main()
{
  char word1[81];
  char word2[81];
  char common[81];
  printf("Word #1: ");
  fgets(word1, 80, stdin);
  printf("Word #2: ");
  fgets(word2, 80, stdin);
  suffix(word1, word2, common);
  printf("Common suffix: %s",common);
  return 0;
}//main
void suffix(const char w1[], const char w2[],char common[])
{
  int i = strlen(w1)-1;
  int j = strlen(w2)-1;
  char temp[81];
  if(w1[i] == w2[j])
  {
    sprintf(common, "%c", w1[i]);
    strcpy(temp,common);
    i--;
    j--;
    while( w1[i] == w2[j])
    {
      sprintf(common, "%c%s", w1[i],temp);
      strcpy(temp,common);
      i--;
      j--;
    }//while
  }//if
}//suffix
