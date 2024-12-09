#include <stdio.h>
#include <math.h> // Thý vi?n ð? s? d?ng log2

// Hàm tính Entropy
double calculateEntropy(double p) {
    if (p == 0 || p == 1) {
        return 0.0; // Entropy b?ng 0 khi p = 0 ho?c p = 1
    }
    return -p * log2(p) - (1 - p) * log2(1 - p);
}

int main() {
    double p;

    // Nh?p xác su?t t? ngý?i dùng
    printf("Nhap xac suat p (0 <= p <= 1): ");
    if (scanf("%lf", &p) != 1) { // Ki?m tra ð?u vào
        printf("Loi: Vui long nhap mot so thuc.\n");
        return 1;
    }

    // Ki?m tra tính h?p l? c?a xác su?t
    if (p < 0 || p > 1) {
        printf("Xac suat khong hop le! Vui long nhap gia tri trong khoang [0, 1].\n");
        return 1;
    }

    // Tính Entropy và hi?n th? k?t qu?
    double entropy = calculateEntropy(p);
    printf("Entropy H(X) = %lf\n", entropy);

    return 0;
}
 
