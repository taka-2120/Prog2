#include <stdio.h>
#include <math.h>
#define M 3

double trace(double array[][M])
{
	double sum = 0;
	for (int i = 0; i < M; i++)
	{
		sum += array[i][i];
	}
	return sum;
}

double frobeniusNorm(double array[][M])
{
	double sum = 0;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
		{
			sum += array[i][j] * array[i][j];
		}
	}

	return sqrt(sum);
}

int main(void)
{
	double a[M][M];

	a[0][0] = 2.5;
	a[0][1] = 0.0;
	a[0][2] = -1.0;
	a[1][0] = -1.0;
	a[1][1] = 1.5;
	a[1][2] = 0.0;
	a[2][0] = 5.0;
	a[2][1] = 4.0;
	a[2][2] = 3.0;

	double traceSum = trace(a);
	double frobeniusNormSum = frobeniusNorm(a);

	printf("Trace: %0.1f\n", traceSum);
	printf("Frobenius Norm: %0.2f\n", frobeniusNormSum);

	return 0;
}
