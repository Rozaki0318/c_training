#include <stdio.h>

int main(void)
{
  int up = 10;
  int bottom = 10;
  int height = 10;

  int area;
  
  area = (up + bottom) * height / 2;

  if (area >= 100)
  {
    printf("面積は大きいです");
  }
  else
  {
    printf("面積は小さいです");
  }

  return 0;
}