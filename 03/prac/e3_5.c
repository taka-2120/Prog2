#include <stdio.h>

int main()
{
  int i, j;

  printf("%%2d ver\n");
  for (i = 1; i <= 9; i++)
  {
    for (j = 1; j <= 9; j++)
    {
      printf("%2d ", i * j);
    }
    printf("\n");
  }
  printf("\n\n");

  printf("%%d ver\n");
  for (i = 1; i <= 9; i++)
  {
    for (j = 1; j <= 9; j++)
    {
      printf("%d ", i * j);
    }
    printf("\n");
  }
  printf("\n\n");

  printf("%%-2d ver\n");
  for (i = 1; i <= 9; i++)
  {
    for (j = 1; j <= 9; j++)
    {
      printf("%-2d ", i * j);
    }
    printf("\n");
  }
  printf("\n\n");

  printf("%%02d ver\n");
  for (i = 1; i <= 9; i++)
  {
    for (j = 1; j <= 9; j++)
    {
      printf("%02d ", i * j);
    }
    printf("\n");
  }
  printf("\n\n");

  printf("%%4d ver\n");
  for (i = 1; i <= 9; i++)
  {
    for (j = 1; j <= 9; j++)
    {
      printf("%4d ", i * j);
    }
    printf("\n");
  }

  return 0;
}
