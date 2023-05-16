#include <stdio.h>

#define N 7

int main()
{
  int a[N];
  int inv[N];
  int i;

  for (i = 0; i < N; i++)
  {
    a[i] = i * i;
  }

  for (i = 0; i < N; i++)
  {
    inv[i] = a[N - 1 - i];
  }

  for (i = 0; i < N; i++)
  {
    printf("%d ", inv[i]);
  }
  printf("\n");

  return 0;
}
