#include <stdio.h>

int main()
{
  int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int m, d, totalDays = 0;

  printf("月と日を入力してください (例: 2 1) >> ");
  scanf("%d %d", &m, &d);

  for (int i = 0; i < m - 1; i++)
  {
    totalDays += month[i];
  }

  totalDays += d;

  printf("%d 月 %d 日は 1 年の %d 日目です。\n", m, d, totalDays);

  return 0;
}
