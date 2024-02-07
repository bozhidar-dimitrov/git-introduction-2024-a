#include <stdio.h>

#define MAX_SIZE 7

int main(void) {



  printf("?Hello from C-new?\n");
  printf("This is done in local machine\n");

  int arr[MAX_SIZE] = {1, 2, 3, 4, 5, 6, 7};
  for (int i = 0; i < MAX_SIZE; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}
