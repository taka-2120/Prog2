#include <stdio.h>
#define N 6

void array_input(int a[]);
void array_print(int a[], int b[]);
int array_sum(int a[], int b[]);

int main(void)
{
	int value[N] = {1, 5, 10, 50, 100, 500};
	int num[N];
	int sum;

	printf("枚数の入力\n");
	array_input(num);

	printf("硬貨の額面，枚数\n");
	array_print(value, num);

	sum = array_sum(value, num);
	printf("硬貨の合計金額は %d 円です\n", sum);

	return 0;
}

void array_input(int num[])
{
	int i;
	for (i = 0; i < N; i++)
	{
		printf("%d 番目 >> ", i + 1);
		scanf("%d", &num[i]);
	}
}

void array_print(int value[], int num[])
{
	for (int i = 0; i < N; i++)
	{
		printf("%d円が%d枚\n", value[i], num[i]);
	}
}

int array_sum(int value[], int num[])
{
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum += value[i] * num[i];
	}
	return sum;
}
