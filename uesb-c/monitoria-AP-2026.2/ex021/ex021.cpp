#include <iostream>
using namespace std; 

/*
  4. Desenvolva uma função que receba os endereços de duas variáveis inteiras e troque seus conteúdos.
  A função main deverá ler os dois valores, exibi-los antes da chamada da função e depois mostrar os
  valores já trocados.
  Exemplo:
  Antes:
  a = 4
  b = 9
  Depois:
  a = 9
*/

void trocarValores(int *ponteiro1, int *ponteiro2) {
  int aux = *ponteiro1;
  *ponteiro1 = *ponteiro2;
  *ponteiro2 = aux;
}

int main() {
  int valorA, valorB;

  cout << "Digite o valorA: ";
  cin >> valorA;
 
  cout << "Digite o valorB: ";
  cin >> valorB;

  cout << "--------------------------- " << endl;

  cout << "valorA antes: " << valorA << endl;
  cout << "valorB antes: " << valorB << endl;

  cout << "--------------------------- " << endl;

  trocarValores(&valorA, &valorB);

  cout << "valorA depois: " << valorA << endl;
  cout << "valorB depois: " << valorB << endl;

  return 0;
}
