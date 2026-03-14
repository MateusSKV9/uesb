#include <stdio.h>
#include <stdlib.h>

int main() {
  int length = 0, option = 0;

  do {
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &length);

    int vetor[length];
    int i = 0;

    if (length <= 0) {
      continue;
    }

    // preenchimento
    for (i = 0; i < length; i++) {
      printf("vetor[%d]: ", i);
      scanf("%d", &vetor[i]);
    }

    int newVetor[length];
    newVetor[0] = vetor[0];

    int last = 1, autorized = 0;

    for (int i = 1; i < length; i++) {
      autorized = 1;

      for (int j = 0; j < last; j++) {
        if (vetor[i] == newVetor[j]) {
          autorized = 0;
          break;
        }
      }

      if (autorized) {
        newVetor[last] = vetor[i];
        last++;
      }
    }

    // vetor original
    printf("\n====> VETOR ORIGINAL:\n");
    for (i = 0; i < length; i++) {
      printf(" %d ", vetor[i]);
    }

    // vetor final
    printf("\n====> VETOR FINAL:\n");
    int finalVetor[last];
    for (i = 0; i < last; i++) {
      finalVetor[i] = newVetor[i];
      printf(" %d ", finalVetor[i]);
    }

    printf("\n====== Menu de opcoes ======\n");
    printf("(1) - Tentar novamente\n");
    printf("(-1) - Sair\n> ");
    scanf("%d", &option);
  } while (option != -1);

  return 0;
}
