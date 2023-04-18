#include <stdio.h>
#include <math.h>

int main()
{
  int number;
  printf("Enter a positive integer >> ");
  scanf("%d", &number);

  if (number < 1)
  {
    printf("Error: The number must be 1 or grater.\n");
    return 1;
  }

  int sum = 0;
  for (int i = 1; i <= number; i++)
  {
    sum += pow(i, 2);
  }

  printf("The sum of the squares of %d is %d.\n", number, sum);

  return 0;
}