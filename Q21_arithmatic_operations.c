#include <stdio.h>

int main()
{
    int a, b, c, ch;

    printf("Enter your operator\n 1.addition\n 2.substraction\n 3.multiply\n 4.division\n");
    scanf("%d", &ch);

    printf("Enter the values of a and b\n");
    scanf("%d %d", &a, &b);

    switch (ch)
    {
    case 1:
        c = a + b;
        printf("Your addition is %d\n", c);
        break;
    case 2:
        c + a - b;
        printf("Your subtrsction is %d\n", c);
        break;
    case 3:
        c = a * b;
        printf("Your multiplication is %d\n", c);
        break;
    case 4:
        c = a / b;
        printf("Your division is %d\n", c);
        break;
    }
    return 0;
}