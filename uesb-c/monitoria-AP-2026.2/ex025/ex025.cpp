#include <iostream>
using namespace std; 

/*
  3.Crie um programa que leia 7 números inteiros e os armazene em um vetor. Desenvolva uma função que
  receba um ponteiro para o vetor e seu tamanho e retorne um ponteiro para o maior elemento encontrado.
  Na função principal, utilize o ponteiro retornado para exibir o maior valor e sua posição no vetor.
 
  Exemplo:
  
  Entrada:
  5 12 3 18 7 9 4
 
  Saída:
  Maior valor: 18
  Posição: 3
*/

int* retornaMaiorValorPtr(int *ptr, int tamanho) {
  int *ptrMaior = ptr;
  
  for (int i = 1; i < tamanho; i++) {
    if(*(ptr+i) > *(ptrMaior)) ptrMaior = (ptr+i);
  }

  return ptrMaior;
}

// ———————————————————————————————————————————————

int main() {
  int tamanho = 7;

  int vetor[tamanho];

  cout << "INSERINDO VALORES: " << endl;
  for (int i = 0; i < tamanho; i++) {
    cout << "Posicao[" << i << "]: ";
    cin >> vetor[i];
  }

  cout << "------------------------" << endl;
  int *ptrMaiorValor = retornaMaiorValorPtr(vetor, tamanho);
  
  cout << "Maior valor: " << *(ptrMaiorValor) << endl;

  for (int i = 0; i < tamanho; i++) {
    if(vetor[i] == *ptrMaiorValor) {
      cout << "Posicao: " << i;
      break;
    };
  }

  return 0;
}
