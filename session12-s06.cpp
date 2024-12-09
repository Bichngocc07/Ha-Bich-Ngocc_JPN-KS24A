#include <stdio.h>

bool is_perfect_number(int n) {
    if (n <= 1) return false;

    int sum = 0;
    for (int i = 1; i <= n / 2; ++i) {
        if (n % i == 0) {
            sum += i;
        }
    }

    return sum == n;
}

int main() {
    int num1, num2;

    // Yêu c?u ngý?i dùng nh?p hai s? nguyên
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &num2);

    if (num1 <= 0) {
        printf("Vui long nhap so nguyen duong cho so thu nhat!\n");
    } else {
        if (is_perfect_number(num1)) {
            printf("%d la so hoan hao.\n", num1);
        } else {
            printf("%d khong phai la so hoan hao.\n", num1);
        }
    }

    if (num2 <= 0) {
        printf("Vui long nhap so nguyen duong cho so thu hai!\n");
    } else {
        if (is_perfect_number(num2)) {
            printf("%d la so hoan hao.\n", num2);
        } else {
            printf("%d khong phai la so hoan hao.\n", num2);
        }
    }

    return 0;
}

