#include <stdio.h>

int main()
{
    char ch;
    printf("Enter your charector\n");
    scanf("%c", &ch);
    printf("ASCII value of your charector %c is %d", ch, (int)ch);
    return 0;
}