#include <iostream>

int main() {
    int number;
    int i;
    int tich;
        
        printf("Bang cuu chuong cua chuong may ");
        scanf("%d", &number);
        
        for ( i = 1; i <= 10; i++) {
        	tich = number * i;
           printf("%d * %d = %d", number, i, tich);
        
    }

    return 0;
}


