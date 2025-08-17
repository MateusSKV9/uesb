#include <stdio.h>
#include <stdlib.h>

int main() {
  char word[20];
  int option = 0;

  do {
    int i = 0, length = 0, result = 0;

    printf("Digite uma palavra: ");
    scanf("%19s", word);

    while (word[i] != '\0') {
      length++;
      i++;
    }

    for (i = 0; i < length / 2; i++) {
      if (word[i] != word[length - i - 1]) {
        result++;
      }
    }

    if (result >= 1) {
      printf("---> Nao e palindromo\n");
    } else {
      printf("---> Palindromo\n");
    }

    printf("\n====== Menu de opcoes ======\n");
    printf("1. Nova palavra\n");
    printf("2. Sair\n> ");
    scanf("%d", &option);
  } while (option != 2);

  return 0;
}