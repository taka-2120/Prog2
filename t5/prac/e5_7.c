#include <stdio.h>
#include <math.h>

int sos(int n)
{
  int sum = 0;
  for(int i = n; i < n + 10; i++)
  {
    sum += i * i;
  }
  return sum;
}

int main()
{
  int input;
  int i = 0, sum = 0;

  printf("整数を入力してください >> ");
  scanf("%d", &input);
  
  while (sum < input)
  {
    sum = sos(i);
    i++;
  }

  printf("%d: i = %d, s_%d = %d", input, i, i, sum);

  return 0;
}
