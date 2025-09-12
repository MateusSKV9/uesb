#include <math.h>
#include <stdio.h>

int main() {
  int a, b; 

  do {
    printf("Digite o inicio: A = ");
    scanf("%d", &a);
    printf("Digite o final: B = ");
    scanf("%d", &b);

    if (b < a) {
      printf("Intervalo invalido. B precisa ser maior que A\n\n");
    }
  } while (b <= a);

  printf("---> Saida: \n");
  for (int i = a; i <= b; i++) {
    int quantityDiv = 2;

    for (int j = 2; j <= sqrt(i); j++) {
      if (i % j == 0) {
        quantityDiv++;
      }
    }

    if (quantityDiv == 2) {
      printf("%d, ", i);
    }
  }

  return 0;
}