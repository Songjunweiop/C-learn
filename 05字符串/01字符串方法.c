#include <stdio.h>
#include <string.h>
int main()
{
  char s1[99] = "abcdefg";
  char s2[99] = "higklmn";

  printf("strcpy(s1, s2): %s\n", strcpy(s1, s2)); // 返回第一个字符串
  printf("s1: %s\n", s1);
  printf("s2: %s\n", s2);

  ////////////////////////////////////
  strcpy(s1, "abcdefg");

  printf("strcat(s1, s2): %s\n", strcat(s1, s2)); // 返回第一个字符串
  printf("s1: %s\n", s1);
  printf("s2: %s\n", s2);

  ///////////////////////////////////
  strcpy(s1, "abcdefg");

  printf("s1.length: %d\n", strlen(s1));
  printf("s2.length: %d\n", strlen(s2));

  ///////////////////////////////////
  printf("%d\n", strcmp(s1, s2));
  strcpy(s1, "abcdefg");
  strcpy(s2, "abcdefg");
  printf("%d\n", strcmp(s1, s2));

  ///////////////////////////////////
  strcpy(s1, "abcdefg");
  strcpy(s2, "higklmn");
  printf("s1: %s\n", s1);
  printf("s2: %s\n", s2);


  return 0;
}