#include <stdio.h>

int main()
{
    int num, r, sum = 0;
    printf("Enter your number\n");
    scanf("%d", &num);
    int temp = num;

    while (temp > 0)
    {
        r = temp % 10;
        sum = sum + r * r * r;
        temp = temp / 10;
    }
    if (sum == num)
    {
        printf("Your number is Amstromg number");
    }
    else
    {
        printf("Your number is not amstrong number");
    }

    return 0;
}