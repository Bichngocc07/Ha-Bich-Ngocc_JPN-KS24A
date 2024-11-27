#include <iostream>

int main() {
    int array[5];

    
    printf("Nhap vao 5 so nguyen: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }

    
    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < 5; i++) {
        printf("phan tu thu %d : %d\n",i+1,array[i]);
    }
    

    return 0;
}

