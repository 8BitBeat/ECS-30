//Chris Chan
#include <stdio.h>

void display_instructions(char bread, char loaf, char manual);
void calc_baking_time(char bread, char loaf, char manual);

int main()
{
  char bread, loaf, manual;

  printf("Are you making white or sweet bread (w or s)? ");
  scanf("%c",&bread);
  printf("Is this a single or double loaf (s or d)? " );
  scanf(" %c",&loaf);
  printf("Are you going to bake manually (y or n)? ");
  scanf(" %c",&manual);

  display_instructions(bread, loaf, manual);

  calc_baking_time(bread, loaf, manual);

  return 0;
}//main

void display_instructions(char bread, char loaf, char manual)
{
  if(bread== 'w'||bread=='W')
  {
    printf("Primary kneading: 15 minutes\nPrimary rising: 60 minutes\n");
    printf("Secondary kneading: 18 minutes\nSecondary rising: 20 minutes\n");
    printf("Loaf shaping: 2 seconds\n");
    if(manual=='y'||manual=='Y')
      printf("You should remove the dough for manual baking.\n");
    else
      if(manual=='n'||manual=='N')
      {
        printf("Final rising: 75 minutes\n");
        if(loaf=='s'||loaf=='S')
          printf("Baking: 45 minutes 0 seconds\nCooling: 30 minutes\n");
        else
          if(loaf=='d'||loaf=='D')
            printf("Baking: 67 minutes 30 seconds\nCooling: 30 minutes\n");
      }//No manual white bread
  }//if White bread
  else
    if(bread=='s'||bread=='S')
    {
      printf("Primary kneading: 20 minutes\nPrimary rising: 60 minutes");
      printf("\nSecondary kneading: 33 minutes\n");
      printf("Secondary rising: 30 minutes\nLoaf shaping: 2 seconds\n");
      if(manual=='y'||manual=='Y')
        printf("You should remove the dough for manual baking.\n");
      else
        if(manual=='n'||manual=='N')
        {
          printf("Final rising: 75 minutes\n");
          if(loaf =='s'|| loaf=='S')
            printf("Baking: 35 minutes 0 seconds");
   else
            if(loaf == 'd'|| loaf == 'D')
              printf("Baking: 52 minutes 30 seconds");
         printf("\nCooling: 30 minutes\n");
        }//No manual sweet bread
    }// if Sweet bread
}//display_instructions

void calc_baking_time(char bread, char loaf, char manual)
{
  int minutes;
  int seconds;


  if(bread=='w' || bread == 'W')
  {
    if(manual == 'y' || manual == 'Y')
      seconds = 6782;
    else
      if(manual == 'n' || manual == 'N')
      {
        if(loaf == 's' || loaf == 'S')
          seconds = 15782;
        else
          if(loaf == 'd' || loaf == 'D')
            seconds = 17132;
      }//no manual white bread
  }//if bread == w
  else
    if(bread == 's' || bread == 'S')
    {
      if(manual == 'y' || manual == 'Y')
        seconds = 8582;
      else
        if(manual == 'n' || manual == 'N')
        {
          if(loaf == 's' || loaf == 'S')
            seconds = 16982;
          else
            if(loaf == 'd' || loaf == 'D')
              seconds = 18032;
        }//no manual sweet bread
    }//if sweet bread

  minutes = seconds/60;
  seconds %= 60;

  printf("\nFor a total baking time of %d minutes and %d seconds.\n", minutes,
    seconds);
}//calc_baking_time
