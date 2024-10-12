#include <stdio.h>

int main()
{
    char ch;
    printf("Enter your charector\n");
    scanf("%c", &ch);
    if (ch >= 97 && ch <= 122)
    {
        printf("Charector is lowercase");
    }
    else
    {
        printf("charector is not lowercase");
    }
    return 0;
}