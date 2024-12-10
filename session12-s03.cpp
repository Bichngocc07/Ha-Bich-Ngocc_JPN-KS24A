#include <stdio.h>

unsigned long long factorial(int n) {
    if (n < 0) {
        printf("Giai thua khong xac dinh cho so am.\n");
        return 0;
    }
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);

    unsigned long long result = factorial(num);
    if (num >= 0) {
        printf("Giai thua cua %d la %llu\n", num, result);
    }
    return 0;
}

