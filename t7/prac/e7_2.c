#include <stdio.h>

#define N 50

int main()
{
  int input;
  int array[N];

  printf("Enter a positive integer less than 2000 >> ");
  scanf("%d", &input);

  int i = 0;
  while (i * i <= input)
  {
    array[i] = i * i;
    i++;
  }
  array[i] = -1;

  int sum = 0;
  for (int i = 0; i < N; i++)
  {
    if (array[i] == -1)
    {
      break;
    }

    printf("a%d = %d\n", i, array[i]);
    sum += array[i];
  }

  printf("Sum of square: %d\n", sum);

  return 0;
}