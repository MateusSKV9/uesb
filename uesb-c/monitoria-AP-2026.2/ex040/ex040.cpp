#include <iostream>
#include <cstdlib>
using namespace std; 

/*
  2. Desenvolva um programa que leia a quantidade de linhas e colunas de uma matriz, aloque
  dinamicamente o espaço necessário utilizando malloc e leia seus elementos.
  
  Crie uma função que
  determine, para cada linha, a diferença entre seu maior e seu menor elemento. Ao final, a função deverá
  informar qual linha apresenta a maior amplitude, bem como o maior e o menor valor dessa linha.
  
  Os três
  resultados deverão ser disponibilizados ao main por meio de parâmetros ponteiros. Toda a matriz deverá
  ser acessada utilizando aritmética de ponteiros e, em caso de empate, deverá ser considerada a primeira
  linha.
*/

/*
  alocar ------------ int *vet = (int*) malloc(n * sizeof(int));
  liberar ----------- free(ve)
  Desvincular ------- vet = nullptr
*/

// ———————————————————————————————————————————————

// #
// 1 2 3 (0)
// 4 5 6
// 7 8 9

void encontraMaiorAmplitude(int *ptrMatriz, int linhas, int colunas, int *ptrMenor, int *ptrMaior, int *ptrAmplitude){
	int atualSoma = 0;

	for(int i = 0; i < linhas; i++) {
    int menorElemento = *(ptrMatriz + i * colunas + 0);
    int maiorElemento = *(ptrMatriz + i * colunas + 0);

		for(int j = 0; j < colunas; j++) {
      if(*(ptrMatriz + i * colunas + j) <= menorElemento) {
        menorElemento = *(ptrMatriz + i * colunas + j);
      }
      
      if(*(ptrMatriz + i * colunas + j) >= maiorElemento) {
        maiorElemento = *(ptrMatriz + i * colunas + j);
      }
		}
    
    // Após percorrer toda a linha, realizo as operações
    atualSoma = maiorElemento - menorElemento;  
    atualSoma = atualSoma < 0 ? (-1)*atualSoma : atualSoma;
   
    cout << "Maior Elemento: " << maiorElemento << endl;
    cout << "Menor Elemento: " << menorElemento << endl;
    cout << "Amplitude atual: " << atualSoma << endl;
    cout << endl;

    if(atualSoma > *ptrAmplitude) {
      *ptrAmplitude = atualSoma;
      *ptrMenor = menorElemento;
      *ptrMaior = maiorElemento;
    }
   
    atualSoma = 0;
	}
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

  int menor = *(matriz + 0 * colunas + 0);
  int maior = *(matriz + 0 * colunas + 0);
  int amplitude = 0;

  cout << "\n------------------------" << endl;

  cout << "EXIBICAO: " << endl;
  for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++) {
      cout << *(matriz + i * colunas + j) << " ";
		}

    cout << endl;
	}
  
  cout << "\n------------------------" << endl;

  encontraMaiorAmplitude(matriz, linhas, colunas, &menor, &maior, &amplitude);

  cout << "Menor: " << menor << endl;
  cout << "Maior: " << maior << endl;
  cout << "Amplitude: " << amplitude;

  free(matriz);
  matriz = nullptr;

  return 0;
}
