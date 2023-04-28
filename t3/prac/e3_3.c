#include <stdio.h>

int main()
{
  int max, n = 1, total = 1;

  printf("20000以下の正の整数を入力してください >> ");
  scanf("%d", &max);

  if (max < 1 || max > 20000)
  {
    printf("入力値が不正です。\n");
    return 1;
  }

  while (total <= max && n < 20000)
  {
    n++;
    total += n;
  }

  if (total > max)
  {
    printf("n = %d, total = %d\n", n, total);
  }
  else
  {
    printf("20000以下の正の整数では、条件を満たすnが存在しません。\n");
  }

  return 0;
}
