#include <stdio.h>

int gcd(int x, int y)
{
  if (y == 0)
  {
    return x;
  }
  else
  {
    return gcd(y, x % y);
  }
}

int main()
{
  int a, b;
  printf("2つの整数を入力してください >> ");
  scanf("%d %d", &a, &b);

  int result = gcd(a, b);

  printf("%dと%dの最大公約数は%dです\n", a, b, result);

  return 0;
}