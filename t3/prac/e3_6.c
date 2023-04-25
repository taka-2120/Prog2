#include <stdio.h>

int main()
{
  int n;
  int count = 0;

  printf("正の整数nを入力してください >> ");
  scanf("%d", &n);

  for (int a = 1; a <= 10; a++)
  {
    for (int b = 1; b <= 20; b++)
    {
      if (a + b < n)
      {
        count++;
      }
    }
  }

  printf("a + b が %d 未満の組み合わせの数は %d 個です。\n", n, count);

  return 0;
}
