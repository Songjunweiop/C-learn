#include <stdio.h>
int main()
{
  char aaa[99];
  printf("请输入一段字符 \n");
  scanf("%s", &aaa);
  printf("%s", aaa);
  puts("请在输入一次\n");
  scanf("%s", &aaa);
  puts(aaa);
  puts("asdfasdf");
  return 0;
}