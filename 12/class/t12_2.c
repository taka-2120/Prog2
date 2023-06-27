#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  printf("argc: %d, argv[0]: %s, argv[1]: %s\n", argc, argv[0], argv[1]);

  if (argc != 2)
  {
    printf("使い方: %s {FILE NAME} \n", argv[0]);
    exit(EXIT_FAILURE);
  }

  return 0;
}