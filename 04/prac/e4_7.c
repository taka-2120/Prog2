#include <stdio.h>
#include <math.h>

double func(double x)
{
  return x * x - 4 * x + 2;
}

double inverse(double x)
{
  return 2 + sqrt(x + 2);
}

int main()
{
  int n;

  printf("2以上の整数を入力してください >> ");
  scanf("%d", &n);

  for (int x = 2; x <= n; x++)
  {
    double fx = func((double)x);
    double inv_fx = inverse(fx);

    printf("x=%d, f(x)=%g, f-1(f(x))=%g\n", x, fx, inv_fx);
  }

  return 0;
}