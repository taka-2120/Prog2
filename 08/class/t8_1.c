#include <stdio.h>

int main()
{
	char character;
	printf("Enter a character >> ");
	scanf("%c", &character);

	printf("The entered character is: %c(%d)", character, character);

	printf("\n");

	return 0;
}
