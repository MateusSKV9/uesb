#include <stdio.h>

int main() {
  float valorCompra, valorPago;

  printf("Digite o valor da  compra: ");
  scanf("%f", &valorCompra);

  printf("Digite o valor pago: ");
  scanf("%f", &valorPago);

  float troco = valorPago - valorCompra;

  printf("Troco: %.2f", troco);

  return 0;
}