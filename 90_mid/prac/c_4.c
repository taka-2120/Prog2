#include <stdio.h>

int date(int y, int m, int d)
{
  return y * 10000 + m * 100 + d;
}

int get_nengou(int ymd)
{
  if (1912 <= ymd / 10000 && ymd / 10000 < 1926)
  {
    return 0;
  }
  else if (1926 <= ymd / 10000 && ymd / 10000 < 1989)
  {
    return 1;
  }
  else if (1989 <= ymd / 10000 && ymd / 10000 < 2019)
  {
    return 2;
  }
  else
  {
    return 3;
  }
}

int main()
{
  int ymd;
  int nengou;
  int y, m, d;

  printf("Enter year, month, and date >> ");
  scanf("%d %d %d", &y, &m, &d);

  ymd = date(y, m, d);

  printf("%d\n", ymd);

  nengou = get_nengou(ymd);
  if (nengou == 0)
  {
    printf("大正");
  }
  else if (nengou == 1)
  {
    printf("昭和");
  }
  else if (nengou == 2)
  {
    printf("平成");
  }
  else if (nengou == 3)
  {
    printf("令和");
  }
  else
  {
    printf("Error");
  }

  return 0;
}