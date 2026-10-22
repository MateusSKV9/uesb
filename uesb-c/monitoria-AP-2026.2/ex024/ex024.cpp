#include <iostream>
using namespace std; 

/*
  2.Desenvolva um programa que leia 10 números inteiros e os armazene em um vetor. Crie uma função que
  receba o endereço inicial do vetor e seu tamanho e substitua todos os números negativos por zero.
  Requisitos:
  - A alteração deve acontecer diretamente no vetor original.
  - Utilizar ponteiros para acessar e modificar os elementos.
  - Não utilizar vetor[i] dentro da função.
  - A função não deve retornar valores.
  
  Exemplo:
  Entrada:
  4 -2 7 -8 0 3 -1 9 -5 6
  
  Saída:
  4 0 7 0 0 3 0 9 0 6
*/

void zeraNegativos(int *ptr, int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    if(*(ptr+i) < 0) *(ptr+i) = 0;
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
  zeraNegativos(vetor, tamanho);

  cout << "VETOR ALTERADO: " << endl;
  for (int i = 0; i < tamanho; i++) {
    cout << "Posicao[" << i << "]: " << vetor[i] << endl;
  }

  return 0;
}
