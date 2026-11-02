
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char s[100];
    int i, valid = 1;

    printf("Enter an identifier: ");
    scanf("%99s", s);

    if (!(isalpha((unsigned char)s[0]) || s[0] == '_'))
        valid = 0;

    for (i = 1; s[i] != '\0'; i++) {
        if (!(isalnum((unsigned char)s[i]) || s[i] == '_')) {
            valid = 0;
            break;
        }
    }

    if (valid)
        printf("Valid identifier\n");
    else
        printf("Invalid identifier\n");

    return 0;
}

