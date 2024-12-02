#include <stdio.h>

void bubbleSort(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    const int Max = 100;
    int array[Max];
    int n;

    
    printf("Nhap vao so phan tu muon nhap (toi da 100): ");
    scanf("%d", &n);

    
    if (n > Max) {
        printf("So phan tu vuot qua gioi han cho phep!\n");
        return 1;
    }

    
    printf("Nhap cac phan tu cua mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    
    bubbleSort(array, n);


    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

