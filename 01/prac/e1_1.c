#include <stdio.h>

int main()
{
  int d, h, m, s, t;
  d = 5;
  h = 22;
  m = 54;
  s = 41;
  t = 3600 * h + 60 * m + s;

  printf("%d日%d時間%d分%d秒は、%d秒です。", d, h, m, s, t);

  return 0;
}