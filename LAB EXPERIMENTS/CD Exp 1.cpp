#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char input[200];
    int i = 0;

    printf("Enter a C statement:\n");
    fgets(input, sizeof(input), stdin);

    while (input[i] != '\0')
    {
        /* Ignore spaces, tabs and new lines */
        if (isspace(input[i]))
        {
            i++;
            continue;
        }

        /* Identifier */
        if (isalpha(input[i]) || input[i] == '_')
        {
            printf("Identifier: ");

            while (isalnum(input[i]) || input[i] == '_')
            {
                printf("%c", input[i]);
                i++;
            }
            printf("\n");
        }

        /* Constant */
        else if (isdigit(input[i]))
        {
            printf("Constant: ");

            while (isdigit(input[i]))
            {
                printf("%c", input[i]);
                i++;
            }
            printf("\n");
        }

        /* Operators */
        else if (input[i] == '+' || input[i] == '-' ||
                 input[i] == '*' || input[i] == '/' ||
                 input[i] == '=' || input[i] == '%' ||
                 input[i] == '<' || input[i] == '>')
        {
            printf("Operator: %c\n", input[i]);
            i++;
        }

        else
        {
            i++;
        }
    }

    return 0;
}
