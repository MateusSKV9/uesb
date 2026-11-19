#include <iostream>
#include <cstdlib>
using namespace std; 

/*
  2) (valor 2,5). Uma aplicacao armazena 10 valores inteiros em um vetor. Desenvolva uma funcao que receba um ponteiro
  para o primeiro elemento do vetor e um ponteiro para a variavel que representa seu tamanho logico. 
  
  A funcao devera eliminar logicamente todos os valores negativos, deslocando os elementos posteriores para ocupar as posicoes liberadas e
  atualizando o tamanho logico sempre que uma remocao ocorrer.
  
  Nao utilize vetor auxiliar. O processamento dos elementos
  devera ser realizado utilizando ponteiros. Ao final, a funcao main devera apresentar apenas os elementos que permanecem
  validos e o novo tamanho logico.
*/
 
// 0 1  2  3 4 
//      #
// 1 2 -1 -2 3

// 1 2 -2 3 | 3
// 1 2 -2 3 | 3

// 1 2 3 3 | 3

// ———————————————————————————————————————————————

void removeNegativos(int *ptrVetor, int *ptrTamanho) {
  for (int i = 0; i < *(ptrTamanho); i++) {
    if(*(ptrVetor+i) < 0) {
      for (int j = i; j < *(ptrTamanho) - 1; j++) {
        *(ptrVetor+j) = *(ptrVetor+j+1);
      }
      
      *(ptrTamanho)-=1;
      i--;
    }
  }
}

// ———————————————————————————————————————————————

int main() {
  int tamanho = 5;

  int vetor[tamanho];

  cout << "INSERINDO VALORES: " << endl;
  for (int i = 0; i < tamanho; i++) {
    cout << "Posicao[" << i << "]: ";
    cin >> vetor[i];
  }

  cout << "\n-----------------" << endl;

  cout << "VETOR ORIGINAL: " << endl;
  for (int i = 0; i < tamanho; i++) {
    cout << vetor[i] << " ";
  }

  cout << "\n-----------------" << endl;

  removeNegativos(vetor, &tamanho);

  cout << "VETOR ATUALIZADO: " << endl;
  for (int i = 0; i < tamanho; i++) {
    cout << vetor[i] << " ";
  }

  cout << "\nNovo tamanho: " << tamanho;

  return 0;
}
