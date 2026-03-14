#include <stdio.h>
#include <stdlib.h>

int main() {
  float notas[5];
  int passed = 0;

  for (int i = 0; i < 5; i++) {
    printf("Nota %d: ", (i + 1));
    scanf("%f", &notas[i]);

    if (notas[i] >= 7) {
      passed++;
    }
  }

    printf("Total de alunos que passaram: %d", passed);

  return 0;
}