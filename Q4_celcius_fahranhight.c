#include <stdio.h>

int main()
{
    float celcius, f;

    printf("Enter the of tempreture in degree celcius");
    scanf("%f", &celcius);
    f = (celcius * 9 / 5) + 32;

    printf("the tepreture in fahrenheit is %f", f);

    return 0;
}