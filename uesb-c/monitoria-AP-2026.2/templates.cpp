#include <iostream>
using namespace std; 


// —————————————————————— ARRAYS 

int main() {
  int tamanho = 6;

  int vetor[tamanho];

  cout << "INSERINDO VALORES: " << endl;
  for (int i = 0; i < tamanho; i++) {
    cout << "Posicao[" << i << "]: ";
    cin >> vetor[i];
  }

  cout << "\n-----------------" << endl;

  return 0;
}

// —————————————————————— MATRIZES

int main() {
  int linhas = 4;
  int colunas = 5;

  int matriz[linhas][colunas];

  cout << "INSERINDO VALORES: " << endl;
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      cout << "Posicao[" << i << "][" << j << "]: ";
      cin >> matriz[i][j];
    }
  }

  cout << "------------------------" << endl;

  int *ptrMatriz = &matriz[0][0];
  int linhaSelecionada;
  cout << "Digite o indice de uma linha: ";
  cin >> linhaSelecionada;

  cout << "\n------------------------" << endl;

  cout << "EXIBICAO: " << endl;
  for (int i = 0; i < (linhas * colunas); i++) {
    if(i % colunas == 0 ) cout << endl;
    cout << *(ptrMatriz+i) << " ";    
  }

  cout << "\n------------------------" << endl;

  return 0;
}

void soma(int *ptr, int linha, int coluna, int *lin, int *maiorSoma){
	int i = 0;
	int j = 0;
	int soma = 0;
	
	for(i; i < linha; i++){
		for(j  = 0; j < coluna; j++)
		{
			soma += *(ptr + i * coluna + j);
			printf("\n%d", j);
		}
		if(*maiorSoma < soma) {
			*lin = i;
			*maiorSoma = soma;
		}
        soma = 0;
	}
}