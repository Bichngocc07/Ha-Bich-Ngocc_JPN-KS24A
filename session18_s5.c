#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student students[50] = {
        {1, "Ha Bich Ngoc", 18, "0123456789"},
        {2, "Pham Thuy Linh", 18, "0987654321"},
        {3, "Ha Thu Huong", 18, "0345678901"},
        {4, "Ngo Tu Van", 18, "0765432198"},
        {5, "Tran Quoc Thinh", 18, "0654321987"}
    };

    int id;
    printf("Nhap ID sinh vien can chinh sua: ");
    scanf("%d", &id);

    int found = 0;
    for (int i = 0; i < 5; i++) {
        if (students[i].id == id) {
            found = 1;

            printf("\nSinh vien duoc tim thay:\n");
            printf("ID: %d\n", students[i].id);
            printf("Ten: %s\n", students[i].name);
            printf("Tuoi: %d\n", students[i].age);
            printf("So dien thoai: %s\n", students[i].phoneNumber);

            printf("\nNhap ten moi: ");
            getchar();
            fgets(students[i].name, sizeof(students[i].name), stdin);
            students[i].name[strcspn(students[i].name, "\n")] = 0;

            printf("Nhap tuoi moi: ");
            scanf("%d", &students[i].age);

            printf("\nThong tin sinh vien da duoc cap nhat thanh cong!\n");
            break;
        }
    }

    if (!found) {
        printf("\nKhong tim thay sinh vien voi ID %d.\n", id);
    }

    printf("\nDanh sach thong tin sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nSinh vien thu %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phoneNumber);
    }

    return 0;
}

