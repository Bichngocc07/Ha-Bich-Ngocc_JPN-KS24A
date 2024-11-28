#include <stdio.h>

int main() {
    
    int array[5] = {10, 20, 30, 40, 50};

    printf("Cac phan tu trong mang tu cuoi ve dau la:\n");
    for (int i = 4 ; i >= 0; i--) {
        printf("%d\n", array[i]);
    }

    return 0;
}

