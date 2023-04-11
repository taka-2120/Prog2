#include <stdio.h>

int main()
{
  int a, b;
  double avg;

  printf("You can calculate the average of two integers.\n");
  printf("Enter first integers: ");
  scanf("%d", &a);
  printf("Enter second integers: ");
  scanf("%d", &b);
  
  avg = (double)(a + b) / 2;
  printf("The average of %d and %d is %g", a, b, avg);

  return 0;
}