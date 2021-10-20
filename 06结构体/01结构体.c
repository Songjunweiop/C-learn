#include <stdio.h>
struct obj
{
  char name[99];
  int age;
  char sex[9];
};

struct Person
{
  char name[99];
  int age;
  char sex[9];
} wesley = {"wesley", 23, "男"};

int main()
{
  struct obj obj1 = {"wesley", 23, "男"};
  printf("%s ", obj1.name);
  printf("%d ", obj1.age);
  printf("%s \n", obj1.sex);
  printf("%s ", wesley.name);
  printf("%d ", wesley.age);
  printf("%s", wesley.sex);
  return 0;
}