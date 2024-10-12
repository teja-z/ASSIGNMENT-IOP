// PROGRAM READ N NOS AND FINDOUT MAX AND SECOND MAX. 
#include<stdio.h> 

int main(){
     int num[]={7,9,83,45,69};

     int large, small;
     
   
    large = num[0];
    small = num[0];
    for(int i=0;i<5;i++)
    {
        if(num[i]>large)
        {
            large=num[i];
        }
        if(num[i]<small)
        {
            small=num[i];
        }
    }
    printf("largest number %d , smallest number %d",large,small);


    return 0 ;
}
