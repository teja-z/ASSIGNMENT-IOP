#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the values of a, b and c\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("a=%d is greatest no\n", a);
        }
    }
    else if (b > c)
    {
        if (b > a)
        {
            printf("b=%d is greatest no\n");
        }
    }
    else if (c > a)
    {
        if (c > a)
        {
            printf("c=%d if greatest no");
        }
    }
    return 0;
}