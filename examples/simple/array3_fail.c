#include <stdio.h>
#include <stdlib.h>
#include "smack.h"

#define MAXSIZE 10
#define RESET 0

void initializeArray(int *array) {
  int i = 0;

  for (i = 0; i < MAXSIZE; i++) {
    array[i] = RESET;
  }

  array[9] = 1;
}


int main() {
  int i = 0;
  int *array = (int*)malloc(MAXSIZE * sizeof(int));

  initializeArray(array);

  for (i = 0; i < MAXSIZE; i++) {
    __SMACK_assert(array[i] == RESET);
  }

  free(array);
  return 0;
}

