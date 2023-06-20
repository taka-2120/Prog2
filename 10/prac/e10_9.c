#include <stdio.h>

int main()
{
	int a[100];
	int num = 0;

	printf("Enter single-digit integers (enter -1 to finish):\n");
	while (1)
	{
		int input;
		scanf("%d", &input);
		if (input == -1)
		{
			break;
		}
		a[num++] = input;
	}

	int score = 0;
	int level = num - 1;

	while (level > 1)
	{
		for (int j = 0; j < level; j++)
		{
			a[j] = (a[j] + a[j + 1]) % 10;
		}
		level--;
	}

	if (a[0] == 1 && a[1] == 0 && a[2] == 0)
	{
		score = 100;
	}
	else
	{
		score = a[0] * 10 + a[1];
	}

	printf("The final score is: %d\n", score);

	return 0;
}
