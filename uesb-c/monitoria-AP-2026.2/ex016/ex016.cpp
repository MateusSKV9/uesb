#include <iostream>
using namespace std; 

/*
  4. Uma aplicação armazena, em um vetor de números inteiros, valores coletados em posições simétricas
  de uma estrutura. Deseja-se verificar se, para cada par formado por elementos equidistantes das
  extremidades, a soma dos dois valores é sempre a mesma. Desenvolva uma solução recursiva que
  compare o primeiro elemento com o último, o segundo com o penúltimo e assim sucessivamente, até
  atingir o centro do vetor. O programa deverá retornar verdadeiro somente se todas as somas dos pares
  simétricos forem iguais entre si. Caso pelo menos um par apresente soma diferente, o resultado deverá
  ser falso.

  Por exemplo, no vetor:
  2 7 4 5 6 3
  os pares simétricos possuem somas 2 + 3 = 5, 7 + 6 = 13 e 4 + 5 = 9, portanto o vetor não atende à condição.
  
  Já no vetor:
  2 7 4 6 3 8
  os pares simétricos resultam em 10, 10 e 10, portanto a condição é satisfeita.
*/

bool somasSimetricasIguais(int v[], int inicio, int fim, int somaRef) {
  if (inicio >= fim) {
    return true;
  }

  if (v[inicio] + v[fim] != somaRef) {
    return false;
  }

  return somasSimetricasIguais(v, inicio + 1, fim - 1, somaRef);
}

int main() {
  int tamanho;

  cout << "Digite o tamanho do vetor: ";
  cin >> tamanho;

  int vetor[tamanho];

  cout << "INSERINDO VALORES: " << endl;
  for (int i = 0; i < tamanho; i++) {
    cout << "Posicao[" << i << "]: ";
    cin >> vetor[i];
  }

  if (tamanho < 2) {
    cout << "Verdadeiro" << endl;
  } else {
    int somaRef = vetor[0] + vetor[tamanho - 1];

    if (somasSimetricasIguais(vetor, 1, tamanho - 2, somaRef)) {
      cout << "Verdadeiro" << endl;
    } else {
      cout << "Falso" << endl;
    }
  }

  return 0;
}
