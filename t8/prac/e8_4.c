#include <stdio.h>

int str_compare(char s1[], char s2[])
{
    for (int i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
    {
        int diff = (unsigned char)s1[i] - (unsigned char)s2[i];
        if (diff != 0)
            return diff;
    }
    return 0;
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

    int str_diff = str_compare(txt1, txt2);

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
