#include <stdio.h>

int main() {
    const int MAX_SIZE = 100;
    int array[MAX_SIZE];
    int n;

    
    printf("Nhap vao so phan tu muon nhap (toi da 100): ");
    scanf("%d", &n);

    
    if (n > MAX_SIZE) {
        printf("So phan tu vuot qua gioi han cho phep!\n");
        return 1;
    }

    
    printf("Nhap cac phan tu cua mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    
    int position, newValue;
    printf("Nhap vi tri can sua (0 den %d): ", n - 1);
    scanf("%d", &position);
    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);

    
    if (position < 0 || position >= n) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }

    
    array[position] = newValue;

    
    printf("Mang sau khi sua: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

