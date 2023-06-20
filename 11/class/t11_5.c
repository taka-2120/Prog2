#include <stdio.h>

int main(void)
{
  typedef unsigned int score_t;

  score_t english;
  score_t math;
  
  printf("Input English score >> ");
  scanf("%u", &english);
  printf("Input math score >> ");
  scanf("%u", &math);

  // Validation
  if (english > 100) {
    printf("English score must be less than 100.\n");
    return 1;
  }
  if (math > 100) {
    printf("Math score must be less than 100.\n");
    return 1;
  }

  score_t sum = english + math;
  printf("Sum of English and math scores: %u\n", sum);

  return 0;
}