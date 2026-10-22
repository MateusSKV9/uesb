#include <iostream>
using namespace std; 

/*
  1. Considere uma matriz 3 x 4 de números inteiros. Desenvolva um programa que leia todos os seus
  elementos e, em seguida, exiba a matriz utilizando um único ponteiro apontando para o primeiro
  elemento. O percurso deverá ser feito utilizando aritmética de ponteiros, sem utilizar a notação m[i][j]
  durante a exibição.
*/

// ———————————————————————————————————————————————

int main() {
  int linhas = 3;
  int colunas = 4;

  int matriz[linhas][colunas];

  cout << "INSERINDO VALORES: " << endl;
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      cout << "Posicao[" << i << "][" << j << "]: ";
      cin >> matriz[i][j];
    }
  }

  int *ptrMatriz = &matriz[0][0];

  cout << "------------------------" << endl;

  cout << "EXIBICAO: " << endl;
  for (int i = 0; i < (linhas * colunas); i++) {
    if(i % colunas == 0 ) cout << endl;
    cout << *(ptrMatriz+i) << " ";    
  }

  return 0;
}
