#include <stdio.h>

int main()
{
    float base, height, area;
    printf("Enter values of base and height\n");
    scanf("%f %f", &base, &height);
    area = 0.5 * height * base;
    printf("Area of triangle is %f", area);

    return 0;
}