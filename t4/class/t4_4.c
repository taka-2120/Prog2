#include <stdio.h>

double prod_d(double x, double y)
{
  return x * y;
}

int main(void)
{
  double num1, num2, result;

  printf("実数を2つ入力して下さい >> ");
  scanf("%lf %lf", &num1, &num2);

  result = prod_d(num1, num2);

  printf("%g * %g = %g\n", num1, num2, result);

  return 0;
}