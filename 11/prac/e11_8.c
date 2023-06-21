#include <stdio.h>

#define N 12

struct NPB
{
  char name[15];
  double winningPercentage;
  int win;
  int lose;
  int draw;
  int rank;
};
typedef struct NPB NPB;

int main(void)
{
  NPB team[N] = {
      {"Bay Stars", 0.0, 9, 7, 2, -1},
      {"Buffaloes", 0.0, 8, 9, 1, -1},
      {"Carp", 0.0, 5, 12, 1, -1},
      {"Dragons", 0.0, 6, 12, 0, -1},
      {"Fighters", 0.0, 7, 11, 0, -1},
      {"Giants", 0.0, 7, 10, 1, -1},
      {"Golden Eagles", 0.0, 9, 9, 0, -1},
      {"Hawks", 0.0, 10, 7, 1, -1},
      {"Lions", 0.0, 9, 8, 1, -1},
      {"Marines", 0.0, 10, 8, 0, -1},
      {"Swallows", 0.0, 12, 5, 1, -1},
      {"Tigers", 0.0, 12, 6, 0, -1},
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

  for (int i = 0; i < N; i++)
  {
    int rank = 1;
    for (int j = 0; j < N; j++)
    {
      if (team[i].winningPercentage < team[j].winningPercentage)
      {
        rank++;
      }
    }
    team[i].rank = rank;

    printf("%s/%g/%d/%d/%d/%d\n", team[i].name, team[i].winningPercentage, team[i].win, team[i].lose, team[i].draw, team[i].rank);
  }

  return 0;
}
