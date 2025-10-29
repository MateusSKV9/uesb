#include <iostream>
#include <cstring> // para strcmp

using namespace std;

int main() {
    // Vetor de nomes
    char nome1[] = "Pedro";
    char nome2[] = "Ana";
    char nome3[] = "Carlos";
    char nome4[] = "Beatriz";
    char nome5[] = "Joao";

    // Vetor de ponteiros para cada nome
    char *nomes[] = {nome1, nome2, nome3, nome4, nome5};

    // Ponteiro de ponteiro apontando para o primeiro elemento
    char **p = nomes;

    int tamanho = 5;

    // Ordenação (bubble sort usando apenas ponteiros)
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (strcmp(*(p + i), *(p + j)) > 0) {
                // troca de ponteiros
                char *temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }

    // Impressão do resultado
    cout << "Nomes em ordem alfabetica:\n";
    for (int i = 0; i < tamanho; i++) {
        cout << *(p + i) << endl;
    }

    return 0;
}
