#include <stdio.h>
#include <stdlib.h>

int main() {
    float *array = (float *)malloc(10 * sizeof(float));

    for(int i = 0; i<10; i++) {
        array[i] = i * 0.5;
    }

    printf("Enderecos de cada posicao: \n");
    for(int i = 0; i<10; i++) {
        printf("Pos[%d]: %p\n", i, &array[0+i]);
    }
}