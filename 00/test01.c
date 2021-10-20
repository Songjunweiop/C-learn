#include <stdio.h>
#include <string.h>

const int i = 999;
const int j = 1;
#define q 10;
#define p 20;
#define TAB '\n'

int aaa(int a, int b)
{
  return a + b;
}

void testString(void){
  char aaa[99] = "aaa";
  strcat(aaa, "bbb");
  printf("%s", aaa);
}

int main()
{
  int a = 8, b = 1220, c;
  c = aaa(a, b);
  int qp = q + p
  printf("%d", c);
  printf("%c", TAB);
  printf("%d", &c);
  printf("%c", TAB);
  printf("%d \n", i + j);
  printf("%d", qp);

  testString();


  return 0;
}