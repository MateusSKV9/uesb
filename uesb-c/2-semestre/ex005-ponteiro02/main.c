#include <stdio.h>

int *duplica(int v) {
    int r = v*2;
    return &r;
}

int main() {
    int var = 50;
    int *res = duplica(var);
    printf("%d", *res);

    return 0;
}