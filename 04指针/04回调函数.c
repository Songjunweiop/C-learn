#include<stdio.h>

void aaa(){
  printf("this is function: aaa()");
}
int bbb(void x()){
  x();
}

int main (){

  bbb(aaa);
  return 0;
}