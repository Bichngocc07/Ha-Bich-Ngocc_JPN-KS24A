#include <stdio.h>
#include <ctype.h>
#include <string.h>

void vietHoaChuCaiDau(char *str) {
    int len = strlen(str);

    if (len > 0 && isalpha(str[0])) {
        str[0] = toupper(str[0]);
    }

    for (int i = 1; i < len; i++) {
        if (isspace(str[i - 1]) && isalpha(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
}

int main() {
    char string[100];

    printf("Nhap mot chuoi: ");
    fgets(string, sizeof(string), stdin);
    
    string[strcspn(string, "\n")] = '\0';

    vietHoaChuCaiDau(string);

    printf("Chuoi sau khi viet hoa: %s\n", string);

    return 0;
}

