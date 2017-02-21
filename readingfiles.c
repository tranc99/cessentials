#include <stdio.h>

int main(int argc, char *argv[])
{
  FILE *fp;
  int value;

  fp = fopen("/home/tomahawk/tools/backbone.js", "rb");
  if(fp)
  {
    while(1)
    {
      value = fgetc(fp);
      if (value == EOF) break;
      else printf("%c", value);
    }
    fclose(fp);
  }
  printf("################## That was the end of the file #########################\n");
  return 0;
}
