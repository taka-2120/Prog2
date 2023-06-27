#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  int val;
  int sum = 0;
  int cnt;
  char filename[FILENAME_MAX];
  FILE *fp;

  if (argc != 2)
  {
    printf("使い方: %s {FILE NAME} \n", argv[0]);
    exit(EXIT_FAILURE);
  }

  strcpy(filename, argv[1]);

  if ((fp = fopen(filename, "r")) == NULL)
  {
    printf("ファイルが見つかりません。 --- %s\n", filename);
    exit(EXIT_FAILURE);
  }

  for (cnt = 0;; cnt++)
  {
    fscanf(fp, "%d", &val);
    if (val == 0)
    {
      break;
    }
    sum += val;
  }

  if (cnt > 0)
  {
    printf("合計=%d 平均値=%g\n", sum, (double)sum / cnt);
  }

  fclose(fp);

  return EXIT_SUCCESS;
}