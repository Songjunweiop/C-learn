#include <stdio.h>
int MAX = 3;
void main()
{
  int arr[] = {666, 888, 999};
  int *pArr[MAX];
  for (int i = 0; i < MAX; i++)
  {
    pArr[i] = &arr[i];
  }
  for (int i = 0; i < MAX; i++)
  {
    printf("%d \n", *pArr[i]);
  }
}