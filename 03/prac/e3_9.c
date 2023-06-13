#include <stdio.h>

int main()
{
  int num = 42;            
  int point = 5;           
  int answer = 0;          
  int incorrect_count = 0; 

  
  while (1)
  {
    
    printf("数字を入力してください: ");
    scanf("%d", &answer);

    
    if (answer == num)
    {
      printf("大正解、%d点です!\n", point);
      break; 
    }
    else if (answer > num)
    {
      printf("大きいです!\n");
    }
    else
    {
      printf("小さいです!\n");
    }

    
    incorrect_count++;
    if (incorrect_count >= 5)
    {
      printf("0点です!\n");
      break; 
    }
    else
    {
      point--;
      printf("不正解です! (残り%d点)\n", point);
    }
  }

  return 0;
}
