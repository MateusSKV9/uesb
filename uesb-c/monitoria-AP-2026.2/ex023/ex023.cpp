#include <iostream>
using namespace std; 

/*
  1.Escreva um programa em C++ que leia 8 números inteiros e os armazene em um vetor. Em seguida, crie
  uma função que receba um ponteiro para o primeiro elemento do vetor e seu tamanho, percorrendo os
  elementos para calcular a soma dos valores pares.
  
  Requisitos:
  -Utilizar aritmética de ponteiros para percorrer o vetor.
  -Não utilizar a notação vetor[i] dentro da função.
  -A função deve retornar a soma dos números pares.
  
  Exemplo:
  Entrada:
  2 7 4 9 6 3 8 1
  
  Saída:
  Soma dos pares: 20
*/

int calcPares(int *ptr, int tamanho) {
  int somaPares = 0;

  for (int i = 0; i < tamanho; i++) {
    if(*(ptr+i) % 2 == 0) somaPares += *(ptr+i);
  }
  
  return somaPares;
}

// ———————————————————————————————————————————————

int main() {
  int tamanho = 8;

  int vetor[tamanho];

  cout << "INSERINDO VALORES: " << endl;
  for (int i = 0; i < tamanho; i++) {
    cout << "Posicao[" << i << "]: ";
    cin >> vetor[i];
  }

  int somaPares = calcPares(vetor, tamanho);
  cout << "Soma dos pares: " << somaPares << endl;

  return 0;
}
