#include <stdio.h>
#include <math.h>

#define N 7

int main()
{
  int score[N];
  int sum = 0;
  double average, variance, std_deviation;

  score[0] = 80;
  score[1] = 70;
  score[2] = 45;
  score[3] = 90;
  score[4] = 50;
  score[5] = 95;

  printf("7人目の点数を入力してください >> ");
  scanf("%d", &score[6]);

  for (int i = 0; i < N; i++)
  {
    sum += score[i];
  }
  average = (double)sum / N;

  sum = 0;
  for (int i = 0; i < N; i++)
  {
    sum += pow(score[i] - average, 2);
  }
  variance = (double)sum / N;

  std_deviation = sqrt(variance);

  printf("平均: %.2f\n", average);
  printf("分散: %.2f\n", variance);
  printf("標準偏差: %.2f\n", std_deviation);

  return 0;
}
