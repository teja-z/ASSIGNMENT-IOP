#include<stdio.h> 

int main()
{
    int marks[10];
    int sum=0;
    for(int i=0;i<10;i++)
    {
        printf("Enter the values");
        scanf("%d",&marks[i]);
    }
    for(int i =0;i<10;i++)
    {
        sum =sum + marks[i];
    }
    printf("The sum of all numbers are %d",sum);
    return 0 ;
}