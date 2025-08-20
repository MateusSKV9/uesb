#include <stdio.h>
#include <stdlib.h>

int main() {
  char word[40];
  int vowels = 0;

  printf("Digite uma palavra: ");
  scanf("%39s", word);

  int i = 0;
  while (word[i] != '\0') {
    if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
      vowels++;
    }
    i++;
  }

  printf("Quantida de vogais: %d", vowels);

  return 0;
}