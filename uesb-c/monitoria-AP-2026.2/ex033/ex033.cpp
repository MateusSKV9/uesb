#include <iostream>
using namespace std; 

/*
  1. Desenvolva uma função que receba um vetor de números inteiros e seu tamanho e determine a maior
  diferença absoluta entre dois elementos consecutivos. O vetor deverá ser percorrido utilizando
  exclusivamente aritmética de ponteiros, sem utilizar a notação v[i] dentro da função. A função deverá
  retornar a maior diferença encontrada. Não utilize a função abs().
  Por exemplo, para o vetor:
  4 10 7 15 12
  as diferenças são 6, 3, 8 e 3, portanto a função deverá retornar 8.
*/

int calcMaiorDiferencaAbs(int *ptrVetor, int tamanho) {
  int diferencaFinalAbs = 0;

  for (int i = 0; i < tamanho - 1; i++) {
    int diferencaAtual = *(ptrVetor+i) - *(ptrVetor+i+1);
    int diferencaAtualAbs = diferencaAtual < 0 ? (-1)*diferencaAtual : diferencaAtual;

    if(diferencaAtualAbs > diferencaFinalAbs) diferencaFinalAbs = diferencaAtualAbs;
  }
  
  return diferencaFinalAbs;
}

// ———————————————————————————————————————————————

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

  int maiorDiferenca = calcMaiorDiferencaAbs(vetor, tamanho);

  cout << "A maior diferenca absoluta e: " << maiorDiferenca;

  return 0;
}
