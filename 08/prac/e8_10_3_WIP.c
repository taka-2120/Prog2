#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool contains(char target[], char search[])
{
    int target_length = strlen(target);
    int search_length = strlen(search);
    bool hasChar = true;

    for (int i = 0; i < target_length; i++)
    {
        for (int j = 0; j < search_length; j++)
        {
            if (search[j] == '\0')
            {
                break;
            }

            if (target[i] != search[j])
            {
                hasChar = false;
                return false;
            }
        }
    }
    return hasChar;
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
    char sentence[] = "This is a pen. That is an apple.";
    char search[256];

    printf("Enter string >> ");
    get_line(search, 256);

    printf("%s\n", sentence);
    if (contains(sentence, search))
    {
        printf("Contains \"%s\"\n", search);
    }
    else
    {
        printf("Not contains \"%s\"\n", search);
    }

    return 0;
}
