#include <stdio.h>

int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int array[100], n = 0, choice;

    while (1) {
        printf("\n----- MENU -----\n");
        printf("1. Nhap so phan tu va gia tri cho mang\n");
        printf("2. In ra gia tri cac phan tu trong mang\n");
        printf("3. Tim gia tri nho nhat va lon nhat trong mang\n");
        printf("4. In ra tong cua tat ca cac phan tu\n");
        printf("5. Them mot phan tu vao cuoi mang\n");
        printf("6. Xoa phan tu tai mot vi tri cu the\n");
        printf("7. Sap xep mang theo thu tu giam dan\n");
        printf("8. Tim kiem phan tu trong mang\n");
        printf("9. In ra toan bo so nguyen to trong mang\n");
        printf("10. Sap xep mang theo thu tu tang dan\n");
        printf("11. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                printf("Nhap so phan tu can nhap: ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                    printf("Nhap gia tri cho phan tu thu %d: ", i + 1);
                    scanf("%d", &array[i]);
                }
                break;
            }
            case 2: {
                printf("Cac phan tu trong mang la: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", array[i]);
                }
                printf("\n");
                break;
            }
            case 3: {
                if (n == 0) {
                    printf("Mang rong.\n");
                } else {
                    int max = array[0], min = array[0];
                    for (int i = 1; i < n; i++) {
                        if (array[i] > max) max = array[i];
                        if (array[i] < min) min = array[i];
                    }
                    printf("Gia tri lon nhat la: %d\n", max);
                    printf("Gia tri nho nhat la: %d\n", min);
                }
                break;
            }
            case 4: {
                int sum = 0;
                for (int i = 0; i < n; i++) {
                    sum += array[i];
                }
                printf("Tong cac phan tu trong mang la: %d\n", sum);
                break;
            }
            case 5: {
                if (n < 100) {
                    int value;
                    printf("Nhap gia tri can them: ");
                    scanf("%d", &value);
                    array[n++] = value;
                } else {
                    printf("Mang da day.\n");
                }
                break;
            }
            case 6: {
                int pos;
                printf("Nhap vi tri can xoa (1 - %d): ", n);
                scanf("%d", &pos);
                if (pos < 1 || pos > n) {
                    printf("Vi tri khong hop le.\n");
                } else {
                    for (int i = pos - 1; i < n - 1; i++) {
                        array[i] = array[i + 1];
                    }
                    n--;
                }
                break;
            }
            
        }
    }
}
