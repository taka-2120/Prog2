#include <stdio.h>

int powint(int x)
{
  return x * x * x;
}

int main(void)
{
  int result;

  for (int i = 1; i <= 10; i++)
  {
    printf("%dの3乗は%dです。\n", i,  powint(i));
  }

  return 0;
}