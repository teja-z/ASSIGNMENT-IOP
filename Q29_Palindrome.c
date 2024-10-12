#include <stdio.h>

int main()
{
  int num, r, sum = 0, temp;
  printf("Enter your number\n");
  scanf("%d", &num);
  temp = num;
  while (temp > 0)
  {
    r = temp % 10;
    sum = sum * 10 + r;
    temp = temp / 10;
  }
  if (sum == num)
  {
    printf("Your number is Palindrome");
  }
  else
  {
    printf("Your number is not Palindrome");
  }

  return 0;
}