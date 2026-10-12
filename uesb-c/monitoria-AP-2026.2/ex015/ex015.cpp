#include <iostream>
using namespace std; 

/*
  3. Um laboratório registrou, em um vetor de números inteiros, uma sequência de medições realizadas em
  intervalos regulares. Considere que uma medição é considerada estável em relação à anterior quando a
  diferença absoluta entre os dois valores consecutivos é menor ou igual a 3. Desenvolva uma solução
  recursiva que percorra o vetor e determine quantos pares de medições consecutivas atendem a essa
  condição. A solução não deverá utilizar estruturas de repetição dentro da função recursiva nem funções
  prontas para cálculo de valor absoluto. Ao final, o programa deverá informar a quantidade de pares
  estáveis encontrados na sequência.
  Exemplo:

  Medições: 10 12 17 15 14 20
  As diferenças entre elementos consecutivos são 2, 5, 2, 1 e 6. Portanto, existem 3 pares considerados
  estáveis.
*/

int contarEstaveis(int v[], int n, int pos) {
  if (pos == n - 1) {
    return 0;
  }

  int diferenca = v[pos] - v[pos + 1];

  if (diferenca < 0) {
    diferenca = diferenca * (-1);
  }

  int count = 0;
  if (diferenca <= 3) {
    count = 1;
  }

  return count + contarEstaveis(v, n, pos + 1);
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

  int qtdEstaveis = contarEstaveis(vetor, tamanho, 0);
  cout << "Quantidade de pares estaveis: " << qtdEstaveis << endl;

  return 0;
}
