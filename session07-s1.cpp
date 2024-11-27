#include <iostream>

int main() {
    
    int array[] = {1, 2, 3, 4, 5};

    
    int length = sizeof(array) / sizeof(array[0]);

    
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < length; i++) {
        std::cout << array[i] << " ";
    
    }
    

    
    printf("Do dai cua mang la: ");

    return 0;
}


