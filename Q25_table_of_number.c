#include <stdio.h>

int main()
{
    int num, i, a = 1;
    printf("Enter any number\n");
    scanf("%d", &num);
    printf("*** Table of %d is*** \n",num);
    for (i = 1; i <= 10; i++)
    {
        a = num * i;
        printf("%d\n", a);
    }
    return 0;
}