#include <stdio.h>

int
main(int argc, char *argv[])

{
  int player;
  char bat;
  int hits;
  int hits_plus_outs;

  FILE *fp = fopen(argv[1], "r");
  //open file

  while(fscanf(fp, "%d", &player) != EOF) //until end of file
    {
      hits = 0; //reset
      hits_plus_outs = 0; //reset
      printf("Player %d's record: ", player);
      fscanf(fp, "%c", &bat);
                //printf();
      while(bat != '\n') //get the batting character
        {
          fscanf(fp, "%c", &bat);
          printf("%c", bat);

          if(bat == 'H') //if bat is a jit
            {
              hits++;
              hits_plus_outs++;
            }//if
          if(bat == 'O')
            {
              hits_plus_outs++;
            }//if
        }//while
      printf("Player %d's batting average: %.3f\n\n",
              player, (double)hits / hits_plus_outs);
    } //while
  return 0;
}//main(int args, char *argv[])
