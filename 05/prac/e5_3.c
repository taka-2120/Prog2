#include <stdio.h>

double combi2(int, int);

int main(void)
{
  int t, m;

  for (t = 0; t <= 30; t++)
  {
    for (m = 0; m <= t; m++)
    {
      printf("%2dC%2d=%.0f\t", t, m, combi2(t, m));
    }
    printf("\n");
  }

  return 0;
}

double combi2(int n, int r)
{
  double result = 1.0;
  for (int i = 0; i < r; i++)
  {
    result *= (double)(n - i) / (i + 1);
  }
  return result;
}