#include <iostream>
using namespace std; 

/*
  5.Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Desenvolva uma função
  que remova logicamente os valores repetidos, mantendo apenas a primeira ocorrência de cada número.
  A remoção deverá ser realizada deslocando os elementos necessários dentro do próprio vetor, sem
  utilizar um vetor auxiliar.
  A função deve receber um ponteiro para o início do vetor e um ponteiro para a variável que armazena seu
  tamanho lógico. Ao final, deve atualizar esse tamanho.
  
  Exemplo:
  Entrada:
  4 7 4 2 7 9 2 5 9 1

  4 7 4 2 4 9 2 5 9 1 | (0)
  4 7 2 4 4 9 2 5 9 1 | (1)
  4 7 2 4 4 9 2 5 9 1 | (1)
  4 7 2 4 9 4 2 5 9 1 | (1)
  4 7 2 4 9 2 4 5 9 1 | (1)
  4 7 2 4 9 2 5 4 9 1 | (1)
  4 7 2 4 9 2 5 9 4 1 | (1)
  4 7 2 4 9 2 5 9 1 | 4 (1)

  4 7 2 4 9 2 5 9 1 | 4 (2)
  4 7 2 9 4 2 5 9 1 | 4 (2)
  4 7 2 9 2 4 5 9 1 | 4 (2)
  4 7 2 9 2 5 4 9 1 | 4 (2)
  4 7 2 9 2 5 9 4 1 | 4 (2)
  4 7 2 9 2 5 9 1 4 | 4 (2)
  4 7 2 9 2 5 9 1 | 4 4 (2)

  4 7 2 9 2 5 9 1 | 4 4 (3)
  4 7 2 9 5 2 9 1 | 4 4 (3)
  4 7 2 9 5 9 2 1 | 4 4 (3)
  4 7 2 9 5 9 1 2 | 4 4 (3)
  4 7 2 9 5 9 1 | 4 2 4 (3)
  4 7 2 9 5 9 1 | 4 4 2 (3)

  4 7 2 9 5 9 1 | 4 4 2 (4)
  4 7 2 9 5 1 9 | 4 4 2 (4)
  4 7 2 9 5 1 | 4 9 4 2 (4)
  4 7 2 9 5 1 | 4 4 9 2 (4)
  4 7 2 9 5 1 | 4 4 2 9 (4)

  4 7 2 9 5 1 | 4 4 2 9 (2)



[ 0 1 2 3 4 5 6 7 8 9  ]


  4 7 2 7 9 2 5 9 1 | 4 (1)
  4 7 2 9 2 5 9 1 | 4 7 (2)
  4 7 2 9 5 9 1 | 4 7 2 (3)
  4 7 2 9 5 1 | 4 7 2 9 (4)
  4 7 2 9 5 1 | 4 7 2 9 (4)
 
  10 - 4

  Saída:
  Vetor sem repetições:
  4 7 2 9 5 1 
  
  Novo tamanho: 6

  1 2 1 2 1 2 1 2 1 2 (0)

    *
  1 2 1 2 1 2 1 2 1 2 (0)
      *
  1 2 1 2 1 2 1 2 1 2 (1)
  1 2 2 1 1 2 1 2 1 2 (0)
  1 2 2 1 1 2 1 2 1 2 (0)
  1 2 2 1 2 1 1 2 1 2 (0)
  1 2 2 1 2 1 2 1 1 2 (0)
  1 2 2 1 2 1 2 1 2 | 1 (0)
        *
  1 2 2 1 2 1 2 1 2 | 1 (0)
  1 2 2 2 1 1 2 1 2 | 1 (0)
  1 2 2 2 1 1 2 1 2 | 1 (0)
  1 2 2 2 1 2 1 1 2 | 1 (0)
  1 2 2 2 1 2 1 1 2 | 1 (0)
  1 2 2 2 1 2 1 2 1 | 1 (0)
*/

void removeRepeticoes(int *ptr, int *ptrTamanho) {
    for (int i = 0; i < *ptrTamanho; i++) {
        for (int j = i + 1; j < *ptrTamanho; j++) {
            // Se encontrar um valor repetido
            if (*(ptr + i) == *(ptr + j)) {
                // Desloca todos os elementos à esquerda a partir de j
                int *ptrAux = ptr + j;
                while (ptrAux < ptr + *ptrTamanho - 1) {
                    *ptrAux = *(ptrAux + 1);
                    ptrAux++;
                }
                // Decrementa o tamanho lógico do vetor
                (*ptrTamanho)--;
                // Decrementa j para reavaliar o elemento que recuou para esta posição
                j--;
            }
        }
    }
}

// ———————————————————————————————————————————————

int main() {
  int tamanho = 10;

  int vetor[tamanho];

  cout << "INSERINDO VALORES: " << endl;
  for (int i = 0; i < tamanho; i++) {
    cout << "Posicao[" << i << "]: ";
    cin >> vetor[i];
  }

  cout << "------------------------" << endl;
  
  cout << "VETOR ANTES: " << endl;
  for (int i = 0; i < tamanho; i++) {
    cout << vetor[i] << " ";
  }

  cout << "\n------------------------" << endl;
  removeRepeticoes(vetor, &tamanho);
  
  cout << "VETOR ALTERADO: " << endl;
  for (int i = 0; i < tamanho; i++) {
    cout << vetor[i] << " ";
  }

  cout << "\nNovo tamanho: " << tamanho;

  return 0;
}
