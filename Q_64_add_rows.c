#include<stdio.h> 

int main(){
    int mat[3][3];
    int l=1;

    printf("Enter the values of matrix\n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter the elememt %d:",l);
            scanf("%d",&mat[i][j]);
            l++;
        }
    }
     for(int i=0;i<3;i++)
    {
        int sum=0;

        for(int j=0;j<3;j++)
        {
            sum=sum+mat[i][j];
        }
        printf("Sum of row %d is: %d\n",i+1,sum);
    }
    

    
    return 0 ;
}