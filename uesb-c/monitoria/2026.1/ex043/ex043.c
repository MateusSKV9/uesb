/*
  Crie uma função que: 
    - recebe um número. 
    - retorna 1 se for primo ou 0 caso contrário
*/

#include <stdio.h>

int ePrimo(int n) {
  if(n <= 1) return 0;

  for(int i = 2; i <= (n/2); i++) {
    if(n % i == 0) {
      return 0;
    }
  }

  return 1;
}

int main() {
  int numero;

  printf("Digite um numero: ");
  scanf("%d", &numero);

  if(ePrimo(numero)) printf("Primo");
  else printf("NAO primo");

  return 0;
}