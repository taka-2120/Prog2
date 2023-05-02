#include <stdio.h>

int powint(int x, int p)
{
  int y = 1;

  while (p-- > 0)
  {
    y *= x;
  }

  return y;
}

int main(void)
{
  int i, j;

  for (i = 0; i <= 10; i++)
  {
    j = powint(2, i);
    printf("%d\t%d\n", i, j);
  }

  return 0;
}