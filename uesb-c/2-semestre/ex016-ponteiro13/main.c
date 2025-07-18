#include <stdio.h>

int main() { 
    int a=10, *aPtr;
    aPtr = &a;
    *aPtr/=5;
    printf("aPtr=%d", *aPtr);
    printf("\na=%d", a);

    return 0;
}