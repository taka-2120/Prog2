#include <stdio.h>

int sum_by_loop(int n)
{
  int sum = 0;
  for (int i = 1; i <= n; i++)
  {
    sum += i;
  }
  return sum;
}

int sum_by_formula(int n)
{
  return (n + 1) * n / 2;
}

int main()
{
  int input;

  printf("整数を入力してください >> ");
  scanf("%d", &input);

  int sum1 = sum_by_loop(input);
  int sum2 = sum_by_formula(input);

  printf("for文による計算結果は %d です。\n", sum1);
  printf("和の公式による計算結果は %d です。\n", sum2);

  return 0;
}

double a;
a = 0;

double a = 1;

double char_plus()
{
  return 4.5;
}

double char_plus_2()
{
  return 1000;
}

char a = "moji";

char b = 'a';