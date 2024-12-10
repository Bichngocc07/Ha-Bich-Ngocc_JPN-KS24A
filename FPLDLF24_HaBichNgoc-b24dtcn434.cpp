#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <math.h>
#include <string.h>

void lietKeKieuDuLieu() {
    printf("Kieu du lieu int:\n");
    printf("Do rong bieu dien: %lu bytes\n", sizeof(int));
    printf("Gia tri nho nhat: %d\n", INT_MIN);
    printf("Gia tri lon nhat: %d\n", INT_MAX);

    printf("\nKieu du lieu float:\n");
    printf("Do rong bieu dien: %lu bytes\n", sizeof(float));
    printf("Gia tri nho nhat: %e\n", FLT_MIN);
    printf("Gia tri lon nhat: %e\n", FLT_MAX);

    printf("\nKieu do lieu double:\n");
    printf("Do rong bieu dien: %lu bytes\n", sizeof(double));
    printf("Gia tri nho nhat: %e\n", DBL_MIN);
    printf("Gia tri lon nhat: %e\n", DBL_MAX);

    printf("\nKieu du lieu char:\n");
    printf("Do rong bieu dien: %lu bytes\n", sizeof(char));
    printf("Gia tri nho nhat: %d\n", CHAR_MIN);
    printf("Gia tri lon nhat: %d\n", CHAR_MAX);
}

void khaiBaoMaTheSinhVien() {
    unsigned char maTheSinhVien;
    printf("Khai bao bien ma the sinh vien thanh cong.\n");
}

void soSanhVaKQ() {
    int x = 2;
    printf("Ket qua cua (x): %d\n", x);
    int y = 2;
    printf("Ket qua cua (y+4): %d\n", y + 4);
}

void tinhToanBieuThuc() {
    double u, theta;
    printf("Nhap gia tri u: ");
    scanf("%lf", &u);
    printf("Nhap gia tri theta (ð?): ");
    scanf("%lf", &theta);

    theta = theta * M_PI / 180.0;

    double result = u * u * sin(theta) / 9.81;
    printf("Ket qua: %f\n", result);
}

double dienTichHinhThang(double day1, double day2, double cao) {
    return (day1 + day2) * cao / 2.0;
}

double dienTichXungQuanhHinhTru(double duongKinh, double cao) {
    double banKinh = duongKinh / 2.0;
    return 2 * M_PI * banKinh * cao;
}

int tinhTongDuong(int arr[], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            tong += arr[i];
        }
    }
    return tong;
}

struct SinhVien {
    char ten[50];
    int tuoi;
    float diem;
};

void sapXepSinhVien(struct SinhVien sv[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(sv[i].ten, sv[j].ten) > 0) {
                struct SinhVien temp = sv[i];
                sv[i] = sv[j];
                sv[j] = temp;
            }
        }
    }
}

void tinhTongFile() {
    FILE *file = fopen("tst1001.fpl", "rb");
    if (file == NULL) {
        printf("Khong the mo file.\n");
        return;
    }

    int N;
    if (fread(&N, sizeof(int), 1, file) != 1) {
        printf("Loi doc so luong phan tu.\n");
        fclose(file);
        return;
    }

    int sum = 0;
    int num;
    for (int i = 0; i < N; i++) {
        if (fread(&num, sizeof(int), 1, file) != 1) {
            printf("Loi doc du lieu tu file.\n");
            fclose(file);
            return;
        }
        sum += num;
    }

    printf("Tong cua N so nguyen: %d\n", sum);

    fclose(file);
}

int main() {
    lietKeKieuDuLieu();
    printf("\n");

    khaiBaoMaTheSinhVien();
    printf("\n");

    soSanhVaKQ();
    printf("\n");

    tinhToanBieuThuc();
    printf("\n");

    double day1 = 5.0, day2 = 7.0, cao = 4.0;
    printf("Dien tich hinh thang: %f\n", dienTichHinhThang(day1, day2, cao));
    printf("\n");

    double duongKinh = 3.0, chieuCao = 5.0;
    printf("Dien tich xung quanh hinh tru: %f\n", dienTichXungQuanhHinhTru(duongKinh, chieuCao));
    printf("\n");

    int arr[] = {1, -2, 3, -4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Tong cac so duong: %d\n", tinhTongDuong(arr, n));
    printf("\n");

    struct SinhVien sv[2] = {
        {" Nguyen Ngoc ", 20, 8.5},
        {" Tran Linh ", 22, 9.0}
    };
    sapXepSinhVien(sv, 2);
    printf("Danh sach sinh vien sau khi sep xap:\n");
    for (int i = 0; i < 2; i++) {
        printf("Ten: %s, Tuoi: %d, Ðiem: %.2f\n", sv[i].ten, sv[i].tuoi, sv[i].diem);
    }
    printf("\n");

    tinhTongFile();
    printf("\n");

    return 0;
}

