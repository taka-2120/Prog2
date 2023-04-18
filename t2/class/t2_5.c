#include <stdio.h>

const char *checkNumber(int number)
{
  if (number > 100)
    return "big number";
  else if (number % 2 == 0)
    return "small even number";
  else
    return "small odd number";
}

int main()
{
  while (1)
  {
    int number;
    printf("Enter a positive integer >> ");
    scanf("%d", &number);

    printf("%s\n", checkNumber(number));
  }
  return 0;
}