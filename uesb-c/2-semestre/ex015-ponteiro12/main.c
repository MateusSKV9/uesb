#include <stdio.h>

int main() {
    int a;
    int *aPtr;
    a = 7;
    aPtr = &a;
    
    printf("O endereco de a e %p\nO Valor de aPtr e %p\n\n", &a, aPtr);

    printf("O valor de a e %d\nO valor de *aPtr e %d\n\n", a, *aPtr);
    
    printf("Sabendo que * e & complementam-se mutuamente\n&*aPtr = %p\n *&aPtr = %p\n", &*aPtr, *&aPtr);

    return 0;
}