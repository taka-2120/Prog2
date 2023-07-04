#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if (argc != 5)
  {
    printf("使い方: %s [int] [int] [int] [int]\n", argv[0]);
    exit(EXIT_FAILURE);
  }

  int b[4];
  double sum = 0.0;

  for (int i = 0; i < 4; i++)
  {
    b[i] = atoi(argv[i + 1]);
    sum += b[i];
  }

  double average = sum / 4;
  printf("平均値: %g\n", average);

  return 0;
}
