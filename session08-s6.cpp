#include <stdio.h>

int main() {
    int sum;
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
	printf("Cac phan tu tren duong cheo chinh la: ");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == 2 - i) {
                sum += matrix[i][j];
            }
        }
    }
    
    printf("Tong cua cac phan tu tren duong cheo chinh la: %d", sum);

    return 0;
}

