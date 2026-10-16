#include <iostream>
using namespace std; 

/*
  2. Desenvolva uma função que receba o endereço de uma variável inteira e some 10 ao valor armazenado
  nela. A função main deverá ler o valor, chamar a função e exibir o valor antes e depois da chamada.
*/

void incrementa10(int *ponteiro) {
  *ponteiro = *ponteiro + 10;
}

int main() {
  int valor;

  cout << "Digite um valor: ";
  cin >> valor;

  cout << "Valor antes: " << valor << endl;

  incrementa10(&valor);

  cout << "Valor depois: " << valor;

  return 0;
}
