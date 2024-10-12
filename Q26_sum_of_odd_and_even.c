#include <stdio.h>

int main()
{
    int n, sum = 0, k = 0;
    printf("Enter value of n\n");
    scanf("%d", &n);
    
    for (int i = 0; i <= n; i = i + 2)
    {
        sum = sum + i;
    }
    printf("sum of even numbers between 1 and %d is %d\n", n, sum);

    for (int i = 1; i <= n; i = i + 2)
    {
        k = k + i;
    }
    printf("Sum of odd numbers between 1 and %d is %d\n", n, k);
    return 0;
}