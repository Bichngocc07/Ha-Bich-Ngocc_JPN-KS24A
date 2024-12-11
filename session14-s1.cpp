#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[100];
    printf("Nhap mot chuoi ki tu: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    printf("Chuoi ban da nhap la: %s\n", chuoi);
    printf("Do dai cua chuoi la: %d\n", strlen(chuoi));
    return 0;
}

