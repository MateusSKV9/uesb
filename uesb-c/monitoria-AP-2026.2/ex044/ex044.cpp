#include <iostream>
#include <cstdlib>
using namespace std; 

/*
  1) (valor 2,0). Desenvolva uma funcao recursiva que receba um vetor de numeros inteiros, seu tamanho e uma posicao
  atual, e retorne a quantidade de elementos positivos existentes no vetor. 
  
  A funcao nao podera utilizar estruturas de
  repeticao. A funcao main devera ler 8 valores inteiros, chamar a funcao recursiva e apresentar a quantidade de valores
  positivos encontrados.
*/


// ———————————————————————————————————————————————

int calcQtdValoresPositivos(int vetor[], int tamanho, int posAtual) {
  if(posAtual == tamanho) return 0;

  int count = vetor[posAtual] > 0 ? 1 : 0;

  return count + calcQtdValoresPositivos(vetor, tamanho, posAtual+1);
}

// ———————————————————————————————————————————————

int main() {
  int tamanho = 8;

  int vetor[tamanho];

  cout << "INSERINDO VALORES: " << endl;
  for (int i = 0; i < tamanho; i++) {
    cout << "Posicao[" << i << "]: ";
    cin >> vetor[i];
  }

  cout << "\n-----------------" << endl;

  int qtdValoresPositivos = calcQtdValoresPositivos(vetor, tamanho, 0);
  cout << "Quantidade de positivos: " << qtdValoresPositivos;

  return 0;
}
