#include <stdio.h>

int main(void)
{
    char str[] = {'H', 'E', 'L', 'L', 'O'};

    printf("%s\n", str);

    char buff[100];
    char buff2[100] = "";

    for (int i = 0; i < 100; i++)
    {
        printf("%d ", buff[i]);
    }
    printf("\n");

    for (int i = 0; i < 100; i++)
    {
        printf("%d ", buff2[i]);
    }
    printf("\n");

    return 0;
}
