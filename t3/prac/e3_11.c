#include <stdio.h>

int main()
{
  char s, t;
  int n, m;

  printf("文字sを入力してください: ");
  scanf("%c", &s);
  getchar();

  printf("文字tを入力してください: ");
  scanf("%c", &t);
  getchar();

  printf("正の整数nを入力してください: ");
  scanf("%d", &n);

  printf("正の整数mを入力してください: ");
  scanf("%d", &m);

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if ((i + j) % 2 == 0)
      {
        printf("%c", s);
      }
      else
      {
        printf("%c", t);
      }
    }
    printf("\n");
  }

  return 0;
}
