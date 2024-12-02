#include <stdio.h>

int main() {
    const int MAX_SIZE = 100;
    int array[MAX_SIZE];
    int currentLength;

    
    printf("Nhap vao so phan tu muon nhap (toi da 100): ");
    scanf("%d", &currentLength);

    
    if (currentLength > MAX_SIZE) {
        printf("So phan tu vuot qua gioi han cho phep!\n");
        return 1;
    }

    
    printf("Nhap cac phan tu cua mang: ");
    for (int i = 0; i < currentLength; i++) {
        scanf("%d", &array[i]);
    }

    
    int position;
    printf("Nhap vi tri can xoa (0 den %d): ", currentLength - 1);
    scanf("%d", &position);

    // Ki?m tra v? trí h?p l?
    if (position < 0 || position >= currentLength) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }

    
    for (int i = position; i < currentLength - 1; i++) {
        array[i] = array[i + 1];
    }
    currentLength--;

    
    printf("Mang sau khi xoa: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

