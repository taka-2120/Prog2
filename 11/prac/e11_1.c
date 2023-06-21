#include <stdio.h>

struct Date
{
  int year;
  int month;
  int day;
};
typedef struct Date Date_t;

void printDate(Date_t date)
{
  printf("%d/%d/%d\n", date.month, date.day, date.year);
}

int main(void)
{
  Date_t date;

  date.year = 2023;
  date.month = 6;
  date.day = 20;

  printDate(date);

  return 0;
}