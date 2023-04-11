#include <stdio.h>

int main()
{
  int a, b, c, d, e, q, r;

  a = 64, b = 5, c = 16;

  d = 2 * a + 3 * b - c;
  printf("d = %d \n", d);

  q = a / b, r = a % b;
  printf("q = %d, r = %d \n", q, r);

  e = (a * b) * (q + r);
  printf("e = %d \n", e);

  return 0;
}