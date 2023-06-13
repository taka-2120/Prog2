#include <stdio.h>
#define SEC (double[]){ 7.2, 6.7, 8.3, 6.9, 7.7 }

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
  // display all values in sec
  for (int i = 0; i < 5; ++i)
  {
    printf("sec[%d] = %g\n", i, SEC[i]);
  }

  // display the maximum value in sec
  printf("最低記録: %gs\n", getMax(SEC));

  // display the minimum value in sec
  printf("最高記録: %gs\n", getMin(SEC));

  return 0;
}