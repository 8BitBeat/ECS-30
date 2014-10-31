//Chris CHan
#include <stdio.h>
#include <string.h>
int main()
{
  char *ptr,temp[80];
  char sentence[80],reverse[80];
  printf("Input: ");
  fgets(sentence,80,stdin);
  ptr = strtok(sentence," \n");
  sprintf(reverse,"%s", ptr);
  strcpy(temp, reverse);
  do
  {
    ptr = strtok(NULL, " \n");
    if(ptr!=NULL)
    {
      sprintf(reverse, "%s %s",ptr , temp);
      strcpy(temp, reverse);
    }//if
  }while(ptr != NULL);
  printf("Reversed: %s \n", reverse);
  return 0;
}//main
