#include <stdio.h>

#define N 10

int main()
{
  int array[N];
  int i, m, n, temp;

  // 偶数を代入
  for (i = 0; i < N; i++)
  {
    array[i] = 2 * (i + 1);
  }

  // 入れ替える要素を入力
  printf("1~%dの2つの整数を入力してください >> ", N);
  scanf("%d %d", &m, &n);

  // 値の入れ替え
  temp = array[m - 1];
  array[m - 1] = array[n - 1];
  array[n - 1] = temp;

  // 配列の要素を表示
  for (i = 0; i < N; i++)
  {
    printf("%d ", array[i]);
  }
  printf("\n");

  return 0;
}
