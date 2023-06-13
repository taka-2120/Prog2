#include <stdio.h>
#include <string.h>

void get_line(char buff[], int size)
{
	int i, c;

	for (i = 0; i < size - 1; i++)
	{
		c = getchar();
		if (c == EOF || c == '\n')
			break;
		buff[i] = c;
	}
	buff[i] = '\0';
}

int main()
{
	char str[256];
	int upper = 0;
	int lower = 0;
	int number = 0;
	int other = 0;
	int length = 0;

	printf("Enter string: ");
	get_line(str, 256);

	for (int i = 0; i < 256; i++)
	{
		char ch = str[i];

		if (ch == '\0')
			break;

		if ('A' <= ch && ch <= 'Z')
		{
			upper++;
		}
		else if ('a' <= ch && ch <= 'z')
		{
			lower++;
		}
		else if ('0' <= ch && ch <= '9')
		{
			number++;
		}
		else
		{
			other++;
		}
	}

	length = strlen(str);
	printf("length: %d, uppercase: %d, lowercase: %d, number: %d, other: %d", length, upper, lower, number, other);

	return 0;
}
