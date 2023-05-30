#include <stdio.h>

int main()
{
	char character;
	int diff = 'a' - 'A';

	printf("Enter a character >> ");
	scanf("%c", &character);

	if ('A' <= character && character <= 'Z')
	{
		character += diff;
	}
	else if ('a' <= character && character <= 'z')
	{
		character -= diff;
	}

	printf("Result: %c", character);
}
