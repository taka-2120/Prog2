#include <stdio.h>
#include <string.h>

#define N 13

struct Class
{
  char dayOfWeek[4];
  int period;
  char subject[30];
  int buildingNo;
  int roomNo;
};
typedef struct Class Class;

void printLesson(struct Class lesson)
{
  printf("%s/%d/%s/%d/%d\n", lesson.dayOfWeek, lesson.period, lesson.subject, lesson.buildingNo, lesson.roomNo);
}

void get_line(char buff[], int size)
{
  int i, c;

  for (i = 0; i < size - 1; i++)
  {
    c = getchar();
    if (c == EOF || c == '\n')
      break;
    buff[i] = c;
  }
  buff[i] = '\0';
}

int main(void)
{
  char dayOfWeek[4];

  Class class[N] = {
      {"Thu", 5, "English Communication", 4, 104},
      {"Wed", 1, "Database", 6, 201},
      {"Fri", 5, "Operating System", 8, 401},
      {"Mon", 4, "English Writing", 4, 102},
      {"Tue", 1, "Programming II", 4, 405},
      {"Tue", 2, "Programming II", 4, 405},
      {"Fri", 3, "Sensing", 4, 402},
      {"Mon", 1, "Probability and Statistics", 4, 402},
      {"Tue", 3, "English Reading", 4, 204},
      {"Thu", 4, "Applied Calculus", 8, 302},
      {"Mon", 2, "Information Theory", 6, 201},
      {"Fri", 1, "Applied Linear Algebra", 8, 305},
      {"Tue", 4, "Signals and Systems", 4, 402},
  };

  printf("Enter the day of the week (Mon, Tue, Wed, Thu, Fri) >> ");
  get_line(dayOfWeek, 4);

  for (int i = 0; i < N; i++)
  {
    if (strcmp(class[i].dayOfWeek, dayOfWeek) == 0)
    {
      printLesson(class[i]);
    }
  }

  return 0;
}
