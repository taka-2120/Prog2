#include <stdio.h>

int price(int x)
{
  return x * 100 + 5;
}

int main()
{
  int num, payment;

  printf("購入個数を入力してください >> ");
  scanf("%d", &num);

  payment = price(num);

  printf("支払金額は%d円です。", payment);
  
  return 0;
}