#include <stdio.h>
#include <stdlib.h>

int main() {
  int ages[5];
  char names[5][50];
  int olderIndex = 0;

  for (int i = 0; i < 5; i++) {
    printf("Digite o %d nome: ", i);
    scanf("%49s", names[i]);
    printf("Digite a %d idade: ", i);
    scanf("%d", &ages[i]);
  }

  int older = ages[0];

  printf("===== Nomes =====\n");
  for (int i = 0; i < 5; i++) {
    printf("%s - %d\n", names[i], ages[i]);
  }

  printf("\n===== Pessoa mais velha =====\n");
  for (int i = 0; i < 5; i++) {
    if (ages[i] > older) {
      older = ages[i];
      olderIndex = i;
    }
  }
  printf("%s - %d\n", names[olderIndex], ages[olderIndex]);

  return 0;
}