#include <stdio.h>

int main()
{
    printf("Grammar after eliminating left factoring:\n");

    printf("S -> iEtSS' | a\n");
    printf("S' -> eS | epsilon\n");
    printf("E -> b\n");

    return 0;
}
