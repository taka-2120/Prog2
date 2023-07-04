#include <stdio.h>
#include <math.h>

int main(void)
{
  int amount = 5000;
  int count = 0;

  for (int i = 0; i <= amount / 1000; i++)
  {
    for (int j = 0; j <= amount / 500; j++)
    {
      for (int k = 0; k <= amount / 100; k++)
      {
        if (i * 1000 + j * 500 + k * 100 == 5000)
        {
          printf("1000円札が%d枚, 500円玉が%2d, 100円玉が%2d枚\n", i, j, k);
          count += 1;
        }
      }
    }
  }

  printf("%d通り", count);

  return 0;
}