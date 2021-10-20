#include <stdio.h>

void test()
{
  printf("df\n");
}

int main()
{
  void (*fakeTest)();
  fakeTest = test;
  fakeTest();
  return 0;
}