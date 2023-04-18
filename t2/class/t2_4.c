#include <stdio.h>

int main()
{
  int number;

  scanf("%d", &number);

  if (number % 2 == 0)
    printf("偶数です\n");
  else if (number % 3 == 0)
    printf("偶数ではないが、3 の倍数です\n");
  else
    printf("偶数でも3の倍数でもありません\n");

  return 0;
}