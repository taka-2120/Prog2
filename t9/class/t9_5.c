#include <stdio.h>

int main(void)
{
  int a = 1234;   // 変数aに1234を代入
  int x;          // 変数xを宣言
  int *p;         // ポインタ変数pを宣言

  p = &a;         // pにaのアドレスを代入

  x = *p + 4321;  // xに *p(aに等しい) + 4321 を代入

  printf("%d %d \n", *p, x);  // *pとxを表示

  return 0;
}