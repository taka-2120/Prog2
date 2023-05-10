#include <stdio.h>
#include <math.h>

double fact(int n)
{
  double fact = 1;
  
  for (int i = 1; i <= n; i++)
  {
    fact *= i;
  }

  return fact;
}

double myexp(double x)
{
  double sum = 1.0;
  int k = 0;

  while (1)
  {
    double result = pow(x, k) / fact(k);
    sum += result;
    if (result < pow(10, -6))
    {
      break;
    }
    k++;
  }

  return sum;
}

int main()
{
  printf("   x\t myexp(x)\n");
  for (int i = 1; i <= 10; i++)
  {
    printf("%2d.0 %12.5f\n", i, myexp(i));
  }

  return 0;
}