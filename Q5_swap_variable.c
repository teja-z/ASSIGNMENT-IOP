#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter value of a and b\n");
    scanf("%d %d", &a, &b);
    printf("value before swapping are %d and %d\n", a, b);
    c = a + b;
    b = c - b;
    a = c - b;
    printf("value before swapping are %d and %d", a, b);
    return 0;
}