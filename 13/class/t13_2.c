#include <stdio.h>
#include <math.h>

int main(void)
{
  int num;
  int count = 0;
  int sum = 0;

  printf("正の整数を入力してください >> ");
  scanf("%d", &num);

  while (1) 
  {
    count += 1;
    sum += pow(count, 3);
    if (sum > num) 
    {
      printf("3乗の和が%dを超えるような最小の値: %d", num, count);
      break;
    }
  }

  return 0;
}