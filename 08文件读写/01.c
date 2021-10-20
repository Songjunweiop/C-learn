#include <stdio.h>

int main()
{
  FILE *fileP = NULL;
  fileP = fopen("./temp/test.txt", "w+");
  fprintf(fileP, "This is testing for fprintf...\n");//第一种写入
  fputs("This is testing for fputs...\n", fileP);//第二种写入
  fclose(fileP);
  return 0;
}