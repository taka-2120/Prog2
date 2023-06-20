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

int main()
{
  int count;

  printf("Enter a number >> ");
  scanf("%d", &count);

  for (int i = 0; i < count; i++)
  {
    for (int at = 0; at < powint(3, i); at++)
    {
      printf("@");
    }
    printf("\n");
  }

  return 0;
}