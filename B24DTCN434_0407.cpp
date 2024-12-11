#include <stdio.h>
#include <cmath>

double tinhDoLonHopLuc(double A1, double A2, double gocDo) {
    double gocRadian = gocDo * M_PI / 180.0;
    double hopLuc = sqrt(A1 * A1 + A2 * A2 + 2 * A1 * A2 * cos(gocRadian));
    return hopLuc;
}

int main() {
    double A1 = 5;
    double A2 = 7;
    double gocDo = 30;

    
    double ketQua = tinhDoLonHopLuc(A1, A2, gocDo);

    
    printf("Do lon vector tong hop la: %.2f\n", ketQua);

    return 0;
}

