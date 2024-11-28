#include <stdio.h>

int main() {
    int n;

    printf("Moi ban nhap vao do dai cua mang: ");
    scanf("%d", &n);

    int array[n];

    for(int i = 0; i < n; i++) {
        printf("Moi ban nhap vao phan tu array[%d]: ",i);
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < n; i++) {
        printf("Array[%d] = %d\n",i, array[i]);
    }
    

    

    return 0;
}
