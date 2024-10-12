#include<stdio.h>

int main()
{

    int math,phy,chem,eng,hindi,totalmarks,percentage;
    printf("/nenter the marks of math,phy,chem and eng ");

    scanf("%d%d%d%d%d",&math,&phy,&chem,&eng,&hindi);

    totalmarks=math+phy+chem+eng+hindi;
    percentage=totalmarks/5;
    printf("\ntotalmarks=%d",totalmarks);
    printf("\npercentage=%d",percentage);
            if (percentage>=90)
    {
       printf("\ngrade is A");

    }
            else if(percentage>=85&&percentage<90){

        printf("\ngrade is b");
    }
            else if(percentage>=70&&percentage<85){

        printf("\ngrade is c");
    }
            else if(percentage>=60&&percentage<70){
        printf("\ngrade isd");
    }
            else if(percentage>0&&percentage<60){
        printf("\ngrade is e");
    }
     else{
        printf("\nentered wrong marks");
    }

}