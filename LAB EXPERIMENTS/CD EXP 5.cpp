
#include <stdio.h>

int main(void) {
    int c, spaces = 0, newlines = 0;

    printf("Enter text (Ctrl+Z, then Enter, to finish):\n");

    while ((c = getchar()) != EOF) {
        if (c == '\n')
            newlines++;
        else if (c == ' ' || c == '\t' ||
                 c == '\r' || c == '\f' || c == '\v')
            spaces++;
    }

    printf("Whitespace characters: %d\n", spaces);
    printf("Newline characters: %d\n", newlines);

    return 0;
}

