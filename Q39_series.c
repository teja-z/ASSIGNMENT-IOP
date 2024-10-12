#include<stdio.h> 

int main()
{
    
    float n,i,sum=0,f=1;

    printf("Enter the value of n\n");
    scanf("%f",&n);

    for(i=1;i<=n;i++)
    {
        f=f*i;
        sum =sum+i/f;

    }
    printf("answer is %f",sum);
    return 0 ;
}