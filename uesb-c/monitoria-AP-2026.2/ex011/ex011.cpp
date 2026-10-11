#include <iostream>
using namespace std; 

/*
  4. Desenvolva uma função recursiva, sem retorno, que receba um número inteiro positivo e exiba sua
  representação em binário. Não utilize vetores, string ou funções prontas de conversão.
  Por exemplo:
  Entrada: 13
  Saída: 1101
  A função deverá utilizar sucessivas divisões por 2 e o resto da divisão.
  Protótipo sugerido:
  void exibirBinario(int n);
*/

// ——————————————————————————————————————————————————————————————

void exibirBinario(int n) {
  if(n / 2 == 0) {
    cout << n % 2;
    return;
  } 

  int resto = n % 2;
  int quociente = n / 2;

  exibirBinario(quociente);
  cout << resto;
}

// ——————————————————————————————————————————————————————————————

int main() {
  int numero;

  cout << "Digite um numero: ";
  cin >> numero;

  exibirBinario(numero);

  return 0;
}