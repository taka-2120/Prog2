#include <stdio.h>
#include <math.h>

double area(double r, int a)
{
  double radian = (double)a * M_PI / 180.0;
  return r * r * radian / 2.0;
}

int main()
{
  double radius;
  int angle;

  printf("半径を入力してください >> ");
  scanf("%lf", &radius);

  printf("中心角を入力してください >> ");
  scanf("%d", &angle);

  double result = area(radius, angle);

  printf("半径が%g, 中心角が%d である扇形の面積は%.2fです。\n", radius, angle, result);

  return 0;
}