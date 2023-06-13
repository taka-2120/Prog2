#include <stdio.h>
#include <float.h>
#include <limits.h>

int main()
{
  printf("double max using %%f: %f\n", DBL_MAX);
  printf("double min using %%f: %f\n", DBL_MIN);

  printf("double max using %%e: %e\n", DBL_MAX);
  printf("double min using %%e: %e\n", DBL_MIN);
  
  printf("double max using %%d: %d\n", DBL_MAX);
  printf("double min using %%d: %d\n", DBL_MIN);
  
  printf("char max: %d\n", CHAR_MAX);
  printf("char min: %d\n", CHAR_MIN);

  printf("int max: %d\n", INT_MAX);
  printf("int min: %d\n", INT_MIN);

  return 0;
}