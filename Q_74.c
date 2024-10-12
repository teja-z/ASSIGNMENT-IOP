#include<stdio.h>
int main()
{
    int n,flag=0,d=0,c=0 ,e=0;
    printf("Number of number to read:");
    scanf("%d",&n);
    int a[n],b[n],x[2*n];
    printf("enter number for a array \n");
    for (int i=0;i<n;i++)
    {
        printf("Enter numbers %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("enter number for b array \n");
    for (int i=0;i<n;i++)
    {
        printf("Enter numbers %d:",i+1);
        scanf("%d",&b[i]);
    }
    
    for (int i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
    printf("\nb array is \n");
    for (int i=0;i<n;i++)
    {
        printf("%d \t",b[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if (a[j]>a[j+1])
            {
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
            }
        }
    }
    c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if (b[j]>b[j+1])
            {
                c=b[j];
                b[j]=b[j+1];
                b[j+1]=c;
            }
        }
    }
    int j=0;
    for(int i=0;i<n;i++)
    {
        while(j<n&&flag==0)
        {
            if (b[j]<a[i])
            {
                x[d]=b[j];
                d=d+1;
                j=j+1;
            }
            else
            {
                x[d]=a[i];
                flag=1;
                d=d+1;
                e=e+1;
            }
        }
        flag=0;
    }
    if (j<n)
     {   while(j<n)
        {x[d]=b[j];
        j+=1;
        d+=1;
        }
     }
    else if(e<n-1)
      {  while(e<n)
        {x[d]=a[e];
        e+=1;
        d+=1;
         }
      }
    printf("\n");
    printf("\nc array is\n");
    for (int i=0;i<n*2;i++)
    {
        printf("%d \t",x[i]);
    }
}