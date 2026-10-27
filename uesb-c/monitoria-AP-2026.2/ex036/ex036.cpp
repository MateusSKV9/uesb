#include <iostream>
using namespace std; 

/*
  3. Impressão recursiva de vetor
  Crie um vetor de 5 números inteiros. 
  Implemente uma função recursiva que receba um ponteiro para o elemento atual e um ponteiro para o fim do vetor.
  Imprima os elementos em ordem crescente de posição, avançando o ponteiro a cada chamada.
*/

// 1000
// 1004
// 1008

// 1012

void imprissaoCrescente(int *ptrInicio, int *ptrFinal) {
  if(ptrInicio > ptrFinal) return;

  cout << *(ptrInicio) << " ";

  imprissaoCrescente(ptrInicio+1, ptrFinal);  
}

// ———————————————————————————————————————————————

// 0 1 2 3 4 5

int main() {
  int tamanho = 5;

  int vetor[tamanho];

  cout << "INSERINDO VALORES: " << endl;
  for (int i = 0; i < tamanho; i++) {
    cout << "Posicao[" << i << "]: ";
    cin >> vetor[i];
  }

  cout << "\n-----------------" << endl;

  imprissaoCrescente(vetor, vetor+tamanho-1);

  return 0;
}
