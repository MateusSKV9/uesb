#include <iostream>
#include <cstdlib>
using namespace std; 

/*
  3. Desenvolva um programa que leia as dimensões de uma matriz, aloque-a dinamicamente utilizando
  malloc e leia seus elementos. 
  
  Inicialmente, calcule a média de cada coluna e armazene essas médias em
  um vetor também alocado dinamicamente com malloc. 
  Em seguida, percorra novamente a matriz e conte
  quantos elementos são maiores que a média de sua própria coluna. Aloque dinamicamente um segundo
  vetor com tamanho exatamente igual à quantidade encontrada e armazene nele esses elementos,
  mantendo a ordem em que aparecem na matriz. 
  
  Ao final, apresente o vetor de médias, o vetor de valores
  selecionados e libere corretamente todas as áreas de memória alocadas.
*/

/*
  alocar ------------ int *vet = (int*) malloc(n * sizeof(int));
  liberar ----------- free(ve)
  Desvincular ------- vet = nullptr
*/

// ———————————————————————————————————————————————

// 1 2 3
// 4 5 6
// 7 8 9

int calcQtdMaioresQueMediaColuna(int *ptrMatriz, int linhas, int colunas, int colunaSelecionada, float media) {
  int qtd = 0;

  for(int i = 0; i < linhas; i++){
    if(*(ptrMatriz + i * colunas + colunaSelecionada) > media) {
      qtd++;
    }
	} 

  return qtd; 
}

// ———————————————————————————————————————————————

int calcMediaColuna(int *ptrMatriz, int linhas, int colunas, int colunaSelecionada){
	int soma = 0;

  for(int i = 0; i < linhas; i++){
    soma += *(ptrMatriz + i * colunas + colunaSelecionada);
	}

  return (float) soma / linhas;
}

// ———————————————————————————————————————————————

int main() {
  int linhas;
  int colunas;

  cout << "Digite a quantidade de linhas: ";
  cin >> linhas;
  
  cout << "Digite a quantidade de colunas: ";
  cin >> colunas;

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

  int *vetorMedias = (int *) malloc(colunas * sizeof(int));
  cout << "\nvetorMedias: ";
  for(int i = 0; i < colunas; i++){
    *(vetorMedias+i) = calcMediaColuna(matriz, linhas, colunas, i);
    cout << *(vetorMedias+i) << " ";
	}
  
  int qtdMaioresQueMediaColuna = 0;
  for(int i = 0; i < colunas; i++){
    qtdMaioresQueMediaColuna += calcQtdMaioresQueMediaColuna(matriz, linhas, colunas, i, *(vetorMedias+i));
	}
  cout << "\nQtd de elementos maiores que a propria media da sua respectiva coluna: " << qtdMaioresQueMediaColuna << endl;

  cout << "Elementos maiores que a propria media da sua respectiva coluna: ";
  int *vetorMaioresMedia = (int *) malloc(qtdMaioresQueMediaColuna * sizeof(int));
  for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++) {
      if(*(matriz + i * colunas + j) > *(vetorMedias + j)) {
        *(vetorMaioresMedia) = *(matriz + i * colunas + j);
        cout << *(vetorMaioresMedia) << " ";
        vetorMaioresMedia++;
      } 
		}
	}

  free(matriz);
  matriz = nullptr;

  free(vetorMedias);
  vetorMedias = nullptr;

  free(vetorMaioresMedia);
  vetorMaioresMedia = nullptr;

  return 0;
}
