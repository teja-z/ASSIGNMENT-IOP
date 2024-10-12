#include<stdio.h> 

int main(){
     int num[10];
     int p=0,n=0,z=0;
     for(int i=0;i<10;i++)
    {
        printf("Enter the values");
        scanf("%d",&num[i]);
    }
    for(int i=0;i<10;i++)
    {
        if(num[i]>0)
        {
            p++;
        }
        else if(num[i]<0)
        {
            n++;
        }
        else
        {
            z++;
        }
    }
    printf("Total positive=%d\n negetive=%d\n zero=%d",p,n,z);
    return 0 ;
}