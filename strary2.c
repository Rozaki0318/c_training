#include <stdio.h>

int main(void)
{
  char *p[] = {
    "Super", "X", "TRY"
  };

  for (int i = 0; i < 3; i++)
    printf("%s\n", p[i]);

  return 0;
}