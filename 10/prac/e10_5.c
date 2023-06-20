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
	int a, b, c, d;

	printf("Enter 4 nubmers >> ");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	int max = max4(a, b, c, d);
	int min = min4(a, b, c, d);
	printf("Max: %d, Min: %d", max, min);

	return 0;
}
