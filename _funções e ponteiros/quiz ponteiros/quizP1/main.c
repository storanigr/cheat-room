#include <stdio.h>

void f(int *p) {
    *p = *p * 2;
}

int main() {
    int x = 7;
    f(&x);
    printf("%d\n", x);
    return 0;
}
