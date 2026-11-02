#include <stdio.h>

int main()
{
    char op;

    printf("Enter an operator: ");
    scanf("%c", &op);

    if (op == '+')
        printf("Valid Arithmetic Operator: Addition (+)\n");

    else if (op == '-')
        printf("Valid Arithmetic Operator: Subtraction (-)\n");

    else if (op == '*')
        printf("Valid Arithmetic Operator: Multiplication (*)\n");

    else if (op == '/')
        printf("Valid Arithmetic Operator: Division (/)\n");

    else
        printf("Invalid Arithmetic Operator\n");

    return 0;
}
