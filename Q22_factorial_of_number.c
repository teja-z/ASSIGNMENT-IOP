#include <stdio.h>

int main()
{
    int num, f = 1, i;
    scanf("%d", &num);
    for (i = num; i > 0; i--)
    {
        f = f * i;
        i > 0;
    }
    printf("answer is %d", f);
    return 0;
}