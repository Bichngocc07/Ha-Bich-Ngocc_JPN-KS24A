#include <stdio.h>
int main(){

    int arr[5] = {10, 15, 20, 25, 30};
    int sochan = 0;
    printf("Cac so chan ơ trong mang la:\n");
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            sochan = 1;
        }
    }
    if (!sochan) {
        printf("\n Mang khong co so chan nao.");
    }
    return 0;
}
