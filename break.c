#include <stdio.h>

void main()
{
  int a = 5;

  while (1)
  {
    printf("a is equal to %d\n", a);
    a++;
    if (a == 50)
    {
      break;
    }
  }
  printf("a is equal to %d\n", a);
}
