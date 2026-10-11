#include <iostream>
using namespace std; 

/*
  2. Desenvolva uma função recursiva que receba um vetor, seu tamanho, uma posição inicial e um valor
  X e retorne o índice da última ocorrência de X no vetor. Caso o valor não esteja presente, a função deverá
  retornar -1.
  Por exemplo:
       0  1  2  3  4  5  6
  v = {3, 8, 5, 8, 2, 8, 7}
  X = 8
  A função deverá retornar:
  5
  A solução deverá utilizar recursividade para percorrer o vetor.
*/

// ——————————————————————————————————————————————————————————————

int encontraIndice(int vetor[], int tamanho, int inicio, int valor) {
  if(tamanho == inicio) return -1;

  if(vetor[tamanho - 1] == valor) {
    return tamanho - 1;
  }

  return encontraIndice(vetor, tamanho - 1, inicio, valor);
}

// ——————————————————————————————————————————————————————————————

int main() {
  int tamanho, valor;

  cout << "Digite o tamanho do vetor: ";
  cin >> tamanho;

  int vetor[tamanho];

  cout << "INSERINDO VALORES: " << endl;
  for (int i = 0; i < tamanho; i++) {
    cout << "Posicao[" << i << "]: ";
    cin >> vetor[i];
  }

  cout << "Digite o valor a ser pesquisado: ";
  cin >> valor;

  int indice = encontraIndice(vetor, tamanho, 0, valor);

  if(indice != -1) {
    cout << "Indice da ultima ocorrencia de " << valor << ": " << indice;
  } else {
    cout << "Valor NAO encontrado!";
  }

  return 0;
}