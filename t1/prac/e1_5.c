#include <stdio.h>

int main()
{
  char a, b, result;
  a = 127;
  b = 1;

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