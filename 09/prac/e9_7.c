#include <stdio.h>
#include <math.h>

void rotate(double *x, double *y, double r_degree)
{
  double theta = r_degree * M_PI / 180.0;
  double new_x = *x * cos(theta) - *y * sin(theta);
  double new_y = *x * sin(theta) + *y * cos(theta);
  *x = new_x;
  *y = new_y;
}

int main(void)
{
  double x, y, theta;

  printf("x = ");
  scanf("%lf", &x);
  printf("y = ");
  scanf("%lf", &y);
  printf("theta [度] = ");
  scanf("%lf", &theta);
  printf("(%g,%g) → ", x, y);
  rotate(&x, &y, theta);
  printf("(%g,%g)\n", x, y);

  return 0;
}