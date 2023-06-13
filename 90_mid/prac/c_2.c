#include <stdio.h>

int main()
{
  int n;
  
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    char line[n - i + 1];

    for (int j = 0; j < n - i; j++)
    {
      line[j] = '*';
    }

    line[n - i] = '\n';

    printf("%s\n", line);
  }
}
