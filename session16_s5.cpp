#include <cstdio>

void capNhatPhanTu(int* arr, int size, int viTri, int giaTriMoi) {
    if (viTri >= 0 && viTri < size) {
        arr[viTri] = giaTriMoi;
    } else {
        printf("Vi tri khong hop le!\n");
    }
}

void inMang(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Mang ban dau: ");
    inMang(arr, size);

    int viTri = 2;
    int giaTriMoi = 10;

    capNhatPhanTu(arr, size, viTri, giaTriMoi);

    printf("Mang sau khi cap nhat: ");
    inMang(arr, size);

    return 0;
}

