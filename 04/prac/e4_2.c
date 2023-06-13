#include <stdio.h>

int polynomial(int x)
{
  return 2 * x * x - 5 * x + 3;
}

int main()
{
  int a;

  printf("整数を入力してください >> ");
  scanf("%d", &a);

  for (int i = 1; i <= a; i++)
  {
    printf("f(%d) = %d\n", i, polynomial(i));
  }
  
  return 0;
}