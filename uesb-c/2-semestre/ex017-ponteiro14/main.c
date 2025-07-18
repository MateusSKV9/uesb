#include <stdio.h>

int main() {
    int i=34, j; int *p;
    p=&i;

    printf("i=%d\n", i);
    printf("&i=%p\n", &i);
    printf("j=%d\n", j);
    printf("&j=%p\n", &j);
    printf("p=%p\n", p);
    printf("*p=%d\n", *p);

    *p++;
    j=*p+33;

    printf("\n\ni=%d\n", i);
    printf("&i=%p\n", &i);
    printf("j=%d\n", j);
    printf("&j=%p\n", &j);
    printf("p=%p\n", p);
    printf("*p=%d\n", *p);

    return 0;
}