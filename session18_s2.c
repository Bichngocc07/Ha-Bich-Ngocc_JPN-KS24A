#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student student;

    printf("Nhap thong tin sinh vien:\n");
    printf("Nhap ten: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = 0;

    printf("Nhap tuoi: ");
    scanf("%d", &student.age);

    printf("Nhap so dien thoai: ");
    scanf("%s", student.phoneNumber);

    printf("\nThong tin sinh vien:\n");
    printf("Ten: %s\n", student.name);
    printf("Tuoi: %d\n", student.age);
    printf("So dien thoai: %s\n", student.phoneNumber);

    return 0;
}

