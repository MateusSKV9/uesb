#include <iostream>
using namespace std; 

/*
  4. Soma recursiva dos elementos
  Crie um vetor de 6 números inteiros e uma função recursiva que receba um ponteiro para o primeiro elemento e a quantidade de elementos restantes.
  Retorne a soma de todos os elementos, utilizando aritmética de ponteiros para acessar o vetor.
  Exemplo: {3, 5, 2, 4, 1, 5} → resultado 20.
*/

// 3 | 6
// 5 | 5
// 2 | 4
// 4 | 3
// 1 | 2
// 5 | 1

// K  | 0
int somador(int *ptrVetor, int qtdRestantes) {
  if(qtdRestantes == 0) return 0;

  return *(ptrVetor) + somador(ptrVetor+1, --qtdRestantes);
}

// ———————————————————————————————————————————————

// 0 1 2 3 4 5 6

int main() {
  int tamanho = 6;

  int vetor[tamanho];

  cout << "INSERINDO VALORES: " << endl;
  for (int i = 0; i < tamanho; i++) {
    cout << "Posicao[" << i << "]: ";
    cin >> vetor[i];
  }

  cout << "\n-----------------" << endl;

  int soma = somador(vetor, tamanho);

  cout << "A soma de todos os elementos e: " << soma;

  return 0;
}
