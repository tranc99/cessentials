#include <stdio.h>

int sum_and_diff(int a, int b, int *res)
{
  int sum;
  sum  = a + b;
  *res = a - b; //set the value at the address to the difference
  return sum;
}

void main()
{
  int b = 2;
  int diff;

  printf("The sum of 5 and %d is %d\n", b, sum_and_diff(5, 2, &diff));
  printf("The difference of 5 and %d is %d\n", b, diff);
}
