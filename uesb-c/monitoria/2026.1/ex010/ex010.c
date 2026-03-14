#include <stdio.h>

// Contar números pares, conforme o usuário vai digitando

int main() {
  int evenQtt = 0;
  int number;

  printf("Para parar a insercao, digite o numero -1!\n");
  do {
    printf("Digite um numero: ");
    scanf("%d", &number);

    if(number % 2 == 0) evenQtt++;
  } while(number != -1);

  printf("Insercao interrompida!\n");
  printf("Foram digitados %d numeros pares", evenQtt);

  return 0;
}