#include <stdio.h>

int main() {
    char inputString[1000];
    FILE *file;

    printf("Nhap mot chuoi de ghi them vao file: ");
    fgets(inputString, sizeof(inputString), stdin);

    file = fopen("bt01.txt", "a");
    if (file == NULL) {
        printf("Khong the mo file de ghi.\n");
        return 1;
    }

    fprintf(file, "%s", inputString);

    fclose(file);

    printf("Da ghi chuoi vao file bt01.txt thanh cong.\n");

    return 0;
}

