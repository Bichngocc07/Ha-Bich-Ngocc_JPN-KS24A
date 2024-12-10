#include <cstdio>
#include <cmath>

const double EPSILON_0 = 8.854e-12; 

double tinhLucF(double b, double K, double V, double d) {
    return (EPSILON_0 * b * (K - 1) * V * V) / (2 * d);
}

int main() {
    double b, K, V, d;

    
    printf("Nhap gia tri b (m): ");
    if (scanf("%lf", &b) != 1 || b <= 0) {
        printf("Gia tri b khong hop le.\n");
        return 1;
    }

    printf("Nhap gia tri K (he so): ");
    if (scanf("%lf", &K) != 1 || K <= 1) {
        printf("Gia tri K phai lon hon 1.\n");
        return 1;
    }

    printf("Nhap gia tri V (dien the, V): ");
    if (scanf("%lf", &V) != 1 || V <= 0) {
        printf("Gia tri V khong hop le.\n");
        return 1;
    }

    printf("Nhap gia tri d (khoang cach, m): ");
    if (scanf("%lf", &d) != 1 || d <= 0) {
        printf("Gia tri d khong hop le.\n");
        return 1;
    }

    
    double F = tinhLucF(b, K, V, d);

    
    printf("Luc dien F = %.6e N\n", F);

    return 0;
}

