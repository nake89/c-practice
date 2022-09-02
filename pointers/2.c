#include <stdio.h>

const int MAX = 3;

int main() {
  int var[] = {10, 100, 200};
  int i, *ptr;

  /* let us have array address in pointer */
  ptr = var;
  int *ptr2;
  ptr2 = &var[0];
  printf("Value of var[%d] = %d\n", 0, *ptr);
  printf("Value of var[%d] = %d\n", 0, *ptr2);
  return 0;
}
