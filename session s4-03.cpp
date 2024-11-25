#include <stdio.h>
int main() {
    int number;

    
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &number);

    
    if (number % 3 == 0 && number % 5 == 0) {
    printf(" chia het cho cho 3 và 5.");
    } else if (number % 3 == 0) {
    printf(" chia het cho 3.");
    } else if (number % 5 == 0) {
    printf(" chia het cho 5.");
    } else {
    printf(" khong chia het cho 3 hoac 5.");
    }

    return 0;
}

