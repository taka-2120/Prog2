#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int main(int argc, char *argv[])
{
  int val;
  int max = 0;
  int min = INT_MAX;
  int sum = 0;
  int count;
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

  count = 0;
  while (fscanf(fp, "%d", &val) != EOF)
  {
    if (max < val)
    {
      max = val;
    }
    if (min > val)
    {
      min = val;
    }
    sum += val;
    count++;
  }

  if (count > 0)
  {
    printf("平均値 = %.2f, 最大値 = %d, 最小値 = %d\n", (double) sum / count, max, min);
  }

  fclose(fp);

  return EXIT_SUCCESS;
}