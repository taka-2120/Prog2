#include <stdio.h>

int main()
{
  int n;

  printf("自然数を入力してください >> ");
  scanf("%d", &n);

  printf("%d -> ", n);

  for (int i = 2; i <= n; i++)
  {
    while (n % i == 0)
    {
      printf("%d ", i);
      n /= i;
    }
  }

  printf("\n");

  return 0;
}