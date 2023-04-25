#include <stdio.h>

int main()
{
  int n;
  int sum = 0;

  printf("正の整数を入力してください >> ");
  scanf("%d", &n);

  for (int i = 3; i < n; i += 3)
  {
    sum += i;
  }

  printf("%d未満の3の倍数の和は%dです。\n", n, sum);

  return 0;
}
