#include <stdio.h>

#define COFFEE 350

int main(void)
{
  int amount, period;

  printf("所持金を入力してください >> ");
  scanf("%d", &amount);
  printf("期間を入力してください >> ");
  scanf("%d", &period);

  for (int i = period; i >= 0; i--) 
  {
    printf("のこり%d日 残高%d円\n", i, amount);
    int newAmount = amount - COFFEE;
    if (newAmount > 0) {
      amount = newAmount;
    }
  }

  return 0;
}