#include <stdio.h>
#include <string.h>

void str_reverse_copy(char dst[], char src[])
{
    int length = strlen(src);
    dst[length] = '\0';

    for (int i = 0; i < length; i++)
    {
        dst[i] = src[length - i - 1];
    }
}

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
    char dst[256];
    char src[256];

    printf("Enter string >> ");
    get_line(src, 256);

    str_reverse_copy(dst, src);

    printf("%s\n", dst);

    return 0;
}
