#include <stdio.h>

const char *checkNumber(int number)
{
  if (number % 15 == 0)
    return "15の倍数です";
  else if (number % 5 == 0)
    return "15の倍数ではないが、5の倍数です\n";
  else if (number % 3 == 0)
    return "5の倍数ではないが、3の倍数です\n";
  else
    return "3の倍数でも5の倍数でもありません\n";
}

int main()
{
  int natural;
  printf("Enter a natural number >> ");
  scanf("%d", &natural);

  printf("%s\n", checkNumber(natural));

  return 0;
}