#include <iostream>
using namespace std; 

/*
  5. Desenvolva um programa que leia uma matriz 3 x 4 de números inteiros. Crie uma função que percorra
  todos os elementos utilizando aritmética de ponteiros e calcule a média dos valores armazenados. Em
  seguida, crie uma segunda função que também utilize ponteiros e retorne a quantidade de elementos
  maiores que essa média.
*/

float calcMedia(int *ptrMatriz) {
  int soma = 0;

  for (int i = 0; i < 3*4; i++) {
    soma += *(ptrMatriz+i);
  }

  return (float) soma / 12;
}

// ———————————————————————————————————————————————

int qtdElementosMaioresMedia(int *ptrMatriz, float media) {
  int qtd = 0;

  for (int i = 0; i < 3*4; i++) {
    if(*(ptrMatriz+i) > media) qtd++;
  }

  return qtd;
} 

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

  cout << "\n------------------------" << endl;

  int *ptrMatriz = &matriz[0][0];

  cout << "EXIBICAO: " << endl;
  for (int i = 0; i < (linhas * colunas); i++) {
    if(i % colunas == 0 ) cout << endl;
    cout << *(ptrMatriz+i) << " ";    
  }

  cout << "\n------------------------" << endl;

  float media = calcMedia(ptrMatriz);
  cout << "Media: " << media << endl;

  int qtdMaiores = qtdElementosMaioresMedia(ptrMatriz, media);
  cout << "Quantidade de elementos maiores que a media: " << qtdMaiores << endl;

  return 0;
}
