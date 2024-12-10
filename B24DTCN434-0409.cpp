#include <stdio.h>
#include <cmath>

double tinhTongHop(double A1, double A2, double theta) {
    
    double thetaRad = theta * M_PI / 180.0;
    
    return std::sqrt(A1 * A1 + A2 * A2 + 2 * A1 * A2 * std::cos(thetaRad));
}

int main() {
    double A1, A2, theta;


    printf("Nhap do lon cua vector A1: ");
    scanf("%lf", &A1);

    printf("Nhap do lon cua vector A2: ");
    scanf("%lf", &A2);

    printf("Nhap goc giua hai vector (theta) theo do: ");
    scanf("%lf", &theta);


    double A = tinhTongHop(A1, A2, theta);


    printf("Tong hop vector A = %.2f\n", A);

    return 0;
}

