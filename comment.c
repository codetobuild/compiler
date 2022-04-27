
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isComment(char str[])
{
    int len = strlen(str) - 1;
    if (len < 2)
    {
        return false;
    }
    char prefix[10];
    char suffix[10];
    strncpy(prefix, str, 2);
    strncpy(suffix, str + len - 2, 2);
    prefix[2] = '\0';
    suffix[2] = '\0';

    if (!strcmp(prefix, "//\0"))
    {
        return true;
    }
    if (!strcmp(prefix, "/*\0") && !strcmp(suffix, "*/\0"))
    {
        for (int i = 2; i < len - 2; i++)
        {
            if (str[i] == '*' && str[i + 1] == '/')
            {
                return false;
            }
        }
        return true;
    }
    return false;
}

int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);

    if (isComment(str))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}