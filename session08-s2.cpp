#include <stdio.h>

int main() {
  
    int array[] = {10, 20, 30, 40, 50};
    int length = sizeof(array) / sizeof(array[0]);

    
    int element;
    printf("Nhap vao mot phan tu: ");
    scanf("%d", &element);


    bool found = false;
    for (int i = 0; i < length; i++) {
        if (array[i] == element) {
            printf("Vi tri phan tu trong mang la: ");
            found = true;
            break;
        }
    }

    
    if (!found) {
        printf("Phan tu khong ton tai trong mang.");
    }

    return 0;
}

