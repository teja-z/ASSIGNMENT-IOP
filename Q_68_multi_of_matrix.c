#include<stdio.h> 

int main()
{
    int mat1[3][3],mat2[3][3],mult[3][3];
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
             mult[i][j]=0;
            for(int k=0;k<3;k++)
            {
             mult[i][j]=mult[i][j]+mat1[i][k]*mat2[k][j];
      
            }
        }
         
        
    }



    printf("The multiplication of matrices is \n");
    
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",mult[i][j]);
        }
        printf("\n");
    }
   
    
    
    
    return 0 ;
}