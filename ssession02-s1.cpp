#include <stdio.h>

int main() {
    // Kieu int: dung de luu tru so nguyen, chiem 4 byte trên hau het các he thong
    int age = 25; // So nguyên duong

    // Kieu float: dung de luu tru so thuc, de chinh xac don
    float height = 1.75f; // Chieu cao tinh bang met

    // Kieu double: dung de luu tru so thuc voi do chính xac kep
    double pi = 3.14159265359; // Gia tri gan dung cua so p

    // Ki?u char: dùng d? luu tr? m?t ký t? ASCII
    char grade = 'A'; // Ði?m s? du?i d?ng ký t?

    // Ki?u _Bool (ho?c bool t? thu vi?n <stdbool.h>): dùng d? luu tr? giá tr? boolean (true ho?c false)
    Bool isStudent = 1; // 1 bi?u th? true, 0 bi?u th? false

    // Ki?u unsigned int: dùng d? luu tr? s? nguyên không âm (cùng kích thu?c v?i int)
    unsigned int population = 1000000; // Dân s?

    // Ki?u short: dùng d? luu tr? s? nguyên nh? hon int (thu?ng chi?m 2 byte)
    short smallNumber = 32000; // Giá tr? g?n max c?a ki?u short

    // Ki?u long: dùng d? luu tr? s? nguyên l?n hon int (thu?ng chi?m 8 byte trên h? th?ng 64-bit)
    long bigNumber = 1234567890L; // M?t s? nguyên l?n

    // Ki?u long long: dùng d? luu tr? s? nguyên r?t l?n (thu?ng chi?m ít nh?t 8 byte)
    long long veryBigNumber = 123456789012345LL; // M?t s? nguyên r?t l?n

    // Ki?u unsigned long long: s? nguyên không âm r?t l?n
    unsigned long long maxUnsigned = 18446744073709551615ULL; // Giá tr? t?i da c?a ki?u này

    // Ki?u void*: con tr? không ki?u, có th? tr? d?n b?t k? ki?u d? li?u nào
    void *ptr = NULL; // Con tr? r?ng, chua tr? d?n dâu

    // In ra d? ki?m tra giá tr?
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

