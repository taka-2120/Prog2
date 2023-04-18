#include <stdio.h>
#include <math.h>

int main()
{
  char counter = 65;

  for (int i = counter; i <= 90; i++)
  {
    printf("%c ", i);
  }

  printf("\n");

  for (int i = counter; i <= 90; i++)
  {
    printf("%c ", i + 32);
  }

  return 0;
}
