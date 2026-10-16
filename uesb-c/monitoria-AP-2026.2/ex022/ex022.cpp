#include <iostream>
using namespace std; 

/*
  5. Desenvolva uma função que receba dois números inteiros e os endereços de duas outras variáveis. A
  função deverá armazenar em uma delas a soma dos dois números e na outra a diferença entre eles. A
  função não deverá utilizar return para devolver os resultados.
  Exemplo:
  a = 8
  b = 3
  Soma = 11
  Diferença = 5
*/

void somaEdiferenca(int a, int b, int *somaPtr, int *diferencaPtr) {
  *somaPtr = a + b;
  *diferencaPtr = (a - b) < 0 ? (-1)*(a - b) : (a - b);
}

int main() {
  int a, b;
  int soma = 0, diferenca = 0;

  cout << "Digite o primeiro valor: ";
  cin >> a;
 
  cout << "Digite o segundo valor: ";
  cin >> b;

  cout << "--------------------------- " << endl;

  somaEdiferenca(a, b, &soma, &diferenca);

  cout << "Soma: " << soma << endl;
  cout << "Diferenca: " << diferenca << endl;

  return 0;
}
