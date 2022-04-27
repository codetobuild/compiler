#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    char str[100];
    scanf("%s", str);

    int i = 0;
    bool flag = false;

    while (str[i] != '\0')
    {
        char ch = str[i];
        if (i == 0)
        {
            printf("%c\n", ch);
            flag = (isalpha(ch) || ch == '_') ? true : false;
            if (!flag)
                break;
        }
        else
        {
            if (!isalpha(ch) && !isdigit(ch) && ch != '_')
            {
                printf("%c\n", ch);
                flag = false;
                break;
            }
        }
        i++;
    }
    if (flag)
    {
        printf("Valid identifier");
    }
    else
    {
        printf("Invalid identifier");
    }
    return 0;
}