#include<stdio.h> 

int main()
{
    int q,sec,min,hrs,days,s;
    printf("Enter total seconds\n");
    scanf("%d",&sec);
    days=sec/86400;
    q=sec%86400;
    hrs=q/3600;
    q=q%3600;
    min=q/60;
    s=q%60;
     printf("%d days %d hours %d minutes %d seconds",days,min,hrs,s);
        return 0 ;
}