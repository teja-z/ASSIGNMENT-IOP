#include<stdio.h>
int main()
{
    int n,b,flag=0;
    printf("Number of number in aaray:");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        printf("Enter numbers %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("A array is \n");
    for (int i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
    printf("\nEnter number to be checked present in array or not:");
    scanf("%d",&b);
    for (int i=0;i<n;i++)
    {
        if (a[i]==b)
        {
            printf("%d is present at index %d of array",b,i);
            flag=1;
            break;
        }
        
    }
    if (flag==0)
        printf("%d is not present in array A",b);
}