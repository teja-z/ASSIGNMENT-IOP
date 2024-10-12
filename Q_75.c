#include<stdio.h>


int main()
{
    int s,N;
    
    printf("ENter number of student of data need to be recorded:");
    scanf("%d",&N);
    int a[N][5];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<4;++j)
        {
            if (j==0)
            {   printf("enter roll number:");
                scanf("%d",&a[i][j]);
                printf("enter marks of maths phys and chem respectively\n");
            }
            else 
            {   printf("enter marks ");
                scanf("%d",&a[i][j]);
            }
            a[i][4]=a[i][1]+a[i][2]+a[i][3];
        }
    }
    printf("R.No maths physics chemistry total marks\n");
    for (int i=0;i<N;i++)
   {
        for (int j=0;j<5;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n\n");
   }
   int sum;
    for (int i=0;i<N;i++)
    {   
        printf("roll number =%d,Total marks=%d\n",a[i][0],a[i][4]);
    }
    //max of each subject//
    int max_p=0,max_chem=0,max_math=0,g,f,h,max_total,l;
    for(int i=0;i<N;i++)
    {
        if (max_p<a[i][2])
        {
            max_p=a[i][2];
            g=i;
        }
        if (max_chem<a[i][3])
        {
            max_chem=a[i][3];
            h=i;
        }
        if (max_math<a[i][1])
        {
            max_math=a[i][1];
            f=i;
        }
        if (max_total<a[i][4])
        {
            max_total=a[i][4];
            l=i;
        }
    }
    printf("\nroll no=%d scored max physics marks=%d\n",a[g][0],a[g][2]);
    printf("roll no=%d scored max maths marks=%d\n",a[f][0],a[f][1]);
    printf("roll no=%d scored max chemistry marks=%d\n",a[h][0],a[h][3]);
    printf("roll no=%d scored max Total marks=%d\n",a[l][0],a[l][4]);
}
   