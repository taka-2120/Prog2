#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
  int val;
  int max = 0;
  int min = INT_MAX;
  int sum = 0;
  int count = 0;
  FILE *inFile = NULL;
  FILE *outFile = NULL;
  FILE *resultFile = NULL;
  
  if ((inFile = fopen("indata.txt", "r")) == NULL)
  {
    printf("ファイルが見つかりません。 --- %s\n", "indata.txt");
    exit(EXIT_FAILURE);
  }
  if ((outFile = fopen("outdata.txt", "w+")) == NULL)
  {
    printf("ファイルが見つかりません。 --- %s\n", "outdata.txt");
    exit(EXIT_FAILURE);
  }
  if ((resultFile = fopen("result.txt", "w+")) == NULL)
  {
    printf("ファイルが見つかりません。 --- %s\n", "result.txt");
    exit(EXIT_FAILURE);
  }

  while (fscanf(inFile, "%d", &val) != EOF) 
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

    // Copying
    char charVal[12];
    snprintf(charVal, 12, "%d\n", val);
    fprintf(outFile, "%s", charVal);

    count++;
  }

  if (count > 0)
  {
    char result[256];
    snprintf(result, 256, "平均値 = %.2f, 最大値 = %d, 最小値 = %d\n", (double) sum / count, max, min);
    printf("%s", result);
    fprintf(resultFile, "%s", result);
  }

  fclose(inFile);
  fclose(outFile);
  fclose(resultFile);

  return EXIT_SUCCESS;
}