#include <stdio.h>

int max2(int a, int b)
{
	return a > b ? a : b;
}

int max4(int a, int b, int c, int d)
{
	return max2(max2(a, b), max2(c, d));
}

int min2(int a, int b)
{
	return a < b ? a : b;
}

int min4(int a, int b, int c, int d)
{
	return min2(min2(a, b), min2(c, d));
}

int main()
{
	int p, q;

	printf("Enter a nubmer >> ");
	scanf("%d", &p);

	printf("Enter a number for previous one or greater >> ");
	scanf("%d", &q);

	int count = 0;
	for (int a = p; a <= q; a++)
	{
		for (int b = p; b <= q; b++)
		{
			for (int c = p; c <= q; c++)
			{
				for (int d = p; d <= q; d++)
				{
					if (min4(a, b, c, d) == p && max4(a, b, c, d) == q)
					{
						count++;
					}
				}
			}
		}
	}
	printf("The number of integer combinations with min = %d and max = %d is %d.\n", p, q, count);

	return 0;
}
