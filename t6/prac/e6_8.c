#include <stdio.h>

int main()
{
  int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // 各月の日数を格納する配列
  int m, d, totalDays = 0;

  printf("月と日を入力してください (例: 2 1) >> ");
  scanf("%d %d", &m, &d);

  for (int i = 0; i < m - 1; i++)
  { // m月より前の月までの日数を加算
    totalDays += month[i];
  }

  totalDays += d; // m月の日数を加算

  printf("%d 月 %d 日は 1 年の %d 日目です。\n", m, d, totalDays);
  
  return 0;
}
