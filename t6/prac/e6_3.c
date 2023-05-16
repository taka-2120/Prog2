#include <stdio.h>

#define N 7

int main()
{
  int a[N];
  int inv[N];
  int i;

  // a[i]にiの2乗を代入
  for (i = 0; i < N; i++)
  {
    a[i] = i * i;
  }

  // inv[i]を計算
  for (i = 0; i < N; i++)
  {
    inv[i] = a[N - 1 - i];
  }

  // inv[i]を表示
  for (i = 0; i < N; i++)
  {
    printf("%d ", inv[i]);
  }
  printf("\n");

  return 0;
}
