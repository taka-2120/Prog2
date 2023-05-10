#include <stdio.h>
#include <math.h>

int recurrence(int x, int n)
{
  return x * 2 - n * n;
}

int main()
{
  int last;

  printf("初項を整数で入力してください >> ");
  scanf("%d", &last);
  
  printf("a_0 = %d\n", last);

  for(int i = 1; i < 10; i++)
  {
    last = recurrence(last, i);
    printf("a_%d = %d\n", i, last);
  }

  return 0;
}