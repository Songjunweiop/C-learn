#include <stdio.h>
int main()
{
  int a, b;
  printf("输入两个数");
  scanf("%d %d", &a, &b);
  // 不适用第三变量交换
  a = a + b;
  b = a - b;
  a = a - b;
  printf("%d, %d", a, b);
}