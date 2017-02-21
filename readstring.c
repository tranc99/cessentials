#include <stdio.h>

void main()
{
  int val;
  char string[10] = "250";

  sscanf(string, "%d", &val);
  printf("The value in the string is %d\n", val);
}
