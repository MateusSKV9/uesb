/*
  3) Crie uma função recursiva que remova caracteres duplicados consecutivos em
  uma string (exemplo: "aaabbc" → "abc").
*/

#include <stdio.h>

void removeDuplicados(char vetor[], int i) {
  // Caso base: se encontrar o final da string, isto é, se o caractere for '\0'
  // Toda string possui esse sinalizar ao final para demarcar quando ela acaba
  if (vetor[i] == '\0')
    return;

  // Verificar se o caractere no índice "i" é igual ao próximo ("i + 1")
  if (vetor[i] == vetor[i + 1]) {
    // Cria uma variável auxiliar, pois a variável "i" é utilizada na recursão
    // A variável j é apenas para realizar o deslocamento das letras no while
    int j = i;

    // While para realizar o deslocamento da string
    // Ex.: aaabcc -> aaabcc -> aabcc -> abcc
    while (vetor[j] != '\0') {
      vetor[j] = vetor[j + 1];
      j++;
    }

    // Recursivamente, chama a função passando o mesmo "i", pois precisa verificar se ainda existem caracteres iguais
    // Ex.: aaab -> aab --> ab
    removeDuplicados(vetor, i);
  } else {
    // Recursivamente, chama a função para ir para a próxima posição
    // Ex.: abbc -> "i" agora vai para "b", pois "a" != "b"
    removeDuplicados(vetor, i + 1);
  }
}

int main() {
  // Sequencia de caracteres FIXA
  char sequencia[] = "aabbccdd";
  // Chama a função para a sequencia FIXA
  removeDuplicados(sequencia, 0);

  // Sequencia de caracteres LIDA pelo usuário
  char sequenciaDigitada[50];
  printf("Digite uma sequencia de caracteres: ");
  scanf("%49s", sequenciaDigitada);
  // Chama a função para a sequencia LIDA
  removeDuplicados(sequenciaDigitada, 0);

  // Exibe a sequencia FIXA após remover os caracteres duplicados
  printf("Sequencia fixa: %s \n", sequencia);

  // Exibe a sequencia LIDA após remover os caracteres duplicados
  printf("Sequencia digitada: %s \n", sequenciaDigitada);
  return 0;
}