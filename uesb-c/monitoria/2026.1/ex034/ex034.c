// Leia 5 números e mostre a média.

#include <stdio.h>

int main() {
  float numeros[5];
  float soma = 0.0;

  for(int i = 0; i < 5; i++) {
    printf("Digite um numero: ");
    scanf("%f", &numeros[i]);
    soma += numeros[i];
  }

  float media = soma / 5;
  printf("A media dos numeros e: %.2f", media);

  return 0;
}