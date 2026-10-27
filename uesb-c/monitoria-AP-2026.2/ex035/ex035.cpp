#include <iostream>
using namespace std; 

/*
  Declare duas variáveis inteiras e dois ponteiros que apontem para elas. Crie uma função recursiva que receba um ponteiro para inteiro e um contador.
  A função deverá somar ao valor apontado todos os números de 1 até o contador.
  Exemplo: se a variável começar com 10 e o contador for 3, o resultado deverá ser 16.
*/

// 20 + 5 + 4 + 3 + 2 + 1

void acumulador(int *ptrValorInicial, int contador) {
  if(contador == 0) return;

  *(ptrValorInicial) += contador;

  acumulador(ptrValorInicial, contador - 1);
}


// ———————————————————————————————————————————————

int main() {
  int valorInicial;
  int contador;

  int *ptrValorInicial = &valorInicial;

  cout << "Digite um valor inicial: ";
  cin >> valorInicial;
  
  cout << "Digite um valor para o contador: ";
  cin >> contador;

  cout << "Valor antes: " << valorInicial << endl;

  acumulador(ptrValorInicial, contador);

  cout << "Valor depois: " << valorInicial;

  return 0;
}
