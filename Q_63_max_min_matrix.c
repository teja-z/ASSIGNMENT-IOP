#include <stdio.h>
int main()
{
    int a[3][3], max, min;
    printf("enter elements in matrix\n");

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            printf("Enter the element");

            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    max = min = a[0][0];

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
            else if (a[i][j] < min)
            {
                min = a[i][j];
            }
        }
    }

    printf("max=%d", max);
    printf("\n");
    printf("min=%d", min);
}