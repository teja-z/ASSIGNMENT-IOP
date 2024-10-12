#include <stdio.h>

int main()
{
    char ch;
    printf("Enter your charector\n");
    scanf("%c", &ch);
    if (ch >= 65 && ch <= 90)
    {
        printf("Your charector is Upper case");
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("your charector is Lower case");
    }
    else if (ch >= 48 && ch <= 57)
    {
        printf("Your charector is digit");
    }
    else
    {
        printf("Your charector is special sybmol");
    }

    return 0;
}