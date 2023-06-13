#include <stdio.h>

int main(void)
{
  int i;
  int a[4];
  a[0] = 100;
  a[1] = 101;
  a[2] = 102;
  a[3] = 103;

  // i のアドレス（ &i ）を書式 %p で表示する printf 文を書く
  printf("iのアドレスは%pです\n", &i);

  // a[0]～a[3] のアドレス（ &a[0], &a[1], &a[2], &a[3] ）を書式 %p で表示する printf 文を書く
  printf("a[0]のアドレスは%pです\n", &a[0]);
  printf("a[1]のアドレスは%pです\n", &a[1]);
  printf("a[2]のアドレスは%pです\n", &a[2]);
  printf("a[3]のアドレスは%pです\n", &a[3]);

  // a, a+1, a+2, a+3 を書式 %p で表示する printf 文を書く
  printf("aは%pです\n", a);
  printf("a+1は%pです\n", a + 1);
  printf("a+2は%pです\n", a + 2);
  printf("a+3は%pです\n", a + 3);

  printf("\n");

  // i の値を書式 %d で表示する printf 文を書く
  printf("iの値は%dです\n", i);

  // a[0]～a[3] の値（ a[0], a[1], a[2], a[3] ）を書式 %d で表示する printf 文を書く
  printf("a[0]の値は%dです\n", a[0]);
  printf("a[1]の値は%dです\n", a[1]);
  printf("a[2]の値は%dです\n", a[2]);
  printf("a[3]の値は%dです\n", a[3]);

  // *a, *(a+1), *(a+2), *(a+3) を書式 %d で表示する printf 文を書く
  printf("*aの値は%dです\n", *a);
  printf("*(a+1)の値は%dです\n", *(a + 1));
  printf("*(a+2)の値は%dです\n", *(a + 2));
  printf("*(a+3)の値は%dです\n", *(a + 3));

  return 0;
}