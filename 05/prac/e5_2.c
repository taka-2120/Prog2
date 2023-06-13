#include <stdio.h>

int combi(int, int);
long int fact(int);

int main(void)
{
  int t, m;

  printf("%ld\n", fact(30));

  for (t = 0; t <= 20; t++)
  {
    for (m = 0; m <= t; m++)
    {
      printf("%dC%d=%4d\t", t, m, combi(t, m));
    }
    printf("\n");
  }

  return 0;
}

int combi(int n, int r)
{
  return fact(n) / (fact(r) * fact(n - r));
}

long int fact(int n)
{
  int i;
  long int fact;

  fact = 1;
  for (i = 1; i <= n; i++)
  {
    fact *= i;
  }

  return fact;
}