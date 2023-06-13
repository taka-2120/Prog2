#include <stdio.h>

const char *checkNumber(int number)
{
  if (number % 7 == 0)
    return "7の倍数です";
  else
    return "7の倍数ではありません";
}

int main()
{
  int number;
  printf("Enter an integer >> ");
  scanf("%d", &number);

  printf("%s\n", checkNumber(number));
  return 0;
}