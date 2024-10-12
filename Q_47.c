#include<stdio.h> 

int main()
{
 int i ,j;
 char k;
 for(i=1;i<=5;i++)
 {
    for(j=1;j<=i;j++)
    {
        k=j+64;
        printf("%c",k);
        
    }
    printf("\n");
 }   
    return 0 ;
}