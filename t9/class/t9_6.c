// [8.8]
// #include <stdio.h>
// #define MAX_DATA 10

// int main(void)
// {
//   int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//   int i;
//   int sum;
//   int *p;

//   p = &a[0];
//   sum = 0;
//   for (i = 0; i < MAX_DATA; i++)
//   {
//     sum += *(p + i);
//   }
//   printf("合計 = %d\n", sum);

//   return 0;
// }

//[8.9]
#include <stdio.h>

int main(void)
{
  int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0}; 
  int sum;
  int *p;

  p = &a[0]; 
  sum = 0;

  while (*p) 
  {
    sum += *p++;
  }

  printf("合計 = %d\n", sum);

  return 0;
}