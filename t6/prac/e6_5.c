#include <stdio.h>

#define N 7

int main()
{
  int score[N];
  int i, max, min;

  // 最初の6人分の点数のデータを配列 score に格納する
  score[0] = 80;
  score[1] = 70;
  score[2] = 45;
  score[3] = 90;
  score[4] = 50;
  score[5] = 95;

  // キーボードから入力された値を score[6] に代入する
  printf("7人目の点数を入力してください >> ");
  scanf("%d", &score[6]);

  // 最高点と最低点を求める
  max = score[0];
  min = score[0];
  for (i = 1; i < N; i++)
  {
    if (score[i] > max)
    {
      max = score[i];
    }
    if (score[i] < min)
    {
      min = score[i];
    }
  }

  // 結果を表示する
  printf("最高点は %d 点です。\n", max);
  printf("最低点は %d 点です。\n", min);

  return 0;
}
