#include <stdio.h>

int main()
{
  int t;

  printf("整数値を入力してください >> ");
  scanf("%d", &t);

  if (t < 1)
  {
    printf("Error\n");
    return 1;
  }

  int sum = 0;
  int i = 1;

  while (i <= t)
  {
    sum += i * i;
    printf("t=%dの場合: \n", i);

    int innerSum = 0;
    for (int j = 1; j <= i; j++)
    {
      innerSum += j * j;
      printf("\t%d周目 total = %d\n", j, innerSum);
    }

    printf("\t1 から %d までの2乗の和は %d です\n\n", i, sum);
    i++;
  }

  printf("t = %d のとき、2乗の和は %d です\n", t, sum);

  return 0;
}
