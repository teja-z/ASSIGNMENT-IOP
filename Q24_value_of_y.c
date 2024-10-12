#include <stdio.h>

int main()
{
    float x, y, ans = 1;
    int n;
    printf("Enter value of x\n");
    scanf("%f", &x);
    printf("Enter value of n\n");
    scanf("%d", &n);
    if (n == 1)
    {
        y = x + 1;
        printf("y=%f", y);
    }
    else if (n == 2)
    {
        y = 1 + x / n;
        printf("y=%f", y);
    }
    else if (n == 3)
    {
        for (int i = 0; i < n; i++)
        {
            ans = ans * x;
        }
        printf("y=%f", 1 + ans);
    }
    else
    {
        y = n * x + 1;
        printf("y=%f", y);
    }

    return 0;
}