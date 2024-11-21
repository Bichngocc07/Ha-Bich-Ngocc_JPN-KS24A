#include <stdio.h>

int main(){
    float toan;
    printf("Nhap diem Toan: ", toan);
    scanf("%f", &toan);
    
    float van;
    printf("Nhap diem Van: ", van);
    scanf("%f", &van);
    
    float anh;
    printf("Nhap diam Anh: ", anh);
    scanf("%f", &anh);
    
    float Tong = toan + van + anh; 
    float trung_binh = Tong / 3;
    
    printf("Tong diem: %.2f\n", Tong);
    printf("Diem trung binh: %.2f\n", trung_binh);
    
    
    return 0;
}
