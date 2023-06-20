#include <stdio.h>

int main()
{
  int price;
  int fivePOff;
  int hdYenOff;

  printf("Enter a number >> ");
  scanf("%d", &price);

  fivePOff = (int)price * 0.95;
  hdYenOff = price - 100;

  if (fivePOff < hdYenOff)
  {
    printf("5パーセント引きが安い");
  }
  else if (fivePOff == hdYenOff)
  {
    printf("両方同じです");
  }
  else
  {
    printf("100円引きが安い");
  }

  return 0;
}