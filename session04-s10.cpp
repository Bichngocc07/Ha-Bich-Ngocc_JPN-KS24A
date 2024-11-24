#include <stdio.h>

int main() {
    int a, b, c;

    
    printf("Nhap vao so nguyen thu nhat: ");
    scanf("%d", &a);
    
    printf("Nhap vao so nguyen thu hai: ");
    scanf("%d", &b);
    
    printf("Nhap vao so nguyen thu ba: ");
    scanf("%d", &c);
    int index;
if (a > b){
	index - a;
    a - b;
    b -a;
}

if (a > c){
	index - a;
	a - b;
	b - a;
}
if (b > c){
	index - b;
	    a - b;
	    b - a;
}
    
    printf("Thu tu tu nho den lon %d, %d, %d, %d\n", a, b, c);

    return 0;
}

