#include <stdio.h>
int main(){   
    int arr[5];
    printf("Moi ban nhap vao 5 phan tu cho mang:\n");
    for (int i = 0; i < 5; i++){
        printf("Hay nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n Mang ma ban vua nhap la:\n");
    for (int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}

