#include<stdio.h>
int main(){
  int a, b, c;
  double f, p,q;
  printf("请输入三个数字，以空格隔开:\n");
  scanf("%d %d %d", &a, &b, &c);
  int d = a + b + c;
  int e = a * b * c;
  printf("%d %d \n", d, e);

  printf("请输入两个浮点数，以空格隔开:\n");
  scanf("%lf %lf", &p, &q);
   f = p * q;
  printf("%.3f", f);
}