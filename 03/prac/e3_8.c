#include <stdio.h>
#include <math.h>

int main()
{
  int n;
  printf("正の整数nを入力してください >> ");
  scanf("%d", &n);

  int count = 0;
  for (int a = 1; a <= n; a++)
  {
    for (int b = a + 1; b <= n; b++)
    {
      int c = a * a + b * b;
      int sqrt_c = sqrt(c);
      if (sqrt_c <= n && sqrt_c * sqrt_c == c)
      {
        count++;
      }
    }
  }
  printf("a^2 + b^2 = c^2 を満たす組の個数は %d 個です。\n", count);

  return 0;
}
