#include <stdio.h>

int main()
{
  int math, english;
  printf("Math >> ");
  scanf("%d", &math);
  printf("English >> ");
  scanf("%d", &english);

  if (math >= 90)
    printf("数学は秀です\n");
  else if (math >= 80)
    printf("数学は優です\n");

  if (english > math)
    printf("英語のほうが得意です\n");
  if (math < 60 && english < 60)
    printf("学習不足です\n");
  if (math >= 85 || english >= 85)
    printf("問題ありません\n");

  return 0;
}