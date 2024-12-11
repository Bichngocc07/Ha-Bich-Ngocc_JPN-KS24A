#include <cstdio>
#include <cstring>

int main() {
    char str[100];
    printf("Nhap mot chuoi ky tu: ");
    fgets(str, sizeof(str), stdin);

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    int letter_count = 0;
    for (size_t i = 0; i < len; ++i) {
        if (isalpha(str[i])) {
            ++letter_count;
        }
    }

    printf("Chuoi ban da nhap la: %s\n", str);
    printf("So ky tu la chu cai trong chuoi la: %d\n", letter_count);

    return 0;
}

