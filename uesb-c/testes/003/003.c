#include <math.h>
#include <stdio.h>

int main() {
  int a1, a2, a3, b1, b2, b3, c1, c2, c3;

  printf("Digite vetor A (3 valores): ");
  scanf("%d %d %d", &a1, &a2, &a3);

  printf("Digite vetor B (3 valores): ");
  scanf("%d %d %d", &b1, &b2, &b3);

  printf("Digite vetor C (3 valores): ");
  scanf("%d %d %d", &c1, &c2, &c3);

  int nA = abs(a1) + abs(a2) + abs(a3);
  int nB = abs(b1) + abs(b2) + abs(b3);
  int nC = abs(c1) + abs(c2) + abs(c3);

  if (nA == nB && nB == nC) {
    printf("Todas as normas são iguais: %d\n", nA);
    return 0;
  }

  int maior = nA;
  if (nB > maior)
    maior = nB;
  if (nC > maior)
    maior = nC;

  printf("Vetor(es) com maior norma 1: ");
  if (nA == maior)
    printf("A(%d) ", nA);
  if (nB == maior)
    printf("B(%d) ", nB);
  if (nC == maior)
    printf("C(%d) ", nC);

  return 0;
}
