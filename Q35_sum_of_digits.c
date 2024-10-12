#include <stdio.h>

int main()
{
    int num, sum, r, temp, k;
    printf("Enter your number\n");
    scanf("%d", &num);
    temp = num;

    while (temp > 0)
    {
        r = temp % 10;
        sum = sum + r;
        temp = temp / 10;
    }
    int s = 0;
    while (sum > 0)
    {
        k = sum % 10;
        s = s + k;
        sum = sum / 10;
    }
    printf("sum of numbers are %d", s);

    return 0;
}