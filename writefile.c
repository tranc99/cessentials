#include <stdio.h>

void main (void)
{
  FILE *fp;
  int value;
  fp = fopen ("/home/tomahawk/output.txt", "wb");

  if (fp)
  {
    for (value = 30; value < 40; value++)
    {
      fputc (value, fp);
    }
    fclose (fp);
  }
}
