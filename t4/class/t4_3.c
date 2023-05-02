#include <stdio.h>

int subt(int x)
{
  int y;

  y = x - 5;

  return y;
}

int main(void)
{
  int input, result;

  printf("整数を入力して下さい >> ");
  scanf("%d", &input);

  result = subt(input);

  printf("%d\n", result);

  return 0;
}