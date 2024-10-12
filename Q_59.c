//  PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND SWAP VALUES THESE  ARRAYS

#include<stdio.h> 

int main(){
    int A[]={6,7,8,9,34};
    int B[]={8,4,3,0,9};
    int T[5];
    for(int i=0;i<5;i++)
    {
         T[i]= A[i];
         A[i]= B[i];
         B[i]= T[i];

    }
    printf("After swap \n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",A[i]);
        
    }
    printf("\n");
     for(int i=0;i<5;i++)
    {
       
        printf("%d\t",B[i]);
    }
    return 0 ;
}