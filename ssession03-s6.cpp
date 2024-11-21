#include<stdio.h>
int main(){
	float canh, chieu_cao;
	
	printf("Nhap do dai canh cua tam giac: ");
	scanf("%f", &canh);
	
	printf("Nhap chieu cao cua tam giac: ");
	scanf("%f", &chieu_cao);
	
	float s = canh * chieu_cao / 2;
	printf("Dien tich tam giac: %.2f\n", s);
	return 0;
}























