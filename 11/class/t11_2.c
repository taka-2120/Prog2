#include <stdio.h>
#include <string.h>

struct Date
{
  int year;
  int month;
  int day;
};

void printDate(struct Date date)
{
  printf("%d/%d/%d\n", date.month, date.day, date.year);
}

int main(void)
{
  struct Date date;

  date.year = 2023;
  date.month = 6;
  date.day = 20;

  printDate(date);

  return 0;
}