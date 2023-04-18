#include <stdio.h>

const char *checkAge(int age)
{
  if (age == 20)
    return "はたちです";
  else if (age < 18)
    return "未成年です";
  else if (age >= 25)
    return "被選挙権があります";
  else
    return "還暦ではありません";
}

int main()
{
  while (1)
  {
    int age;
    printf("Enter an integer between 0 and 99 >> ");
    scanf("%d", &age);

    printf("%s\n", checkAge(age));
  }
  return 0;
}