#include <stdio.h>
#include <math.h>

#define N 7

int main()
{
  int score[N];
  int sum = 0;
  double average, variance, std_deviation;

  // 最初の6人分の点数のデータを配列に格納する
  score[0] = 80;
  score[1] = 70;
  score[2] = 45;
  score[3] = 90;
  score[4] = 50;
  score[5] = 95;

  // キーボードから入力されたデータをscore[6]に代入する
  printf("7人目の点数を入力してください >> ");
  scanf("%d", &score[6]);

  // 平均を計算する
  for (int i = 0; i < N; i++)
  {
    sum += score[i];
  }
  average = (double)sum / N;

  // 分散を計算する
  sum = 0;
  for (int i = 0; i < N; i++)
  {
    sum += pow(score[i] - average, 2);
  }
  variance = (double)sum / N;

  // 標準偏差を計算する
  std_deviation = sqrt(variance);

  // 結果を出力する
  printf("平均: %.2f\n", average);
  printf("分散: %.2f\n", variance);
  printf("標準偏差: %.2f\n", std_deviation);

  return 0;
}
