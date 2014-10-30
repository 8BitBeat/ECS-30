//Chris Chan
#include <stdio.h>
#include <stdlib.h>
#define PIELS 1
#define COORS 2
#define BUD 3
#define IRON_CITY 4


int main(int argc, char *argv[])
{
  int id, amount; 
  int pbeer, cbeer, bbeer, icbeer;
  
  FILE *fp= fopen(argv[1], "r");
  
  fscanf(fp, "%d %d %d %d ", &pbeer, &cbeer, &bbeer, &icbeer);
  
  while(fscanf(fp, "%d %d ", &id, &amount) != EOF)
  {
    switch(id)
    {
      case PIELS: pbeer = pbeer + amount; break;
      case COORS: cbeer = cbeer + amount; break;
      case BUD: bbeer = bbeer + amount; break;
      case IRON_CITY: icbeer = icbeer + amount; break;
    }//switch    
  }//while
  
  printf("Piels:%10d\n", pbeer);
  printf("Coors:%10d\n", cbeer);
  printf("Bud:%12d\n", bbeer);
  printf("Iron City:%6d\n", icbeer);
  
  return 0;
}
