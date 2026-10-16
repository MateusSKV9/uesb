#include <iostream>
using namespace std; 

/*
  2. Desenvolva um programa que leia uma matriz 4 x 5 de números inteiros. Crie inicialmente uma função
  recursiva que receba a matriz, o índice de uma linha, o número de colunas e uma posição e retorne a soma
  dos elementos daquela linha. O caso-base deverá ocorrer quando a posição atingir o número de colunas.
  Protótipo sugerido:

  int somaLinha(int m[][5], int linha, int colunas, int pos);
  Em seguida, crie uma segunda função recursiva que percorra as linhas da matriz e retorne o índice da
  linha que possui a maior soma. Essa função deverá utilizar obrigatoriamente a função somaLinha.
 
  Protótipo sugerido:
  int linhaMaiorSoma(int m[][5], int linhas, int linhaAtual);
  Por exemplo, considerando:
  2 3 1 4 2
  5 1 3 2 6
  1 1 2 1 3
  4 5 2 3 4
  
  as somas das linhas são:
  Linha 0 = 12
  Linha 1 = 17
  Linha 2 = 8
  Linha 3 = 18
  Portanto, a função deverá retornar:
  3
*/

int somaLinha(int m[][5], int linha, int colunas, int pos) {
  if (pos == colunas) {
    return 0;
  }

  return m[linha][pos] + somaLinha(m, linha, colunas, pos + 1);
}

// ——————————————————————————————————————————————————————————————————

int linhaMaiorSoma(int m[][5], int linhas, int linhaAtual) {
  if (linhaAtual == linhas - 1) {
    return linhaAtual;
  }

  int melhorLinha = linhaMaiorSoma(m, linhas, linhaAtual + 1); // 3

  int somaAtual = somaLinha(m, linhaAtual, 5, 0); // 12
  int somaMelhor = somaLinha(m, melhorLinha, 5, 0); // 18

  if (somaAtual >= somaMelhor) {
    return linhaAtual;
  }

  return melhorLinha;
}

// ——————————————————————————————————————————————————————————————————

int main() {
  int linhas = 4;
  int colunas = 5;
  int matriz[4][5];

  cout << "INSERINDO VALORES: " << endl;
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      cout << "Posicao[" << i << "][" << j << "]: ";
      cin >> matriz[i][j];
    }
  }
  
  cout << "EXIBINDO MATRIZ: " << endl;
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      cout << matriz[i][j] << " ";
    }

    cout << endl;
  }

  int melhorLinha = linhaMaiorSoma(matriz, linhas, 0);
  cout << "Linha com maior soma: " << melhorLinha << endl;

  return 0;
}
