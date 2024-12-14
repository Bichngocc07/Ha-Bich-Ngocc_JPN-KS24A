#include <stdio.h>

int main() {
    int x = 42;
    int *ptr = &x;

    printf("Gia tri cua bien x (cach 1): %d\n", x);
    printf("Dia chi cua bien x (cach 1): %p\n", (void*)&x);

    printf("Gia tri cua bien x (cach 2): %d\n", *ptr);
    printf("Dia chi cua bien x (cach 2): %p\n", (void*)ptr);

    return 0;
}

