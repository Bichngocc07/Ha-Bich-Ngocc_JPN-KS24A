#include <stdio.h>
#include <math.h>

double calculateEntropy(double p) {
    if (p == 0 || p == 1) {
        return 0.0;
    }
    return -p * log2(p) - (1 - p) * log2(1 - p);
}

int main() {
    double p;

    printf("Nhap xac suat p (0 <= p <= 1): ");
    if (scanf("%lf", &p) != 1) {
        printf("Loi: Vui long nhap mot so thuc.\n");
        return 1;
    }

    if (p < 0 || p > 1) {
        printf("Xac suat khong hop le! Vui long nhap gia tri trong khoang [0, 1].\n");
        return 1;
    }
    
    double entropy = calculateEntropy(p);
    printf("Entropy H(X) = %lf\n", entropy);

    return 0;
}
 
