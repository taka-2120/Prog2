#include <stdio.h>
#include <math.h>

double decimal(double a)
{
  return a - (int)a;
}

int main()
{
  int b;
  printf("正の整数を入力してください >> ");
  scanf("%d", &b);

  for (int x = 1; x < b; x++)
  {
    double logx = log(x);
    double decimal_part = decimal(logx);
    printf("log(%d)の小数部分は%.6fです\n", x, decimal_part);
  }

  return 0;
}