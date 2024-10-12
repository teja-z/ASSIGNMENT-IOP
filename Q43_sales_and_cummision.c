#include <stdio.h>

int main()
{
    float sales, c;
    printf("Enter your sales\n");
    scanf("%f", &sales);

    if (sales <= 500)
    {
        c = sales * 0.05;
    }
    else if (sales > 500 && sales <= 2000)
    {
        c = 25 + 35 + (sales - 500) * 0.1;
    }
    else if (sales > 2000 && sales <= 5000)
    {
        c = 25 + 35 + 185 + 150 + (sales - 2000) * 0.12;
    }
    else if (sales > 5000)
    {
        c = 25 + 35 + 185 + 150 + 360 + (sales - 5000) * 0.125;
    }
    printf("Total cummision is %f", c);
    return 0;
}