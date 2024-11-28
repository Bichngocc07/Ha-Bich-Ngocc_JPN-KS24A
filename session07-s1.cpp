#include <stdio.h>
int main(){

    int numer[] = {10, 20, 30, 40, 50};
    int n = sizeof(numer) / sizeof(numer[0]);
    printf("Cac phan tu co trong mang la:\n");
    for (int i = 0; i < n; i++){
        printf("%d\n", numer[i]);
    }
    printf("Do dai cua mang la: %d\n", n);
    return 0;
}
