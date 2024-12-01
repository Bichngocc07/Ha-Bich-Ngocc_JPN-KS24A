#include <stdio.h>

int main() {
    int MAX = 100;
    int array[MAX];
    int n;
	
	printf("Nhap vao so phan tu muon nhap (toi da 100): ");
    scanf("%d", &n);

    if (n > MAX) {
        printf("So phan tu vuot qua gioi han cho phep!\n");
        return 1;
    }

    printf("Nhap cac phan tu cua mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int position;
    printf("Nhap vi tri can xoa (0 den %d): ", n - 1);
    scanf("%d", &position);

    if (position < 0 || position >= n) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }

    for (int i = position; i < n - 1; i++) {
        array[i] = array[i + 1];
    }
    n--;

    printf("Mang sau khi xoa: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

