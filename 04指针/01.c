#include <stdio.h>
int main()
{
  int a = 999;
  int *p; //定义一个指针: 指针就是存储地址的一个变量
  p = &a; //给这个指定赋值为a的内存地址 ，即 p 为地址， *p 为这个地址的值
  printf("%d\n", a);
  printf("%d\n", *p);
  printf("%p\n", p);

  a = 888;
  printf("%d\n", a);
  printf("%d\n", *p);
  printf("%p\n", p);
}