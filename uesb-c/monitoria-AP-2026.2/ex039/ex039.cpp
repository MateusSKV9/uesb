#include <iostream>
#include <cstdlib>
using namespace std; 

/*
  1. Desenvolva um programa que leia as dimensões de uma matriz de números inteiros, considerando que
  ela possuirá pelo menos 2 linhas e 2 colunas. Aloque dinamicamente a matriz utilizando malloc em um
  único bloco contínuo de memória. 
  
  Em seguida, crie uma função que percorra todas as possíveis
  submatrizes 2 x 2 e determine aquela cuja soma dos quatro elementos é a maior. A função deverá
  disponibilizar ao programa principal, por meio de parâmetros ponteiros, a linha e a coluna do canto
  superior esquerdo da submatriz encontrada, além do valor da maior soma. 
  
  O acesso aos elementos
  deverá ser feito utilizando aritmética de ponteiros. Em caso de empate, considere a primeira ocorrência
  encontrada.
*/

/*
  alocar ------------ int *vet = (int*) malloc(n * sizeof(int));
  liberar ----------- free(ve)
  Desvincular ------- vet = nullptr
*/

// 0 1 2
// 3 4 5
// 6 7 8

// ———————————————————————————————————————————————

void encontraMaiorSoma2x2(int *ptrMatriz, int linhas, int colunas, int *ptrLinhaSup, int *ptrColunaSup, int *ptrSoma){
	int atualSoma2x2 = 0;

	for(int i = 0; i < linhas; i++) {
		for(int j = 0; j < colunas; j++) {
      if(j == (colunas - 1) || i == (linhas - 1)) {
        continue;
      }

			atualSoma2x2 += *(ptrMatriz + i * colunas + j); // SE
			atualSoma2x2 += *(ptrMatriz + i * colunas + (j + 1)); // SD
			atualSoma2x2 += *(ptrMatriz + (i + 1) * colunas + j); // IE
			atualSoma2x2 += *(ptrMatriz + (i + 1) * colunas + (j + 1)); // ID

      if(*ptrSoma < atualSoma2x2) {
        cout << *(ptrMatriz + i * colunas + j) << " "; // SE
        cout << *(ptrMatriz + i * colunas + (j + 1)) << " "; // SD
        cout << *(ptrMatriz + (i + 1) * colunas + j ) << " "; // IE
        cout << *(ptrMatriz + (i + 1) * colunas + (j + 1)) << " "; // ID
        cout << "Soma: " << atualSoma2x2 << endl;

        *ptrLinhaSup = i;
        *ptrColunaSup = j;
        *ptrSoma = atualSoma2x2;
      }

      atualSoma2x2 = 0;
		}
	}
}

// ———————————————————————————————————————————————

int main() {
  int linhas;
  int colunas;
  int linhaSup, colunaSup, soma2x2 = 0;

  cout << "Digite a quantidade de linhas: ";
  cin >> linhas;
  
  cout << "Digite a quantidade de colunas: ";
  cin >> colunas;

  if(linhas < 2 || colunas < 2) {
    cout << "[ERRO]: numero de linhas e colunas precisam ser pelos menos 2";
    return 0;
  }

  int *matriz = (int *) malloc(linhas * colunas * sizeof(int));

  cout << "INSERINDO VALORES: " << endl;
  for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++) {
      cout << "Posicao[" << i << "][" << j << "]: ";
      cin >> *(matriz + i * colunas + j);
		}
	}

  cout << "\n------------------------" << endl;

  cout << "EXIBICAO: " << endl;
  for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++) {
      cout << *(matriz + i * colunas + j) << " ";
		}

    cout << endl;
	}
  
  cout << "\n------------------------" << endl;

  encontraMaiorSoma2x2(matriz, linhas, colunas, &linhaSup, &colunaSup, &soma2x2);

  cout << "Linha do canto superior esquerdo da submatriz: " << linhaSup << endl;
  cout << "Coluna do canto superior esquerdo da submatriz: " << colunaSup << endl;
  cout << "Soma da submatriz 2x2: " << soma2x2;

  free(matriz);
  matriz = nullptr;

  return 0;
}
