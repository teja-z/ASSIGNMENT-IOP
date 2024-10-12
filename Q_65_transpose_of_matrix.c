#include <stdio.h>
int main()
{
    int a[3][3];
    int l=1;int m=1;
    printf("Enter the elements of matrix\n");

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            printf("Enter the element no %d:",l);

            scanf("%d", &a[i][j]);
            l++;
        }
    }
    printf("The input matrix is :\n");
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of matrix is:");
    printf("\n");
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
}