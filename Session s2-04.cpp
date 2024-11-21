#include<stdio.h>

int main(){
	
	int a = 20;
	int b = 5;
	
	
	int hieu = a - b;
	int tich = a * b;
	float thuong = (float)a / b;
	
	
	printf("Gia tri ban dau: a = %d, b = %d\n", a, b);
	printf("Hieu (a - b) = %d\n", hieu);
	printf("Tich (a * b) = %d\n", tich);
	printf("Thuong (a / b) = %.2f\n", thuong);
	
	return 0;
}
