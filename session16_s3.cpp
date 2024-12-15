#include <stdio.h>

void tinhTong(int a, int b, int* ketQua) {
    *ketQua = a + b;
}

int main() {
    int so1 = 10;
    int so2 = 20;
    int ketQua;

    tinhTong(so1, so2, &ketQua);

    printf("T?ng c?a %d và %d là: %d\n", so1, so2, ketQua);

    return 0;
}

