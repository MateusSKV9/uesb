#include <stdio.h>

int main() {    
    int i=7, j=5, c;
    int *p;
    int **q;
    p=&i;
    q=&p;
    c=**q+j;
    
    printf("c=%d", c);

    return 0;
}