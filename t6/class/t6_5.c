#include <stdio.h>

double getMax(double arr[])
{
  double max = 0;

  for (int i = 0; i < 5; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }

  return max;
}

double getMin(double arr[])
{
  double min = 15;

  for (int i = 0; i < 5; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }

  return min;
}

int main(void)
{
  double sec[5];
  sec[0] = 7.2;
  sec[1] = 6.7;
  sec[2] = 8.3;
  sec[3] = 6.9;
  sec[4] = 7.7;

  // display all values in sec
  for (int i = 0; i < 5; ++i)
  {
    printf("sec[%d] = %g\n", i, sec[i]);
  }
  
  // display the maximum value in sec
  printf("最低記録: %gs\n", getMax(sec));

  // display the minimum value in sec
  printf("最高記録: %gs\n", getMin(sec));

  return 0;
}