#include <stdio.h>

// Tabuada

// 1x0
// 1x1
// 1x2
// 1x3
// 1x4
// 1x6
// 1x7
// 1x8
// 1x9
// 1x10

// 2x0
// 2x1
// ...

int main() {
  for(int i = 1; i <= 10; i++) {
    for(int j = 0; j <= 10; j++) {
      printf("%d x %d = %d \n", i, j, (i*j));
    }
    printf("--------------------------\n");
  }

  return 0;
}