#include <stdio.h>

int main(void)
{
  int x, y, z;

  printf("Original\n");
  for (x = 1; x <= 3; x++)
  {
    for (y = 1; y <= 3; y++)
    {
      for (z = 1; z <= 3; z++)
      {
        printf("%d + %d + %d = %d\n", x, y, z, x + y + z);
      }
    }
  }

  printf("\nModified\n");
  for (x = 1; x <= 4; x++)
  {
    for (y = 0; y <= 2; y++)
    {
      for (z = 4; z <= 6; z++)
      {
        printf("%d * %d + %d^2 = %d\n", x, y, z, x * y + z * z);
      }
    }
  }

  return 0;
}