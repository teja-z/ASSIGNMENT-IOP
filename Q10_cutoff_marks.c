#include <stdio.h>

int main()
{
    int M, P, C, E, CM;
    printf("Enter your mathematics physics chemistry out of two hundred and external marks out of hundred\n");
    scanf("%d %d %d %d", &M, &P, &C, &E);
    CM = M / 2 + P / 2 + C / 2 + E;
    printf("Your cut off marks are %d", CM);

    return 0;
}