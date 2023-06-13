#include <stdio.h>

int main()
{
  int number;
  printf("Enter a positive number >> ");
  scanf("%d", &number);

  if (number < 1) {
    printf("Error: The number must be positive.\n");
    return 1;
  }

  for (int i = 1; i <= number; i++)
  {
    if (i % 3 == 0 || i % 5 == 0)
    {
      printf("%d ", i);
    }
  }

  return 0;
}