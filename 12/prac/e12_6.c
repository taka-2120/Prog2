#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define N 10
#define M 1000

int main()
{
  double sampleMean = 0.0;
  double mutipleSampleMean = 0.0;

  srand((unsigned int)time(NULL));

  for (int i = 0; i < M; i++)
  {
    double sumOfDiceRolls = 0.0;
    for (int k = 0; k < N; k++)
    {
      sumOfDiceRolls += rand() % 6 + 1;
    }
    double averageOfDiceRolls = sumOfDiceRolls / N;
    sampleMean += averageOfDiceRolls;
    mutipleSampleMean += averageOfDiceRolls * averageOfDiceRolls;
    printf("標本平均 %d: %g\n", i + 1, averageOfDiceRolls);
  }
  sampleMean /= M;

  double variance = (mutipleSampleMean / M) - (sampleMean * sampleMean);

  printf("N = %d\n", N);
  printf("M = %d\n", M);
  printf("標本平均の平均: %g\n", sampleMean);
  printf("標本平均の分散: %g\n", variance);

  return 0;
}
