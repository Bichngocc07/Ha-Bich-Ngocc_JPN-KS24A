#include <stdio.h>
int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
int main() {
    int array[100], n = 0, choice, value, i, j, index, currentlength, max, min;
    int max = arr[i];
	int min = arr[i];
    while (1) {
    		printf("-----MENU\n-----");
    		printf("1. Nhap so phan tu va gia tri cho mang\n");
    		printf("2. In ra gia tri cac phan tu trong mang\n");
    		printf("3. Tim gia tri nho nhat va lon nhat trong mang\n");
    		printf("4. In ra tong cua tat ca cac phan tu\n");
    		printf("5. Them mot phan tu vao cuoi mang, phan tu moi them vao mang\n");
    		printf("6. Xoa phan tu tai mot vi tri cu the\n");
    		printf("7. Sap xep mang theo thu tu giam dan\n");
    		printf("8. Cho nguoi dung nhap vao mot phan tu, tim kiem xem phan tu do\n");
    		printf("9. In ra toan bo so nguyen to trong mang\n");
    		printf("10. Sap xep mang theo thu tu tang dan\n");
    		printf("11. Thoat\n");
    		printf("Lua chon cua ban: ");
			scanf("%d", &choice);
			switch (choice){
				case 1:
                printf("Nhap so phan tu can nhap: ");
                scanf("%d", &n);
                for (i = 0; i < n; i++) {
                    printf("Nhap gia tri cho phan tu thu %d: ", i + 1);
                    scanf("%d", &array[i]);
                }
                break;
                case 2:
                	printf("\n");
                for(int i = 0; i < currentlength; i++){
                	if (arr[i] > Max) { 
					max = arr[i]; }
					if (arr[i] < Min) {
					min = arr[i];
                        }
                        printf("Gia tri lon nhat la: %d\n", max);
                        printf("Gia tri nho nhat la: %d\n", min);
                        break;
                case 3:
    int arr[] = {1, 2, 3, 4, 5};
    int currentlength = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    int min = arr[0];
    printf("\n");
    for (int i = 0; i < currentlength; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Gia tri lon nhat la: %d\n", max);
    printf("Gia tri nho nhat la: %d\n", min);

    return 0;

            }
		}
		return 0;
}
