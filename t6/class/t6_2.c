#include <stdio.h>

int main(void)
{
  int array[4];
  array[0] = 80;
  array[1] = 75;
  array[2] = 50;
  array[3] = 90;

  int input;
  printf("0以上4未満の整数を入力してください >> ");
  scanf("%d", &input);

  printf("array[%d] = %d\n", input, array[input]);

  return 0;
}