#include <stdio.h>
#include <math.h>

int discriminant(int a, int b, int c)
{
  return b * b - 4 * a * c;
}

int num_solutions(int a, int b, int c)
{
  int d = discriminant(a, b, c);
  if (d > 0)
  {
    return 2;
  }
  else if (d == 0)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

double quad_eq(int a, int b, int c)
{
  int d = discriminant(a, b, c);
  double x1 = (-b + sqrt(d)) / (2 * a);
  double x2 = (-b - sqrt(d)) / (2 * a);
  return fmax(x1, x2);
}

int main()
{
  int a, b, c;
  printf("2次方程式 ax^2 + bx + c = 0 の係数a, b, cを入力してください >> ");
  scanf("%d %d %d", &a, &b, &c);

  int num = num_solutions(a, b, c);
  if (num == 2)
  {
    double x = quad_eq(a, b, c);
    printf("2個の実数解のうち大きい方はx = %gです\n", x);
  }
  else if (num == 1)
  {
    double x = -b / (2.0 * a);
    printf("重解はx = %gです\n", x);
  }
  else
  {
    printf("実数解はありません\n");
  }

  return 0;
}