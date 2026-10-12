#include <iostream>
using namespace std; 

/*
  1. Desenvolva um programa que leia uma matriz quadrada 4 x 4 de números inteiros. Em seguida, crie
  uma função recursiva que receba a matriz e retorne a soma dos elementos da diagonal principal. A cada
  chamada, a função deverá considerar o elemento matriz[pos][pos] e avançar para a próxima posição da
  diagonal. O caso-base deverá ocorrer quando pos == n.
*/

int somaDiagonal(int m[][4], int n, int pos) {
  if (pos == n) {
    return 0;
  }

  return m[pos][pos] + somaDiagonal(m, n, pos + 1);
}

int main() {
  int dimensao = 4;
  int matriz[4][4];

  cout << "INSERINDO VALORES: " << endl;
  for (int i = 0; i < dimensao; i++) {
    for (int j = 0; j < dimensao; j++) {
      cout << "Posicao[" << i << "][" << j << "]: ";
      cin >> matriz[i][j];
    }
  }
  
  cout << "EXIBINDO MATRIZ: " << endl;
  for (int i = 0; i < dimensao; i++) {
    for (int j = 0; j < dimensao; j++) {
      cout << matriz[i][j] << " ";
    }

    cout << endl;
  }

  int somatorioDiagonalP = somaDiagonal(matriz, dimensao, 0);
  cout << "Soma da diagonal principal: "<< somatorioDiagonalP << endl;

  return 0;
}
