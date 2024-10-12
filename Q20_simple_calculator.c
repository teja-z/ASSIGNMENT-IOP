#include <stdio.h>

int main()
{
    int a, b;
    char op;
    printf("Enter your operator + or - or * or / \n");
    scanf("%c", &op);
    printf("Enter the values of a and b\n");
    scanf("%d %d", &a, &b);
    switch (op)
    {
    case '+':
        printf("Your addition is %d\n", a + b);
        break;
    case '-':
        printf("Your subtrsction is %d\n", a - b);
        break;
    case '*':
        printf("Your multiplication is %d\n", a * b);
        break;
    case '/':
        printf("Your division is %d\n", a / b);
        break;
    }
    return 0;
}