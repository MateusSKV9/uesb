#include <iostream>
using namespace std; 

/*
  4. Desenvolva um programa que leia uma matriz 3 x 3 de números inteiros e um valor inteiro K. Crie uma
  função que percorra a matriz utilizando um ponteiro e substitua cada elemento pelo resultado da
  multiplicação de seu valor original por K. A função não deverá utilizar a notação tradicional m[i][j] para
  realizar as alterações.
*/

void multiplicador(int *ptrMatriz, int valorK) {
  for (int i = 0; i < 3*3; i++) {
    *(ptrMatriz+i) *= valorK;
  }
}

// ———————————————————————————————————————————————

int main() {
  int linhas = 3;
  int colunas = 3;

  int matriz[linhas][colunas];

  cout << "INSERINDO VALORES: " << endl;
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      cout << "Posicao[" << i << "][" << j << "]: ";
      cin >> matriz[i][j];
    }
  }

  cout << "\n------------------------" << endl;

  int valorK;
  cout << "Digite o valor de K: ";
  cin >> valorK;

  cout << "\n------------------------" << endl;
  int *ptrMatriz = &matriz[0][0];

  cout << "MATRIZ ORIGINAL: " << endl;
  for (int i = 0; i < (linhas * colunas); i++) {
    if(i % colunas == 0 ) cout << endl;
    cout << *(ptrMatriz+i) << " ";    
  }

  cout << "\n------------------------" << endl;
  multiplicador(ptrMatriz, valorK);

  cout << "MATRIZ ALTERADA: " << endl;
  for (int i = 0; i < (linhas * colunas); i++) {
    if(i % colunas == 0 ) cout << endl;
    cout << *(ptrMatriz+i) << " ";    
  }

  return 0;
}
