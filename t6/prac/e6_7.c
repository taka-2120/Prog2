#include <stdio.h>

#define N 10

void printArray(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }
  printf("\n");
}

void bubbleSort(int a[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = n - 1; j > i; j--)
    {
      if (a[j] < a[j - 1])
      {
        int tmp = a[j];
        a[j] = a[j - 1];
        a[j - 1] = tmp;
        printArray(a, n);
      }
    }
  }
}

int main()
{
  int d[N] = {54, 28, 72, 9, 39, 44, 69, 15, 97, 88};

  printf("初期配列: ");
  printArray(d, N);

  printf("\nソート中:\n");
  bubbleSort(d, N);

  printf("\nソート後: ");
  printArray(d, N);

  return 0;
}
