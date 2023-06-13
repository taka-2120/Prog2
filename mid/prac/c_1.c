#include <stdio.h>

int isVaild(int, int);
char detectRank(int, int);

int main()
{
  int lineNo;
  int seatNo;
  char rank;

  printf("1~60までの整数で列番号を入力してください >> ");
  scanf("%d", &lineNo);

  printf("1~50までの整数で座席番号を入力してください >> ");
  scanf("%d", &seatNo);

  if (isVaild(lineNo, seatNo) == 1)
  {
    printf("Error");
    return 1;
  }

  rank = detectRank(lineNo, seatNo);

  printf("%c席", rank);

  return 0;
}

// returns >> 0: all parameters are vaild,
//            1: some parameters contain invailed value
int isVaild(int lineNo, int seatNo)
{
  if (lineNo < 1 || 60 < lineNo)
  {
    return 1;
  }

  if (seatNo < 1 || 50 < seatNo)
  {
    return 1;
  }

  return 0;
}

char detectRank(int lineNo, int seatNo)
{
  if (1 <= lineNo && lineNo <= 10)
  {
    return 'S';
  }
  else if (11 <= lineNo && lineNo <= 30)
  {
    if (11 <= seatNo && seatNo <= 40)
    {
      return 'A';
    }
    return 'B';
  }
  else if (31 <= lineNo && lineNo <= 40)
  {
    return 'B';
  }
  else
  {
    return 'C';
  }
}