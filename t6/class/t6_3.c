#include <stdio.h>

int main(void)
{
  int array[4];
  array[0] = 80;
  array[1] = 75;
  array[2] = 50;
  array[3] = 90;

  int sum = 0;
  for (int i = 0; i < 4; i++)
  {
    printf("array[%d] = %d\n", i + 1, array[i]);
    sum += array[i];
  }

  printf("合計: %d\n", sum);

  return 0;
}