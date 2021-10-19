#include <stdio.h>

enum AAA
{
  A = 1,
  B,
  C,
  D
} aaa;

enum DATA
{
  MONDAY = 1,
  TU,
  TIR,
  FO,
  FIR
} day;

int main()
{
  aaa = D;
  printf("%d\n", aaa);

  day = TIR;
  printf("%d", day);
  return 0;
}