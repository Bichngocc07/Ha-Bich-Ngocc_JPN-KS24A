#include <stdio.h>
#include <string.h>

int main() {
    struct Dish {
        int id;
        char name[100];
        double price;
    };

    struct Dish menu[100];
    int soLuongHienTai = 6;

    menu[0] = (struct Dish){1, "Mi Sao Uop Trung Ca Tam", 56000000};
    menu[1] = (struct Dish){2, "Hot Vit Lon", 15000};
    menu[2] = (struct Dish){3, "Bo Kobe", 14950000};
    menu[3] = (struct Dish){4, "Ga Dong Tao", 120000000};
    menu[4] = (struct Dish){5, "Banh Rap Vang 24k", 150000000};
    menu[5] = (struct Dish){6, "Thit Nguoi Sao La lot", 300000000};

    int luaChon;

    do {
        printf("\n-----MENU-----\n");
        printf("1. In ra danh sach mon an trong menu\n");
        printf("2. Them mot mon an vao vi tri chi dinh\n");
        printf("3. Sua mon an o vi tri chi dinh\n");
        printf("4. Xoa mon an o vi tri chi dinh\n");
        printf("5. Sap xep menu theo gia\n");
        printf("6. Tim kiem mon an theo ten\n");
        printf("7. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                for (int i = 0; i < soLuongHienTai; i++) {
                    printf(" %d,  %s, Gia: %.2f\n", menu[i].id, menu[i].name, menu[i].price);
                }
                break;

            case 2: {
                int viTri;
                struct Dish dish;
                printf("Nhap vi tri can them: ");
                scanf("%d", &viTri);
                if (viTri < 0 || viTri > soLuongHienTai || soLuongHienTai >= 100) {
                    printf("Vi tri khong hop le .\n");
                    break;
                }
                printf("Nhap Ma: ");
                scanf("%d", &dish.id);
                printf("Nhap Ten: ");
                getchar();
                fgets(dish.name, sizeof(dish.name), stdin);
                dish.name[strcspn(dish.name, "\n")] = 0;
                printf("Nhap Gia: ");
                scanf("%lf", &dish.price);

                for (int i = soLuongHienTai; i > viTri; i--) {
                    menu[i] = menu[i - 1];
                }
                menu[viTri] = dish;
                soLuongHienTai++;
                break;
            }

            case 3: {
                int viTri;
                printf("Nhap vi tri can sua: ");
                scanf("%d", &viTri);
                if (viTri < 0 || viTri >= soLuongHienTai) {
                    printf("Vi tri khong hop le.\n");
                    break;
                }
                printf("Nhap Ma: ");
                scanf("%d", &menu[viTri].id);
                printf("Nhap Ten: ");
                getchar();
                fgets(menu[viTri].name, sizeof(menu[viTri].name), stdin);
                menu[viTri].name[strcspn(menu[viTri].name, "\n")] = 0;
                printf("Nhap Gia: ");
                scanf("%lf", &menu[viTri].price);
                break;
            }

            case 4: {
                int viTri;
                printf("Nhap vi tri can xoa: ");
                scanf("%d", &viTri);
                if (viTri < 0 || viTri >= soLuongHienTai) {
                    printf("Vi tri khong hop le.\n");
                    break;
                }
                for (int i = viTri; i < soLuongHienTai - 1; i++) {
                    menu[i] = menu[i + 1];
                }
                soLuongHienTai--;
                break;
            }

            case 5:
                for (int i = 0; i < soLuongHienTai - 1; i++) {
                    for (int j = i + 1; j < soLuongHienTai; j++) {
                        if (menu[i].price > menu[j].price) {
                            struct Dish temp = menu[i];
                            menu[i] = menu[j];
                            menu[j] = temp;
                        }
                    }
                }
                printf("Menu da duoc sap xep theo gia.\n");
                break;

            case 6: {
                char name[100];
                printf("Nhap ten mon an can tim: ");
                getchar();
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = 0;
                int found = 0;
                for (int i = 0; i < soLuongHienTai; i++) {
                    if (strcmp(menu[i].name, name) == 0) {
                        printf("Tim thay: Ma: %d, Ten: %s, Gia: %.2f\n", menu[i].id, menu[i].name, menu[i].price);
                        found = 1;
                    }
                }
                if (!found) {
                    printf("Khong tim thay mon an co ten %s.\n", name);
                }
                break;
            }

            case 7:
                printf("Thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le.\n");
        }
    } while (luaChon != 7);

    return 0;
}

