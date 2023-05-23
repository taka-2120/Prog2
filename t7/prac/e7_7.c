#include <stdio.h>

#define M 5
#define N 4

int main(void)
{
  int i, j;
  int sum;
  double average;

  int a[M][N] = {
      {70, 85, 70, 100},
      {60, 30, 40, 50},
      {50, 60, 70, 45},
      {80, 100, 90, 85},
      {75, 90, 55, 80},
  };

  // 各学生の平均点を計算して表示
  for (i = 0; i < M; i++)
  {
    sum = 0;
    for (j = 0; j < N; j++)
    {
      sum += a[i][j];
    }
    average = (double)sum / N;
    printf("学生%dの平均点は %.2f\n", i, average);
  }

  printf("\n");

  // 各回の試験の平均点を計算して表示
  for (j = 0; j < N; j++)
  {
    sum = 0;
    for (i = 0; i < M; i++)
    {
      sum += a[i][j];
    }
    average = (double)sum / M;
    printf("%d回目の試験の平均点は %.2f\n", j, average);
  }

  return 0;
}
