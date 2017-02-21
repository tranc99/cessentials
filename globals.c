#include <stdio.h>

int result;

void add ( int a , int b )
{
  result = a + b;
}

void main()
{
  add(30, 400);
  printf("The result is %d\n", result);
}
