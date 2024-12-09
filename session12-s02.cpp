#include <stdio.h>

void print_array(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {3, 5, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Cac phan tu trong mang la: ");
    print_array(arr, size);

    return 0;
}


