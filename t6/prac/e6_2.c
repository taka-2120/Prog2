#include <stdio.h>

int main()
{
  int a[4], b[4], sum[4], i, n, ip;

  // aの各要素に値を代入
  a[0] = 3;
  a[1] = -2;
  a[2] = -1;
  a[3] = 1;

  // bの各要素に計算結果を代入
  printf("整数を入力してください >> ");
  scanf("%d", &n);
  for (i = 0; i < 4; i++)
  {
    b[i] = n + i;
  }

  // ベクトルの和を計算
  for (i = 0; i < 4; i++)
  {
    sum[i] = a[i] + b[i];
  }

  // ベクトルの和を表示
  printf("ベクトルの和: (%d, %d, %d, %d)\n", sum[0], sum[1], sum[2], sum[3]);

  // ベクトルの内積を計算
  ip = 0;
  for (i = 0; i < 4; i++)
  {
    ip += a[i] * b[i];
  }

  // ベクトルの内積を表示
  printf("ベクトルの内積: %d\n", ip);

  return 0;
}
