#include <iostream>
using namespace std; 

/*
  3. Desenvolva uma função recursiva que receba um número inteiro positivo e retorne a quantidade de
  algarismos maiores que 5. Por exemplo, para o número 683572, a função deverá retornar 3, pois os
  algarismos 6, 8 e 7 são maiores que 5.
  Não utilize string ou vetor.
*/

// 683572 => 0
// 68357 => 0 + 1
// 6835 => 0 + 1 + 0
// 683 => 0 + 1 + 0 + 0
// 68 =>  0 + 1 + 0 + 0 + 1
// 6 =>  0 + 1 + 0 + 0 + 1 + 1

int numerosMaiores(int n) {
  if(n < 10) {
    if(n > 5) return 1;
    else return 0;
  }

  int count = 0;
  int algarismo = n % 10;

  if(algarismo > 5) count = 1;

  return count + numerosMaiores(n / 10);
}

int main() {
  int n;

  cout << "Digite um numero: ";
  cin >> n;
 
  int resultado = numerosMaiores(n);
  cout << "Quantidade de numeros maiores que 5: " << resultado;

  return 0;
}