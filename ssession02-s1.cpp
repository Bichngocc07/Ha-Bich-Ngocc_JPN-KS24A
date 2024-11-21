#include <stdio.h>

int main() {
    // Kieu int: dung de luu tru so nguyen, chiem 4 byte tr�n hau het c�c he thong
    int age = 25; // So nguy�n duong

    // Kieu float: dung de luu tru so thuc, de chinh xac don
    float height = 1.75f; // Chieu cao tinh bang met

    // Kieu double: dung de luu tru so thuc voi do ch�nh xac kep
    double pi = 3.14159265359; // Gia tri gan dung cua so p

    // Ki?u char: d�ng d? luu tr? m?t k� t? ASCII
    char grade = 'A'; // �i?m s? du?i d?ng k� t?

    // Ki?u _Bool (ho?c bool t? thu vi?n <stdbool.h>): d�ng d? luu tr? gi� tr? boolean (true ho?c false)
    Bool isStudent = 1; // 1 bi?u th? true, 0 bi?u th? false

    // Ki?u unsigned int: d�ng d? luu tr? s? nguy�n kh�ng �m (c�ng k�ch thu?c v?i int)
    unsigned int population = 1000000; // D�n s?

    // Ki?u short: d�ng d? luu tr? s? nguy�n nh? hon int (thu?ng chi?m 2 byte)
    short smallNumber = 32000; // Gi� tr? g?n max c?a ki?u short

    // Ki?u long: d�ng d? luu tr? s? nguy�n l?n hon int (thu?ng chi?m 8 byte tr�n h? th?ng 64-bit)
    long bigNumber = 1234567890L; // M?t s? nguy�n l?n

    // Ki?u long long: d�ng d? luu tr? s? nguy�n r?t l?n (thu?ng chi?m �t nh?t 8 byte)
    long long veryBigNumber = 123456789012345LL; // M?t s? nguy�n r?t l?n

    // Ki?u unsigned long long: s? nguy�n kh�ng �m r?t l?n
    unsigned long long maxUnsigned = 18446744073709551615ULL; // Gi� tr? t?i da c?a ki?u n�y

    // Ki?u void*: con tr? kh�ng ki?u, c� th? tr? d?n b?t k? ki?u d? li?u n�o
    void *ptr = NULL; // Con tr? r?ng, chua tr? d?n d�u

    // In ra d? ki?m tra gi� tr?
    printf("Age: %d\n", age);
    printf("Height: %.2f meters\n", height);
    printf("Pi: %.11lf\n", pi);
    printf("Grade: %c\n", grade);
    printf("Is student: %d\n", isStudent);
    printf("Population: %u\n", population);
    printf("Small number: %d\n", smallNumber);
    printf("Big number: %ld\n", bigNumber);
    printf("Very big number: %lld\n", veryBigNumber);
    printf("Max unsigned long long: %llu\n", maxUnsigned);

    return 0;
}

