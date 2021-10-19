#include <stdio.h>
void main()
{
  int arr1[] = {1, 5, 4, 788, 5, 1, 52, 7};
  printf("%d\n",&arr1);
  printf("%d\n",&arr1[0]);
  printf("%d\n",&arr1[1]);
  int arr2[3] = {9, 8, 6};
  printf("%d\n", arr1[0]);
  int len = sizeof(arr2) / sizeof(arr2[0]);
  for (int i = 0; i < len; i++)
  {
    printf("%d\n", arr2[i]);
  }
}