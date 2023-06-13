#include <stdio.h>

int rise_num(int m)
{
  return (m - 4) / 3 + 1;
}

int salary(int a, int m)
{
  int n = rise_num(m);
  return a + n * 10;
}

int main()
{
  int a;
  printf("勤務開始時の時給を入力してください >> ");
  scanf("%d", &a);

  for (int m = 1; m <= 20; m++)
  {
    int s = salary(a, m);
    printf("%2dヶ月目の時給は%4d円です\n", m, s);
  }

  return 0;
}