#include <stdio.h>
#include <math.h>
#include <stdbool.h> // Thêm thý vi?n ð? s? d?ng ki?u bool trong C

// Hàm ki?m tra s? nguyên t?
bool isPrime(int n) {
    if (n <= 1) return false; // S? nh? hõn ho?c b?ng 1 không ph?i s? nguyên t?
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false; // N?u n chia h?t cho i, không ph?i s? nguyên t?
    }
    return true; // N?u không chia h?t cho s? nào, là s? nguyên t?
}

int main() {
    int num1, num2;

    // Nh?p s? nguyên t? bàn phím
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &num2);

    // Ki?m tra s? th? nh?t
    if (isPrime(num1)) {
        printf("%d la so nguyen to.\n", num1);
    } else {
        printf("%d khong phai la so nguyen to.\n", num1);
    }

    // Ki?m tra s? th? hai
    if (isPrime(num2)) {
        printf("%d la so nguyen to.\n", num2);
    } else {
        printf("%d khong phai la so nguyen to.\n", num2);
    }

    return 0;
}

