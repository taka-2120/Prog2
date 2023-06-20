#include <stdio.h>

int main() 
{
	int number;
	int sum = 0;
	
	printf("Enter a nubmer >> ");
	scanf("%d", &number);
	
	while(number > 0)
	{
		int val = number % 10;
		sum += val;
		printf("%d\n", val);
		
		number = number / 10;
	}
	
	printf("Sum: %d", sum);
	
	return 0;
}
