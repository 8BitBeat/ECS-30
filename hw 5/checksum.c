//Chris Chan
#include <stdio.h>
#include <stdlib.h>

int main()
{
  char character;
  int checksum = 0;

  do
  {
    checksum = 0;
    printf("Line: ");
    scanf(" %c", &character);
    checksum += character;

    if(character == '.')//if
      break;

   while(character != '.')
    {
      scanf("%c", &character);
      checksum += character;
    }//while

    checksum = checksum % 64 + 32;

    printf("Checksum: %c", checksum);
    printf("\n");
  }while(checksum != -1);//do while

  return 0;
}//main



