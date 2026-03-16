#include <stdio.h>

// Menor número

int main() {
  int length;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &length);

  printf("Inserindo numeros no vetor: \n");
  float vetor[length];

  for(int i = 0; i < length; i++) {
    printf("vetor[%d]: ", i);
    scanf("%f", &vetor[i]);
  }

  float minor = vetor[0];

  printf("Numeros do vetor: ");

  for(int i = 0; i < length; i++) {
    printf(" %.2f  ", vetor[i]);

    if(vetor[i] < minor) minor = vetor[i];
  }

  printf("\nO menor valor e: %.2f", minor);

  return 0;
}