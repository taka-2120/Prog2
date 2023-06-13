#include <stdio.h>

double pyramid(int t, int h)
{
  return (double)t * t * h / 3;
}

int main()
{
  printf(" i pyramid\n");

  for (int i = 5; i <= 10; i++)
  {
    double volume = pyramid(i, i + 2);
    printf("%2d %.3f\n", i, volume);
  }
  return 0;
}