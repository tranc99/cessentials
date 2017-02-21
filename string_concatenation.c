#include <stdio.h>

void main()
{
  char str1[10] = "first";
  char str2[10] = "second";
  char str3[20];

  char *src, *dst;
  dst = str3;
  src = str1;
  // copy over what is in str1 into str3;
  while(*src != 0)
  {
    *dst = *src;
    dst++;
    src++;
  }

  // now copy over what is in str2 into address str3
  src = str2;
  while(*src != 0)
  {
    *dst = *src;
    dst++;
    src++;
  }
  *dst = 0;

  printf("Joining %s and %s we get %c\n", str1, str2, *(dst-2));
}
