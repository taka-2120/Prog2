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

  for (n = 1; n <= max; n++)
  {
    if (total > max)
    {
      break;
    }
    total += n;
  }

  printf("n = %d, total = %d\n", n, total);

  return 0;
}
