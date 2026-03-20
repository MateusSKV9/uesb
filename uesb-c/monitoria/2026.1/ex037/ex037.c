// Leia 10 números e: mostre quantos são pares. mostre a média dos ímpares

#include <stdio.h>

int main() {
  int numeros[10];
  int quantidadePares = 0;
  int somaImpares = 0;

  printf("Inserindo numeros no vetor: \n");
  for(int i = 0; i < 10; i++) {
    printf("vetor[%d]: ", i);
    scanf("%d", &numeros[i]);

    if(numeros[i] % 2 == 0) quantidadePares++;
    else somaImpares += numeros[i];
  }

  float mediaImpares = 0.0;

  if((10 - quantidadePares) > 0) {
    mediaImpares = (somaImpares) / (10 - quantidadePares);
  }

  printf("Quantidade de numeros pares: %d\n", quantidadePares);
  printf("Media dos numeros impares: %.2f", mediaImpares);

  return 0;
}