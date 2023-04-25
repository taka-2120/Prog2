#include <stdio.h>

int main(void)
{
  int input = getchar();

  while (input != EOF)
  {
    if ((64 < input && input < 91) || (96 < input && input < 123))
    {
      putchar(input);
    }
    input = getchar();
  }
  return 0;
}
