#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int quantity1 = 0, quantity2 = 0, quantity3 = 0, quantity4 = 0, quantity5 = 0, quantity6 = 0;
  int die;

  for (int i = 0; i < 100; i++) {
    die = (rand() % 6) + 1;
    if (die == 1)
      quantity1++;
    else if (die == 2)
      quantity2++;
    else if (die == 3)
      quantity3++;
    else if (die == 4)
      quantity4++;
    else if (die == 5)
      quantity5++;
    else
      quantity6++;
  }

  int total = quantity1 + quantity2 + quantity3 + quantity4 + quantity5 + quantity6;

  printf("Frequencia de 1: %d/100\n", quantity1);
  printf("Frequencia de 2: %d/100\n", quantity2);
  printf("Frequencia de 3: %d/100\n", quantity3);
  printf("Frequencia de 4: %d/100\n", quantity4);
  printf("Frequencia de 5: %d/100\n", quantity5);
  printf("Frequencia de 6: %d/100\n", quantity6);
  printf("Total: %d\n", total);

  return 0;
}