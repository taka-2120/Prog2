#include <stdio.h>
#include <math.h>

double deg_to_rad(double x)
{
  return x / 180.0 * M_PI;
}

int main()
{
  printf("0 度は %g ラジアン\n", deg_to_rad(0));
  printf("30 度は %g ラジアン\n", deg_to_rad(30));
  printf("45 度は %g ラジアン\n", deg_to_rad(45));
  printf("75 度は %g ラジアン\n", deg_to_rad(75));
  printf("90 度は %g ラジアン\n", deg_to_rad(90));
  printf("135 度は %g ラジアン\n", deg_to_rad(135));
  printf("180 度は %g ラジアン\n", deg_to_rad(180));
  return 0;
}