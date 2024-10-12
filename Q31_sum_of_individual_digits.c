#include <stdio.h>

int main()
{
    int num, sum = 0, r, temp;
    printf("Enter your number\n");
    scanf("%d", &num);
    temp = num;

    while (temp > 0)
    {
        r = temp % 10;
        sum = sum + r;
        temp = temp / 10;
    }
    printf("Sum of the digits of the number is %d", sum);
    return 0;
}