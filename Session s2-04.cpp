#include<stdio.h>

int main(){
	// Khai bao va khoi tao hai gia tri ban dau
	int a = 20; // Gia tri dau tien
	int b = 5; // Gia tri thu hai
	
	// Khai bao them cac bien de luu ket qua 
	int hieu = a - b; // Hieu cua a va b
	int tich = a * b; // Tich cua a va b
	float thuong = (float)a / b; // Thuong cua a va b (ep kieu de co so thuc)
	
	// In ra ket qua 
	printf("Gia tri ban dau: a = %d, b = %d\n", a, b);
	printf("Hieu (a - b) = %d\n", hieu);
	printf("Tich (a * b) = %d\n", tich);
	printf("Thuong (a / b) = %.2f\n", thuong);
	
	return 0;
}
