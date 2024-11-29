#include <stdio.h>

int main() {
    int sum;
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j != 1) {
                sum += matrix[i][j];
            }
        }
    }

    
    printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", sum);
    

    return 0;
}

