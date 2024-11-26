#include <stdio.h>

int main() {
    
    for (int i = 1; i <= 10; i++) {
    printf("Bang cuu chuong cua %d\n", i);
        for (int j = 1; j <= 10; j++) {
        	int k = i * j;
        	printf("%d * %d = %d\n ", i, j, k);
        	
    
        }
    
    }

    return 0;
}

