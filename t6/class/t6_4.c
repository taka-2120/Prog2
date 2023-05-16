#include <stdio.h>

int main(void)
{
  int prize[5];
  prize[0] = 10000;
  prize[1] = 5000;
  prize[2] = 3000;
  prize[3] = 1000;
  prize[4] = 500;

  int input;
  printf("1~5の整数を入力してください >> ");
  scanf("%d", &input);

  if (input < 1 || input > 5)
  {
    printf("1~5の整数を入力してください\n");
    return 1;
  }

  printf("%d等は%d円です\n", input, prize[input - 1]);

  return 0;
}