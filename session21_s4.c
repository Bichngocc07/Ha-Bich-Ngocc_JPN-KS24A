#include <stdio.h>

int main() {
    FILE *file;
    char firstLine[1000];

    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file de doc.\n");
        return 1;
    }

    if (fgets(firstLine, sizeof(firstLine), file) != NULL) {
        printf("Dong dau tien trong file: %s", firstLine);
    } else {
        printf("File rong hoac khong co noi dung.\n");
    }

    fclose(file);

    return 0;
}

