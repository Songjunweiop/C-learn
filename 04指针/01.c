#include <stdio.h>
int main()
{
  int a = 999;
  int *p; //����һ��ָ��: ָ����Ǵ洢��ַ��һ������
  p = &a; //�����ָ����ֵΪa���ڴ��ַ ���� p Ϊ��ַ�� *p Ϊ�����ַ��ֵ
  printf("%d\n", a);
  printf("%d\n", *p);
  printf("%p\n", p);

  a = 888;
  printf("%d\n", a);
  printf("%d\n", *p);
  printf("%p\n", p);
}