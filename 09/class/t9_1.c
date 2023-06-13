#include <stdio.h>

int main(void)
{
  int a = 1234;
  int b = 5678;
  int c = 7777;

  printf("%p\n", &a);
  printf("%p\n", &b);
  printf("%p\n", &c);

  return 0;
}