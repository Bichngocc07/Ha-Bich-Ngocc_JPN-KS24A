#include<stdio.h>

int main() {
	int number;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &number);


    if (number % 2 == 0) {
   printf("So ban nhap là so chan.\n");
    } else {
        printf("So ban nhap là so le.\n");
    }
    
    return 0;
}

