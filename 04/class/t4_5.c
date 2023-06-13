#include <stdio.h>
#include <math.h>

double area(double r)
{
  return r * r * M_PI;
}

int main(void)
{
  double radius, result;

  printf("実数を入力して下さい >> ");
  scanf("%lf", &radius);

  result = area(radius);

  printf("半径%gの円の面積は%gです。\n", radius, result);

  return 0;
}