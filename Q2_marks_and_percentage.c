#include <stdio.h>
int main()
{
    int p, c, m, b, e, marks, percentage;
    printf("Enter the marks of Physics Chemistry Maths Biolgy English");
    scanf("%d %d %d %d %d", &p, &c, &m, &b, &e);

    marks = p + c + m + b + e;
    percentage = marks / 5;

    printf("total marks and percentage  are %d %d", marks, percentage);

    return 0;
}