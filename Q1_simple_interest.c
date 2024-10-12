#include <stdio.h>
int main()
{
    int p, r, t, interest;
    printf("Enter the amount of priciple");
    scanf("%d", &p);

    printf("Enter the rate ");
    scanf("%d", &r);

    printf("Enter the time in years");
    scanf("%d", &t);

    interest = p * r * t / 100;

    printf("simple interest is %d ", interest);

    return 0;
}