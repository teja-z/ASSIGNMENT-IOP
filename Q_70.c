#include<stdio.h>
int main()
{
    int n,b,flag=0,count=0;
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
    for(int i=0;i<n;i++)
    {
        if (b==a[i])
        {   printf("%d ia present at index=%d\n",b,i);
            count+=1;
            flag=1;
        }
    }
    if (flag==0)
    {printf("%d is not present in array",b);}
    else
    {printf("%d is present %d times in array",b,count);}
}