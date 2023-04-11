#include <stdio.h>

int main()
{
  int a, b, result;
  a = 25;
  b = 5;

  result = a + b;
  printf("%d + %d = %d\n", a, b, result);
  
  result = a - b;
  printf("%d - %d = %d\n", a, b, result);
  
  result = a * b;
  printf("%d * %d = %d\n", a, b, result);
  
  result = a / b;
  printf("%d / %d = %d\n", a, b, result);
  
  return 0;
}