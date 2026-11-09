#include <iostream>
#include <cstdlib>
using namespace std; 

/*
  4. Desenvolva um programa que leia as dimensões de uma matriz e faça sua alocação dinâmica em um
  único bloco utilizando malloc. Após preencher a matriz, leia o índice de uma linha que deverá ser
  removida logicamente. 
  
  O programa deverá deslocar os elementos das linhas posteriores para ocupar o
  espaço correspondente à linha removida, sem utilizar uma segunda matriz. O número lógico de linhas
  deverá ser atualizado. Ao final, apresente apenas as linhas que permanecem válidas na matriz. O
  deslocamento deverá ser realizado utilizando aritmética de ponteiros.
*/

/*
  alocar ------------ int *vet = (int*) malloc(n * sizeof(int));
  liberar ----------- free(ve)
  Desvincular ------- vet = nullptr
*/

// 0 1 2 3 | 4 5 6 7 | 8 9 10 11



// ———————————————————————————————————————————————

void removeLinha(int *ptrMatriz, int linhas, int colunas, int linhaSelecionada, int *ptrQtdLinhas) {
  for(int i = linhaSelecionada; i < linhas - 1; i++){
		for(int j = 0; j < colunas; j++) {
      *(ptrMatriz + i * colunas + j) = *(ptrMatriz + (i + 1) * colunas + j);
    }
	}

  *(ptrQtdLinhas) -= 1;
}

// ———————————————————————————————————————————————

int main() {
  int linhas;
  int colunas;

  cout << "Digite a quantidade de linhas: ";
  cin >> linhas;
  
  cout << "Digite a quantidade de colunas: ";
  cin >> colunas;

  int linhaSelecionada;
  cout << "Digite o indice da linha: ";
  cin >> linhaSelecionada;

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

  removeLinha(matriz, linhas, colunas, linhaSelecionada, &linhas);

  cout << "EXIBICAO: " << endl;
  for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++) {
      cout << *(matriz + i * colunas + j) << " ";
		}

    cout << endl;
	}

  cout << "\n------------------------" << endl;

  free(matriz);
  matriz = nullptr;

  return 0;
}
