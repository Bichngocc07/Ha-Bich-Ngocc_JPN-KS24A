#include <stdio.h>
#include <math.h>
#include <stdbool.h> // Th�m th� vi?n �? s? d?ng ki?u bool trong C

// H�m ki?m tra s? nguy�n t?
bool isPrime(int n) {
    if (n <= 1) return false; // S? nh? h�n ho?c b?ng 1 kh�ng ph?i s? nguy�n t?
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false; // N?u n chia h?t cho i, kh�ng ph?i s? nguy�n t?
    }
    return true; // N?u kh�ng chia h?t cho s? n�o, l� s? nguy�n t?
}

int main() {
    int num1, num2;

    // Nh?p s? nguy�n t? b�n ph�m
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

