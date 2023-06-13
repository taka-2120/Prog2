#include <stdio.h>

int main(void)
{
  int x, y;

  for (x = 0; x < 5; x++)
  {
    for (y = 2; y < 7; y++)
    {
      printf("%d+%d=%d\n", x, y, x + y);
      printf("%d*%d=%d\n\n", x, y, x * y);
    }
  }

  return 0;
}