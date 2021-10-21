#include <stdio.h>
void main()
{
  int a, b;
  printf("输入两个整数\n");
  scanf("%d %d", &a, &b);
  for (a; a < b; a++)
  {
    if (a % 2 == 0)
    {
      printf("%d ", a);
    }
  }
}