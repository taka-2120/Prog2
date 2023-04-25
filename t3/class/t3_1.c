#include <stdio.h>
#include <math.h>

int main()
{
  int n, m;

  printf("2つの整数値を入力してください >> ");
  scanf("%d %d", &n, &m);

  if (n < 0 || m < 0 || n == m)
  {
    printf("Error: two integers must be positive number\n");
    return 1;
  }

  if (n > m)
  {
    int tmp = n;
    n = m;
    m = tmp;
  }

  for (int i = n; i <= m; i++)
  {
    double reciprocal = 1.0 / i;
    double square = pow(i, 2);
    double squareRoot = sqrt(i);
    double naturalLogarithm = log(i);

    printf("%d の逆数: %.6f\n", i, reciprocal);
    printf("%d の2乗: %.6f\n", i, square);
    printf("%d の平方根: %.6f\n", i, squareRoot);
    printf("%d の自然対数: %.6f\n\n", i, naturalLogarithm);
  }

  return 0;
}