#include <stdio.h>

void s_to_ms(int *m, int *s)
{
  *m = *s / 60;
  *s = *s % 60;
}

int main(void)
{
  int m = 0;
  int s;

  printf("秒を入力して下さい >> ");
  scanf("%d", &s);
  
  s_to_ms(&m, &s);

  printf("%d分%d秒です\n", m, s);

  return 0;
}