#include<stdio.h> 

int main(){
     int num[10];
     int o=0,e=0;
     for(int i=0;i<10;i++)
    {
        printf("Enter the values");
        scanf("%d",&num[i]);
    }
    for(int i=0;i<10;i++)
    {
        if(num[i]%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }

    }
    printf("Total number of odd nuumbers are %d and even numbers are %d",o,e);
    return 0 ;
}