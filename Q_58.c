// PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND STORE ADDATION OF THOSE  ARRAYS INTO THIRD. 

#include<stdio.h> 

int main(){
     int num1[10];
     for(int i=0;i<10;i++)
    {
        printf("Enter the values");
        scanf("%d",&num1[i]);
    }
     int num2[10];
     for(int i=0;i<10;i++)
    {
        printf("Enter the values");
        scanf("%d",&num2[i]);
    }
    int sum[10];
    for(int i=0;i<10;i++)
    {
        sum[i]=num1[i]+num2[i];
    }
    printf("numbers in new array are \n");
    for(int i=0;i<10;i++)
    {
        printf("num %d:%d",i+1,sum[i]);
        printf("\n");
    }
    return 0 ;
}