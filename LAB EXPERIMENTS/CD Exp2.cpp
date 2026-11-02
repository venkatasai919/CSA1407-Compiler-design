#include <stdio.h>
#include <string.h>

int main()
{
    char line[200];

    printf("Enter a line:\n");
    fgets(line, sizeof(line), stdin);

    /* Check for single-line comment */
    if (strncmp(line, "//", 2) == 0)
    {
        printf("It is a single-line comment.\n");
    }

    /* Check for multi-line comment */
    else if (strncmp(line, "/*", 2) == 0)
    {
        if (strstr(line, "*/") != NULL)
        {
            printf("It is a multi-line comment.\n");
        }
        else
        {
            printf("It is the beginning of a multi-line comment.\n");
        }
    }

    else
    {
        printf("It is not a comment.\n");
    }

    return 0;
}
