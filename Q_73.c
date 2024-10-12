#include<stdio.h>
#include<stdlib.h>
void menu();
void display_result();
void display_winner();
int a[6];
void menu()
{   
    printf("press 1 to vote candidate 1\n");
    printf("press 2 to vote candidate 2\n");
    printf("press 3 to vote candidate 3\n");
    printf("press 4 to vote candidate 4\n");
    printf("press 5 to vote candidate 5\n");
}
void voting();
void voting()
{
    int flag=1,b;
    while (flag!=0)
    {
        printf("Enter the candidate number u want to vote:");
        scanf("%d",&b);
        switch(b)
        {
            case 1:a[0]+=1;
                break;
            case 2:a[1]+=1;
                break;
            case 3:a[2]+=1;
                break;
            case 4:a[3]+=1;
                break;
            case 5:a[4]+=1;
                break;
            default:a[5]+=1;
        }
        printf("press 0 to end vote or 1 to continue:");
        scanf("%d",&flag);
    }
}
void display_result()
{
    printf("number of votes candidate gets\n");
    printf("candidate 1=%d\n",a[0]);
    printf("candidate 2=%d\n",a[1]);
    printf("candidate 3=%d\n",a[2]);
    printf("candidate 4=%d\n",a[3]);
    printf("candidate 5=%d\n",a[4]);
    printf("spoiled ballot=%d\n",a[5]);
}

void display_winner()
{
    int c,d;
    c=a[0];
    for(int i=0;i<6;i++)
    {
        if (a[i]>c)
        {
            c=a[i];
            d=i;
        }
        else
            continue;
    }
    printf("winner of vote is candidate number %d",d+1);
}
int main()
{
    menu();
    voting();
    display_result();
    display_winner();
}