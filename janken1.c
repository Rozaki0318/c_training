#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  srand(time(NULL));

  printf("Rock, paper, sissors!!\n");

  int retry;

  do {
      int comp = rand() % 3;
      int human;
      
      printf("(0)Rock (1)Sissors (2)Paper: ");
      scanf("%d", &human);
    
      printf("Computer is ");
      switch (comp) {
        case 0: printf("Rock"); break;
        case 1: printf("Sissors"); break;
        case 2: printf("Paper"); break;
      }
      printf(" .\n");
      
      int judge = (human - comp + 3) % 3;

      switch (judge) {
        case 0: printf("Draw\n"); break;
        case 1: printf("You lose!\n"); break;
        case 2: printf("You won!!\n"); break;
      }

     printf("Try again? (0)No (1)Yes: ");
     scanf("%d", &retry);
   } while (retry == 1);

  return 0;
}

