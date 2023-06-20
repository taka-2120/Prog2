#include <stdio.h>
#include <math.h>

#define FULL 10
#define N 53

int main(void)
{
	int freq[FULL + 1] = {1, 3, 7, 4, 3, 8, 6, 5, 2, 7, 4};

	// Add scores for 3 students
	for (int i = 0; i < 3; i++)
	{
		int score;
		printf("Enter the score for student %d >> ", i + 1);
		scanf("%d", &score);
		freq[score] += 1;
	}

	// Display all scores
	for (int i = 0; i <= FULL; i++)
	{
		printf("%d points: %d\n", i, freq[i]);
	}
	printf("\n");

	// Get median
	int sum = 0;
	for (int i = 0; i <= FULL; i++)
	{
		sum += freq[i];
		if (sum > 27)
		{
			printf("Median: %d points\n", i);
			break;
		}
	}

	// Calculate mode
	int max = 0;
	for (int i = 0; i <= FULL; i++)
	{
		if (freq[i] > max) {
			max = freq[i];
		}
	}
	for (int i = 0; i <= FULL; i++)
	{
		if (freq[i] == max) {
			printf("Mode: %d points (%d students)\n", i, max);
		}
	}

	return 0;
}
