#include <stdio.h>
#include <ctype.h>

int main() {
    // Khai báo và gán giá trị cho chuỗi
    char string[] = "Hello my gmail is test123@gmail.com";

    int letters = 0, digits = 0, specialChars = 0;

    // Duyệt qua từng ký tự trong chuỗi
    for (int i = 0; string[i] != '\0'; i++) {
        if (isalpha(string[i])) { // Kiểm tra nếu là chữ cái
            letters++;
        } else if (isdigit(string[i])) { // Kiểm tra nếu là chữ số
            digits++;
        } else if (!isspace(string[i])) { // Ký tự đặc biệt (không phải khoảng trắng)
            specialChars++;
        }
    }

    // In kết quả
    printf("So ky tu la chu cai: %d\n", letters);
    printf("So ky tu la chu so: %d\n", digits);
    printf("So ky tu dac biet: %d\n", specialChars);

    return 0;
}

