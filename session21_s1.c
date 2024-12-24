#include <stdio.h>
#include <stdlib.h>

int main() {
    char inputString[1000];
    FILE *file;

    printf("Nhap mot chuoi bat ky: ");
    fgets(inputString, sizeof(inputString), stdin);

    file = fopen("bt01.txt", "w");
    if (file == NULL) {
        printf("Khong the mo file de ghi.\n");
        return 1;
    }

    fprintf(file, "%s", inputString);

    fclose(file);

    printf("Da ghi chuoi vao file bt01.txt thanh cong.\n");

    return 0;
}

