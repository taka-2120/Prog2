#include <stdio.h>

int gcd(int a, int b)
{
  if (b == 0)
  {
    return a;
  }
  return gcd(b, a % b);
}

int main()
{
  int s, t;
  printf("正の整数sとtを入力してください(s < t) >> ");
  scanf("%d %d", &s, &t);

  int count = 0;
  for (int x = s; x < t; x++)
  {
    for (int y = x + 1; y <= t; y++)
    {
      if (gcd(x, y) == 1)
      {
        printf("(%d, %d)\n", x, y);
        count++;
      }
    }
  }

  printf("互いに素な自然数の組は%d組あります\n", count);

  return 0;
}