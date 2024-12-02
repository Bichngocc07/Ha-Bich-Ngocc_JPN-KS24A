#include <stdio.h>

int main() {
    int Max = 100;
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

    
    int value;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &value);

    
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] == value) {
            printf("Phan tu %d ton tai o vi tri %d\n", value, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Phan tu %d khong ton tai trong mang\n", value);
    }

    return 0;
}

