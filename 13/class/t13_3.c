#include <stdio.h>

double comp(double x)
{
  return 0.9 * x + 2.5;
}

int main(void)
{
  double result = 0;

  printf("初項を実数で入力してください >> ");
  scanf("%lf", &result);

  for (int i = 1; i <= 20; i++) 
  {
    printf("a_%d = %g\n", i, result);
    double current = comp(result);
    result = current;
  }

  return 0;
}