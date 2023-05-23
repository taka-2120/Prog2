#include <stdio.h>
#define N 10

void printArray(int num[]);

int main(void)
{
	int freq[N];
	// initialization
	for (int i = 0; i < N; i++)
	{
		freq[i] = 0;
	}

	// increment
	for (int i = 0; i < 7; i++)
	{
		int input;
		printf("0以上9以下の整数を入力してください >> ");
		scanf("%d", &input);

		freq[input] += 1;
	}

	printArray(freq);

	return 0;
}

void printArray(int num[])
{
	int i;
	for (i = 0; i < N; i++)
	{
		printf("%dは%d個\n", i, num[i]);
	}
}
