#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int main(void)
{
  int val;
  int max = 0;
  int min = INT_MAX;
  int sum = 0;
  int cnt;
  FILE *fp;

  if ((fp = fopen("indata.txt", "r")) == NULL)
  {
    printf("ファイルが見つかりません。 --- indata.txt\n");
    exit(EXIT_FAILURE);
  }

  for (cnt = 0;; cnt++)
  {
    fscanf(fp, "%d", &val);
    if (val == 0)
    {
      break;
    }
    if (max < val)
    {
      max = val;
    }
    if (min > val)
    {
      min = val;
    }
    sum += val;
  }

  if (cnt > 0)
  {
    printf("平均値 = %.2f, 最大値 = %d, 最小値 = %d\n", (double) sum / cnt, max, min);
  }

  fclose(fp);

  return EXIT_SUCCESS;
}