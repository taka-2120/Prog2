#include <stdio.h>

int main()
{
  int age;
  printf("Enter an integer between 0 and 99 >> ");
  scanf("%d", &age);

  if (age < 0 || age > 99)
  {
    printf("Invalid input\n");
    return 1;
  }

  if (age == 20)
    printf("はたちです\n");
  if (age < 18)
    printf("未成年です\n");
  if (age >= 25)
    printf("被選挙権があります\n");
  else
    printf("還暦ではありません\n");

  printf("\n");

  return 0;
}