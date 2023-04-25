#include <stdio.h>

int main()
{
  int num = 42;            // 正解の値
  int point = 5;           // 初期持ち点
  int answer = 0;          // ユーザの入力
  int incorrect_count = 0; // 不正解の回数

  // ゲームのループ
  while (1)
  {
    // 入力の受け取り
    printf("数字を入力してください: ");
    scanf("%d", &answer);

    // 正解の判定
    if (answer == num)
    {
      printf("大正解、%d点です!\n", point);
      break; // ゲーム終了
    }
    else if (answer > num)
    {
      printf("大きいです!\n");
    }
    else
    {
      printf("小さいです!\n");
    }

    // 不正解回数のカウントと減点
    incorrect_count++;
    if (incorrect_count >= 5)
    {
      printf("0点です!\n");
      break; // ゲーム終了
    }
    else
    {
      point--;
      printf("不正解です! (残り%d点)\n", point);
    }
  }

  return 0;
}
