#include <stdio.h>
#include <ctype.h>

int main() {
    char string[100];

    printf("Nhap mot chuoi ky tu: ");
    fgets(string, sizeof(string), stdin);

    int letters = 0, digits = 0, specialChars = 0;

    for (int i = 0; string[i] != '\0'; i++) {
        if (isalpha(string[i])) {
            letters++;
        } else if (isdigit(string[i])) {
            digits++;
        } else if (!isspace(string[i]) && string[i] != '\n') {
            specialChars++;
        }
	}
    printf("So ky tu la chu cai: %d\n", letters);
    printf("So ky tu la chu so: %d\n", digits);
    printf("So ky tu dac biet: %d\n", specialChars);

    return 0;
}

