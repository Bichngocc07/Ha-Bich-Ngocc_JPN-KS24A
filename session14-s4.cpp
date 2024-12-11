#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Xin chao?";
    char ch;
    printf("Nhap vao mot ky tu bat ky: ");
    scanf("%c", &ch);
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    printf("Ky tu '%c' xuat hien %d lon trong chuoi.\n", ch, count);
    return 0;
}

