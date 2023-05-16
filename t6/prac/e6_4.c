#include <stdio.h>

#define N 10

int main()
{
  int a[N];
  int b[N];
  int m, n;

  // aの要素を代入する
  for (int i = 0; i < N; i++)
  {
    a[i] = i * i;
  }

  // mとnを入力し、bに代入する
  printf("mを入力してください >> ");
  scanf("%d", &m);
  printf("nを入力してください >> ");
  scanf("%d", &n);

  for (int i = m; i <= n; i++)
  {
    b[i - m] = a[i];
  }

  // aとbの要素を表示する
  printf("配列aの要素: ");
  for (int i = 0; i < N; i++)
  {
    printf("%d ", a[i]);
  }
  printf("\n");

  printf("配列bの要素: ");
  for (int i = 0; i <= n - m; i++)
  {
    printf("%d ", b[i]);
  }
  printf("\n");

  return 0;
}
