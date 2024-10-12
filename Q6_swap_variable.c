#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter value of a and b\n");
    scanf("%d %d", &a, &b);
    printf("value before swapping are %d and %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("value before swapping are %d and %d", a, b);
    return 0;
}