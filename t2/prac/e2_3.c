#include <stdio.h>
#include <math.h>

const char *determine(int a, int b, int c)
{
  int D, x1, x2;

  if (a == 0 && b == 0 && c == 0)
    return "全ての実数が解です";
  else if (a == 0 && b == 0)
    return "解なし";
  else if (a == 0)
    return "1つの実数解があります";

  D = b * b - 4 * a * c;
  if (D < 0)
    return "解なし";

  x1 = (-b + sqrt(D)) / (2 * a);
  x2 = (-b - sqrt(D)) / (2 * a);

  if (D == 0)
  {
    // printf("実数解は%dです。\n", x1);
    return "1つの実数解があります";
  }

  return "2つの実数解があります";

  // printf("実数解は%d, %dです。\n", x1, x2);

  // if (x1 > 0 && x2 > 0)
  //   return "2つの実数解があります。そのうち正の解は2つです。";
  // else if (x1 > 0 || x2 > 0)
  //   return "2つの実数解があります。そのうち正の解は1つです。";
  // else if (x1 > 0 && x2 < 0)
  //   return "2つの実数解があります。そのうち正の解はありません。";
}

int main()
{
  double a, b, c;

  printf("ax^2 + bx + c = 0 の係数 a, b, c を入力してください >> ");
  scanf("%lf %lf %lf", &a, &b, &c);

  printf("%s\n", determine(a, b, c));

  return 0;
}