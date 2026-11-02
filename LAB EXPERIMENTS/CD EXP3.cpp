#include <stdio.h>

int main()
{
    char input[500];
    int i = 0;

    printf("Enter a statement:\n");
    fgets(input, sizeof(input), stdin);

    while (input[i] != '\0')
    {
        /* Ignore spaces, tabs and new lines */
        if (input[i] == ' ' || input[i] == '\t' || input[i] == '\n')
        {
            i++;
            continue;
        }

        /* Ignore single-line comment */
        if (input[i] == '/' && input[i + 1] == '/')
        {
            break;
        }

        /* Ignore multi-line comment */
        if (input[i] == '/' && input[i + 1] == '*')
        {
            i += 2;

            while (input[i] != '\0' &&
                   !(input[i] == '*' && input[i + 1] == '/'))
            {
                i++;
            }

            if (input[i] != '\0')
                i += 2;

            continue;
        }

        printf("%c", input[i]);
        i++;
    }

    printf("\n");

    return 0;
}
