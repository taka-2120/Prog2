#include <stdio.h>

int main()
{
  int count;
  double first, ratio;

  printf("項数を入力してください >> ");
  scanf("%d", &count);
  printf("初項を入力してください >> ");
  scanf("%lf", &first);
  printf("公比を入力してください >> ");
  scanf("%lf", &ratio);

  printf("%g\n", first);

  double current = first;
  for (int i = 0; i < count - 1; i++)
  {
    current *= ratio;

    printf("%g\n", current);
  }

  return 0;
}