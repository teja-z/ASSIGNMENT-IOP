#include <stdio.h>

int main()
{
    int num, value = 0;
    printf("Enter your number\n");
    scanf("%d", &num);

    if (num == 2)
    {
        printf("Your number is prime");
    }

    else if (num > 2)
    {

        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                value = 1;
                printf("Your number is not prime");
                break;
            }
        }
        if (value == 0)
        {
            printf("Your number is prime ");
        }
    }
}