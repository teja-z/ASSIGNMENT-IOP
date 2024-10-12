#include<stdio.h> 

int main(){

    int mat1[3][3],mat2[3][3],add[3][3];
    int k=1;
     int l=1;

    printf("Enter the values of matrix 1\n");
    for(int i=0;i<3;i++)
    {
        
        for(int j=0;j<3;j++)
        {  
        printf("Enter the element no %d: ",k);
        scanf("%d",&mat1[i][j]);
        k++;
        }
    }
      printf("Enter the values of matrix 2\n");
    for(int i=0;i<3;i++)
    {
       
        for(int j=0;j<3;j++)
        {  
        printf("Enter the element no %d: ",l);
        scanf("%d",&mat2[i][j]);
        l++;
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            add[i][j]=mat1[i][j] + mat2[i][j];
        }
    }


    printf("The adddition matrix is \n");
    
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",add[i][j]);
        }
        printf("\n");
    }
    
   
    return 0 ;
}