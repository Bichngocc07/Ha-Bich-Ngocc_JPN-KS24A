#include <stdio.h>

void selectionSort(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        
        int temp = array[minIndex];
        array[minIndex] = array[i];
        array[i] = temp;
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

    
    selectionSort(array, n);

    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

