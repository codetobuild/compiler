#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);

    int state = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        char ch = str[i++];
        // printf("%c\n", ch);

        switch (state)
        {
        case 0:
            if (ch == 'a')
            {
                state = 1;
            }
            else if (ch == 'b')
            {
                state = 2;
            }
            else
            {
                state = 6;
            }
            break;
        case 1:
            if (ch == 'a')
            {
                state = 3;
            }
            else if (ch == 'b')
            {
                state = 4;
            }
            else
            {
                state = 6;
            }
            break;

        case 2:
            if (ch == 'a')
            {
                state = 6;
            }
            else if (ch == 'b')
            {
                state = 2;
            }
            else
            {
                state = 6;
            }
            break;

        case 3:
            if (ch == 'a')
            {
                state = 3;
            }
            else if (ch == 'b')
            {
                state = 2;
            }
            else
            {
                state = 6;
            }
            break;

        case 4:
            if (ch == 'a')
            {
                state = 6;
            }
            else if (ch == 'b')
            {
                state = 5;
            }
            else
            {
                state = 6;
            }
            break;

        case 5:
            if (ch == 'a')
            {
                state = 6;
            }
            else if (ch == 'b')
            {
                state = 2;
            }
            else
            {
                state = 6;
            }
            break;

        case 6:
            printf("String not accepted");
            exit(0);
        }
    }

    if (state == 6)
    {
        printf("STRING ACCEPTED");
    }
    return 0;
}