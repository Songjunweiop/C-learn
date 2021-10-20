#include <stdio.h>

int main()
{
  FILE *fp = NULL;
  char buff[999];

  fp = fopen("./temp/test.txt", "r");
  fscanf(fp, "%s", buff);   //fscanf可以读取，遇到空格和换行就停止读取
  printf("%s\n", buff);

  fgets(buff, 999, (FILE *)fp); //fgets读取999-1个字符，遇到换行就会停止
  printf("%s\n", buff);

  fgets(buff, 999, (FILE *)fp);
  printf("%s\n", buff);
  fclose(fp);
}