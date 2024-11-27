#include <stdio.h>

int main() {
    
    int array[5] = {17, 07, 7, 01, 1};
	int chan=0;

    
    printf("Cac so chan trong mang la: ");
    for (int i = 0; i < 5; i++) {
        if (array[i] % 2 == 0) {
            printf("%d", &array[i]);
            chan =1;
        }
    }
    
    if (!chan) {
        printf("Mang khong chua so chan: ");
    }

    printf("\n");

    return 0;
}

