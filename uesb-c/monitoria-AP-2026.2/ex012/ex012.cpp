#include <iostream>
using namespace std; 

/*
  5. Desenvolva uma função recursiva que receba um vetor de números inteiros, seu tamanho e uma
  posição inicial e retorne a soma das diferenças absolutas entre todos os pares de elementos
  consecutivos. Não utilize a função abs().

  Por exemplo:
  t = 4
       0  1   2  3
  v = {4, 10, 7, 15}
  As diferenças são:
  |4 - 10| = 6
  |10 - 7| = 3
  |7 - 15| = 8

  Portanto, a função deverá retornar:
  17
*/

// ——————————————————————————————————————————————————————————————

int difAbsoluta(int n1, int n2) {
  int absN1 = n1 < 0 ? (-1 * n1) : n1;
  int absN2 = n2 < 0 ? (-1 * n2) : n2;

  return absN1 > absN2 ? absN1 - absN2 : absN2 - absN1;
}

// ——————————————————————————————————————————————————————————————

int calcDiferencas(int vetor[], int tamanho, int inicio) {
  if(tamanho == inicio + 1) return 0;

  int diferenca = difAbsoluta(vetor[tamanho - 1], vetor[tamanho - 2]);

  return diferenca + calcDiferencas(vetor, tamanho - 1, inicio);
}

// ——————————————————————————————————————————————————————————————

int main() {
  int tamanho;

  cout << "Digite o tamanho do vetor: ";
  cin >> tamanho;

  int vetor[tamanho];

  cout << "INSERINDO VALORES: " << endl;
  for (int i = 0; i < tamanho; i++) {
    cout << "Posicao[" << i << "]: ";
    cin >> vetor[i];
  }

  int absDiferencas = calcDiferencas(vetor, tamanho, 0);
  cout << "Somatoria das diferencas absolutas: " << absDiferencas;

  return 0;
}