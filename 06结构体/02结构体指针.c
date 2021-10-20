#include <stdio.h>

struct Student
{
  int class;
  char name[90];
  char sex[9];
} bee = {7, "bee", "男"};

void main()
{
  struct Student *beeP;
  beeP = &bee;
  printf("%d %s %s", beeP->class, beeP->name, beeP->sex);
}
