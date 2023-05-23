#include <stdio.h>

#define N 20

int main()
{
  int input;
  int array[N];

  printf("Enter a number >> ");
  scanf("%d", &input);

  array[0] = input;

  for (int i = 1; i < N; i++)
  {
    array[i] = array[i - 1] * 2 + 1;
  }

  for (int i = 0; i < N; i++)
  {
    printf("a%d = %d\n", i, array[i]);
  }

  return 0;
}