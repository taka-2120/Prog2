#include <stdio.h>
#include <math.h>

#define M 3

void print_array(double a[M][M], char label)
{
  for (int i = 0; i < M; i++)
  {
    for (int j = 0; j < M; j++)
    {
      printf("%c[%d][%d] =%5.1f\n", label, i, j, a[i][j]);
    }
  }
}

int main(void)
{
  double a[M][M], b[M][M], c[M][M], d[M][M];

  a[0][0] = -1.0 / sqrt(2.0);
  a[0][1] = -1.0 / sqrt(3.0);
  a[0][2] = 1.0 / sqrt(6.0);
  a[1][0] = 1.0 / sqrt(2.0);
  a[1][1] = -1.0 / sqrt(3.0);
  a[1][2] = 1.0 / sqrt(6.0);
  a[2][0] = 0.0;
  a[2][1] = 1.0 / sqrt(3.0);
  a[2][2] = 2.0 / sqrt(6.0);

  b[0][0] = -1.0 / sqrt(2.0);
  b[0][1] = 1.0 / sqrt(2.0);
  b[0][2] = 0.0;
  b[1][0] = -1.0 / sqrt(3.0);
  b[1][1] = -1.0 / sqrt(3.0);
  b[1][2] = 1.0 / sqrt(3.0);
  b[2][0] = 1.0 / sqrt(6.0);
  b[2][1] = 1.0 / sqrt(6.0);
  b[2][2] = 2.0 / sqrt(6.0);

  for (int i = 0; i < M; i++)
  {
    for (int j = 0; j < M; j++)
    {
      c[i][j] = 0;
      for (int k = 0; k < M; k++)
      {
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }
  print_array(c, 'C');

  for (int i = 0; i < M; i++)
  {
    for (int j = 0; j < M; j++)
    {
      d[i][j] = 0;
      for (int k = 0; k < M; k++)
      {
        d[i][j] += b[i][k] * a[k][j];
      }
    }
  }
  print_array(d, 'D');

  return 0;
}