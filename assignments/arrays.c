#include <stdio.h>

int main() {
  int myArray[] = {1,2,3,4,5};

  printf("%d\n", myArray[1]);

  myArray[1] = 6;

  printf("%d\n", myArray[1]);

  for (int i = 0; i < 5; i++) {
    printf("%d\n", myArray[i]);
  }

  return 0;
}