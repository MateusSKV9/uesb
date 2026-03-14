#include <stdio.h>
#include <stdlib.h>

int main() {
  char word[25];
  int i = 0, length = 0, vowelsQuantity = 0;

  printf("Digite uma palavra: ");
  scanf("%24s", word);

  while (word[i] != '\0') {
    length++;
    i++;
  }

  for (i = 0; i < length; i++) {
    if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
      vowelsQuantity++;
    }
  }

  printf("Quantidade de vogais: %d\n", vowelsQuantity);

  return 0;
}