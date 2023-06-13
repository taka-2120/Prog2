#include <stdio.h>

const char *checkYear(int year)
{
  if (year >= 2018)
    return "令和です";
  else if (1989 <= year && year < 2018)
    return "平成です";
  else if (1926 <= year && year < 1989)
    return "昭和です";
  else
    return "元号は不明です";
}

int main()
{
  int year;
  printf("Enter a year as an integer in 2023 or less >> ");
  scanf("%d", &year);

  printf("%s\n", checkYear(year));
  
  return 0;
}