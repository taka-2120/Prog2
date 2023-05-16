#include <stdio.h>

int main()
{
  int a[4], b[4], sum[4], i, n, ip;

  a[0] = 3;
  a[1] = -2;
  a[2] = -1;
  a[3] = 1;

  printf("整数を入力してください >> ");
  scanf("%d", &n);
  for (i = 0; i < 4; i++)
  {
    b[i] = n + i;
  }

  for (i = 0; i < 4; i++)
  {
    sum[i] = a[i] + b[i];
  }

  printf("ベクトルの和: (%d, %d, %d, %d)\n", sum[0], sum[1], sum[2], sum[3]);

  ip = 0;
  for (i = 0; i < 4; i++)
  {
    ip += a[i] * b[i];
  }

  printf("ベクトルの内積: %d\n", ip);

  return 0;
}
