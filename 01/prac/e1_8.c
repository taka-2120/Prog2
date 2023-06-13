#include <stdio.h>

int main()
{
  int diff;
  char large;
  char small;

  printf("アルファベットの小文字を入力してください>>> ");
  scanf("%c", &small);
  diff = 'a' - 'A';
  large = small - abs(diff);
  printf("%cの大文字は%c\n", small, large);

  return 0;
}