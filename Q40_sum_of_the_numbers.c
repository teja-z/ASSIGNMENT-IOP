#include <stdio.h>

int main()
{
    int num, sum = 0, i, value = 0;

    for (i = 1; i; i++)
    {
        printf("Enter the number\n");
        scanf("%d", &num);
        if (num > 0)
        {
            sum = sum + num;
        }
        else
        {
            printf("Sum of previous numbers are %d", sum);
            break;
        }
    }
    return 0;
}
