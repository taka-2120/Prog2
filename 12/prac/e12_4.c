#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_STUDENT 30
#define MAX_STRING 256

struct StudentData
{
  int id;
  int score;
};
typedef struct StudentData StudentData;

int main(void)
{
  StudentData data[MAX_STUDENT];
  int count = 0;
  FILE *scoreFile = NULL;

  if ((scoreFile = fopen("score.txt", "r")) == NULL)
  {
    printf("ファイルが見つかりません。 --- %s\n", "score.txt");
    exit(EXIT_FAILURE);
  }

  char contents[MAX_STRING];
  while (fgets(contents, MAX_STRING, scoreFile))
  {
    sscanf(contents, "%d %d", &data[count].id, &data[count].score);
    count++;
  }

  for (int i = 0; i < MAX_STUDENT; i++)
  {
    for (int j = i + 1; j < MAX_STUDENT; j++)
    {
      if (data[i].score < data[j].score)
      {
        StudentData tmp = data[i];
        data[i] = data[j];
        data[j] = tmp;
      }
    }
  }

  for (int i = 0; i < MAX_STUDENT; i++)
  {
    printf("%2d位: %d %d\n", i + 1, data[i].id, data[i].score);
  }
  fclose(scoreFile);

  return EXIT_SUCCESS;
}