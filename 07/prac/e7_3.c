#include <stdio.h>
#include <math.h>

#define M 3

void print_array(double a[M][M])
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
		{
			printf("b[%d][%d] =%5.1f\n", i, j, a[i][j]);
		}
	}
}

int main()
{
  double a[M][M], b[M][M];
  int i, j;

  a[0][0] = -1.0 / sqrt(2.0);
  a[0][1] = -1.0 / sqrt(3.0);
  a[0][2] = 1.0 / sqrt(6.0);
  a[1][0] = 1.0 / sqrt(2.0);
  a[1][1] = -1.0 / sqrt(3.0);
  a[1][2] = 1.0 / sqrt(6.0);
  a[2][0] = 0.0;
  a[2][1] = 1.0 / sqrt(3.0);
  a[2][2] = 2.0 / sqrt(6.0);

  for (i = 0; i < M; i++)
  {
    for (j = 0; j < M; j++)
    {
      b[j][i] = a[i][j];
    }
  }

  print_array(b);

  return 0;
}