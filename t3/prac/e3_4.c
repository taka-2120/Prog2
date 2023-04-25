#include <stdio.h>

int main()
{
  int balance = 5000;
  int lunch_price = 390;

  printf("チャージ額: %d円\n", balance);

  for (int i = 1; balance >= lunch_price; i++)
  {
    balance -= lunch_price;
    printf("%3d日目残額 %4d円\n", i, balance);
  }

  return 0;
}
