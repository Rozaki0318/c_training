#include <stdio.h>

char moji[10] = "Hello";

int main(void)
{
  int i;
  short num[] = {1,2,3,4,5};

  for (i=0; i < sizeof(num) / sizeof(num[0]) ; i++)
  {
    printf("%d\n", num[i]);
  }

  printf("%s", moji);

  return 0;
}