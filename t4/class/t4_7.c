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
    result = powint(i);
    printf("%dの3乗は%dです。\n", i, result);
  }

  return 0;
}