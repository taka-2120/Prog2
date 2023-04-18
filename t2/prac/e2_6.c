#include <stdio.h>

int main()
{
  int min, max;

  printf("Enter min and max as positive number >> ");
  scanf("%d %d", &min, &max);

  if (min < 0 || max < 0)
  {
    printf("Error: min and max must be positive number\n");
    return 1;
  }

  if (min > max)
  {
    int tmp = min;
    min = max;
    max = tmp;
  }

  int count = 0;

  for (int i = min; i < max; i++)
  {
    if (i % 3 == 0 || i % 5 == 0)
    {
      count++;
    }
  }

  printf("There are %d numbers between %d and %d that are divisible by 3 or 5\n", count, min, max);

  return 0;
}
