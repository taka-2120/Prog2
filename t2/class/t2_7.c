#include <stdio.h>

int main()
{
  int number;
  printf("Enter a positive integer >> ");
  scanf("%d", &number);

  for (int i = 1; i <= 2 * (number - 1) + 1; i += 2)
  {
    printf("%d\n", i);
  }

  return 0;
}