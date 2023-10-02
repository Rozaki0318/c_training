#include <stdio.h>

int main(void)
{
  int x;

  printf("Step Number: ");
  scanf("%d", &x);

  for (int i = 1; i <= x; i++)
      printf("%*d\n", i, i % 10);


  return 0;
}
  
