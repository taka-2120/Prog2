#include <stdio.h>
#include <math.h>

int main()
{
  int deg;
  double radians;

  printf(" x\tsin(x)\tcos(x)\n");

  for (deg = 0; deg <= 90; deg++)
  {
    if (deg % 15 == 0)
    {
      radians = (deg * M_PI) / 180.0;
      double sinVal = sin(radians);
      double cosVal = cos(radians);

      printf("%3d\t%6.4f\t%6.4f\n", deg, sinVal, cosVal);
    }
  }

  return 0;
}
