#include <stdio.h>

int swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}

int main() {
    int x = 10, y = 20;

    printf("Truoc khi hoan doi:\n");
    printf("x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("Sau khi hoan doi:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
