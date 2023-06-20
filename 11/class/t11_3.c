#include <stdio.h>
#include <string.h>

struct Lesson
{
  char dayOfWeek[4];
  int period;
  char subject[30];
  int buildingNo;
  int roomNo;
};

void printLesson(struct Lesson lesson)
{
  printf("%s/%d/%s/%d/%d\n", lesson.dayOfWeek, lesson.period, lesson.subject, lesson.buildingNo, lesson.roomNo);
}

int main(void)
{
  struct Lesson lesson;

  strcpy(lesson.dayOfWeek, "Mon\0");
  lesson.period = 2;
  strcpy(lesson.subject, "Information Theory\0");
  lesson.buildingNo = 6;
  lesson.roomNo = 201;

  printf("Lesson 1: ");
  printLesson(lesson);

  struct Lesson lesson2;
  lesson2 = lesson;
  printf("Lesson 2: ");
  printLesson(lesson2);

  return 0;
}