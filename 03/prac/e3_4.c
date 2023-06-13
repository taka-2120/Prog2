#include <stdio.h>

int main()
{
  int balance = 5000;
  int lunchPrice = 390;
  int i = 0;

  printf("チャージ額: %d円\n", balance);

  while (balance >= lunchPrice)
  {
    i++;
    balance -= lunchPrice;
    printf("%3d日目残額 %4d円\n", i, balance);
  }

  return 0;
}
