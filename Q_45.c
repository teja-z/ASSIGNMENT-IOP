#include<stdio.h> 
#include<time.h>
#include<stdlib.h>

int main()
{
    int i=1;
    int guess;
    srand(time(NULL));
    int num = rand()%100+1;
    
    printf("Guess any number between 1 and 100\n");
     
   while(1)
   {
     printf("\n");
     scanf("%d",&guess);
    if(guess>num)
    {
        printf("Small number please!\n");
    }
    else if(guess<num)
    {
        printf("Higher number please!\n");
    }
    else 
    {
        printf("Your guessed number is correct which is %d\nYou guess it in %d attempts\n",guess,i);
        break;
    }
    i++;
   }
    return 0 ;
}