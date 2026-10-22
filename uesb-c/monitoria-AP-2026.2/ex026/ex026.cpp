#include <iostream>
using namespace std; 

/*
  4.Desenvolva um programa que leia 10 números inteiros e os armazene em um vetor. Crie uma função
  que inverta a ordem dos elementos do vetor utilizando exclusivamente dois ponteiros.
  Um ponteiro deve começar no primeiro elemento e outro no último. A cada iteração, os valores apontados
  devem ser trocados, e os ponteiros devem se aproximar até se encontrarem ou se cruzarem.
  Requisitos:
  - Não utilizar um vetor auxiliar.
  - Não utilizar índices para acessar os elementos dentro da função.
  - Realizar as trocas diretamente no vetor original.
  - Utilizar operações de incremento e decremento de ponteiros.
 
  Exemplo:
  Entrada:
  1 2 3 4 5 6 7 8 9 10
 
  Saída:
  10 9 8 7 6 5 4 3 2 1
*/

void trocarElementosPosicoesOpostas(int *ptr, int tamanho) {
  int *ptrInicio = ptr;
  int *ptrFinal = (ptr + tamanho - 1);
  
  for (int i = 0; i < tamanho / 2; i++) {
    int aux = *(ptrInicio+i);
    *(ptrInicio+i) = *(ptrFinal-i);
    *(ptrFinal-i) = aux; 
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
  trocarElementosPosicoesOpostas(vetor, tamanho);
  
  cout << "VETOR ALTERADO: " << endl;
  for (int i = 0; i < tamanho; i++) {
    cout << vetor[i] << " ";
  }

  return 0;
}
