#include <stdio.h>
#include <math.h>

double sqrt_sum(double x, double y)
{
  return sqrt(x * x + y * y);
}

double distance(double x1, double y1, double x2, double y2)
{
  double dx = x1 - x2;
  double dy = y1 - y2;
  return sqrt_sum(dx, dy);
}

int main()
{
  double x, y;
  printf("2つの実数を入力してください >> ");
  scanf("%lf %lf", &x, &y);

  double dist1 = distance(x, y, 10.0, 0.0);
  double dist2 = distance(x, y, 0.0, 10.0);

  if (dist1 < dist2)
  {
    printf("点(10, 0)により近いです\n");
  }
  else if (dist1 > dist2)
  {
    printf("点(0, 10)により近いです\n");
  }
  else
  {
    printf("等距離です\n");
  }

  return 0;
}