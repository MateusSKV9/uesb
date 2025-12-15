#include <stdio.h>

int main() {
  int a, b, c;

  printf("Digite a: ");
  scanf("%d", &a);
  printf("Digite b: ");
  scanf("%d", &b);
  printf("Digite c: ");
  scanf("%d", &c);

  if (a != b && a != c && b != c) {
    if (a > b && a > c) {
      printf("Maior valor: A = %d", a);
    } else if (b > a && b > c) {
      printf("Maior valor: B = %d", b);
    } else {
      printf("Maior valor: C = %d", c);
    }
  } else if (a == b || a == c || b == c) {
    if (a == b && a == c && b == c) {
      printf("Todos os valores sao iguais: %d = %d = %d", a, b, c);
    } else {
      if (a == b) {
        printf("A e B sao iguais e sao ");
        if (a > c) {
          printf("maiores que C: %d = %d > %d", a, b, c);
        } else {
          printf("menores que C: %d = %d < %d", a, b, c);
        }
      } else if (a == c) {
        printf("A e C sao iguais e sao ");
        if (a > b) {
          printf("maiores que B: %d = %d > %d", a, c, b);
        } else {
          printf("menores que B: %d = %d < %d", a, c, b);
        }
      } else {
        printf("B e C sao iguais e sao ");
        if (b > a) {
          printf("maiores que A: %d = %d > %d", b, c, a);
        } else {
          printf("menores que A: %d = %d < %d", b, c, a);
        }
      }
    }
  }

  return 0;
}