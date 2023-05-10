#include <math.h>
#include <stdio.h>

double mycbrt(double x);

int main(void)
{
  double x;

  printf("\tx\tr\t\tr*r*r\n");
  for (x = 1; x <= 10; x += 1)
  {
    double r = mycbrt(x);
    printf("\t%3.1f\t%12.10f\t%12.10f\n", x, r, r * r * r);
  }

  return 0;
}

double mycbrt(double x)
{
  const double eps = 1.0e-10;
  double guess = 1.0;

  while (fabs(guess * guess * guess - x) >= eps)
  {
    guess = (guess * 2.0 + x / (guess * guess)) / 3.0;
  }

  return guess;
}