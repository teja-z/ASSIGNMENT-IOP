#include<stdio.h>
int main()
{
    int n,c,d,b;
    printf("Number of values in array:");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        printf("Enter numbers %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("a array is \n");
    for (int i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
    c=a[0];
    for (int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if (c>a[j])
            {
                c=a[j];
                d=j;
            }
            else 
            { continue;}
        }
        b=a[i];
        a[i]=a[d];
        a[d]=b;
        c=a[i+1];
        
    }
    printf("\n\na array is \n");
    for (int i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
}