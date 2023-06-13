// // [8.12]
// #include <stdio.h> // 実際には動かないswap関数の例

// void swap(int, int); // swap関数のプロトタイプ宣言

// int main(void)
// {
//   int x, y;

//   x = 5;                        // 引数の代入1
//   y = 3;                        // 引数の代入2
//   swap(x, y);                   // 関数の呼び出し
//   printf("x=%d\ty=%d\n", x, y); // 印字

//   return 0;
// }

// void swap(int a, int b)
// {
//   int temp;

//   temp = a; // swap実行1
//   a = b;    // swap実行2
//   b = temp; // swap実行3
// }

// [8.13]
#include <stdio.h>

void sort(int *, int *);

int main(void)
{
  int x, y;

  printf("Enter a number for x >> ");
  scanf("%d", &x);
  printf("Enter a number for y >> ");
  scanf("%d", &y);

  sort(&x, &y);
  printf("x=%d\ty=%d\n", x, y);

  return 0;
}

int min(int a, int b)
{
  return (a < b) ? a : b;
}

void sort(int *a, int *b)
{
  int smaller = min(*a, *b);
  int larger = (*a == smaller) ? *b : *a;

  *a = smaller;
  *b = larger;
}