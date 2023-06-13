#include <stdio.h>
#include <math.h>

double deg_to_rad(int x)
{
  return x * M_PI / 180.0;
}

double func_sin(int x)
{
  double rad = deg_to_rad(x);
  return sin(rad);
}

int main()
{
  int a;
  printf("整数を入力してください >> ");
  scanf("%d", &a);

  for (int i = 1; i <= 10; i++)
  {
    int angle = a * i;
    double sin_value = func_sin(angle);
    printf("%3d度の正弦は%.6fです\n", angle, sin_value);
  }

  return 0;
}