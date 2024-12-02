#include <stdio.h>

void insertionSort(int array[], int n) {
    for (int i = 1; i < n; i++) {
        int key = array[i];
        int j = i - 1;
        
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
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

    
    insertionSort(array, n);

    
    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

