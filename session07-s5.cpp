#include <stdio.h>


int main() {
    
    int array[5] = {17, 7, 07, 27, 37};

    
    int max = array[0];
    int min = array[0];

    
    for (int i = 1; i < 5; i++) {
        if (array[i] > max) {
            max = array[i];
        }
        if (array[i] < min) {
            min = array[i];
        }
    }

    
    printf("Phan tu lon nhat trong mang la: %d\n");
    printf("Phan tu nho nhat trong mang la: %d\n");

    return 0;
}

