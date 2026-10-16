#include <iostream>
using namespace std; 

/*
  1. Desenvolva um programa que declare uma variável inteira, leia um valor para ela e crie um ponteiro
  apontando para essa variável. Em seguida, altere o valor da variável para o dobro do valor original
  utilizando apenas o ponteiro. Ao final, exiba o novo valor da variável.
*/

int main() {
  int valor;

  cout << "Digite um valor: ";
  cin >> valor;

  int *ponteiro = &valor;

  *ponteiro = (*ponteiro) * 2;

  cout << "Novo valor: " << valor;

  return 0;
}
