#include <stdio.h>

int main()
{
  int max;
  printf("最大値を入力してください >> ");
  scanf("%d", &max);

  int i = 1;
  while (i <= max)
  {
    if (i % 3 == 0 || i % 5 == 0)
    {
      printf("%d ", i);
    }
    i++;
  }
  printf("\n");

  return 0;
}
