#include <stdio.h>

#define N 12

struct NPB
{
  char name[15];
  double winningPercentage;
  int win;
  int lose;
  int draw;
};
typedef struct NPB NPB;

int main(void)
{
  NPB team[N] = {
      {"Bay Stars", 0.0, 9, 7, 2},
      {"Buffaloes", 0.0, 8, 9, 1},
      {"Carp", 0.0, 5, 12, 1},
      {"Dragons", 0.0, 6, 12, 0},
      {"Fighters", 0.0, 7, 11, 0},
      {"Giants", 0.0, 7, 10, 1},
      {"Golden Eagles", 0.0, 9, 9, 0},
      {"Hawks", 0.0, 10, 7, 1},
      {"Lions", 0.0, 9, 8, 1},
      {"Marines", 0.0, 10, 8, 0},
      {"Swallows", 0.0, 12, 5, 1},
      {"Tigers", 0.0, 12, 6, 0},
  };

  double maxPercentage = 0.0;
  int maxIndex = 0;
  for (int i = 0; i < N; i++)
  {
    team[i].winningPercentage = (double)team[i].win / (team[i].win + team[i].lose);

    if (maxPercentage < team[i].winningPercentage)
    {
      maxPercentage = team[i].winningPercentage;
      maxIndex = i;
    }
  }

  printf("1st Place: %s/%g/%d/%d/%d\n", team[maxIndex].name, team[maxIndex].winningPercentage, team[maxIndex].win, team[maxIndex].lose, team[maxIndex].draw);

  return 0;
}
