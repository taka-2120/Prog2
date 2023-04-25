#include <stdio.h>

int main()
{
  int max, n = 1, total = 1;

  printf("20000以下の正の整数を入力してください >> ");
  scanf("%d", &max);

  while (total <= max)
  {
    n++;
    total += n;
  }

  printf("n = %d, total = %d\n", n, total);

  return 0;
}
