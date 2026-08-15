#include <stdio.h>

void f(int *p, int v) {
    *p = *p + v;
}

int main() {
    int x = 10;
    f(&x, 5);
    f(&x, 3);
    printf("%d", x);
    return 0;
}