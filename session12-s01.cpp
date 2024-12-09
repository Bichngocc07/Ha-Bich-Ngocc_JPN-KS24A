#include <stdio.h>

double sum_two_numbers(double a, double b) {
    return a + b;
}

int main() {
    double num1, num2;

    printf("Nhap so thu nhat: ");
    scanf("%lf", &num1);

    printf("Nhap so thu hai: ");
    scanf("%lf", &num2);

    double result = sum_two_numbers(num1, num2);  

    printf("Tong cua hai so la: %.2lf\n", result);

    return 0;
}

