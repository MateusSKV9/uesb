#include <iostream>
using namespace std; 

/*
  3. Desenvolva uma função que receba o endereço de uma variável inteira e altere seu conteúdo para 0. A
  função não deverá retornar valor. A leitura e a exibição deverão ser feitas na função main.
*/

void zerar(int *ponteiro) {
  *ponteiro = 0;
}

int main() {
  int valor;

  cout << "Digite um valor: ";
  cin >> valor;

  cout << "Valor antes: " << valor << endl;

  zerar(&valor);

  cout << "Valor depois: " << valor;

  return 0;
}
