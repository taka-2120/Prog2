#include <stdio.h>
#include <math.h>

#define FULL 10
#define N 50

int main(void)
{
	int freq[FULL + 1] = {1, 3, 7, 4, 3, 8, 6, 5, 2, 7, 4};
 

	// Calculate average
	double average = 0;
	for (int i = 0; i <= FULL; i++)
	{
		average += i * freq[i];
	}
	average /= N;
	printf("Average:  %.2f\n", average);


	// Calculate variance
	double variance = 0;
	for (int i = 0; i <= FULL; i++)
	{
		variance += (i - average) * (i - average) * freq[i];
	}
	variance /= N;
	printf("Variance: %.2f\n", variance);


	// Calculate standard deviation
	double stdDeviation = sqrt(variance);
	printf("Standard deviation: %.2f\n", stdDeviation);


	// Calculate deviations for each score
	for (int i = 0; i <= FULL; i++)
	{
		double deviation = 10 * (i - average) / stdDeviation + 50;
		printf("The deviation for score %2d: %.2f\n", i, deviation);
	}

	return 0;
}
