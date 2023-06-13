#include <stdio.h>

#define N 10

int main()
{
  int array[N];
  int i, m, n, temp;

  for (i = 0; i < N; i++)
  {
    array[i] = 2 * (i + 1);
  }

  printf("1~%dの2つの整数を入力してください >> ", N);
  scanf("%d %d", &m, &n);

  temp = array[m - 1];
  array[m - 1] = array[n - 1];
  array[n - 1] = temp;

  for (i = 0; i < N; i++)
  {
    printf("%d ", array[i]);
  }
  printf("\n");

  return 0;
}
