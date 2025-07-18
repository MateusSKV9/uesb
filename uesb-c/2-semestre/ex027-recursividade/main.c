#include <stdio.h>
int count = 0;

void func(int n) {
    count++;
    if(n<=0) return;
    func(n-1);
    func(n-1);
}

int main() {
    func(5);
    printf("%d", count);
}