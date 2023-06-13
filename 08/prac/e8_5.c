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
    return;
}

int main(void)
{
    char txt1[256];
    char txt2[256];

    printf("文字列１を入力してください >>> ");
    get_line(txt1, 256);

    printf("文字列２を入力してください >>> ");
    get_line(txt2, 256);

    int str_diff = strcmp(txt1, txt2);

    if (str_diff == 0)
    {
        // Same
        printf("%s\n", txt1);
    }
    else if (str_diff > 0)
    {
        printf("%s, %s\n", txt2, txt1);
    }
    else
    {
        printf("%s, %s\n", txt1, txt2);
    }

    return 0;
}
